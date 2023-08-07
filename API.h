#pragma once
#include <vcclr.h>
#include <msclr/marshal_cppstd.h>
#include <iostream>


using namespace System;
using namespace System::IO;
using namespace System::Net;
using namespace System::Text;
using namespace System::Collections::Generic;
using namespace System::Web::Script::Serialization; // No need to include .dll file directly

namespace API {
    // Function to convert JSON response to a Dictionary<String^, Object^>
    Dictionary<String^, Object^>^ ConvertJsonToDictionary(String^ jsonString) {
        JavaScriptSerializer^ serializer = gcnew JavaScriptSerializer();
        return static_cast<Dictionary<String^, Object^>^>(serializer->DeserializeObject(jsonString));
    }

    Dictionary<String^, Object^>^ MakeHttpRequest(String^ url, String^ contentType) {
        try {
            // Create the HttpWebRequest object
            HttpWebRequest^ request = static_cast<HttpWebRequest^>(WebRequest::Create(url));
            request->Method = "GET";

            // Set request headers
            if (!String::IsNullOrEmpty(contentType)) {
                request->ContentType = contentType;
            }

            // Get the response from the server
            HttpWebResponse^ response = static_cast<HttpWebResponse^>(request->GetResponse());
            Stream^ receiveStream = response->GetResponseStream();
            StreamReader^ readStream = gcnew StreamReader(receiveStream, Encoding::UTF8);
            String^ result = readStream->ReadToEnd();

            // Clean up resources
            response->Close();
            readStream->Close();
            auto JSON = API::ConvertJsonToDictionary(result);
            return JSON;
        }
        catch (WebException^ ex) {
            // Handle any exceptions that may occur during the request
            if (ex->Response != nullptr) {
                HttpWebResponse^ errorResponse = static_cast<HttpWebResponse^>(ex->Response);
                String^ errorMessage = String::Format("HTTP Error: {0} - {1}",
                    errorResponse->StatusCode, errorResponse->StatusDescription);
                throw gcnew Exception(errorMessage);
            }
            else {
                throw gcnew Exception(ex->Message);
            }
        }
        catch (Exception^ ex) {
            // Handle any other exceptions that may occur
            throw gcnew Exception(ex->Message);
        }
    }
    
};

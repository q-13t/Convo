#include "MainForm.h"

using namespace System;
using namespace System::Windows::Forms;

void main() {
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    Convo::MainForm mainForm;
    Application::Run(% mainForm);
}
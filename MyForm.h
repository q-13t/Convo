#pragma once
#include "MainForm.h"

namespace Convo {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ToolStrip^ menu_top;
	private: System::Windows::Forms::ToolStripButton^ button_controll_left_menu;
	protected:

	protected:

	protected:


	private: System::Windows::Forms::ToolStrip^ menu_left;
	private: System::Windows::Forms::ToolStripButton^ button_basic;
	private: System::Windows::Forms::ToolStripButton^ button_Lenght;






	private: System::Windows::Forms::Panel^ panel_conversion;
	private: System::Windows::Forms::Label^ label_conversion;






	private: System::Windows::Forms::Panel^ panel_basic;
	private: System::Windows::Forms::Label^ label_basic;
	private: System::Windows::Forms::ToolStripButton^ button_Speed;




	private: System::Windows::Forms::ToolStripButton^ button_Weight;
	private: System::Windows::Forms::ToolStripButton^ button_Temperature;
	private: System::Windows::Forms::ToolStripButton^ button_Area;












	protected:

	protected:


















	private: System::ComponentModel::IContainer^ components;


#pragma region Windows Form Designer generated code
		   /// <summary>
		   /// Required method for Designer support - do not modify
		   /// the contents of this method with the code editor.
		   /// </summary>
		   void InitializeComponent(void) {
			   System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			   this->menu_top = (gcnew System::Windows::Forms::ToolStrip());
			   this->button_controll_left_menu = (gcnew System::Windows::Forms::ToolStripButton());
			   this->menu_left = (gcnew System::Windows::Forms::ToolStrip());
			   this->button_basic = (gcnew System::Windows::Forms::ToolStripButton());
			   this->button_Lenght = (gcnew System::Windows::Forms::ToolStripButton());
			   this->button_Weight = (gcnew System::Windows::Forms::ToolStripButton());
			   this->button_Temperature = (gcnew System::Windows::Forms::ToolStripButton());
			   this->button_Area = (gcnew System::Windows::Forms::ToolStripButton());
			   this->button_Speed = (gcnew System::Windows::Forms::ToolStripButton());
			   this->panel_conversion = (gcnew System::Windows::Forms::Panel());
			   this->label_conversion = (gcnew System::Windows::Forms::Label());
			   this->panel_basic = (gcnew System::Windows::Forms::Panel());
			   this->label_basic = (gcnew System::Windows::Forms::Label());
			   this->menu_top->SuspendLayout();
			   this->menu_left->SuspendLayout();
			   this->panel_conversion->SuspendLayout();
			   this->panel_basic->SuspendLayout();
			   this->SuspendLayout();
			   // 
			   // menu_top
			   // 
			   this->menu_top->GripStyle = System::Windows::Forms::ToolStripGripStyle::Hidden;
			   this->menu_top->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->button_controll_left_menu });
			   this->menu_top->Location = System::Drawing::Point(0, 0);
			   this->menu_top->Name = L"menu_top";
			   this->menu_top->Size = System::Drawing::Size(675, 25);
			   this->menu_top->TabIndex = 0;
			   this->menu_top->Text = L"toolStrip1";
			   // 
			   // button_controll_left_menu
			   // 
			   this->button_controll_left_menu->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Text;
			   this->button_controll_left_menu->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button_controll_left_menu.Image")));
			   this->button_controll_left_menu->ImageTransparentColor = System::Drawing::Color::Magenta;
			   this->button_controll_left_menu->Name = L"button_controll_left_menu";
			   this->button_controll_left_menu->Size = System::Drawing::Size(70, 22);
			   this->button_controll_left_menu->Text = L"Hide/Show";
			   this->button_controll_left_menu->Click += gcnew System::EventHandler(this, &MyForm::toolStripButton1_Click);
			   // 
			   // menu_left
			   // 
			   this->menu_left->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			   this->menu_left->CanOverflow = false;
			   this->menu_left->Dock = System::Windows::Forms::DockStyle::Left;
			   this->menu_left->GripStyle = System::Windows::Forms::ToolStripGripStyle::Hidden;
			   this->menu_left->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(6) {
				   this->button_basic, this->button_Lenght,
					   this->button_Weight, this->button_Temperature, this->button_Area, this->button_Speed
			   });
			   this->menu_left->Location = System::Drawing::Point(0, 25);
			   this->menu_left->Name = L"menu_left";
			   this->menu_left->Size = System::Drawing::Size(78, 503);
			   this->menu_left->TabIndex = 1;
			   this->menu_left->Text = L"toolStrip2";
			   this->menu_left->ItemClicked += gcnew System::Windows::Forms::ToolStripItemClickedEventHandler(this, &MyForm::menu_left_ItemClicked);
			   // 
			   // button_basic
			   // 
			   this->button_basic->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			   this->button_basic->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Text;
			   this->button_basic->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button_basic.Image")));
			   this->button_basic->ImageTransparentColor = System::Drawing::Color::Magenta;
			   this->button_basic->Name = L"button_basic";
			   this->button_basic->Size = System::Drawing::Size(75, 19);
			   this->button_basic->Text = L"Basic";
			   // 
			   // button_Lenght
			   // 
			   this->button_Lenght->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Text;
			   this->button_Lenght->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button_Lenght.Image")));
			   this->button_Lenght->ImageTransparentColor = System::Drawing::Color::Magenta;
			   this->button_Lenght->Name = L"button_Lenght";
			   this->button_Lenght->Size = System::Drawing::Size(75, 19);
			   this->button_Lenght->Text = L"Lenghth";
			   // 
			   // button_Weight
			   // 
			   this->button_Weight->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Text;
			   this->button_Weight->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button_Weight.Image")));
			   this->button_Weight->ImageTransparentColor = System::Drawing::Color::Magenta;
			   this->button_Weight->Name = L"button_Weight";
			   this->button_Weight->Size = System::Drawing::Size(75, 19);
			   this->button_Weight->Text = L"Weight";
			   this->button_Weight->ToolTipText = L"Button3";
			   // 
			   // button_Temperature
			   // 
			   this->button_Temperature->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Text;
			   this->button_Temperature->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button_Temperature.Image")));
			   this->button_Temperature->ImageTransparentColor = System::Drawing::Color::Magenta;
			   this->button_Temperature->Name = L"button_Temperature";
			   this->button_Temperature->Size = System::Drawing::Size(75, 19);
			   this->button_Temperature->Text = L"Temperature";
			   this->button_Temperature->ToolTipText = L"Button3";
			   // 
			   // button_Area
			   // 
			   this->button_Area->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Text;
			   this->button_Area->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button_Area.Image")));
			   this->button_Area->ImageTransparentColor = System::Drawing::Color::Magenta;
			   this->button_Area->Name = L"button_Area";
			   this->button_Area->Size = System::Drawing::Size(75, 19);
			   this->button_Area->Text = L"Area";
			   this->button_Area->ToolTipText = L"Button3";
			   // 
			   // button_Speed
			   // 
			   this->button_Speed->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Text;
			   this->button_Speed->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button_Speed.Image")));
			   this->button_Speed->ImageTransparentColor = System::Drawing::Color::Magenta;
			   this->button_Speed->Name = L"button_Speed";
			   this->button_Speed->Size = System::Drawing::Size(75, 19);
			   this->button_Speed->Text = L"Speed";
			   this->button_Speed->ToolTipText = L"Button3";
			   // 
			   // panel_conversion
			   // 
			   this->panel_conversion->Controls->Add(this->label_conversion);
			   this->panel_conversion->Dock = System::Windows::Forms::DockStyle::Fill;
			   this->panel_conversion->Location = System::Drawing::Point(78, 25);
			   this->panel_conversion->Name = L"panel_conversion";
			   this->panel_conversion->Size = System::Drawing::Size(597, 503);
			   this->panel_conversion->TabIndex = 3;
			   this->panel_conversion->Visible = false;
			   // 
			   // label_conversion
			   // 
			   this->label_conversion->Dock = System::Windows::Forms::DockStyle::Fill;
			   this->label_conversion->Location = System::Drawing::Point(0, 0);
			   this->label_conversion->Name = L"label_conversion";
			   this->label_conversion->Size = System::Drawing::Size(597, 503);
			   this->label_conversion->TabIndex = 0;
			   this->label_conversion->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			   // 
			   // panel_basic
			   // 
			   this->panel_basic->Controls->Add(this->label_basic);
			   this->panel_basic->Dock = System::Windows::Forms::DockStyle::Fill;
			   this->panel_basic->Location = System::Drawing::Point(78, 25);
			   this->panel_basic->Name = L"panel_basic";
			   this->panel_basic->Size = System::Drawing::Size(597, 503);
			   this->panel_basic->TabIndex = 4;
			   // 
			   // label_basic
			   // 
			   this->label_basic->Dock = System::Windows::Forms::DockStyle::Fill;
			   this->label_basic->Location = System::Drawing::Point(0, 0);
			   this->label_basic->Name = L"label_basic";
			   this->label_basic->Size = System::Drawing::Size(597, 503);
			   this->label_basic->TabIndex = 0;
			   this->label_basic->Text = L"basic";
			   this->label_basic->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			   // 
			   // MyForm
			   // 
			   this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			   this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			   this->ClientSize = System::Drawing::Size(675, 528);
			   this->Controls->Add(this->panel_basic);
			   this->Controls->Add(this->panel_conversion);
			   this->Controls->Add(this->menu_left);
			   this->Controls->Add(this->menu_top);
			   this->MinimumSize = System::Drawing::Size(16, 200);
			   this->Name = L"MyForm";
			   this->Text = L"MyForm";
			   this->menu_top->ResumeLayout(false);
			   this->menu_top->PerformLayout();
			   this->menu_left->ResumeLayout(false);
			   this->menu_left->PerformLayout();
			   this->panel_conversion->ResumeLayout(false);
			   this->panel_basic->ResumeLayout(false);
			   this->ResumeLayout(false);
			   this->PerformLayout();

		   }
#pragma endregion








	private: System::Void toolStripButton1_Click(System::Object^ sender, System::EventArgs^ e) {
		if (menu_left->Visible && this->Width < 600) {
			menu_left->Visible = false;
		}else {
			menu_left->Visible = true;
		}
	}

	private: System::Void menu_left_ItemClicked(System::Object^ sender, System::Windows::Forms::ToolStripItemClickedEventArgs^ e) {
		if (e->ClickedItem->Name->ToString()->Equals("Basic")) {
			panel_basic->Show();
			panel_basic->Enabled = true;
			panel_conversion->Hide();
			panel_conversion->Enabled = false;
		}else {
			panel_basic->Hide();
			panel_basic->Enabled = false;
			panel_conversion->Show();
			panel_conversion->Enabled = true;
			label_conversion->Text = e->ClickedItem->Name;
		}
	}
};
}
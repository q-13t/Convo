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
	private: System::Windows::Forms::Label^ label_conversion_result;







	private: System::Windows::Forms::Panel^ panel_basic;

	private: System::Windows::Forms::ToolStripButton^ button_Speed;




	private: System::Windows::Forms::ToolStripButton^ button_Weight;
	private: System::Windows::Forms::ToolStripButton^ button_Temperature;
	private: System::Windows::Forms::ToolStripButton^ button_Area;
	private: System::Windows::Forms::ToolStripLabel^ label_top_operaion;
	private: System::Windows::Forms::Label^ label_conversion_input;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel1;
	private: System::Windows::Forms::SplitContainer^ splitContainer1;
	private: System::Windows::Forms::Button^ button14;
	private: System::Windows::Forms::Button^ button13;
	private: System::Windows::Forms::Button^ button12;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::ComboBox^ combo_from;

	private: System::Windows::Forms::ComboBox^ combo_to;

	private: System::Windows::Forms::Label^ label_conversion_from;
	private: System::Windows::Forms::Label^ label_conversion_to;
	private: System::Windows::Forms::SplitContainer^ splitContainer2;


	private: System::Windows::Forms::Label^ label2;


	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel2;
	private: System::Windows::Forms::Button^ button33;
	private: System::Windows::Forms::Button^ button32;
	private: System::Windows::Forms::Button^ button31;
	private: System::Windows::Forms::Button^ button30;
	private: System::Windows::Forms::Button^ button29;
	private: System::Windows::Forms::Button^ button28;
	private: System::Windows::Forms::Button^ button27;
	private: System::Windows::Forms::Button^ button26;
	private: System::Windows::Forms::Button^ button25;
	private: System::Windows::Forms::Button^ button24;
	private: System::Windows::Forms::Button^ button23;
	private: System::Windows::Forms::Button^ button22;
	private: System::Windows::Forms::Button^ button21;
	private: System::Windows::Forms::Button^ button20;
	private: System::Windows::Forms::Button^ button19;
	private: System::Windows::Forms::Button^ button18;
	private: System::Windows::Forms::Button^ button16;
	private: System::Windows::Forms::Button^ button15;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button17;














































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
			   this->label_top_operaion = (gcnew System::Windows::Forms::ToolStripLabel());
			   this->menu_left = (gcnew System::Windows::Forms::ToolStrip());
			   this->button_basic = (gcnew System::Windows::Forms::ToolStripButton());
			   this->button_Lenght = (gcnew System::Windows::Forms::ToolStripButton());
			   this->button_Weight = (gcnew System::Windows::Forms::ToolStripButton());
			   this->button_Temperature = (gcnew System::Windows::Forms::ToolStripButton());
			   this->button_Area = (gcnew System::Windows::Forms::ToolStripButton());
			   this->button_Speed = (gcnew System::Windows::Forms::ToolStripButton());
			   this->panel_conversion = (gcnew System::Windows::Forms::Panel());
			   this->splitContainer1 = (gcnew System::Windows::Forms::SplitContainer());
			   this->combo_from = (gcnew System::Windows::Forms::ComboBox());
			   this->label_conversion_from = (gcnew System::Windows::Forms::Label());
			   this->label_conversion_input = (gcnew System::Windows::Forms::Label());
			   this->combo_to = (gcnew System::Windows::Forms::ComboBox());
			   this->label_conversion_to = (gcnew System::Windows::Forms::Label());
			   this->label_conversion_result = (gcnew System::Windows::Forms::Label());
			   this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			   this->button14 = (gcnew System::Windows::Forms::Button());
			   this->button13 = (gcnew System::Windows::Forms::Button());
			   this->button12 = (gcnew System::Windows::Forms::Button());
			   this->button11 = (gcnew System::Windows::Forms::Button());
			   this->button10 = (gcnew System::Windows::Forms::Button());
			   this->button9 = (gcnew System::Windows::Forms::Button());
			   this->button8 = (gcnew System::Windows::Forms::Button());
			   this->button7 = (gcnew System::Windows::Forms::Button());
			   this->button6 = (gcnew System::Windows::Forms::Button());
			   this->button5 = (gcnew System::Windows::Forms::Button());
			   this->button4 = (gcnew System::Windows::Forms::Button());
			   this->button3 = (gcnew System::Windows::Forms::Button());
			   this->button2 = (gcnew System::Windows::Forms::Button());
			   this->panel_basic = (gcnew System::Windows::Forms::Panel());
			   this->splitContainer2 = (gcnew System::Windows::Forms::SplitContainer());
			   this->label2 = (gcnew System::Windows::Forms::Label());
			   this->label4 = (gcnew System::Windows::Forms::Label());
			   this->tableLayoutPanel2 = (gcnew System::Windows::Forms::TableLayoutPanel());
			   this->button17 = (gcnew System::Windows::Forms::Button());
			   this->button1 = (gcnew System::Windows::Forms::Button());
			   this->button15 = (gcnew System::Windows::Forms::Button());
			   this->button16 = (gcnew System::Windows::Forms::Button());
			   this->button18 = (gcnew System::Windows::Forms::Button());
			   this->button19 = (gcnew System::Windows::Forms::Button());
			   this->button20 = (gcnew System::Windows::Forms::Button());
			   this->button21 = (gcnew System::Windows::Forms::Button());
			   this->button22 = (gcnew System::Windows::Forms::Button());
			   this->button23 = (gcnew System::Windows::Forms::Button());
			   this->button24 = (gcnew System::Windows::Forms::Button());
			   this->button25 = (gcnew System::Windows::Forms::Button());
			   this->button26 = (gcnew System::Windows::Forms::Button());
			   this->button27 = (gcnew System::Windows::Forms::Button());
			   this->button28 = (gcnew System::Windows::Forms::Button());
			   this->button29 = (gcnew System::Windows::Forms::Button());
			   this->button30 = (gcnew System::Windows::Forms::Button());
			   this->button31 = (gcnew System::Windows::Forms::Button());
			   this->button32 = (gcnew System::Windows::Forms::Button());
			   this->button33 = (gcnew System::Windows::Forms::Button());
			   this->menu_top->SuspendLayout();
			   this->menu_left->SuspendLayout();
			   this->panel_conversion->SuspendLayout();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer1))->BeginInit();
			   this->splitContainer1->Panel1->SuspendLayout();
			   this->splitContainer1->Panel2->SuspendLayout();
			   this->splitContainer1->SuspendLayout();
			   this->tableLayoutPanel1->SuspendLayout();
			   this->panel_basic->SuspendLayout();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer2))->BeginInit();
			   this->splitContainer2->Panel1->SuspendLayout();
			   this->splitContainer2->Panel2->SuspendLayout();
			   this->splitContainer2->SuspendLayout();
			   this->tableLayoutPanel2->SuspendLayout();
			   this->SuspendLayout();
			   // 
			   // menu_top
			   // 
			   this->menu_top->GripStyle = System::Windows::Forms::ToolStripGripStyle::Hidden;
			   this->menu_top->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				   this->button_controll_left_menu,
					   this->label_top_operaion
			   });
			   this->menu_top->Location = System::Drawing::Point(0, 0);
			   this->menu_top->Name = L"menu_top";
			   this->menu_top->Size = System::Drawing::Size(384, 25);
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
			   // label_top_operaion
			   // 
			   this->label_top_operaion->Name = L"label_top_operaion";
			   this->label_top_operaion->Size = System::Drawing::Size(34, 22);
			   this->label_top_operaion->Text = L"Basic";
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
			   this->menu_left->Size = System::Drawing::Size(78, 536);
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
			   this->button_Lenght->Text = L"Length";
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
			   this->panel_conversion->Controls->Add(this->splitContainer1);
			   this->panel_conversion->Controls->Add(this->tableLayoutPanel1);
			   this->panel_conversion->Dock = System::Windows::Forms::DockStyle::Fill;
			   this->panel_conversion->Location = System::Drawing::Point(78, 25);
			   this->panel_conversion->Name = L"panel_conversion";
			   this->panel_conversion->Size = System::Drawing::Size(306, 536);
			   this->panel_conversion->TabIndex = 3;
			   this->panel_conversion->Visible = false;
			   // 
			   // splitContainer1
			   // 
			   this->splitContainer1->Dock = System::Windows::Forms::DockStyle::Top;
			   this->splitContainer1->FixedPanel = System::Windows::Forms::FixedPanel::Panel1;
			   this->splitContainer1->Location = System::Drawing::Point(0, 0);
			   this->splitContainer1->Name = L"splitContainer1";
			   this->splitContainer1->Orientation = System::Windows::Forms::Orientation::Horizontal;
			   // 
			   // splitContainer1.Panel1
			   // 
			   this->splitContainer1->Panel1->Controls->Add(this->combo_from);
			   this->splitContainer1->Panel1->Controls->Add(this->label_conversion_from);
			   this->splitContainer1->Panel1->Controls->Add(this->label_conversion_input);
			   // 
			   // splitContainer1.Panel2
			   // 
			   this->splitContainer1->Panel2->Controls->Add(this->combo_to);
			   this->splitContainer1->Panel2->Controls->Add(this->label_conversion_to);
			   this->splitContainer1->Panel2->Controls->Add(this->label_conversion_result);
			   this->splitContainer1->Size = System::Drawing::Size(306, 100);
			   this->splitContainer1->SplitterDistance = 47;
			   this->splitContainer1->TabIndex = 3;
			   // 
			   // combo_from
			   // 
			   this->combo_from->Dock = System::Windows::Forms::DockStyle::Bottom;
			   this->combo_from->FormattingEnabled = true;
			   this->combo_from->Location = System::Drawing::Point(65, 26);
			   this->combo_from->Name = L"combo_from";
			   this->combo_from->Size = System::Drawing::Size(241, 21);
			   this->combo_from->TabIndex = 3;
			   // 
			   // label_conversion_from
			   // 
			   this->label_conversion_from->Dock = System::Windows::Forms::DockStyle::Left;
			   this->label_conversion_from->Location = System::Drawing::Point(0, 29);
			   this->label_conversion_from->Name = L"label_conversion_from";
			   this->label_conversion_from->Size = System::Drawing::Size(65, 18);
			   this->label_conversion_from->TabIndex = 4;
			   this->label_conversion_from->Text = L"FROM:";
			   this->label_conversion_from->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			   // 
			   // label_conversion_input
			   // 
			   this->label_conversion_input->Dock = System::Windows::Forms::DockStyle::Top;
			   this->label_conversion_input->Location = System::Drawing::Point(0, 0);
			   this->label_conversion_input->Name = L"label_conversion_input";
			   this->label_conversion_input->Size = System::Drawing::Size(306, 29);
			   this->label_conversion_input->TabIndex = 1;
			   this->label_conversion_input->Text = L"INPUT";
			   this->label_conversion_input->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			   // 
			   // combo_to
			   // 
			   this->combo_to->Dock = System::Windows::Forms::DockStyle::Bottom;
			   this->combo_to->FormattingEnabled = true;
			   this->combo_to->Location = System::Drawing::Point(65, 28);
			   this->combo_to->Name = L"combo_to";
			   this->combo_to->Size = System::Drawing::Size(241, 21);
			   this->combo_to->TabIndex = 2;
			   // 
			   // label_conversion_to
			   // 
			   this->label_conversion_to->Dock = System::Windows::Forms::DockStyle::Left;
			   this->label_conversion_to->Location = System::Drawing::Point(0, 27);
			   this->label_conversion_to->Name = L"label_conversion_to";
			   this->label_conversion_to->Size = System::Drawing::Size(65, 22);
			   this->label_conversion_to->TabIndex = 5;
			   this->label_conversion_to->Text = L"TO:";
			   this->label_conversion_to->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			   // 
			   // label_conversion_result
			   // 
			   this->label_conversion_result->Dock = System::Windows::Forms::DockStyle::Top;
			   this->label_conversion_result->Location = System::Drawing::Point(0, 0);
			   this->label_conversion_result->Name = L"label_conversion_result";
			   this->label_conversion_result->Size = System::Drawing::Size(306, 27);
			   this->label_conversion_result->TabIndex = 0;
			   this->label_conversion_result->Text = L"RESULT";
			   this->label_conversion_result->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			   // 
			   // tableLayoutPanel1
			   // 
			   this->tableLayoutPanel1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				   | System::Windows::Forms::AnchorStyles::Left)
				   | System::Windows::Forms::AnchorStyles::Right));
			   this->tableLayoutPanel1->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			   this->tableLayoutPanel1->ColumnCount = 3;
			   this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				   33.33332F)));
			   this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				   33.33334F)));
			   this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				   33.33334F)));
			   this->tableLayoutPanel1->Controls->Add(this->button14, 2, 4);
			   this->tableLayoutPanel1->Controls->Add(this->button13, 1, 4);
			   this->tableLayoutPanel1->Controls->Add(this->button12, 0, 3);
			   this->tableLayoutPanel1->Controls->Add(this->button11, 0, 3);
			   this->tableLayoutPanel1->Controls->Add(this->button10, 0, 3);
			   this->tableLayoutPanel1->Controls->Add(this->button9, 0, 2);
			   this->tableLayoutPanel1->Controls->Add(this->button8, 0, 2);
			   this->tableLayoutPanel1->Controls->Add(this->button7, 0, 2);
			   this->tableLayoutPanel1->Controls->Add(this->button6, 0, 1);
			   this->tableLayoutPanel1->Controls->Add(this->button5, 0, 1);
			   this->tableLayoutPanel1->Controls->Add(this->button4, 0, 1);
			   this->tableLayoutPanel1->Controls->Add(this->button3, 2, 0);
			   this->tableLayoutPanel1->Controls->Add(this->button2, 1, 0);
			   this->tableLayoutPanel1->Location = System::Drawing::Point(0, 100);
			   this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			   this->tableLayoutPanel1->RowCount = 5;
			   this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 20)));
			   this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 20)));
			   this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 20)));
			   this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 20)));
			   this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 20)));
			   this->tableLayoutPanel1->Size = System::Drawing::Size(303, 433);
			   this->tableLayoutPanel1->TabIndex = 2;
			   // 
			   // button14
			   // 
			   this->button14->Dock = System::Windows::Forms::DockStyle::Fill;
			   this->button14->Location = System::Drawing::Point(204, 347);
			   this->button14->Name = L"button14";
			   this->button14->Size = System::Drawing::Size(96, 83);
			   this->button14->TabIndex = 13;
			   this->button14->Text = L"button14";
			   this->button14->UseVisualStyleBackColor = true;
			   // 
			   // button13
			   // 
			   this->button13->Dock = System::Windows::Forms::DockStyle::Fill;
			   this->button13->Location = System::Drawing::Point(103, 347);
			   this->button13->Name = L"button13";
			   this->button13->Size = System::Drawing::Size(95, 83);
			   this->button13->TabIndex = 12;
			   this->button13->Text = L"button13";
			   this->button13->UseVisualStyleBackColor = true;
			   // 
			   // button12
			   // 
			   this->button12->Dock = System::Windows::Forms::DockStyle::Fill;
			   this->button12->Location = System::Drawing::Point(3, 261);
			   this->button12->Name = L"button12";
			   this->button12->Size = System::Drawing::Size(94, 80);
			   this->button12->TabIndex = 11;
			   this->button12->Text = L"button12";
			   this->button12->UseVisualStyleBackColor = true;
			   // 
			   // button11
			   // 
			   this->button11->Dock = System::Windows::Forms::DockStyle::Fill;
			   this->button11->Location = System::Drawing::Point(103, 261);
			   this->button11->Name = L"button11";
			   this->button11->Size = System::Drawing::Size(95, 80);
			   this->button11->TabIndex = 10;
			   this->button11->Text = L"button11";
			   this->button11->UseVisualStyleBackColor = true;
			   // 
			   // button10
			   // 
			   this->button10->Dock = System::Windows::Forms::DockStyle::Fill;
			   this->button10->Location = System::Drawing::Point(204, 261);
			   this->button10->Name = L"button10";
			   this->button10->Size = System::Drawing::Size(96, 80);
			   this->button10->TabIndex = 9;
			   this->button10->Text = L"button10";
			   this->button10->UseVisualStyleBackColor = true;
			   // 
			   // button9
			   // 
			   this->button9->Dock = System::Windows::Forms::DockStyle::Fill;
			   this->button9->Location = System::Drawing::Point(204, 175);
			   this->button9->Name = L"button9";
			   this->button9->Size = System::Drawing::Size(96, 80);
			   this->button9->TabIndex = 8;
			   this->button9->Text = L"button9";
			   this->button9->UseVisualStyleBackColor = true;
			   // 
			   // button8
			   // 
			   this->button8->Dock = System::Windows::Forms::DockStyle::Fill;
			   this->button8->Location = System::Drawing::Point(103, 175);
			   this->button8->Name = L"button8";
			   this->button8->Size = System::Drawing::Size(95, 80);
			   this->button8->TabIndex = 7;
			   this->button8->Text = L"button8";
			   this->button8->UseVisualStyleBackColor = true;
			   // 
			   // button7
			   // 
			   this->button7->Dock = System::Windows::Forms::DockStyle::Fill;
			   this->button7->Location = System::Drawing::Point(3, 175);
			   this->button7->Name = L"button7";
			   this->button7->Size = System::Drawing::Size(94, 80);
			   this->button7->TabIndex = 6;
			   this->button7->Text = L"button7";
			   this->button7->UseVisualStyleBackColor = true;
			   // 
			   // button6
			   // 
			   this->button6->Dock = System::Windows::Forms::DockStyle::Fill;
			   this->button6->Location = System::Drawing::Point(3, 89);
			   this->button6->Name = L"button6";
			   this->button6->Size = System::Drawing::Size(94, 80);
			   this->button6->TabIndex = 5;
			   this->button6->Text = L"button6";
			   this->button6->UseVisualStyleBackColor = true;
			   // 
			   // button5
			   // 
			   this->button5->Dock = System::Windows::Forms::DockStyle::Fill;
			   this->button5->Location = System::Drawing::Point(103, 89);
			   this->button5->Name = L"button5";
			   this->button5->Size = System::Drawing::Size(95, 80);
			   this->button5->TabIndex = 4;
			   this->button5->Text = L"button5";
			   this->button5->UseVisualStyleBackColor = true;
			   // 
			   // button4
			   // 
			   this->button4->Dock = System::Windows::Forms::DockStyle::Fill;
			   this->button4->Location = System::Drawing::Point(204, 89);
			   this->button4->Name = L"button4";
			   this->button4->Size = System::Drawing::Size(96, 80);
			   this->button4->TabIndex = 3;
			   this->button4->Text = L"button4";
			   this->button4->UseVisualStyleBackColor = true;
			   // 
			   // button3
			   // 
			   this->button3->Dock = System::Windows::Forms::DockStyle::Fill;
			   this->button3->Location = System::Drawing::Point(204, 3);
			   this->button3->Name = L"button3";
			   this->button3->Size = System::Drawing::Size(96, 80);
			   this->button3->TabIndex = 2;
			   this->button3->Text = L"button3";
			   this->button3->UseVisualStyleBackColor = true;
			   // 
			   // button2
			   // 
			   this->button2->Dock = System::Windows::Forms::DockStyle::Fill;
			   this->button2->Location = System::Drawing::Point(103, 3);
			   this->button2->Name = L"button2";
			   this->button2->Size = System::Drawing::Size(95, 80);
			   this->button2->TabIndex = 1;
			   this->button2->Text = L"button2";
			   this->button2->UseVisualStyleBackColor = true;
			   // 
			   // panel_basic
			   // 
			   this->panel_basic->Controls->Add(this->splitContainer2);
			   this->panel_basic->Controls->Add(this->tableLayoutPanel2);
			   this->panel_basic->Dock = System::Windows::Forms::DockStyle::Fill;
			   this->panel_basic->Location = System::Drawing::Point(78, 25);
			   this->panel_basic->Name = L"panel_basic";
			   this->panel_basic->Size = System::Drawing::Size(306, 536);
			   this->panel_basic->TabIndex = 4;
			   // 
			   // splitContainer2
			   // 
			   this->splitContainer2->Dock = System::Windows::Forms::DockStyle::Top;
			   this->splitContainer2->FixedPanel = System::Windows::Forms::FixedPanel::Panel1;
			   this->splitContainer2->Location = System::Drawing::Point(0, 0);
			   this->splitContainer2->Name = L"splitContainer2";
			   this->splitContainer2->Orientation = System::Windows::Forms::Orientation::Horizontal;
			   // 
			   // splitContainer2.Panel1
			   // 
			   this->splitContainer2->Panel1->Controls->Add(this->label4);
			   // 
			   // splitContainer2.Panel2
			   // 
			   this->splitContainer2->Panel2->Controls->Add(this->label2);
			   this->splitContainer2->Size = System::Drawing::Size(306, 100);
			   this->splitContainer2->SplitterDistance = 47;
			   this->splitContainer2->TabIndex = 4;
			   // 
			   // label2
			   // 
			   this->label2->Dock = System::Windows::Forms::DockStyle::Fill;
			   this->label2->Location = System::Drawing::Point(0, 0);
			   this->label2->Name = L"label2";
			   this->label2->Size = System::Drawing::Size(306, 49);
			   this->label2->TabIndex = 1;
			   this->label2->Text = L"INPUT";
			   this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			   // 
			   // label4
			   // 
			   this->label4->Dock = System::Windows::Forms::DockStyle::Fill;
			   this->label4->Location = System::Drawing::Point(0, 0);
			   this->label4->Name = L"label4";
			   this->label4->Size = System::Drawing::Size(306, 47);
			   this->label4->TabIndex = 0;
			   this->label4->Text = L"RESULT";
			   this->label4->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			   // 
			   // tableLayoutPanel2
			   // 
			   this->tableLayoutPanel2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				   | System::Windows::Forms::AnchorStyles::Left)
				   | System::Windows::Forms::AnchorStyles::Right));
			   this->tableLayoutPanel2->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			   this->tableLayoutPanel2->ColumnCount = 4;
			   this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				   25)));
			   this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				   25)));
			   this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				   25)));
			   this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				   25)));
			   this->tableLayoutPanel2->Controls->Add(this->button33, 0, 4);
			   this->tableLayoutPanel2->Controls->Add(this->button32, 0, 4);
			   this->tableLayoutPanel2->Controls->Add(this->button31, 0, 4);
			   this->tableLayoutPanel2->Controls->Add(this->button30, 0, 4);
			   this->tableLayoutPanel2->Controls->Add(this->button29, 0, 3);
			   this->tableLayoutPanel2->Controls->Add(this->button28, 0, 3);
			   this->tableLayoutPanel2->Controls->Add(this->button27, 0, 3);
			   this->tableLayoutPanel2->Controls->Add(this->button26, 0, 3);
			   this->tableLayoutPanel2->Controls->Add(this->button25, 0, 2);
			   this->tableLayoutPanel2->Controls->Add(this->button24, 0, 2);
			   this->tableLayoutPanel2->Controls->Add(this->button23, 0, 2);
			   this->tableLayoutPanel2->Controls->Add(this->button22, 0, 2);
			   this->tableLayoutPanel2->Controls->Add(this->button21, 0, 1);
			   this->tableLayoutPanel2->Controls->Add(this->button20, 0, 1);
			   this->tableLayoutPanel2->Controls->Add(this->button19, 0, 1);
			   this->tableLayoutPanel2->Controls->Add(this->button18, 0, 1);
			   this->tableLayoutPanel2->Controls->Add(this->button16, 0, 0);
			   this->tableLayoutPanel2->Controls->Add(this->button15, 0, 0);
			   this->tableLayoutPanel2->Controls->Add(this->button1, 0, 0);
			   this->tableLayoutPanel2->Controls->Add(this->button17, 0, 0);
			   this->tableLayoutPanel2->Location = System::Drawing::Point(0, 100);
			   this->tableLayoutPanel2->Name = L"tableLayoutPanel2";
			   this->tableLayoutPanel2->RowCount = 5;
			   this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 20)));
			   this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 20)));
			   this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 20)));
			   this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 20)));
			   this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 20)));
			   this->tableLayoutPanel2->Size = System::Drawing::Size(303, 433);
			   this->tableLayoutPanel2->TabIndex = 3;
			   // 
			   // button17
			   // 
			   this->button17->Dock = System::Windows::Forms::DockStyle::Fill;
			   this->button17->Location = System::Drawing::Point(153, 3);
			   this->button17->Name = L"button17";
			   this->button17->Size = System::Drawing::Size(69, 80);
			   this->button17->TabIndex = 23;
			   this->button17->Text = L"button17";
			   this->button17->UseVisualStyleBackColor = true;
			   // 
			   // button1
			   // 
			   this->button1->Dock = System::Windows::Forms::DockStyle::Fill;
			   this->button1->Location = System::Drawing::Point(228, 3);
			   this->button1->Name = L"button1";
			   this->button1->Size = System::Drawing::Size(72, 80);
			   this->button1->TabIndex = 24;
			   this->button1->Text = L"button1";
			   this->button1->UseVisualStyleBackColor = true;
			   // 
			   // button15
			   // 
			   this->button15->Dock = System::Windows::Forms::DockStyle::Fill;
			   this->button15->Location = System::Drawing::Point(3, 3);
			   this->button15->Name = L"button15";
			   this->button15->Size = System::Drawing::Size(69, 80);
			   this->button15->TabIndex = 25;
			   this->button15->Text = L"button15";
			   this->button15->UseVisualStyleBackColor = true;
			   // 
			   // button16
			   // 
			   this->button16->Dock = System::Windows::Forms::DockStyle::Fill;
			   this->button16->Location = System::Drawing::Point(78, 3);
			   this->button16->Name = L"button16";
			   this->button16->Size = System::Drawing::Size(69, 80);
			   this->button16->TabIndex = 26;
			   this->button16->Text = L"button16";
			   this->button16->UseVisualStyleBackColor = true;
			   // 
			   // button18
			   // 
			   this->button18->Dock = System::Windows::Forms::DockStyle::Fill;
			   this->button18->Location = System::Drawing::Point(153, 89);
			   this->button18->Name = L"button18";
			   this->button18->Size = System::Drawing::Size(69, 80);
			   this->button18->TabIndex = 27;
			   this->button18->Text = L"button18";
			   this->button18->UseVisualStyleBackColor = true;
			   // 
			   // button19
			   // 
			   this->button19->Dock = System::Windows::Forms::DockStyle::Fill;
			   this->button19->Location = System::Drawing::Point(228, 89);
			   this->button19->Name = L"button19";
			   this->button19->Size = System::Drawing::Size(72, 80);
			   this->button19->TabIndex = 28;
			   this->button19->Text = L"button19";
			   this->button19->UseVisualStyleBackColor = true;
			   // 
			   // button20
			   // 
			   this->button20->Dock = System::Windows::Forms::DockStyle::Fill;
			   this->button20->Location = System::Drawing::Point(3, 89);
			   this->button20->Name = L"button20";
			   this->button20->Size = System::Drawing::Size(69, 80);
			   this->button20->TabIndex = 29;
			   this->button20->Text = L"button20";
			   this->button20->UseVisualStyleBackColor = true;
			   // 
			   // button21
			   // 
			   this->button21->Dock = System::Windows::Forms::DockStyle::Fill;
			   this->button21->Location = System::Drawing::Point(78, 89);
			   this->button21->Name = L"button21";
			   this->button21->Size = System::Drawing::Size(69, 80);
			   this->button21->TabIndex = 30;
			   this->button21->Text = L"button21";
			   this->button21->UseVisualStyleBackColor = true;
			   // 
			   // button22
			   // 
			   this->button22->Dock = System::Windows::Forms::DockStyle::Fill;
			   this->button22->Location = System::Drawing::Point(78, 175);
			   this->button22->Name = L"button22";
			   this->button22->Size = System::Drawing::Size(69, 80);
			   this->button22->TabIndex = 31;
			   this->button22->Text = L"button22";
			   this->button22->UseVisualStyleBackColor = true;
			   // 
			   // button23
			   // 
			   this->button23->Dock = System::Windows::Forms::DockStyle::Fill;
			   this->button23->Location = System::Drawing::Point(3, 175);
			   this->button23->Name = L"button23";
			   this->button23->Size = System::Drawing::Size(69, 80);
			   this->button23->TabIndex = 32;
			   this->button23->Text = L"button23";
			   this->button23->UseVisualStyleBackColor = true;
			   // 
			   // button24
			   // 
			   this->button24->Dock = System::Windows::Forms::DockStyle::Fill;
			   this->button24->Location = System::Drawing::Point(228, 175);
			   this->button24->Name = L"button24";
			   this->button24->Size = System::Drawing::Size(72, 80);
			   this->button24->TabIndex = 33;
			   this->button24->Text = L"button24";
			   this->button24->UseVisualStyleBackColor = true;
			   // 
			   // button25
			   // 
			   this->button25->Dock = System::Windows::Forms::DockStyle::Fill;
			   this->button25->Location = System::Drawing::Point(153, 175);
			   this->button25->Name = L"button25";
			   this->button25->Size = System::Drawing::Size(69, 80);
			   this->button25->TabIndex = 34;
			   this->button25->Text = L"button25";
			   this->button25->UseVisualStyleBackColor = true;
			   // 
			   // button26
			   // 
			   this->button26->Dock = System::Windows::Forms::DockStyle::Fill;
			   this->button26->Location = System::Drawing::Point(153, 261);
			   this->button26->Name = L"button26";
			   this->button26->Size = System::Drawing::Size(69, 80);
			   this->button26->TabIndex = 35;
			   this->button26->Text = L"button26";
			   this->button26->UseVisualStyleBackColor = true;
			   // 
			   // button27
			   // 
			   this->button27->Dock = System::Windows::Forms::DockStyle::Fill;
			   this->button27->Location = System::Drawing::Point(228, 261);
			   this->button27->Name = L"button27";
			   this->button27->Size = System::Drawing::Size(72, 80);
			   this->button27->TabIndex = 36;
			   this->button27->Text = L"button27";
			   this->button27->UseVisualStyleBackColor = true;
			   // 
			   // button28
			   // 
			   this->button28->Dock = System::Windows::Forms::DockStyle::Fill;
			   this->button28->Location = System::Drawing::Point(3, 261);
			   this->button28->Name = L"button28";
			   this->button28->Size = System::Drawing::Size(69, 80);
			   this->button28->TabIndex = 37;
			   this->button28->Text = L"button28";
			   this->button28->UseVisualStyleBackColor = true;
			   // 
			   // button29
			   // 
			   this->button29->Dock = System::Windows::Forms::DockStyle::Fill;
			   this->button29->Location = System::Drawing::Point(78, 261);
			   this->button29->Name = L"button29";
			   this->button29->Size = System::Drawing::Size(69, 80);
			   this->button29->TabIndex = 38;
			   this->button29->Text = L"button29";
			   this->button29->UseVisualStyleBackColor = true;
			   // 
			   // button30
			   // 
			   this->button30->Dock = System::Windows::Forms::DockStyle::Fill;
			   this->button30->Location = System::Drawing::Point(153, 347);
			   this->button30->Name = L"button30";
			   this->button30->Size = System::Drawing::Size(69, 83);
			   this->button30->TabIndex = 39;
			   this->button30->Text = L"button30";
			   this->button30->UseVisualStyleBackColor = true;
			   // 
			   // button31
			   // 
			   this->button31->Dock = System::Windows::Forms::DockStyle::Fill;
			   this->button31->Location = System::Drawing::Point(228, 347);
			   this->button31->Name = L"button31";
			   this->button31->Size = System::Drawing::Size(72, 83);
			   this->button31->TabIndex = 40;
			   this->button31->Text = L"button31";
			   this->button31->UseVisualStyleBackColor = true;
			   // 
			   // button32
			   // 
			   this->button32->Dock = System::Windows::Forms::DockStyle::Fill;
			   this->button32->Location = System::Drawing::Point(3, 347);
			   this->button32->Name = L"button32";
			   this->button32->Size = System::Drawing::Size(69, 83);
			   this->button32->TabIndex = 41;
			   this->button32->Text = L"button32";
			   this->button32->UseVisualStyleBackColor = true;
			   // 
			   // button33
			   // 
			   this->button33->Dock = System::Windows::Forms::DockStyle::Fill;
			   this->button33->Location = System::Drawing::Point(78, 347);
			   this->button33->Name = L"button33";
			   this->button33->Size = System::Drawing::Size(69, 83);
			   this->button33->TabIndex = 42;
			   this->button33->Text = L"button33";
			   this->button33->UseVisualStyleBackColor = true;
			   // 
			   // MyForm
			   // 
			   this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			   this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			   this->ClientSize = System::Drawing::Size(384, 561);
			   this->Controls->Add(this->panel_basic);
			   this->Controls->Add(this->panel_conversion);
			   this->Controls->Add(this->menu_left);
			   this->Controls->Add(this->menu_top);
			   this->MinimumSize = System::Drawing::Size(400, 600);
			   this->Name = L"MyForm";
			   this->Text = L"MyForm";
			   this->menu_top->ResumeLayout(false);
			   this->menu_top->PerformLayout();
			   this->menu_left->ResumeLayout(false);
			   this->menu_left->PerformLayout();
			   this->panel_conversion->ResumeLayout(false);
			   this->splitContainer1->Panel1->ResumeLayout(false);
			   this->splitContainer1->Panel2->ResumeLayout(false);
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer1))->EndInit();
			   this->splitContainer1->ResumeLayout(false);
			   this->tableLayoutPanel1->ResumeLayout(false);
			   this->panel_basic->ResumeLayout(false);
			   this->splitContainer2->Panel1->ResumeLayout(false);
			   this->splitContainer2->Panel2->ResumeLayout(false);
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer2))->EndInit();
			   this->splitContainer2->ResumeLayout(false);
			   this->tableLayoutPanel2->ResumeLayout(false);
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
		GC::Collect();
	}

	private: System::Void menu_left_ItemClicked(System::Object^ sender, System::Windows::Forms::ToolStripItemClickedEventArgs^ e) {
		if (e->ClickedItem->Name->ToString()->Equals("button_basic")) {
			panel_basic->Show();
			panel_basic->Enabled = true;
			panel_conversion->Hide();
			panel_conversion->Enabled = false;
		}else {
			panel_basic->Hide();
			panel_basic->Enabled = false;
			panel_conversion->Show();
			panel_conversion->Enabled = true;
		}
		label_top_operaion->Text = e->ClickedItem->Text;
		GC::Collect();
	}

};
}
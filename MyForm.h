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
	public ref class MyForm : public Form
	{
	public:
		MyForm(void)
		{
			lenghts.Add("Millimeter", "millimeter");
			lenghts.Add("Centimeter", "centimeter");
			lenghts.Add("Decimeter", "decimeter");
			lenghts.Add("Meter", "meter");
			lenghts.Add("Kilometer", "kilometer");
			lenghts.Add("Inch", "inch");
			lenghts.Add("Feet", "feet");
			lenghts.Add("Yard", "yard");
			lenghts.Add("Mile", "mile");

			weights.Add("Milligram","milligram");
			weights.Add("Gram", "gram");
			weights.Add("Kilogram", "kilogram");
			weights.Add("Ton", "ton");
			weights.Add("Ounce", "ounce");
			weights.Add("Pound", "pound");
			
			areas.Add("Millimeter","millimeter");
			areas.Add("Centimeter", "centimeter");
			areas.Add("Meter", "meter");
			areas.Add("Acre", "acre");
			areas.Add("Hectare", "hectare");
			areas.Add("Kilometer", "kilometer");
			areas.Add("Inch", "inch");
			areas.Add("Feet", "feet");
			areas.Add("Yard", "yard");
			areas.Add("Mile", "mile");

			speeds.Add("Centimeters Per Second","cps");
			speeds.Add("Meters Per Second", "mps");
			speeds.Add("Kilometers Per Hour", "kph");
			speeds.Add("Feet Per Second", "fps");
			speeds.Add("Miles Per Hour", "mph");
			speeds.Add("Knots", "k");
			speeds.Add("Mach (SI standard)", "m");

			temperatures.Add("Celsius","felsius");
			temperatures.Add("Fahrenheit","fahrenheit");
			temperatures.Add("Kelvin","kelvin");
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
	private: ToolStrip^ menu_top;
	private: ToolStripButton^ button_controll_left_menu;
	private: ToolStrip^ menu_left;
	private: ToolStripButton^ button_basic;
	private: ToolStripButton^ button_Lenght;
	private: Panel^ panel_conversion;
	private: Label^ label_conversion_result;
	private: Panel^ panel_basic;
	private: ToolStripButton^ button_Speed;
	private: ToolStripButton^ button_Weight;
	private: ToolStripButton^ button_Temperature;
	private: ToolStripButton^ button_Area;
	private: ToolStripLabel^ label_top_operaion;
	private: Label^ label_conversion_input;
	private: TableLayoutPanel^ tableLayoutPanel1;
	private: SplitContainer^ splitContainer1;
	private: Button^ convert_button_zero;
	private: Button^ convert_button_one;
	private: Button^ convert_button_two;
	private: Button^ convert_button_three;
	private: Button^ convert_button_four;
	private: Button^ convert_button_five;
	private: Button^ convert_button_six;
	private: Button^ convert_button_seven;
	private: Button^ convert_button_eight;
	private: Button^ convert_button_nine;
	private: Button^ convert_button_period;
	private: Button^ convert_button_erase;
	private: Button^ convert_button_erase_everything;

	private: ComboBox^ combo_from;
	private: ComboBox^ combo_to;
	private: Label^ label_conversion_from;
	private: Label^ label_conversion_to;
	private: SplitContainer^ splitContainer2;
	private: Label^ basic_label_result_input;
	private: Label^ basic_label_action;
	private: TableLayoutPanel^ tableLayoutPanel2;
	private: Button^ basic_button_two;
	private: Button^ basic_button_one;
	private: Button^ basic_button_addition;
	private: Button^ basic_button_three;
	private: Button^ basic_button_five;
	private: Button^ basic_button_four;
	private: Button^ basic_button_subtraction;
	private: Button^ basic_button_six;
	private: Button^ basic_button_nine;
	private: Button^ basic_button_miltiplication;
	private: Button^ basic_button_eight;
	private: Button^ basic_button_power_two;
	private: Button^ basic_button_one_divided_by;
	private: Button^ basic_button_division;
	private: Button^ basic_button_square_root;
	private: Button^ basic_button_clear_everything;
	private: Button^ basic_button_percent;
	private: Button^ basic_button_delete;
	private: Button^ basic_button_clear;
	private: Button^ basic_button_zero;
	private: Button^ basic_button_plus_minus;
	private: Button^ basic_button_equals;
	private: Button^ basic_button_period;
	private: Button^ basic_button_seven;
	private: IContainer^ components;
	private: double firstValue;
	private: double secondValue;
	private: char action;
	private: bool calculated;
	private: Hashtable lenghts;
	private: Hashtable weights;
	private: Hashtable areas;
	private: Hashtable temperatures;
	private: Hashtable speeds;
		   
		   
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
			   this->convert_button_period = (gcnew System::Windows::Forms::Button());
			   this->convert_button_zero = (gcnew System::Windows::Forms::Button());
			   this->convert_button_one = (gcnew System::Windows::Forms::Button());
			   this->convert_button_two = (gcnew System::Windows::Forms::Button());
			   this->convert_button_three = (gcnew System::Windows::Forms::Button());
			   this->convert_button_six = (gcnew System::Windows::Forms::Button());
			   this->convert_button_five = (gcnew System::Windows::Forms::Button());
			   this->convert_button_four = (gcnew System::Windows::Forms::Button());
			   this->convert_button_seven = (gcnew System::Windows::Forms::Button());
			   this->convert_button_eight = (gcnew System::Windows::Forms::Button());
			   this->convert_button_nine = (gcnew System::Windows::Forms::Button());
			   this->convert_button_erase = (gcnew System::Windows::Forms::Button());
			   this->convert_button_erase_everything = (gcnew System::Windows::Forms::Button());
			   this->panel_basic = (gcnew System::Windows::Forms::Panel());
			   this->splitContainer2 = (gcnew System::Windows::Forms::SplitContainer());
			   this->basic_label_action = (gcnew System::Windows::Forms::Label());
			   this->basic_label_result_input = (gcnew System::Windows::Forms::Label());
			   this->tableLayoutPanel2 = (gcnew System::Windows::Forms::TableLayoutPanel());
			   this->basic_button_zero = (gcnew System::Windows::Forms::Button());
			   this->basic_button_plus_minus = (gcnew System::Windows::Forms::Button());
			   this->basic_button_equals = (gcnew System::Windows::Forms::Button());
			   this->basic_button_period = (gcnew System::Windows::Forms::Button());
			   this->basic_button_two = (gcnew System::Windows::Forms::Button());
			   this->basic_button_one = (gcnew System::Windows::Forms::Button());
			   this->basic_button_addition = (gcnew System::Windows::Forms::Button());
			   this->basic_button_three = (gcnew System::Windows::Forms::Button());
			   this->basic_button_five = (gcnew System::Windows::Forms::Button());
			   this->basic_button_four = (gcnew System::Windows::Forms::Button());
			   this->basic_button_subtraction = (gcnew System::Windows::Forms::Button());
			   this->basic_button_six = (gcnew System::Windows::Forms::Button());
			   this->basic_button_nine = (gcnew System::Windows::Forms::Button());
			   this->basic_button_seven = (gcnew System::Windows::Forms::Button());
			   this->basic_button_miltiplication = (gcnew System::Windows::Forms::Button());
			   this->basic_button_eight = (gcnew System::Windows::Forms::Button());
			   this->basic_button_power_two = (gcnew System::Windows::Forms::Button());
			   this->basic_button_one_divided_by = (gcnew System::Windows::Forms::Button());
			   this->basic_button_division = (gcnew System::Windows::Forms::Button());
			   this->basic_button_square_root = (gcnew System::Windows::Forms::Button());
			   this->basic_button_clear_everything = (gcnew System::Windows::Forms::Button());
			   this->basic_button_percent = (gcnew System::Windows::Forms::Button());
			   this->basic_button_delete = (gcnew System::Windows::Forms::Button());
			   this->basic_button_clear = (gcnew System::Windows::Forms::Button());
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
			   this->button_controll_left_menu->Click += gcnew System::EventHandler(this, &MyForm::button_controll_left_menu_Click);
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
			   this->combo_from->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
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
			   this->label_conversion_input->Font = (gcnew System::Drawing::Font(L"Roboto Slab ExtraLight", 12));
			   this->label_conversion_input->Location = System::Drawing::Point(0, 0);
			   this->label_conversion_input->Name = L"label_conversion_input";
			   this->label_conversion_input->Size = System::Drawing::Size(306, 29);
			   this->label_conversion_input->TabIndex = 1;
			   this->label_conversion_input->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			   // 
			   // combo_to
			   // 
			   this->combo_to->Dock = System::Windows::Forms::DockStyle::Bottom;
			   this->combo_to->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
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
			   this->label_conversion_result->Font = (gcnew System::Drawing::Font(L"Roboto Slab SemiBold", 20.25F, System::Drawing::FontStyle::Bold));
			   this->label_conversion_result->Location = System::Drawing::Point(0, 0);
			   this->label_conversion_result->Name = L"label_conversion_result";
			   this->label_conversion_result->Size = System::Drawing::Size(306, 27);
			   this->label_conversion_result->TabIndex = 0;
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
			   this->tableLayoutPanel1->Controls->Add(this->convert_button_period, 2, 4);
			   this->tableLayoutPanel1->Controls->Add(this->convert_button_zero, 1, 4);
			   this->tableLayoutPanel1->Controls->Add(this->convert_button_one, 0, 3);
			   this->tableLayoutPanel1->Controls->Add(this->convert_button_two, 0, 3);
			   this->tableLayoutPanel1->Controls->Add(this->convert_button_three, 0, 3);
			   this->tableLayoutPanel1->Controls->Add(this->convert_button_six, 0, 2);
			   this->tableLayoutPanel1->Controls->Add(this->convert_button_five, 0, 2);
			   this->tableLayoutPanel1->Controls->Add(this->convert_button_four, 0, 2);
			   this->tableLayoutPanel1->Controls->Add(this->convert_button_seven, 0, 1);
			   this->tableLayoutPanel1->Controls->Add(this->convert_button_eight, 0, 1);
			   this->tableLayoutPanel1->Controls->Add(this->convert_button_nine, 0, 1);
			   this->tableLayoutPanel1->Controls->Add(this->convert_button_erase, 2, 0);
			   this->tableLayoutPanel1->Controls->Add(this->convert_button_erase_everything, 1, 0);
			   this->tableLayoutPanel1->Location = System::Drawing::Point(0, 106);
			   this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			   this->tableLayoutPanel1->RowCount = 5;
			   this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 20)));
			   this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 20)));
			   this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 20)));
			   this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 20)));
			   this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 20)));
			   this->tableLayoutPanel1->Size = System::Drawing::Size(303, 427);
			   this->tableLayoutPanel1->TabIndex = 2;
			   // 
			   // convert_button_period
			   // 
			   this->convert_button_period->Dock = System::Windows::Forms::DockStyle::Fill;
			   this->convert_button_period->Font = (gcnew System::Drawing::Font(L"Roboto Slab", 14.25F));
			   this->convert_button_period->Location = System::Drawing::Point(204, 343);
			   this->convert_button_period->Name = L"convert_button_period";
			   this->convert_button_period->Size = System::Drawing::Size(96, 81);
			   this->convert_button_period->TabIndex = 13;
			   this->convert_button_period->Text = L",";
			   this->convert_button_period->UseVisualStyleBackColor = true;
			   this->convert_button_period->Click += gcnew System::EventHandler(this, &MyForm::convert_button_period_Click);
			   // 
			   // convert_button_zero
			   // 
			   this->convert_button_zero->Dock = System::Windows::Forms::DockStyle::Fill;
			   this->convert_button_zero->Font = (gcnew System::Drawing::Font(L"Roboto Slab", 14.25F));
			   this->convert_button_zero->Location = System::Drawing::Point(103, 343);
			   this->convert_button_zero->Name = L"convert_button_zero";
			   this->convert_button_zero->Size = System::Drawing::Size(95, 81);
			   this->convert_button_zero->TabIndex = 12;
			   this->convert_button_zero->Text = L"0";
			   this->convert_button_zero->UseVisualStyleBackColor = true;
			   this->convert_button_zero->Click += gcnew System::EventHandler(this, &MyForm::convert_button_zero_Click);
			   // 
			   // convert_button_one
			   // 
			   this->convert_button_one->Dock = System::Windows::Forms::DockStyle::Fill;
			   this->convert_button_one->Font = (gcnew System::Drawing::Font(L"Roboto Slab", 14.25F));
			   this->convert_button_one->Location = System::Drawing::Point(3, 258);
			   this->convert_button_one->Name = L"convert_button_one";
			   this->convert_button_one->Size = System::Drawing::Size(94, 79);
			   this->convert_button_one->TabIndex = 11;
			   this->convert_button_one->Text = L"1";
			   this->convert_button_one->UseVisualStyleBackColor = true;
			   this->convert_button_one->Click += gcnew System::EventHandler(this, &MyForm::convert_button_one_Click);
			   // 
			   // convert_button_two
			   // 
			   this->convert_button_two->Dock = System::Windows::Forms::DockStyle::Fill;
			   this->convert_button_two->Font = (gcnew System::Drawing::Font(L"Roboto Slab", 14.25F));
			   this->convert_button_two->Location = System::Drawing::Point(103, 258);
			   this->convert_button_two->Name = L"convert_button_two";
			   this->convert_button_two->Size = System::Drawing::Size(95, 79);
			   this->convert_button_two->TabIndex = 10;
			   this->convert_button_two->Text = L"2";
			   this->convert_button_two->UseVisualStyleBackColor = true;
			   this->convert_button_two->Click += gcnew System::EventHandler(this, &MyForm::convert_button_two_Click);
			   // 
			   // convert_button_three
			   // 
			   this->convert_button_three->Dock = System::Windows::Forms::DockStyle::Fill;
			   this->convert_button_three->Font = (gcnew System::Drawing::Font(L"Roboto Slab", 14.25F));
			   this->convert_button_three->Location = System::Drawing::Point(204, 258);
			   this->convert_button_three->Name = L"convert_button_three";
			   this->convert_button_three->Size = System::Drawing::Size(96, 79);
			   this->convert_button_three->TabIndex = 9;
			   this->convert_button_three->Text = L"3";
			   this->convert_button_three->UseVisualStyleBackColor = true;
			   this->convert_button_three->Click += gcnew System::EventHandler(this, &MyForm::convert_button_three_Click);
			   // 
			   // convert_button_six
			   // 
			   this->convert_button_six->Dock = System::Windows::Forms::DockStyle::Fill;
			   this->convert_button_six->Font = (gcnew System::Drawing::Font(L"Roboto Slab", 14.25F));
			   this->convert_button_six->Location = System::Drawing::Point(204, 173);
			   this->convert_button_six->Name = L"convert_button_six";
			   this->convert_button_six->Size = System::Drawing::Size(96, 79);
			   this->convert_button_six->TabIndex = 8;
			   this->convert_button_six->Text = L"6";
			   this->convert_button_six->UseVisualStyleBackColor = true;
			   this->convert_button_six->Click += gcnew System::EventHandler(this, &MyForm::convert_button_six_Click);
			   // 
			   // convert_button_five
			   // 
			   this->convert_button_five->Dock = System::Windows::Forms::DockStyle::Fill;
			   this->convert_button_five->Font = (gcnew System::Drawing::Font(L"Roboto Slab", 14.25F));
			   this->convert_button_five->Location = System::Drawing::Point(103, 173);
			   this->convert_button_five->Name = L"convert_button_five";
			   this->convert_button_five->Size = System::Drawing::Size(95, 79);
			   this->convert_button_five->TabIndex = 7;
			   this->convert_button_five->Text = L"5";
			   this->convert_button_five->UseVisualStyleBackColor = true;
			   this->convert_button_five->Click += gcnew System::EventHandler(this, &MyForm::convert_button_five_Click);
			   // 
			   // convert_button_four
			   // 
			   this->convert_button_four->Dock = System::Windows::Forms::DockStyle::Fill;
			   this->convert_button_four->Font = (gcnew System::Drawing::Font(L"Roboto Slab", 14.25F));
			   this->convert_button_four->Location = System::Drawing::Point(3, 173);
			   this->convert_button_four->Name = L"convert_button_four";
			   this->convert_button_four->Size = System::Drawing::Size(94, 79);
			   this->convert_button_four->TabIndex = 6;
			   this->convert_button_four->Text = L"4";
			   this->convert_button_four->UseVisualStyleBackColor = true;
			   this->convert_button_four->Click += gcnew System::EventHandler(this, &MyForm::convert_button_four_Click);
			   // 
			   // convert_button_seven
			   // 
			   this->convert_button_seven->Dock = System::Windows::Forms::DockStyle::Fill;
			   this->convert_button_seven->Font = (gcnew System::Drawing::Font(L"Roboto Slab", 14.25F));
			   this->convert_button_seven->Location = System::Drawing::Point(3, 88);
			   this->convert_button_seven->Name = L"convert_button_seven";
			   this->convert_button_seven->Size = System::Drawing::Size(94, 79);
			   this->convert_button_seven->TabIndex = 5;
			   this->convert_button_seven->Text = L"7";
			   this->convert_button_seven->UseVisualStyleBackColor = true;
			   this->convert_button_seven->Click += gcnew System::EventHandler(this, &MyForm::convert_button_seven_Click);
			   // 
			   // convert_button_eight
			   // 
			   this->convert_button_eight->Dock = System::Windows::Forms::DockStyle::Fill;
			   this->convert_button_eight->Font = (gcnew System::Drawing::Font(L"Roboto Slab", 14.25F));
			   this->convert_button_eight->Location = System::Drawing::Point(103, 88);
			   this->convert_button_eight->Name = L"convert_button_eight";
			   this->convert_button_eight->Size = System::Drawing::Size(95, 79);
			   this->convert_button_eight->TabIndex = 4;
			   this->convert_button_eight->Text = L"8";
			   this->convert_button_eight->UseVisualStyleBackColor = true;
			   this->convert_button_eight->Click += gcnew System::EventHandler(this, &MyForm::convert_button_eight_Click);
			   // 
			   // convert_button_nine
			   // 
			   this->convert_button_nine->Dock = System::Windows::Forms::DockStyle::Fill;
			   this->convert_button_nine->Font = (gcnew System::Drawing::Font(L"Roboto Slab", 14.25F));
			   this->convert_button_nine->Location = System::Drawing::Point(204, 88);
			   this->convert_button_nine->Name = L"convert_button_nine";
			   this->convert_button_nine->Size = System::Drawing::Size(96, 79);
			   this->convert_button_nine->TabIndex = 3;
			   this->convert_button_nine->Text = L"9";
			   this->convert_button_nine->UseVisualStyleBackColor = true;
			   this->convert_button_nine->Click += gcnew System::EventHandler(this, &MyForm::convert_button_nine_Click);
			   // 
			   // convert_button_erase
			   // 
			   this->convert_button_erase->Dock = System::Windows::Forms::DockStyle::Fill;
			   this->convert_button_erase->Font = (gcnew System::Drawing::Font(L"Roboto Slab", 14.25F));
			   this->convert_button_erase->Location = System::Drawing::Point(204, 3);
			   this->convert_button_erase->Name = L"convert_button_erase";
			   this->convert_button_erase->Size = System::Drawing::Size(96, 79);
			   this->convert_button_erase->TabIndex = 2;
			   this->convert_button_erase->Text = L"<=";
			   this->convert_button_erase->UseVisualStyleBackColor = true;
			   this->convert_button_erase->Click += gcnew System::EventHandler(this, &MyForm::convert_button_erase_Click);
			   // 
			   // convert_button_erase_everything
			   // 
			   this->convert_button_erase_everything->Dock = System::Windows::Forms::DockStyle::Fill;
			   this->convert_button_erase_everything->Font = (gcnew System::Drawing::Font(L"Roboto Slab", 14.25F));
			   this->convert_button_erase_everything->Location = System::Drawing::Point(103, 3);
			   this->convert_button_erase_everything->Name = L"convert_button_erase_everything";
			   this->convert_button_erase_everything->Size = System::Drawing::Size(95, 79);
			   this->convert_button_erase_everything->TabIndex = 1;
			   this->convert_button_erase_everything->Text = L"CE";
			   this->convert_button_erase_everything->UseVisualStyleBackColor = true;
			   this->convert_button_erase_everything->Click += gcnew System::EventHandler(this, &MyForm::convert_button_erase_everything_Click);
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
			   this->splitContainer2->Panel1->Controls->Add(this->basic_label_action);
			   // 
			   // splitContainer2.Panel2
			   // 
			   this->splitContainer2->Panel2->Controls->Add(this->basic_label_result_input);
			   this->splitContainer2->Size = System::Drawing::Size(306, 100);
			   this->splitContainer2->SplitterDistance = 47;
			   this->splitContainer2->TabIndex = 4;
			   // 
			   // basic_label_action
			   // 
			   this->basic_label_action->Dock = System::Windows::Forms::DockStyle::Fill;
			   this->basic_label_action->Font = (gcnew System::Drawing::Font(L"Roboto Slab ExtraLight", 12));
			   this->basic_label_action->Location = System::Drawing::Point(0, 0);
			   this->basic_label_action->Name = L"basic_label_action";
			   this->basic_label_action->Size = System::Drawing::Size(306, 47);
			   this->basic_label_action->TabIndex = 0;
			   this->basic_label_action->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			   // 
			   // basic_label_result_input
			   // 
			   this->basic_label_result_input->Dock = System::Windows::Forms::DockStyle::Fill;
			   this->basic_label_result_input->Font = (gcnew System::Drawing::Font(L"Roboto Slab SemiBold", 20.25F, System::Drawing::FontStyle::Bold));
			   this->basic_label_result_input->Location = System::Drawing::Point(0, 0);
			   this->basic_label_result_input->Name = L"basic_label_result_input";
			   this->basic_label_result_input->Size = System::Drawing::Size(306, 49);
			   this->basic_label_result_input->TabIndex = 1;
			   this->basic_label_result_input->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
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
			   this->tableLayoutPanel2->Controls->Add(this->basic_button_zero, 0, 5);
			   this->tableLayoutPanel2->Controls->Add(this->basic_button_plus_minus, 0, 5);
			   this->tableLayoutPanel2->Controls->Add(this->basic_button_equals, 0, 5);
			   this->tableLayoutPanel2->Controls->Add(this->basic_button_period, 0, 5);
			   this->tableLayoutPanel2->Controls->Add(this->basic_button_two, 0, 4);
			   this->tableLayoutPanel2->Controls->Add(this->basic_button_one, 0, 4);
			   this->tableLayoutPanel2->Controls->Add(this->basic_button_addition, 0, 4);
			   this->tableLayoutPanel2->Controls->Add(this->basic_button_three, 0, 4);
			   this->tableLayoutPanel2->Controls->Add(this->basic_button_five, 0, 3);
			   this->tableLayoutPanel2->Controls->Add(this->basic_button_four, 0, 3);
			   this->tableLayoutPanel2->Controls->Add(this->basic_button_subtraction, 0, 3);
			   this->tableLayoutPanel2->Controls->Add(this->basic_button_six, 0, 3);
			   this->tableLayoutPanel2->Controls->Add(this->basic_button_nine, 0, 2);
			   this->tableLayoutPanel2->Controls->Add(this->basic_button_seven, 0, 2);
			   this->tableLayoutPanel2->Controls->Add(this->basic_button_miltiplication, 0, 2);
			   this->tableLayoutPanel2->Controls->Add(this->basic_button_eight, 0, 2);
			   this->tableLayoutPanel2->Controls->Add(this->basic_button_power_two, 0, 1);
			   this->tableLayoutPanel2->Controls->Add(this->basic_button_one_divided_by, 0, 1);
			   this->tableLayoutPanel2->Controls->Add(this->basic_button_division, 0, 1);
			   this->tableLayoutPanel2->Controls->Add(this->basic_button_square_root, 0, 1);
			   this->tableLayoutPanel2->Controls->Add(this->basic_button_clear_everything, 0, 0);
			   this->tableLayoutPanel2->Controls->Add(this->basic_button_percent, 0, 0);
			   this->tableLayoutPanel2->Controls->Add(this->basic_button_delete, 0, 0);
			   this->tableLayoutPanel2->Controls->Add(this->basic_button_clear, 0, 0);
			   this->tableLayoutPanel2->Location = System::Drawing::Point(0, 100);
			   this->tableLayoutPanel2->Name = L"tableLayoutPanel2";
			   this->tableLayoutPanel2->RowCount = 6;
			   this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 16.66667F)));
			   this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 16.66667F)));
			   this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 16.66667F)));
			   this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 16.66667F)));
			   this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 16.66667F)));
			   this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 16.66667F)));
			   this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 20)));
			   this->tableLayoutPanel2->Size = System::Drawing::Size(303, 433);
			   this->tableLayoutPanel2->TabIndex = 3;
			   // 
			   // basic_button_zero
			   // 
			   this->basic_button_zero->Dock = System::Windows::Forms::DockStyle::Fill;
			   this->basic_button_zero->Font = (gcnew System::Drawing::Font(L"Roboto Slab", 14.25F));
			   this->basic_button_zero->Location = System::Drawing::Point(78, 363);
			   this->basic_button_zero->Name = L"basic_button_zero";
			   this->basic_button_zero->Size = System::Drawing::Size(69, 67);
			   this->basic_button_zero->TabIndex = 46;
			   this->basic_button_zero->Text = L"0";
			   this->basic_button_zero->UseVisualStyleBackColor = true;
			   this->basic_button_zero->Click += gcnew System::EventHandler(this, &MyForm::basic_button_zero_Click);
			   // 
			   // basic_button_plus_minus
			   // 
			   this->basic_button_plus_minus->Dock = System::Windows::Forms::DockStyle::Fill;
			   this->basic_button_plus_minus->Font = (gcnew System::Drawing::Font(L"Roboto Slab", 14.25F));
			   this->basic_button_plus_minus->Location = System::Drawing::Point(3, 363);
			   this->basic_button_plus_minus->Name = L"basic_button_plus_minus";
			   this->basic_button_plus_minus->Size = System::Drawing::Size(69, 67);
			   this->basic_button_plus_minus->TabIndex = 45;
			   this->basic_button_plus_minus->Text = L"±";
			   this->basic_button_plus_minus->UseVisualStyleBackColor = true;
			   this->basic_button_plus_minus->Click += gcnew System::EventHandler(this, &MyForm::basic_button_plus_minus_Click);
			   // 
			   // basic_button_equals
			   // 
			   this->basic_button_equals->Dock = System::Windows::Forms::DockStyle::Fill;
			   this->basic_button_equals->Font = (gcnew System::Drawing::Font(L"Roboto Slab", 14.25F));
			   this->basic_button_equals->Location = System::Drawing::Point(228, 363);
			   this->basic_button_equals->Name = L"basic_button_equals";
			   this->basic_button_equals->Size = System::Drawing::Size(72, 67);
			   this->basic_button_equals->TabIndex = 44;
			   this->basic_button_equals->Text = L"=";
			   this->basic_button_equals->UseVisualStyleBackColor = true;
			   this->basic_button_equals->Click += gcnew System::EventHandler(this, &MyForm::basic_button_equals_Click);
			   // 
			   // basic_button_period
			   // 
			   this->basic_button_period->Dock = System::Windows::Forms::DockStyle::Fill;
			   this->basic_button_period->Font = (gcnew System::Drawing::Font(L"Roboto Slab", 14.25F));
			   this->basic_button_period->Location = System::Drawing::Point(153, 363);
			   this->basic_button_period->Name = L"basic_button_period";
			   this->basic_button_period->Size = System::Drawing::Size(69, 67);
			   this->basic_button_period->TabIndex = 43;
			   this->basic_button_period->Text = L",";
			   this->basic_button_period->UseVisualStyleBackColor = true;
			   this->basic_button_period->Click += gcnew System::EventHandler(this, &MyForm::basic_button_period_Click);
			   // 
			   // basic_button_two
			   // 
			   this->basic_button_two->Dock = System::Windows::Forms::DockStyle::Fill;
			   this->basic_button_two->Font = (gcnew System::Drawing::Font(L"Roboto Slab", 14.25F));
			   this->basic_button_two->Location = System::Drawing::Point(78, 291);
			   this->basic_button_two->Name = L"basic_button_two";
			   this->basic_button_two->Size = System::Drawing::Size(69, 66);
			   this->basic_button_two->TabIndex = 42;
			   this->basic_button_two->Text = L"2";
			   this->basic_button_two->UseVisualStyleBackColor = true;
			   this->basic_button_two->Click += gcnew System::EventHandler(this, &MyForm::basic_button_two_Click);
			   // 
			   // basic_button_one
			   // 
			   this->basic_button_one->Dock = System::Windows::Forms::DockStyle::Fill;
			   this->basic_button_one->Font = (gcnew System::Drawing::Font(L"Roboto Slab", 14.25F));
			   this->basic_button_one->Location = System::Drawing::Point(3, 291);
			   this->basic_button_one->Name = L"basic_button_one";
			   this->basic_button_one->Size = System::Drawing::Size(69, 66);
			   this->basic_button_one->TabIndex = 41;
			   this->basic_button_one->Text = L"1";
			   this->basic_button_one->UseVisualStyleBackColor = true;
			   this->basic_button_one->Click += gcnew System::EventHandler(this, &MyForm::basic_button_one_Click);
			   // 
			   // basic_button_addition
			   // 
			   this->basic_button_addition->Dock = System::Windows::Forms::DockStyle::Fill;
			   this->basic_button_addition->Font = (gcnew System::Drawing::Font(L"Roboto Slab", 14.25F));
			   this->basic_button_addition->Location = System::Drawing::Point(228, 291);
			   this->basic_button_addition->Name = L"basic_button_addition";
			   this->basic_button_addition->Size = System::Drawing::Size(72, 66);
			   this->basic_button_addition->TabIndex = 40;
			   this->basic_button_addition->Text = L"+";
			   this->basic_button_addition->UseVisualStyleBackColor = true;
			   this->basic_button_addition->Click += gcnew System::EventHandler(this, &MyForm::basic_button_addition_Click);
			   // 
			   // basic_button_three
			   // 
			   this->basic_button_three->Dock = System::Windows::Forms::DockStyle::Fill;
			   this->basic_button_three->Font = (gcnew System::Drawing::Font(L"Roboto Slab", 14.25F));
			   this->basic_button_three->Location = System::Drawing::Point(153, 291);
			   this->basic_button_three->Name = L"basic_button_three";
			   this->basic_button_three->Size = System::Drawing::Size(69, 66);
			   this->basic_button_three->TabIndex = 39;
			   this->basic_button_three->Text = L"3";
			   this->basic_button_three->UseVisualStyleBackColor = true;
			   this->basic_button_three->Click += gcnew System::EventHandler(this, &MyForm::basic_button_three_Click);
			   // 
			   // basic_button_five
			   // 
			   this->basic_button_five->Dock = System::Windows::Forms::DockStyle::Fill;
			   this->basic_button_five->Font = (gcnew System::Drawing::Font(L"Roboto Slab", 14.25F));
			   this->basic_button_five->Location = System::Drawing::Point(78, 219);
			   this->basic_button_five->Name = L"basic_button_five";
			   this->basic_button_five->Size = System::Drawing::Size(69, 66);
			   this->basic_button_five->TabIndex = 38;
			   this->basic_button_five->Text = L"5";
			   this->basic_button_five->UseVisualStyleBackColor = true;
			   this->basic_button_five->Click += gcnew System::EventHandler(this, &MyForm::basic_button_five_Click);
			   // 
			   // basic_button_four
			   // 
			   this->basic_button_four->Dock = System::Windows::Forms::DockStyle::Fill;
			   this->basic_button_four->Font = (gcnew System::Drawing::Font(L"Roboto Slab", 14.25F));
			   this->basic_button_four->Location = System::Drawing::Point(3, 219);
			   this->basic_button_four->Name = L"basic_button_four";
			   this->basic_button_four->Size = System::Drawing::Size(69, 66);
			   this->basic_button_four->TabIndex = 37;
			   this->basic_button_four->Text = L"4";
			   this->basic_button_four->UseVisualStyleBackColor = true;
			   this->basic_button_four->Click += gcnew System::EventHandler(this, &MyForm::basic_button_four_Click);
			   // 
			   // basic_button_subtraction
			   // 
			   this->basic_button_subtraction->Dock = System::Windows::Forms::DockStyle::Fill;
			   this->basic_button_subtraction->Font = (gcnew System::Drawing::Font(L"Roboto Slab", 14.25F));
			   this->basic_button_subtraction->Location = System::Drawing::Point(228, 219);
			   this->basic_button_subtraction->Name = L"basic_button_subtraction";
			   this->basic_button_subtraction->Size = System::Drawing::Size(72, 66);
			   this->basic_button_subtraction->TabIndex = 36;
			   this->basic_button_subtraction->Text = L"-";
			   this->basic_button_subtraction->UseVisualStyleBackColor = true;
			   this->basic_button_subtraction->Click += gcnew System::EventHandler(this, &MyForm::basic_button_subtraction_Click);
			   // 
			   // basic_button_six
			   // 
			   this->basic_button_six->Dock = System::Windows::Forms::DockStyle::Fill;
			   this->basic_button_six->Font = (gcnew System::Drawing::Font(L"Roboto Slab", 14.25F));
			   this->basic_button_six->Location = System::Drawing::Point(153, 219);
			   this->basic_button_six->Name = L"basic_button_six";
			   this->basic_button_six->Size = System::Drawing::Size(69, 66);
			   this->basic_button_six->TabIndex = 35;
			   this->basic_button_six->Text = L"6";
			   this->basic_button_six->UseVisualStyleBackColor = true;
			   this->basic_button_six->Click += gcnew System::EventHandler(this, &MyForm::basic_button_six_Click);
			   // 
			   // basic_button_nine
			   // 
			   this->basic_button_nine->Dock = System::Windows::Forms::DockStyle::Fill;
			   this->basic_button_nine->Font = (gcnew System::Drawing::Font(L"Roboto Slab", 14.25F));
			   this->basic_button_nine->Location = System::Drawing::Point(78, 147);
			   this->basic_button_nine->Name = L"basic_button_nine";
			   this->basic_button_nine->Size = System::Drawing::Size(69, 66);
			   this->basic_button_nine->TabIndex = 34;
			   this->basic_button_nine->Text = L"9";
			   this->basic_button_nine->UseVisualStyleBackColor = true;
			   this->basic_button_nine->Click += gcnew System::EventHandler(this, &MyForm::basic_button_nine_Click);
			   // 
			   // basic_button_seven
			   // 
			   this->basic_button_seven->Dock = System::Windows::Forms::DockStyle::Fill;
			   this->basic_button_seven->Font = (gcnew System::Drawing::Font(L"Roboto Slab", 14.25F));
			   this->basic_button_seven->Location = System::Drawing::Point(3, 147);
			   this->basic_button_seven->Name = L"basic_button_seven";
			   this->basic_button_seven->Size = System::Drawing::Size(69, 66);
			   this->basic_button_seven->TabIndex = 32;
			   this->basic_button_seven->Text = L"7";
			   this->basic_button_seven->UseVisualStyleBackColor = true;
			   this->basic_button_seven->Click += gcnew System::EventHandler(this, &MyForm::basic_button_seven_Click);
			   // 
			   // basic_button_miltiplication
			   // 
			   this->basic_button_miltiplication->Dock = System::Windows::Forms::DockStyle::Fill;
			   this->basic_button_miltiplication->Font = (gcnew System::Drawing::Font(L"Roboto Slab", 14.25F));
			   this->basic_button_miltiplication->Location = System::Drawing::Point(228, 147);
			   this->basic_button_miltiplication->Name = L"basic_button_miltiplication";
			   this->basic_button_miltiplication->Size = System::Drawing::Size(72, 66);
			   this->basic_button_miltiplication->TabIndex = 33;
			   this->basic_button_miltiplication->Text = L"*";
			   this->basic_button_miltiplication->UseVisualStyleBackColor = true;
			   this->basic_button_miltiplication->Click += gcnew System::EventHandler(this, &MyForm::basic_button_miltiplication_Click);
			   // 
			   // basic_button_eight
			   // 
			   this->basic_button_eight->Dock = System::Windows::Forms::DockStyle::Fill;
			   this->basic_button_eight->Font = (gcnew System::Drawing::Font(L"Roboto Slab", 14.25F));
			   this->basic_button_eight->Location = System::Drawing::Point(153, 147);
			   this->basic_button_eight->Name = L"basic_button_eight";
			   this->basic_button_eight->Size = System::Drawing::Size(69, 66);
			   this->basic_button_eight->TabIndex = 31;
			   this->basic_button_eight->Text = L"8";
			   this->basic_button_eight->UseVisualStyleBackColor = true;
			   this->basic_button_eight->Click += gcnew System::EventHandler(this, &MyForm::basic_button_eight_Click);
			   // 
			   // basic_button_power_two
			   // 
			   this->basic_button_power_two->Dock = System::Windows::Forms::DockStyle::Fill;
			   this->basic_button_power_two->Font = (gcnew System::Drawing::Font(L"Roboto Slab", 14.25F));
			   this->basic_button_power_two->Location = System::Drawing::Point(78, 75);
			   this->basic_button_power_two->Name = L"basic_button_power_two";
			   this->basic_button_power_two->Size = System::Drawing::Size(69, 66);
			   this->basic_button_power_two->TabIndex = 30;
			   this->basic_button_power_two->Text = L"x²";
			   this->basic_button_power_two->UseVisualStyleBackColor = true;
			   this->basic_button_power_two->Click += gcnew System::EventHandler(this, &MyForm::basic_button_power_two_Click);
			   // 
			   // basic_button_one_divided_by
			   // 
			   this->basic_button_one_divided_by->Dock = System::Windows::Forms::DockStyle::Fill;
			   this->basic_button_one_divided_by->Font = (gcnew System::Drawing::Font(L"Roboto Slab", 14.25F));
			   this->basic_button_one_divided_by->Location = System::Drawing::Point(3, 75);
			   this->basic_button_one_divided_by->Name = L"basic_button_one_divided_by";
			   this->basic_button_one_divided_by->Size = System::Drawing::Size(69, 66);
			   this->basic_button_one_divided_by->TabIndex = 29;
			   this->basic_button_one_divided_by->Text = L"⅟x";
			   this->basic_button_one_divided_by->UseVisualStyleBackColor = true;
			   this->basic_button_one_divided_by->Click += gcnew System::EventHandler(this, &MyForm::basic_button_one_divided_by_Click);
			   // 
			   // basic_button_division
			   // 
			   this->basic_button_division->Dock = System::Windows::Forms::DockStyle::Fill;
			   this->basic_button_division->Font = (gcnew System::Drawing::Font(L"Roboto Slab", 14.25F));
			   this->basic_button_division->Location = System::Drawing::Point(228, 75);
			   this->basic_button_division->Name = L"basic_button_division";
			   this->basic_button_division->Size = System::Drawing::Size(72, 66);
			   this->basic_button_division->TabIndex = 28;
			   this->basic_button_division->Text = L"/";
			   this->basic_button_division->UseVisualStyleBackColor = true;
			   this->basic_button_division->Click += gcnew System::EventHandler(this, &MyForm::basic_button_division_Click);
			   // 
			   // basic_button_square_root
			   // 
			   this->basic_button_square_root->Dock = System::Windows::Forms::DockStyle::Fill;
			   this->basic_button_square_root->Font = (gcnew System::Drawing::Font(L"Roboto Slab", 14.25F));
			   this->basic_button_square_root->Location = System::Drawing::Point(153, 75);
			   this->basic_button_square_root->Name = L"basic_button_square_root";
			   this->basic_button_square_root->Size = System::Drawing::Size(69, 66);
			   this->basic_button_square_root->TabIndex = 27;
			   this->basic_button_square_root->Text = L"√x";
			   this->basic_button_square_root->UseVisualStyleBackColor = true;
			   this->basic_button_square_root->Click += gcnew System::EventHandler(this, &MyForm::basic_button_square_root_Click);
			   // 
			   // basic_button_clear_everything
			   // 
			   this->basic_button_clear_everything->Dock = System::Windows::Forms::DockStyle::Fill;
			   this->basic_button_clear_everything->Font = (gcnew System::Drawing::Font(L"Roboto Slab", 14.25F));
			   this->basic_button_clear_everything->Location = System::Drawing::Point(78, 3);
			   this->basic_button_clear_everything->Name = L"basic_button_clear_everything";
			   this->basic_button_clear_everything->Size = System::Drawing::Size(69, 66);
			   this->basic_button_clear_everything->TabIndex = 26;
			   this->basic_button_clear_everything->Text = L"CE";
			   this->basic_button_clear_everything->UseVisualStyleBackColor = true;
			   this->basic_button_clear_everything->Click += gcnew System::EventHandler(this, &MyForm::basic_button_clear_everything_Click);
			   // 
			   // basic_button_percent
			   // 
			   this->basic_button_percent->Dock = System::Windows::Forms::DockStyle::Fill;
			   this->basic_button_percent->Font = (gcnew System::Drawing::Font(L"Roboto Slab", 14.25F));
			   this->basic_button_percent->Location = System::Drawing::Point(3, 3);
			   this->basic_button_percent->Name = L"basic_button_percent";
			   this->basic_button_percent->Size = System::Drawing::Size(69, 66);
			   this->basic_button_percent->TabIndex = 25;
			   this->basic_button_percent->Text = L"%";
			   this->basic_button_percent->UseVisualStyleBackColor = true;
			   this->basic_button_percent->Click += gcnew System::EventHandler(this, &MyForm::basic_button_percent_Click);
			   // 
			   // basic_button_delete
			   // 
			   this->basic_button_delete->Dock = System::Windows::Forms::DockStyle::Fill;
			   this->basic_button_delete->Font = (gcnew System::Drawing::Font(L"Roboto Slab", 14.25F));
			   this->basic_button_delete->Location = System::Drawing::Point(228, 3);
			   this->basic_button_delete->Name = L"basic_button_delete";
			   this->basic_button_delete->Size = System::Drawing::Size(72, 66);
			   this->basic_button_delete->TabIndex = 24;
			   this->basic_button_delete->Text = L"<=";
			   this->basic_button_delete->UseVisualStyleBackColor = true;
			   this->basic_button_delete->Click += gcnew System::EventHandler(this, &MyForm::basic_button_delete_Click);
			   // 
			   // basic_button_clear
			   // 
			   this->basic_button_clear->Dock = System::Windows::Forms::DockStyle::Fill;
			   this->basic_button_clear->Font = (gcnew System::Drawing::Font(L"Roboto Slab", 14.25F));
			   this->basic_button_clear->Location = System::Drawing::Point(153, 3);
			   this->basic_button_clear->Name = L"basic_button_clear";
			   this->basic_button_clear->Size = System::Drawing::Size(69, 66);
			   this->basic_button_clear->TabIndex = 23;
			   this->basic_button_clear->Text = L"C";
			   this->basic_button_clear->UseVisualStyleBackColor = true;
			   this->basic_button_clear->Click += gcnew System::EventHandler(this, &MyForm::basic_button_clear_Click);
			   // 
			   // MyForm
			   // 
			   this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			   this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			   this->ClientSize = System::Drawing::Size(384, 561);
			   this->Controls->Add(this->panel_conversion);
			   this->Controls->Add(this->panel_basic);
			   this->Controls->Add(this->menu_left);
			   this->Controls->Add(this->menu_top);
			   this->KeyPreview = true;
			   this->MinimumSize = System::Drawing::Size(400, 600);
			   this->Name = L"MyForm";
			   this->Text = L"MyForm";
			   this->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm::KeyListener);
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

	private: Void button_controll_left_menu_Click(Object^ sender, EventArgs^ e) {
		if (menu_left->Visible && this->Width < 600) {
			menu_left->Visible = false;
		}else {
			menu_left->Visible = true;
		}
		GC::Collect();
	}

	private: Void menu_left_ItemClicked(Object^ sender, ToolStripItemClickedEventArgs^ e) {
		String^ selected = e->ClickedItem->Text;
		if (e->ClickedItem->Name->ToString()->Equals("button_basic")) {
			panel_basic->Show();
			panel_basic->Enabled = true;
			panel_conversion->Hide();
			panel_conversion->Enabled = false;
			basic_label_result_input->ResetText();
		}else {
			panel_basic->Hide();
			panel_basic->Enabled = false;
			panel_conversion->Show();
			panel_conversion->Enabled = true;

			combo_from->Items->Clear();
			combo_to->Items->Clear();
			if (selected->Equals("Length")) {
				for each (DictionaryEntry ^ val in lenghts) {
					combo_from->Items->Add(val->Key);
				}
				for each (DictionaryEntry ^ val in lenghts) {
					combo_to->Items->Add(val->Key);
				}
			}
			else if (selected->Equals("Weight")) {
				for each (DictionaryEntry ^ val in weights) {
					combo_from->Items->Add(val->Key);
				}
				for each (DictionaryEntry ^ val in weights) {
					combo_to->Items->Add(val->Key);
				}
			}
			else if (selected->Equals("Temperature")) {
				for each (DictionaryEntry ^ val in temperatures) {
					combo_from->Items->Add(val->Key);
				}
				for each (DictionaryEntry ^ val in temperatures) {
					combo_to->Items->Add(val->Key);
				}
			}
			else if (selected->Equals("Area")) {
				for each (DictionaryEntry ^ val in areas) {
					combo_from->Items->Add(val->Key);
				}
				for each (DictionaryEntry ^ val in areas) {
					combo_to->Items->Add(val->Key);
				}
			}
			else if (selected->Equals("Speed")) {
				for each (DictionaryEntry ^ val in speeds) {
					combo_from->Items->Add(val->Key);
				}
				for each (DictionaryEntry ^ val in speeds) {
					combo_to->Items->Add(val->Key);
				}
			}
			combo_to->SelectedIndex = 0;
			combo_from->SelectedIndex = 0;
			label_conversion_input->ResetText();
		}
		
		label_top_operaion->Text = selected;
		GC::Collect();
	}
	
	private: Void basic_button_equals_Click(Object^ sender, EventArgs^ e) {
			if (firstValue != System::Double::MinValue && action != ' ') {
				switch (action) {
				case '+':
					if (calculated) {
						firstValue = System::Convert::ToDouble(basic_label_result_input->Text);
						basic_label_action->Text = System::Convert::ToString(firstValue) + " + " + System::Convert::ToString(secondValue);
					}
					else {
						basic_label_action->Text += basic_label_result_input->Text;
						secondValue = System::Convert::ToDouble(basic_label_result_input->Text);
					}
					basic_label_result_input->Text = System::Convert::ToString(firstValue + secondValue);
					break;
				case '-':
					if (calculated) {
						firstValue = System::Convert::ToDouble(basic_label_result_input->Text);
						basic_label_action->Text = System::Convert::ToString(firstValue) + " - " + System::Convert::ToString(secondValue);
					}
					else {
						basic_label_action->Text += basic_label_result_input->Text;
						secondValue = System::Convert::ToDouble(basic_label_result_input->Text);
					}
					basic_label_result_input->Text = System::Convert::ToString(firstValue - secondValue);
					break;
				case '/':
					if (calculated) {
						firstValue = System::Convert::ToDouble(basic_label_result_input->Text);
						basic_label_action->Text = System::Convert::ToString(firstValue) + " / " + System::Convert::ToString(secondValue);
					}
					else {
						basic_label_action->Text += basic_label_result_input->Text;
						secondValue = System::Convert::ToDouble(basic_label_result_input->Text);
					}
					basic_label_result_input->Text = System::Convert::ToString(firstValue / secondValue);
					break;
				case '*':
					if (calculated) {
						firstValue = System::Convert::ToDouble(basic_label_result_input->Text);
						basic_label_action->Text = System::Convert::ToString(firstValue) + " * " + System::Convert::ToString(secondValue);
					}
					else {
						basic_label_action->Text += basic_label_result_input->Text;
						secondValue = System::Convert::ToDouble(basic_label_result_input->Text);
					}
					basic_label_result_input->Text = System::Convert::ToString(firstValue * secondValue);
					break;
				default:
					break;
				}
			}
			calculated = true;
		}
	
	private: Void basic_button_period_Click(Object^ sender, EventArgs^ e) {
			if (!basic_label_result_input->Text->Contains(",")) {
				basic_label_result_input->Text += ",";
			}
		}
	
	private: Void basic_button_addition_Click(Object^ sender, EventArgs^ e) {
			if (basic_label_result_input->Text->Length > 0) {
				firstValue = System::Convert::ToDouble(basic_label_result_input->Text);
				action = '+';
				basic_label_action->Text = basic_label_result_input->Text + " + ";
			}
			basic_label_result_input->ResetText();
		}
	
	private: Void basic_button_subtraction_Click(Object^ sender, EventArgs^ e) {
			if (basic_label_result_input->Text->Length > 0) {
				firstValue = System::Convert::ToDouble(basic_label_result_input->Text);
				action = '-';
				basic_label_action->Text = basic_label_result_input->Text + " - ";
			}
			basic_label_result_input->ResetText();
		}
	
	private: Void basic_button_plus_minus_Click(Object^ sender, EventArgs^ e) {
			if (basic_label_result_input->Text->Contains("-")) {
				basic_label_result_input->Text = basic_label_result_input->Text->Substring(1);
			}
			else {
				basic_label_result_input->Text = basic_label_result_input->Text->Insert(0, "-");
			}
		}
	
	private: Void basic_button_miltiplication_Click(Object^ sender, EventArgs^ e) {
			if (basic_label_result_input->Text->Length > 0) {
				firstValue = System::Convert::ToDouble(basic_label_result_input->Text);
				action = '*';
				basic_label_action->Text = basic_label_result_input->Text + " * ";
			}
			basic_label_result_input->ResetText();
		}
	
	private: Void basic_button_division_Click(Object^ sender, EventArgs^ e) {
			if (basic_label_result_input->Text->Length > 0) {
				firstValue = System::Convert::ToDouble(basic_label_result_input->Text);
				action = '/';
				basic_label_action->Text = basic_label_result_input->Text + " / ";
			}
			basic_label_result_input->ResetText();
		}
	
	private: Void basic_button_one_divided_by_Click(Object^ sender, EventArgs^ e) {
			if (basic_label_result_input->Text->Length > 0) {
				double val;
				val = System::Double::Parse(basic_label_result_input->Text);
				basic_label_action->Text = L"⅟" + System::Convert::ToString(val);
				basic_label_result_input->Text = System::Convert::ToString(1 / val);
			}
		}
	
	private: Void basic_button_power_two_Click(Object^ sender, EventArgs^ e) {
			if (basic_label_result_input->Text->Length > 0) {
				double val;
				val = System::Double::Parse(basic_label_result_input->Text);
				basic_label_action->Text = System::Convert::ToString(val) + L"²";
				basic_label_result_input->Text = System::Convert::ToString(System::Math::Pow(val, 2));
			}
		}
	
	private: Void basic_button_square_root_Click(Object^ sender, EventArgs^ e) {
			if (basic_label_result_input->Text->Length > 0) {
				double val;
				val = System::Double::Parse(basic_label_result_input->Text);
				basic_label_action->Text = L"√" + System::Convert::ToString(val);
				basic_label_result_input->Text = System::Convert::ToString(System::Math::Sqrt(val));
			}
		}
	
	private: Void basic_button_percent_Click(Object^ sender, EventArgs^ e) {
			if (basic_label_result_input->Text->Length > 0) {
				double val;
				val = System::Double::Parse(basic_label_result_input->Text);
				basic_label_action->Text = L"%" + System::Convert::ToString(val);
				if ((int)val % 2) {
					basic_label_result_input->Text = "Odd";
				}else {
					basic_label_result_input->Text = "Even";
				}
			}
			calculated = true;
		}
	
	private: Void basic_button_delete_Click(Object^ sender, EventArgs^ e) {
			if (basic_label_result_input->Text->Length > 0) {
				basic_label_result_input->Text = basic_label_result_input->Text->Substring(0, basic_label_result_input->Text->Length - 1);
			}
		}
	
	private: Void basic_button_clear_Click(Object^ sender, EventArgs^ e) {
			basic_label_result_input->ResetText();
		}
	
	private: Void basic_button_clear_everything_Click(Object^ sender, EventArgs^ e) {
			action = ' ';
			firstValue = System::Double::MinValue;
			secondValue = System::Double::MinValue;
			basic_label_action->ResetText();
			basic_label_result_input->ResetText();
			calculated = false;
		}
	
	private: Void basic_button_zero_Click(Object^ sender, EventArgs^ e) {
			if (calculated) {
				basic_button_clear_everything->PerformClick();
			}
			basic_label_result_input->Text += "0";
		}
	
	private: Void basic_button_one_Click(Object^ sender, EventArgs^ e) {
			if (calculated) {
				basic_button_clear_everything->PerformClick();
			}
			basic_label_result_input->Text += "1";
		}
	
	private: Void basic_button_two_Click(Object^ sender, EventArgs^ e) {
			if (calculated) {
				basic_button_clear_everything->PerformClick();
			}
			basic_label_result_input->Text += "2";
		}
	
	private: Void basic_button_three_Click(Object^ sender, EventArgs^ e) {
			if (calculated) {
				basic_button_clear_everything->PerformClick();
			}
			basic_label_result_input->Text += "3";
		}
	
	private: Void basic_button_four_Click(Object^ sender, EventArgs^ e) {
			if (calculated) {
				basic_button_clear_everything->PerformClick();
			}
			basic_label_result_input->Text += "4";
		}
	
	private: Void basic_button_five_Click(Object^ sender, EventArgs^ e) {
			if (calculated) {
				basic_button_clear_everything->PerformClick();
			}
			basic_label_result_input->Text += "5";
		}
	
	private: Void basic_button_six_Click(Object^ sender, EventArgs^ e) {
			if (calculated) {
				basic_button_clear_everything->PerformClick();
			}
			basic_label_result_input->Text += "6";
		}
	
	private: Void basic_button_seven_Click(Object^ sender, EventArgs^ e) {
			if (calculated) {
				basic_button_clear_everything->PerformClick();
			}
			basic_label_result_input->Text += "7";
		}
	
	private: Void basic_button_eight_Click(Object^ sender, EventArgs^ e) {
			if (calculated) {
				basic_button_clear_everything->PerformClick();
			}
			basic_label_result_input->Text += "8";
		}
	
	private: Void basic_button_nine_Click(Object^ sender, EventArgs^ e) {
			if (calculated) {
				basic_button_clear_everything->PerformClick();
			}
			basic_label_result_input->Text += "9";
		}



	private: Void perform_conversion(Object^ sender, EventArgs^ e) {
		if (label_conversion_input->Text->Length > 0) {
			Console::Write(label_conversion_input->Text);
		}
	}
	
	private: Void convert_button_zero_Click(Object^ sender, EventArgs^ e) {
			label_conversion_input->Text += "0";
		}
	
	private: Void convert_button_one_Click(Object^ sender, EventArgs^ e) {
			label_conversion_input->Text += "1";
		}
	
	private: Void convert_button_two_Click(Object^ sender, EventArgs^ e) {
			label_conversion_input->Text += "2";
		}
	
	private: Void convert_button_three_Click(Object^ sender, EventArgs^ e) {
			label_conversion_input->Text += "3";
		}
	
	private: Void convert_button_four_Click(Object^ sender, EventArgs^ e) {
			label_conversion_input->Text += "4";
		}
	
	private: Void convert_button_five_Click(Object^ sender, EventArgs^ e) {
			label_conversion_input->Text += "5";
		}
	
	private: Void convert_button_six_Click(Object^ sender, EventArgs^ e) {
			label_conversion_input->Text += "6";
		}
	
	private: Void convert_button_seven_Click(Object^ sender, EventArgs^ e) {
			label_conversion_input->Text += "7";
		}
	
	private: Void convert_button_eight_Click(Object^ sender, EventArgs^ e) {
			label_conversion_input->Text += "8";
		}
	
	private: Void convert_button_nine_Click(Object^ sender, EventArgs^ e) {
			label_conversion_input->Text += "9";
		}
	
	private: Void convert_button_period_Click(Object^ sender, EventArgs^ e) {
			if (!label_conversion_input->Text->ToString()->Contains(",")) {
				if (label_conversion_input->Text->Length == 0) {
					label_conversion_input->Text += "0,";
				} else {
				label_conversion_input->Text += ",";
				}
			}
		}
	
	private: Void convert_button_erase_Click(Object^ sender, EventArgs^ e) {
			if (label_conversion_input->Text->Length > 0) {
				label_conversion_input->Text = label_conversion_input->Text->Substring(0, label_conversion_input->Text->Length - 1);
			}
		}
	
	private: Void convert_button_erase_everything_Click(Object^ sender, EventArgs^ e) {
		label_conversion_input->ResetText();
		label_conversion_result->ResetText();
	}
		   
	private: System::Void KeyListener(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
		Console::WriteLine(sender);
		if (panel_basic->Visible) {
			switch (e->KeyCode) {
				//Numpad number Keys
			case Keys::NumPad0:basic_button_zero->PerformClick();		break;
			case Keys::NumPad1:basic_button_one->PerformClick();		break;
			case Keys::NumPad2:basic_button_two->PerformClick();		break;
			case Keys::NumPad3:basic_button_three->PerformClick();		break;
			case Keys::NumPad4:basic_button_four->PerformClick();		break;
			case Keys::NumPad5:basic_button_five->PerformClick();		break;
			case Keys::NumPad6:basic_button_six->PerformClick();		break;
			case Keys::NumPad7:basic_button_seven->PerformClick();		break;
			case Keys::NumPad8:basic_button_eight->PerformClick();		break;
			case Keys::NumPad9:basic_button_nine->PerformClick();		break;
				//Number Keys
			case Keys::D0:basic_button_zero->PerformClick();			break;
			case Keys::D1:basic_button_one->PerformClick();				break;
			case Keys::D2:basic_button_two->PerformClick();				break;
			case Keys::D3:basic_button_three->PerformClick();			break;
			case Keys::D4:basic_button_four->PerformClick();			break;
			case Keys::D5:basic_button_five->PerformClick();			break;
			case Keys::D6:basic_button_six->PerformClick();				break;
			case Keys::D7:basic_button_seven->PerformClick();			break;
			case Keys::D8:basic_button_eight->PerformClick();			break;
			case Keys::D9:basic_button_nine->PerformClick();			break;
				//Action Buttons
			case Keys::Enter:basic_button_equals->PerformClick();				break;
			case Keys::Delete:basic_button_clear_everything->PerformClick();	break;
			case Keys::Multiply:basic_button_miltiplication->PerformClick();	break;
			case Keys::Add:basic_button_addition->PerformClick();				break;
			case Keys::Subtract: basic_button_subtraction->PerformClick();		break;
			case Keys::Decimal:basic_button_period->PerformClick();				break;
			case Keys::Divide:basic_button_division->PerformClick();			break;
			case Keys::Oemplus:basic_button_addition->PerformClick();			break;
			case Keys::OemMinus:basic_button_subtraction->PerformClick();		break;
			case Keys::OemPeriod:basic_button_period->PerformClick();			break;
			case Keys::Back:basic_button_delete->PerformClick();				break;
			default:
				break;
			}
		}else {
			switch (e->KeyCode) {
				//Numpad number Keys
			case Keys::NumPad0:convert_button_zero->PerformClick();		break;
			case Keys::NumPad1:convert_button_one->PerformClick();		break;
			case Keys::NumPad2:convert_button_two->PerformClick();		break;
			case Keys::NumPad3:convert_button_three->PerformClick();		break;
			case Keys::NumPad4:convert_button_four->PerformClick();		break;
			case Keys::NumPad5:convert_button_five->PerformClick();		break;
			case Keys::NumPad6:convert_button_six->PerformClick();		break;
			case Keys::NumPad7:convert_button_seven->PerformClick();		break;
			case Keys::NumPad8:convert_button_eight->PerformClick();		break;
			case Keys::NumPad9:convert_button_nine->PerformClick();		break;
				//Number Keys
			case Keys::D0:convert_button_zero->PerformClick();			break;
			case Keys::D1:convert_button_one->PerformClick();				break;
			case Keys::D2:convert_button_two->PerformClick();				break;
			case Keys::D3:convert_button_three->PerformClick();			break;
			case Keys::D4:convert_button_four->PerformClick();			break;
			case Keys::D5:convert_button_five->PerformClick();			break;
			case Keys::D6:convert_button_six->PerformClick();				break;
			case Keys::D7:convert_button_seven->PerformClick();			break;
			case Keys::D8:convert_button_eight->PerformClick();			break;
			case Keys::D9:convert_button_nine->PerformClick();			break;
				//Action Buttons
			case Keys::Delete:convert_button_erase_everything->PerformClick();	break;
			case Keys::Decimal:convert_button_period->PerformClick();				break;
			case Keys::OemPeriod:convert_button_period->PerformClick();			break;
			case Keys::Back:convert_button_erase->PerformClick();				break;
			default:
				break;
			}
		}
		e->Handled = true;
		e->SuppressKeyPress = true;
	}

};
}
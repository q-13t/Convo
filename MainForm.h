#pragma once


namespace Convo {

	//using namespace System;
	//using namespace System::Globalization;
	//using namespace System::ComponentModel;
	//using namespace System::Collections;
	//using namespace System::Windows::Forms;
	//using namespace System::Data;
	//using namespace System::Drawing;

	/// <summary>
	/// Summary for MainForm
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
	public:
		MainForm(void)
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
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel1;
	private: System::Windows::Forms::Button^ button_clear_all;
	private: System::Windows::Forms::Button^ button_equals;
	private: System::Windows::Forms::Button^ button_point;
	private: System::Windows::Forms::Button^ button_zero;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button_plus;
	private: System::Windows::Forms::Button^ button_three;
	private: System::Windows::Forms::Button^ button_two;
	private: System::Windows::Forms::Button^ button_clear;
	private: System::Windows::Forms::Button^ button_modulo;
	private: System::Windows::Forms::Button^ button_eight;
	private: System::Windows::Forms::Button^ button_four;
	private: System::Windows::Forms::Button^ button_mutiplication;
	private: System::Windows::Forms::Button^ button_nine;
	private: System::Windows::Forms::Button^ button_minus;
	private: System::Windows::Forms::Button^ button_one;
	private: System::Windows::Forms::Button^ button_five;
	private: System::Windows::Forms::Button^ button_six;
	private: System::Windows::Forms::Button^ button_seven;
	private: System::Windows::Forms::Button^ button15;
	private: System::Windows::Forms::Button^ button_erase;
	private: System::Windows::Forms::Button^ button13;
	private: System::Windows::Forms::Button^ button_division;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::SplitContainer^ splitContainer1;
	private: System::Windows::Forms::Label^ label_action;
	private: System::Windows::Forms::Label^ label_result_input;
	
		   double  firstValue;
		   double secondValue;
		   char action;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->button_eight = (gcnew System::Windows::Forms::Button());
			this->button_four = (gcnew System::Windows::Forms::Button());
			this->button_mutiplication = (gcnew System::Windows::Forms::Button());
			this->button_nine = (gcnew System::Windows::Forms::Button());
			this->button_minus = (gcnew System::Windows::Forms::Button());
			this->button_one = (gcnew System::Windows::Forms::Button());
			this->button_five = (gcnew System::Windows::Forms::Button());
			this->button_six = (gcnew System::Windows::Forms::Button());
			this->button_seven = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button_erase = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button_division = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button_point = (gcnew System::Windows::Forms::Button());
			this->button_zero = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button_plus = (gcnew System::Windows::Forms::Button());
			this->button_three = (gcnew System::Windows::Forms::Button());
			this->button_two = (gcnew System::Windows::Forms::Button());
			this->button_clear = (gcnew System::Windows::Forms::Button());
			this->button_modulo = (gcnew System::Windows::Forms::Button());
			this->button_clear_all = (gcnew System::Windows::Forms::Button());
			this->button_equals = (gcnew System::Windows::Forms::Button());
			this->splitContainer1 = (gcnew System::Windows::Forms::SplitContainer());
			this->label_action = (gcnew System::Windows::Forms::Label());
			this->label_result_input = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer1))->BeginInit();
			this->splitContainer1->Panel1->SuspendLayout();
			this->splitContainer1->Panel2->SuspendLayout();
			this->splitContainer1->SuspendLayout();
			this->SuspendLayout();
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tableLayoutPanel1->AutoSize = true;
			this->tableLayoutPanel1->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->tableLayoutPanel1->ColumnCount = 4;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				25)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				25)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				25)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				25)));
			this->tableLayoutPanel1->Controls->Add(this->button_eight, 3, 0);
			this->tableLayoutPanel1->Controls->Add(this->button_four, 3, 0);
			this->tableLayoutPanel1->Controls->Add(this->button_mutiplication, 3, 0);
			this->tableLayoutPanel1->Controls->Add(this->button_nine, 3, 0);
			this->tableLayoutPanel1->Controls->Add(this->button_minus, 3, 0);
			this->tableLayoutPanel1->Controls->Add(this->button_one, 3, 0);
			this->tableLayoutPanel1->Controls->Add(this->button_five, 3, 0);
			this->tableLayoutPanel1->Controls->Add(this->button_six, 3, 0);
			this->tableLayoutPanel1->Controls->Add(this->button_seven, 3, 0);
			this->tableLayoutPanel1->Controls->Add(this->button15, 3, 0);
			this->tableLayoutPanel1->Controls->Add(this->button_erase, 3, 0);
			this->tableLayoutPanel1->Controls->Add(this->button13, 3, 0);
			this->tableLayoutPanel1->Controls->Add(this->button_division, 3, 0);
			this->tableLayoutPanel1->Controls->Add(this->button11, 3, 0);
			this->tableLayoutPanel1->Controls->Add(this->button_point, 2, 2);
			this->tableLayoutPanel1->Controls->Add(this->button_zero, 1, 2);
			this->tableLayoutPanel1->Controls->Add(this->button8, 0, 2);
			this->tableLayoutPanel1->Controls->Add(this->button_plus, 2, 1);
			this->tableLayoutPanel1->Controls->Add(this->button_three, 1, 1);
			this->tableLayoutPanel1->Controls->Add(this->button_two, 0, 1);
			this->tableLayoutPanel1->Controls->Add(this->button_clear, 2, 0);
			this->tableLayoutPanel1->Controls->Add(this->button_modulo, 0, 0);
			this->tableLayoutPanel1->Controls->Add(this->button_clear_all, 1, 0);
			this->tableLayoutPanel1->Controls->Add(this->button_equals, 1, 5);
			this->tableLayoutPanel1->GrowStyle = System::Windows::Forms::TableLayoutPanelGrowStyle::AddColumns;
			this->tableLayoutPanel1->Location = System::Drawing::Point(9, 157);
			this->tableLayoutPanel1->Margin = System::Windows::Forms::Padding(0);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 6;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 16.66667F)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 16.66667F)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 16.66667F)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 16.66667F)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 16.66667F)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 16.66667F)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(272, 288);
			this->tableLayoutPanel1->TabIndex = 0;
			// 
			// button_eight
			// 
			this->button_eight->AutoSize = true;
			this->button_eight->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->button_eight->Dock = System::Windows::Forms::DockStyle::Fill;
			this->button_eight->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button_eight->Font = (gcnew System::Drawing::Font(L"Roboto Slab", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_eight->Location = System::Drawing::Point(71, 99);
			this->button_eight->Name = L"button_eight";
			this->button_eight->Size = System::Drawing::Size(62, 42);
			this->button_eight->TabIndex = 23;
			this->button_eight->Text = L"8";
			this->button_eight->UseVisualStyleBackColor = true;
			this->button_eight->Click += gcnew System::EventHandler(this, &MainForm::button_eight_Click);
			// 
			// button_four
			// 
			this->button_four->AutoSize = true;
			this->button_four->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->button_four->Dock = System::Windows::Forms::DockStyle::Fill;
			this->button_four->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button_four->Font = (gcnew System::Drawing::Font(L"Roboto Slab", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_four->Location = System::Drawing::Point(3, 147);
			this->button_four->Name = L"button_four";
			this->button_four->Size = System::Drawing::Size(62, 42);
			this->button_four->TabIndex = 22;
			this->button_four->Text = L"4";
			this->button_four->UseVisualStyleBackColor = true;
			this->button_four->Click += gcnew System::EventHandler(this, &MainForm::button_four_Click);
			// 
			// button_mutiplication
			// 
			this->button_mutiplication->AutoSize = true;
			this->button_mutiplication->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->button_mutiplication->Dock = System::Windows::Forms::DockStyle::Fill;
			this->button_mutiplication->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button_mutiplication->Font = (gcnew System::Drawing::Font(L"Roboto Slab", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_mutiplication->Location = System::Drawing::Point(207, 99);
			this->button_mutiplication->Name = L"button_mutiplication";
			this->button_mutiplication->Size = System::Drawing::Size(62, 42);
			this->button_mutiplication->TabIndex = 21;
			this->button_mutiplication->Text = L"*";
			this->button_mutiplication->UseVisualStyleBackColor = true;
			this->button_mutiplication->Click += gcnew System::EventHandler(this, &MainForm::button_mutiplication_Click);
			// 
			// button_nine
			// 
			this->button_nine->AutoSize = true;
			this->button_nine->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->button_nine->Dock = System::Windows::Forms::DockStyle::Fill;
			this->button_nine->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button_nine->Font = (gcnew System::Drawing::Font(L"Roboto Slab", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_nine->Location = System::Drawing::Point(139, 99);
			this->button_nine->Name = L"button_nine";
			this->button_nine->Size = System::Drawing::Size(62, 42);
			this->button_nine->TabIndex = 20;
			this->button_nine->Text = L"9";
			this->button_nine->UseVisualStyleBackColor = true;
			this->button_nine->Click += gcnew System::EventHandler(this, &MainForm::button_nine_Click);
			// 
			// button_minus
			// 
			this->button_minus->AutoSize = true;
			this->button_minus->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->button_minus->Dock = System::Windows::Forms::DockStyle::Fill;
			this->button_minus->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button_minus->Font = (gcnew System::Drawing::Font(L"Roboto Slab", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_minus->Location = System::Drawing::Point(207, 147);
			this->button_minus->Name = L"button_minus";
			this->button_minus->Size = System::Drawing::Size(62, 42);
			this->button_minus->TabIndex = 19;
			this->button_minus->Text = L"-";
			this->button_minus->UseVisualStyleBackColor = true;
			this->button_minus->Click += gcnew System::EventHandler(this, &MainForm::button_minus_Click);
			// 
			// button_one
			// 
			this->button_one->AutoSize = true;
			this->button_one->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->button_one->Dock = System::Windows::Forms::DockStyle::Fill;
			this->button_one->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button_one->Font = (gcnew System::Drawing::Font(L"Roboto Slab", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_one->Location = System::Drawing::Point(3, 195);
			this->button_one->Name = L"button_one";
			this->button_one->Size = System::Drawing::Size(62, 42);
			this->button_one->TabIndex = 18;
			this->button_one->Text = L"1";
			this->button_one->UseVisualStyleBackColor = true;
			this->button_one->Click += gcnew System::EventHandler(this, &MainForm::button_one_Click);
			// 
			// button_five
			// 
			this->button_five->AutoSize = true;
			this->button_five->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->button_five->Dock = System::Windows::Forms::DockStyle::Fill;
			this->button_five->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button_five->Font = (gcnew System::Drawing::Font(L"Roboto Slab", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_five->Location = System::Drawing::Point(71, 147);
			this->button_five->Name = L"button_five";
			this->button_five->Size = System::Drawing::Size(62, 42);
			this->button_five->TabIndex = 17;
			this->button_five->Text = L"5";
			this->button_five->UseVisualStyleBackColor = true;
			this->button_five->Click += gcnew System::EventHandler(this, &MainForm::button_five_Click);
			// 
			// button_six
			// 
			this->button_six->AutoSize = true;
			this->button_six->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->button_six->Dock = System::Windows::Forms::DockStyle::Fill;
			this->button_six->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button_six->Font = (gcnew System::Drawing::Font(L"Roboto Slab", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_six->Location = System::Drawing::Point(139, 147);
			this->button_six->Name = L"button_six";
			this->button_six->Size = System::Drawing::Size(62, 42);
			this->button_six->TabIndex = 16;
			this->button_six->Text = L"6";
			this->button_six->UseVisualStyleBackColor = true;
			this->button_six->Click += gcnew System::EventHandler(this, &MainForm::button_six_Click);
			// 
			// button_seven
			// 
			this->button_seven->AutoSize = true;
			this->button_seven->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->button_seven->Dock = System::Windows::Forms::DockStyle::Fill;
			this->button_seven->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button_seven->Font = (gcnew System::Drawing::Font(L"Roboto Slab", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_seven->Location = System::Drawing::Point(3, 99);
			this->button_seven->Name = L"button_seven";
			this->button_seven->Size = System::Drawing::Size(62, 42);
			this->button_seven->TabIndex = 15;
			this->button_seven->Text = L"7";
			this->button_seven->UseVisualStyleBackColor = true;
			this->button_seven->Click += gcnew System::EventHandler(this, &MainForm::button_seven_Click);
			// 
			// button15
			// 
			this->button15->AutoSize = true;
			this->button15->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->button15->Dock = System::Windows::Forms::DockStyle::Fill;
			this->button15->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button15->Font = (gcnew System::Drawing::Font(L"Roboto Slab", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button15->Location = System::Drawing::Point(3, 51);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(62, 42);
			this->button15->TabIndex = 14;
			this->button15->Text = L"NULL";
			this->button15->UseVisualStyleBackColor = true;
			// 
			// button_erase
			// 
			this->button_erase->AutoSize = true;
			this->button_erase->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->button_erase->Dock = System::Windows::Forms::DockStyle::Fill;
			this->button_erase->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button_erase->Font = (gcnew System::Drawing::Font(L"Roboto Slab", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_erase->Location = System::Drawing::Point(207, 3);
			this->button_erase->Name = L"button_erase";
			this->button_erase->Size = System::Drawing::Size(62, 42);
			this->button_erase->TabIndex = 13;
			this->button_erase->Text = L"<=";
			this->button_erase->UseVisualStyleBackColor = true;
			this->button_erase->Click += gcnew System::EventHandler(this, &MainForm::button_erase_Click);
			// 
			// button13
			// 
			this->button13->AutoSize = true;
			this->button13->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->button13->Dock = System::Windows::Forms::DockStyle::Fill;
			this->button13->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button13->Font = (gcnew System::Drawing::Font(L"Roboto Slab", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button13->Location = System::Drawing::Point(71, 51);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(62, 42);
			this->button13->TabIndex = 12;
			this->button13->Text = L"NULL";
			this->button13->UseVisualStyleBackColor = true;
			// 
			// button_division
			// 
			this->button_division->AutoSize = true;
			this->button_division->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->button_division->Dock = System::Windows::Forms::DockStyle::Fill;
			this->button_division->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button_division->Font = (gcnew System::Drawing::Font(L"Roboto Slab", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_division->Location = System::Drawing::Point(207, 51);
			this->button_division->Name = L"button_division";
			this->button_division->Size = System::Drawing::Size(62, 42);
			this->button_division->TabIndex = 11;
			this->button_division->Text = L"/";
			this->button_division->UseVisualStyleBackColor = true;
			this->button_division->Click += gcnew System::EventHandler(this, &MainForm::button_division_Click);
			// 
			// button11
			// 
			this->button11->AutoSize = true;
			this->button11->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->button11->Dock = System::Windows::Forms::DockStyle::Fill;
			this->button11->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button11->Font = (gcnew System::Drawing::Font(L"Roboto Slab", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button11->Location = System::Drawing::Point(139, 51);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(62, 42);
			this->button11->TabIndex = 10;
			this->button11->Text = L"NULL";
			this->button11->UseVisualStyleBackColor = true;
			// 
			// button_point
			// 
			this->button_point->AutoSize = true;
			this->button_point->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->button_point->Dock = System::Windows::Forms::DockStyle::Fill;
			this->button_point->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button_point->Font = (gcnew System::Drawing::Font(L"Roboto Slab", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_point->Location = System::Drawing::Point(139, 243);
			this->button_point->Name = L"button_point";
			this->button_point->Size = System::Drawing::Size(62, 42);
			this->button_point->TabIndex = 9;
			this->button_point->Text = L",";
			this->button_point->UseVisualStyleBackColor = true;
			this->button_point->Click += gcnew System::EventHandler(this, &MainForm::button_point_Click);
			// 
			// button_zero
			// 
			this->button_zero->AutoSize = true;
			this->button_zero->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->button_zero->Dock = System::Windows::Forms::DockStyle::Fill;
			this->button_zero->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button_zero->Font = (gcnew System::Drawing::Font(L"Roboto Slab", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_zero->Location = System::Drawing::Point(71, 243);
			this->button_zero->Name = L"button_zero";
			this->button_zero->Size = System::Drawing::Size(62, 42);
			this->button_zero->TabIndex = 8;
			this->button_zero->Text = L"0";
			this->button_zero->UseVisualStyleBackColor = true;
			this->button_zero->Click += gcnew System::EventHandler(this, &MainForm::button_zero_Click);
			// 
			// button8
			// 
			this->button8->AutoSize = true;
			this->button8->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->button8->Dock = System::Windows::Forms::DockStyle::Fill;
			this->button8->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button8->Font = (gcnew System::Drawing::Font(L"Roboto Slab", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button8->Location = System::Drawing::Point(3, 243);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(62, 42);
			this->button8->TabIndex = 7;
			this->button8->Text = L"+/-";
			this->button8->UseVisualStyleBackColor = true;
			// 
			// button_plus
			// 
			this->button_plus->AutoSize = true;
			this->button_plus->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->button_plus->Dock = System::Windows::Forms::DockStyle::Fill;
			this->button_plus->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button_plus->Font = (gcnew System::Drawing::Font(L"Roboto Slab", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_plus->Location = System::Drawing::Point(207, 195);
			this->button_plus->Name = L"button_plus";
			this->button_plus->Size = System::Drawing::Size(62, 42);
			this->button_plus->TabIndex = 6;
			this->button_plus->Text = L"+";
			this->button_plus->UseVisualStyleBackColor = true;
			this->button_plus->Click += gcnew System::EventHandler(this, &MainForm::button_plus_Click);
			// 
			// button_three
			// 
			this->button_three->AutoSize = true;
			this->button_three->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->button_three->Dock = System::Windows::Forms::DockStyle::Fill;
			this->button_three->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button_three->Font = (gcnew System::Drawing::Font(L"Roboto Slab", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_three->Location = System::Drawing::Point(139, 195);
			this->button_three->Name = L"button_three";
			this->button_three->Size = System::Drawing::Size(62, 42);
			this->button_three->TabIndex = 5;
			this->button_three->Text = L"3";
			this->button_three->UseVisualStyleBackColor = true;
			this->button_three->Click += gcnew System::EventHandler(this, &MainForm::button_three_Click);
			// 
			// button_two
			// 
			this->button_two->AutoSize = true;
			this->button_two->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->button_two->Dock = System::Windows::Forms::DockStyle::Fill;
			this->button_two->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button_two->Font = (gcnew System::Drawing::Font(L"Roboto Slab", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_two->Location = System::Drawing::Point(71, 195);
			this->button_two->Name = L"button_two";
			this->button_two->Size = System::Drawing::Size(62, 42);
			this->button_two->TabIndex = 4;
			this->button_two->Text = L"2";
			this->button_two->UseVisualStyleBackColor = true;
			this->button_two->Click += gcnew System::EventHandler(this, &MainForm::button_two_Click);
			// 
			// button_clear
			// 
			this->button_clear->AutoSize = true;
			this->button_clear->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->button_clear->Dock = System::Windows::Forms::DockStyle::Fill;
			this->button_clear->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button_clear->Font = (gcnew System::Drawing::Font(L"Roboto Slab", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_clear->Location = System::Drawing::Point(139, 3);
			this->button_clear->Name = L"button_clear";
			this->button_clear->Size = System::Drawing::Size(62, 42);
			this->button_clear->TabIndex = 3;
			this->button_clear->Text = L"C";
			this->button_clear->UseVisualStyleBackColor = true;
			this->button_clear->Click += gcnew System::EventHandler(this, &MainForm::button_clear_Click);
			// 
			// button_modulo
			// 
			this->button_modulo->AutoSize = true;
			this->button_modulo->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->button_modulo->Dock = System::Windows::Forms::DockStyle::Fill;
			this->button_modulo->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button_modulo->Font = (gcnew System::Drawing::Font(L"Roboto Slab", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_modulo->Location = System::Drawing::Point(3, 3);
			this->button_modulo->Name = L"button_modulo";
			this->button_modulo->Size = System::Drawing::Size(62, 42);
			this->button_modulo->TabIndex = 2;
			this->button_modulo->Text = L"%";
			this->button_modulo->UseVisualStyleBackColor = true;
			// 
			// button_clear_all
			// 
			this->button_clear_all->AutoSize = true;
			this->button_clear_all->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->button_clear_all->Dock = System::Windows::Forms::DockStyle::Fill;
			this->button_clear_all->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button_clear_all->Font = (gcnew System::Drawing::Font(L"Roboto Slab", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_clear_all->Location = System::Drawing::Point(71, 3);
			this->button_clear_all->Name = L"button_clear_all";
			this->button_clear_all->Size = System::Drawing::Size(62, 42);
			this->button_clear_all->TabIndex = 1;
			this->button_clear_all->Text = L"CE";
			this->button_clear_all->UseVisualStyleBackColor = true;
			this->button_clear_all->Click += gcnew System::EventHandler(this, &MainForm::button_clear_all_Click);
			// 
			// button_equals
			// 
			this->button_equals->AutoSize = true;
			this->button_equals->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->button_equals->Dock = System::Windows::Forms::DockStyle::Fill;
			this->button_equals->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button_equals->Font = (gcnew System::Drawing::Font(L"Roboto Slab", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_equals->Location = System::Drawing::Point(207, 243);
			this->button_equals->Name = L"button_equals";
			this->button_equals->Size = System::Drawing::Size(62, 42);
			this->button_equals->TabIndex = 0;
			this->button_equals->Text = L"=";
			this->button_equals->UseVisualStyleBackColor = true;
			this->button_equals->Click += gcnew System::EventHandler(this, &MainForm::button_equals_Click);
			// 
			// splitContainer1
			// 
			this->splitContainer1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->splitContainer1->Location = System::Drawing::Point(9, 12);
			this->splitContainer1->Name = L"splitContainer1";
			this->splitContainer1->Orientation = System::Windows::Forms::Orientation::Horizontal;
			// 
			// splitContainer1.Panel1
			// 
			this->splitContainer1->Panel1->Controls->Add(this->label_action);
			// 
			// splitContainer1.Panel2
			// 
			this->splitContainer1->Panel2->Controls->Add(this->label_result_input);
			this->splitContainer1->Size = System::Drawing::Size(271, 142);
			this->splitContainer1->SplitterDistance = 56;
			this->splitContainer1->TabIndex = 1;
			// 
			// label_action
			// 
			this->label_action->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label_action->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->label_action->Font = (gcnew System::Drawing::Font(L"Roboto Slab ExtraLight", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_action->Location = System::Drawing::Point(0, 0);
			this->label_action->Name = L"label_action";
			this->label_action->Size = System::Drawing::Size(271, 56);
			this->label_action->TabIndex = 0;
			this->label_action->TextAlign = System::Drawing::ContentAlignment::BottomRight;
			// 
			// label_result_input
			// 
			this->label_result_input->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label_result_input->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->label_result_input->Font = (gcnew System::Drawing::Font(L"Roboto Slab SemiBold", 20.25F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label_result_input->Location = System::Drawing::Point(0, 0);
			this->label_result_input->Name = L"label_result_input";
			this->label_result_input->Size = System::Drawing::Size(271, 82);
			this->label_result_input->TabIndex = 1;
			this->label_result_input->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(304, 461);
			this->Controls->Add(this->splitContainer1);
			this->Controls->Add(this->tableLayoutPanel1);
			this->KeyPreview = true;
			this->MinimumSize = System::Drawing::Size(320, 500);
			this->Name = L"MainForm";
			this->Text = L"MainForm";
			this->KeyUp += gcnew System::Windows::Forms::KeyEventHandler(this, &MainForm::KeyListener);
			this->tableLayoutPanel1->ResumeLayout(false);
			this->tableLayoutPanel1->PerformLayout();
			this->splitContainer1->Panel1->ResumeLayout(false);
			this->splitContainer1->Panel2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer1))->EndInit();
			this->splitContainer1->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void KeyListener(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
		//auto keyCode = e->KeyCode;
		//auto keyValue = e->KeyValue;
		//if (keyCode >= Keys::NumPad0 && keyCode <= Keys::NumPad9){
		//	label_result_input->Text += System::Convert::ToString((char)(keyValue - 96));
		//} else if (keyCode >= Keys::D0 && keyCode <= Keys::D9) {
		//	label_result_input->Text += System::Convert::ToString((char)(keyValue - 48));
		//} else {
			switch (e->KeyCode){
			//Numpad number Keys
			case System::Windows::Forms::Keys::NumPad0:button_zero->PerformClick();		break;
			case System::Windows::Forms::Keys::NumPad1:button_one->PerformClick();		break;
			case System::Windows::Forms::Keys::NumPad2:button_two->PerformClick();		break;
			case System::Windows::Forms::Keys::NumPad3:button_three->PerformClick();	break;
			case System::Windows::Forms::Keys::NumPad4:button_four->PerformClick();		break;
			case System::Windows::Forms::Keys::NumPad5:button_five->PerformClick();		break;
			case System::Windows::Forms::Keys::NumPad6:button_six->PerformClick();		break;
			case System::Windows::Forms::Keys::NumPad7:button_seven->PerformClick();	break;
			case System::Windows::Forms::Keys::NumPad8:button_eight->PerformClick();	break;
			case System::Windows::Forms::Keys::NumPad9:button_nine->PerformClick();		break;
			//Number Keys
			case System::Windows::Forms::Keys::D0:button_zero->PerformClick();			break;
			case System::Windows::Forms::Keys::D1:button_one->PerformClick();			break;
			case System::Windows::Forms::Keys::D2:button_two->PerformClick();			break;
			case System::Windows::Forms::Keys::D3:button_three->PerformClick();			break;
			case System::Windows::Forms::Keys::D4:button_four->PerformClick();			break;
			case System::Windows::Forms::Keys::D5:button_five->PerformClick();			break;
			case System::Windows::Forms::Keys::D6:button_six->PerformClick();			break;
			case System::Windows::Forms::Keys::D7:button_seven->PerformClick();			break;
			case System::Windows::Forms::Keys::D8:button_eight->PerformClick();			break;
			case System::Windows::Forms::Keys::D9:button_nine->PerformClick();			break;
			//Action Buttons
			case System::Windows::Forms::Keys::Enter:button_equals->PerformClick();				break;
			case System::Windows::Forms::Keys::Delete:button_clear_all->PerformClick();			break;
			case System::Windows::Forms::Keys::Multiply:button_mutiplication->PerformClick();	break;
			case System::Windows::Forms::Keys::Add:button_plus->PerformClick();					break;
			case System::Windows::Forms::Keys::Subtract : button_minus->PerformClick();			break;
			case System::Windows::Forms::Keys::Decimal:button_point->PerformClick();			break;
			case System::Windows::Forms::Keys::Divide:button_division->PerformClick();			break;
			case System::Windows::Forms::Keys::Oemplus:button_plus->PerformClick();				break;
			case System::Windows::Forms::Keys::OemMinus:button_minus->PerformClick();			break;
			case System::Windows::Forms::Keys::OemPeriod:button_point->PerformClick();			break;
			case System::Windows::Forms::Keys::Back:button_erase->PerformClick();				break;

			default:
				break;
			}
		//}
		e->Handled = true;
	}

	private: System::Void button_clear_Click(System::Object^ sender, System::EventArgs^ e) {
		label_result_input->ResetText();
	}

	private: System::Void button_point_Click(System::Object^ sender, System::EventArgs^ e) {
		if (!label_result_input->Text->Contains(",")) {
			label_result_input->Text += ",";
		}
	}
	private: System::Void button_equals_Click(System::Object^ sender, System::EventArgs^ e) {
		if (firstValue!=System::Double::MinValue&& action!=' ') {
			switch (action){
			case '+':
				label_action->Text += label_result_input->Text;
				secondValue = System::Convert::ToDouble(label_result_input->Text);
				label_result_input->Text =System::Convert::ToString(firstValue + secondValue);
				break;
			case '-': 
				label_action->Text += label_result_input->Text;
				secondValue = System::Convert::ToDouble(label_result_input->Text);
				label_result_input->Text = System::Convert::ToString(firstValue - secondValue);
				break;
			case '/': 
				label_action->Text += label_result_input->Text;
				secondValue = System::Convert::ToDouble(label_result_input->Text);
				label_result_input->Text = System::Convert::ToString(firstValue / secondValue);
				break;
			case '*': 
				label_action->Text += label_result_input->Text;
				secondValue = System::Convert::ToDouble(label_result_input->Text);
				label_result_input->Text = System::Convert::ToString(firstValue * secondValue);
				break;
			default:
				break;
			}
		}
	}
	private: System::Void button_plus_Click(System::Object^ sender, System::EventArgs^ e) {
		if (label_result_input->Text->Length > 0) {
			firstValue = System::Convert::ToDouble(label_result_input->Text);
			action = '+';
			label_action->Text = label_result_input->Text + " + ";
		}
		label_result_input->ResetText();
	}
	private: System::Void button_minus_Click(System::Object^ sender, System::EventArgs^ e) {
		if (label_result_input->Text->Length > 0) {
			firstValue = System::Convert::ToDouble(label_result_input->Text);
			action = '-';
			label_action->Text = label_result_input->Text + " - ";
		}
		label_result_input->ResetText();
	}

	private: System::Void button_mutiplication_Click(System::Object^ sender, System::EventArgs^ e) {
		if (label_result_input->Text->Length > 0) {
			firstValue = System::Convert::ToDouble(label_result_input->Text);
			action = '*';
			label_action->Text = label_result_input->Text + " * ";
		}
		label_result_input->ResetText();
	}
	private: System::Void button_division_Click(System::Object^ sender, System::EventArgs^ e) {
		if (label_result_input->Text->Length > 0) {
			firstValue = System::Convert::ToDouble(label_result_input->Text);
			action = '/';
			label_action->Text = label_result_input->Text + " / ";
		}
		label_result_input->ResetText();
	}
	private: System::Void button_erase_Click(System::Object^ sender, System::EventArgs^ e) {
		if (label_result_input->Text->Length > 0) {
			label_result_input->Text = label_result_input->Text->Substring(0, label_result_input->Text->Length - 1);
		}
	}
	private: System::Void button_clear_all_Click(System::Object^ sender, System::EventArgs^ e) {
		action = ' ';
		firstValue = System::Double::MinValue;
		secondValue = System::Double::MinValue;
		label_action->ResetText();
		label_result_input->ResetText();
	}
	private: System::Void button_zero_Click(System::Object^ sender, System::EventArgs^ e) {
		label_result_input->Text += "0";
	}
	private: System::Void button_one_Click(System::Object^ sender, System::EventArgs^ e) {
		label_result_input->Text += "1";
	}
	private: System::Void button_two_Click(System::Object^ sender, System::EventArgs^ e) {
		label_result_input->Text += "2";
	}
	private: System::Void button_three_Click(System::Object^ sender, System::EventArgs^ e) {
		label_result_input->Text += "3";
	}
	private: System::Void button_four_Click(System::Object^ sender, System::EventArgs^ e) {
		label_result_input->Text += "4";
	}
	private: System::Void button_five_Click(System::Object^ sender, System::EventArgs^ e) {
		label_result_input->Text += "5";
	}
	private: System::Void button_six_Click(System::Object^ sender, System::EventArgs^ e) {
		label_result_input->Text += "6";
	}
	private: System::Void button_seven_Click(System::Object^ sender, System::EventArgs^ e) {
		label_result_input->Text += "7";
	}
	private: System::Void button_eight_Click(System::Object^ sender, System::EventArgs^ e) {
		label_result_input->Text += "8";
	}
	private: System::Void button_nine_Click(System::Object^ sender, System::EventArgs^ e) {
		label_result_input->Text += "9";
	}
};
}

﻿#pragma once
#include "API.h"
#include "MainForm.h"

namespace Convo {

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;

/// <summary>
/// Summary for MainForm
/// </summary>
public
ref class MainForm : public Form {
   public:
    MainForm(void) {
        lenghts.Add("Millimeter", "millimeter");
        lenghts.Add("Centimeter", "centimeter");
        lenghts.Add("Decimeter", "decimeter");
        lenghts.Add("Meter", "meter");
        lenghts.Add("Kilometer", "kilometer");
        lenghts.Add("Inch", "inch");
        lenghts.Add("Feet", "feet");
        lenghts.Add("Yard", "yard");
        lenghts.Add("Mile", "mile");

        weights.Add("Milligram", "milligram");
        weights.Add("Gram", "gram");
        weights.Add("Kilogram", "kilogram");
        weights.Add("Ton", "ton");
        weights.Add("Ounce", "ounce");
        weights.Add("Pound", "pound");

        areas.Add("Millimeter", "millimeter");
        areas.Add("Centimeter", "centimeter");
        areas.Add("Meter", "meter");
        areas.Add("Acre", "acre");
        areas.Add("Hectare", "hectare");
        areas.Add("Kilometer", "kilometer");
        areas.Add("Inch", "inch");
        areas.Add("Feet", "feet");
        areas.Add("Yard", "yard");
        areas.Add("Mile", "mile");

        speeds.Add("Centimeters Per Second", "cps");
        speeds.Add("Meters Per Second", "mps");
        speeds.Add("Kilometers Per Hour", "kph");
        speeds.Add("Feet Per Second", "fps");
        speeds.Add("Miles Per Hour", "mph");
        speeds.Add("Knots", "k");
        speeds.Add("Mach (SI standard)", "m");

        temperatures.Add("Celsius", "celsius");
        temperatures.Add("Fahrenheit", "fahrenheit");
        temperatures.Add("Kelvin", "kelvin");
        InitializeComponent();
        //
        // TODO: Add the constructor code here
        //
        Threading::Thread ^ acquireThread = gcnew Threading::Thread(gcnew Threading::ThreadStart(this, &MainForm::ValidateConnection));
        acquireThread->Start();
    }

   protected:
    /// <summary>
    /// Clean up any resources being used.
    /// </summary>
    ~MainForm() {
        if (components) {
            delete components;
        }
    }

   private:
    ToolStrip ^ menu_top;

   private:
    ToolStripButton ^ button_controll_left_menu;

   private:
    ToolStrip ^ menu_left;

   private:
    ToolStripButton ^ button_basic;

   private:
    ToolStripButton ^ button_Lenght;

   private:
    Panel ^ panel_conversion;

   private:
    Label ^ label_conversion_result;

   private:
    Panel ^ panel_basic;

   private:
    ToolStripButton ^ button_Speed;

   private:
    ToolStripButton ^ button_Weight;

   private:
    ToolStripButton ^ button_Temperature;

   private:
    ToolStripButton ^ button_Area;

   private:
    ToolStripLabel ^ label_top_operaion;

   private:
    Label ^ label_conversion_input;

   private:
    System::Windows::Forms::TableLayoutPanel ^ table_convert;

   private:
    System::Windows::Forms::SplitContainer ^ split_convert;

   private:
    Button ^ convert_button_zero;

   private:
    Button ^ convert_button_one;

   private:
    Button ^ convert_button_two;

   private:
    Button ^ convert_button_three;

   private:
    Button ^ convert_button_four;

   private:
    Button ^ convert_button_five;

   private:
    Button ^ convert_button_six;

   private:
    Button ^ convert_button_seven;

   private:
    Button ^ convert_button_eight;

   private:
    Button ^ convert_button_nine;

   private:
    Button ^ convert_button_period;

   private:
    Button ^ convert_button_erase;

   private:
    Button ^ convert_button_erase_everything;

   private:
    ComboBox ^ combo_from;

   private:
    ComboBox ^ combo_to;

   private:
    Label ^ label_conversion_from;

   private:
    Label ^ label_conversion_to;

   private:
    System::Windows::Forms::SplitContainer ^ split_basic;

   private:
    Label ^ basic_label_result_input;

   private:
    Label ^ basic_label_action;

   private:
    System::Windows::Forms::TableLayoutPanel ^ table_basic;

   private:
    Button ^ basic_button_two;

   private:
    Button ^ basic_button_one;

   private:
    Button ^ basic_button_addition;

   private:
    Button ^ basic_button_three;

   private:
    Button ^ basic_button_five;

   private:
    Button ^ basic_button_four;

   private:
    Button ^ basic_button_subtraction;

   private:
    Button ^ basic_button_six;

   private:
    Button ^ basic_button_nine;

   private:
    Button ^ basic_button_miltiplication;

   private:
    Button ^ basic_button_eight;

   private:
    Button ^ basic_button_power_two;

   private:
    Button ^ basic_button_one_divided_by;

   private:
    Button ^ basic_button_division;

   private:
    Button ^ basic_button_square_root;

   private:
    Button ^ basic_button_clear_everything;

   private:
    Button ^ basic_button_percent;

   private:
    Button ^ basic_button_delete;

   private:
    Button ^ basic_button_clear;

   private:
    Button ^ basic_button_zero;

   private:
    Button ^ basic_button_plus_minus;

   private:
    Button ^ basic_button_equals;

   private:
    Button ^ basic_button_period;

   private:
    Button ^ basic_button_seven;

   private:
    IContainer ^ components;

   private:
    double firstValue;

   private:
    double secondValue;

   private:
    char action;

   private:
    bool calculated;

   private:
    Hashtable lenghts;

   private:
    Hashtable weights;

   private:
    Hashtable areas;

   private:
    Hashtable temperatures;

   private:
    System::Windows::Forms::ToolStripButton ^ button_check_connection;

   private:
    Hashtable speeds;

#pragma region Windows Form Designer generated code
    /// <summary>
    /// Required method for Designer support - do not modify
    /// the contents of this method with the code editor.
    /// </summary>
    void InitializeComponent(void) {
        System::ComponentModel::ComponentResourceManager ^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MainForm::typeid));
        this->menu_top = (gcnew System::Windows::Forms::ToolStrip());
        this->button_controll_left_menu = (gcnew System::Windows::Forms::ToolStripButton());
        this->label_top_operaion = (gcnew System::Windows::Forms::ToolStripLabel());
        this->button_check_connection = (gcnew System::Windows::Forms::ToolStripButton());
        this->menu_left = (gcnew System::Windows::Forms::ToolStrip());
        this->button_basic = (gcnew System::Windows::Forms::ToolStripButton());
        this->button_Lenght = (gcnew System::Windows::Forms::ToolStripButton());
        this->button_Weight = (gcnew System::Windows::Forms::ToolStripButton());
        this->button_Temperature = (gcnew System::Windows::Forms::ToolStripButton());
        this->button_Area = (gcnew System::Windows::Forms::ToolStripButton());
        this->button_Speed = (gcnew System::Windows::Forms::ToolStripButton());
        this->panel_conversion = (gcnew System::Windows::Forms::Panel());
        this->split_convert = (gcnew System::Windows::Forms::SplitContainer());
        this->combo_from = (gcnew System::Windows::Forms::ComboBox());
        this->label_conversion_from = (gcnew System::Windows::Forms::Label());
        this->label_conversion_input = (gcnew System::Windows::Forms::Label());
        this->combo_to = (gcnew System::Windows::Forms::ComboBox());
        this->label_conversion_to = (gcnew System::Windows::Forms::Label());
        this->label_conversion_result = (gcnew System::Windows::Forms::Label());
        this->table_convert = (gcnew System::Windows::Forms::TableLayoutPanel());
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
        this->split_basic = (gcnew System::Windows::Forms::SplitContainer());
        this->basic_label_action = (gcnew System::Windows::Forms::Label());
        this->basic_label_result_input = (gcnew System::Windows::Forms::Label());
        this->table_basic = (gcnew System::Windows::Forms::TableLayoutPanel());
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
        (cli::safe_cast<System::ComponentModel::ISupportInitialize ^>(this->split_convert))->BeginInit();
        this->split_convert->Panel1->SuspendLayout();
        this->split_convert->Panel2->SuspendLayout();
        this->split_convert->SuspendLayout();
        this->table_convert->SuspendLayout();
        this->panel_basic->SuspendLayout();
        (cli::safe_cast<System::ComponentModel::ISupportInitialize ^>(this->split_basic))->BeginInit();
        this->split_basic->Panel1->SuspendLayout();
        this->split_basic->Panel2->SuspendLayout();
        this->split_basic->SuspendLayout();
        this->table_basic->SuspendLayout();
        this->SuspendLayout();
        //
        // menu_top
        //
        this->menu_top->BackColor = System::Drawing::Color::Transparent;
        this->menu_top->GripStyle = System::Windows::Forms::ToolStripGripStyle::Hidden;
        this->menu_top->Items->AddRange(gcnew cli::array<System::Windows::Forms::ToolStripItem ^>(3){
            this->button_controll_left_menu,
            this->label_top_operaion, this->button_check_connection});
        this->menu_top->Location = System::Drawing::Point(0, 0);
        this->menu_top->Name = L"menu_top";
        this->menu_top->Size = System::Drawing::Size(384, 25);
        this->menu_top->TabIndex = 0;
        this->menu_top->Text = L"toolStrip1";
        //
        // button_controll_left_menu
        //
        this->button_controll_left_menu->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Text;
        this->button_controll_left_menu->ForeColor = System::Drawing::Color::White;
        this->button_controll_left_menu->Image = (cli::safe_cast<System::Drawing::Image ^>(resources->GetObject(L"button_controll_left_menu.Image")));
        this->button_controll_left_menu->ImageTransparentColor = System::Drawing::Color::Magenta;
        this->button_controll_left_menu->Name = L"button_controll_left_menu";
        this->button_controll_left_menu->Size = System::Drawing::Size(70, 22);
        this->button_controll_left_menu->Text = L"Hide/Show";
        this->button_controll_left_menu->Click += gcnew System::EventHandler(this, &MainForm::button_controll_left_menu_Click);
        //
        // label_top_operaion
        //
        this->label_top_operaion->ForeColor = System::Drawing::Color::White;
        this->label_top_operaion->Name = L"label_top_operaion";
        this->label_top_operaion->Size = System::Drawing::Size(34, 22);
        this->label_top_operaion->Text = L"Basic";
        //
        // button_check_connection
        //
        this->button_check_connection->Alignment = System::Windows::Forms::ToolStripItemAlignment::Right;
        this->button_check_connection->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Text;
        this->button_check_connection->ForeColor = System::Drawing::Color::White;
        this->button_check_connection->Image = (cli::safe_cast<System::Drawing::Image ^>(resources->GetObject(L"button_check_connection.Image")));
        this->button_check_connection->ImageTransparentColor = System::Drawing::Color::Magenta;
        this->button_check_connection->Name = L"button_check_connection";
        this->button_check_connection->Size = System::Drawing::Size(23, 22);
        this->button_check_connection->Text = L"↺";
        this->button_check_connection->Click += gcnew System::EventHandler(this, &MainForm::button_check_connection_Click);
        //
        // menu_left
        //
        this->menu_left->BackColor = System::Drawing::Color::Transparent;
        this->menu_left->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
        this->menu_left->CanOverflow = false;
        this->menu_left->Dock = System::Windows::Forms::DockStyle::Left;
        this->menu_left->GripStyle = System::Windows::Forms::ToolStripGripStyle::Hidden;
        this->menu_left->Items->AddRange(gcnew cli::array<System::Windows::Forms::ToolStripItem ^>(6){
            this->button_basic, this->button_Lenght,
            this->button_Weight, this->button_Temperature, this->button_Area, this->button_Speed});
        this->menu_left->Location = System::Drawing::Point(0, 25);
        this->menu_left->Name = L"menu_left";
        this->menu_left->Size = System::Drawing::Size(78, 536);
        this->menu_left->TabIndex = 1;
        this->menu_left->Text = L"toolStrip2";
        this->menu_left->ItemClicked += gcnew System::Windows::Forms::ToolStripItemClickedEventHandler(this, &MainForm::menu_left_ItemClicked);
        //
        // button_basic
        //
        this->button_basic->BackColor = System::Drawing::Color::Transparent;
        this->button_basic->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
        this->button_basic->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Text;
        this->button_basic->ForeColor = System::Drawing::Color::White;
        this->button_basic->Image = (cli::safe_cast<System::Drawing::Image ^>(resources->GetObject(L"button_basic.Image")));
        this->button_basic->ImageTransparentColor = System::Drawing::Color::Magenta;
        this->button_basic->Name = L"button_basic";
        this->button_basic->Size = System::Drawing::Size(75, 19);
        this->button_basic->Text = L"Basic";
        //
        // button_Lenght
        //
        this->button_Lenght->BackColor = System::Drawing::Color::Transparent;
        this->button_Lenght->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Text;
        this->button_Lenght->ForeColor = System::Drawing::Color::White;
        this->button_Lenght->Image = (cli::safe_cast<System::Drawing::Image ^>(resources->GetObject(L"button_Lenght.Image")));
        this->button_Lenght->ImageTransparentColor = System::Drawing::Color::Magenta;
        this->button_Lenght->Name = L"button_Lenght";
        this->button_Lenght->Size = System::Drawing::Size(75, 19);
        this->button_Lenght->Text = L"Length";
        //
        // button_Weight
        //
        this->button_Weight->BackColor = System::Drawing::Color::Transparent;
        this->button_Weight->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Text;
        this->button_Weight->ForeColor = System::Drawing::Color::White;
        this->button_Weight->Image = (cli::safe_cast<System::Drawing::Image ^>(resources->GetObject(L"button_Weight.Image")));
        this->button_Weight->ImageTransparentColor = System::Drawing::Color::Magenta;
        this->button_Weight->Name = L"button_Weight";
        this->button_Weight->Size = System::Drawing::Size(75, 19);
        this->button_Weight->Text = L"Weight";
        this->button_Weight->ToolTipText = L"Button3";
        //
        // button_Temperature
        //
        this->button_Temperature->BackColor = System::Drawing::Color::Transparent;
        this->button_Temperature->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Text;
        this->button_Temperature->ForeColor = System::Drawing::Color::White;
        this->button_Temperature->Image = (cli::safe_cast<System::Drawing::Image ^>(resources->GetObject(L"button_Temperature.Image")));
        this->button_Temperature->ImageTransparentColor = System::Drawing::Color::Magenta;
        this->button_Temperature->Name = L"button_Temperature";
        this->button_Temperature->Size = System::Drawing::Size(75, 19);
        this->button_Temperature->Text = L"Temperature";
        this->button_Temperature->ToolTipText = L"Button3";
        //
        // button_Area
        //
        this->button_Area->BackColor = System::Drawing::Color::Transparent;
        this->button_Area->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Text;
        this->button_Area->ForeColor = System::Drawing::Color::White;
        this->button_Area->Image = (cli::safe_cast<System::Drawing::Image ^>(resources->GetObject(L"button_Area.Image")));
        this->button_Area->ImageTransparentColor = System::Drawing::Color::Magenta;
        this->button_Area->Name = L"button_Area";
        this->button_Area->Size = System::Drawing::Size(75, 19);
        this->button_Area->Text = L"Area";
        this->button_Area->ToolTipText = L"Button3";
        //
        // button_Speed
        //
        this->button_Speed->BackColor = System::Drawing::Color::Transparent;
        this->button_Speed->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Text;
        this->button_Speed->ForeColor = System::Drawing::Color::White;
        this->button_Speed->Image = (cli::safe_cast<System::Drawing::Image ^>(resources->GetObject(L"button_Speed.Image")));
        this->button_Speed->ImageTransparentColor = System::Drawing::Color::Magenta;
        this->button_Speed->Name = L"button_Speed";
        this->button_Speed->Size = System::Drawing::Size(75, 19);
        this->button_Speed->Text = L"Speed";
        this->button_Speed->ToolTipText = L"Button3";
        //
        // panel_conversion
        //
        this->panel_conversion->Controls->Add(this->split_convert);
        this->panel_conversion->Controls->Add(this->table_convert);
        this->panel_conversion->Dock = System::Windows::Forms::DockStyle::Fill;
        this->panel_conversion->Location = System::Drawing::Point(78, 25);
        this->panel_conversion->Name = L"panel_conversion";
        this->panel_conversion->Size = System::Drawing::Size(306, 536);
        this->panel_conversion->TabIndex = 3;
        this->panel_conversion->Visible = false;
        //
        // split_convert
        //
        this->split_convert->Dock = System::Windows::Forms::DockStyle::Top;
        this->split_convert->Location = System::Drawing::Point(0, 0);
        this->split_convert->Name = L"split_convert";
        this->split_convert->Orientation = System::Windows::Forms::Orientation::Horizontal;
        //
        // split_convert.Panel1
        //
        this->split_convert->Panel1->Controls->Add(this->combo_from);
        this->split_convert->Panel1->Controls->Add(this->label_conversion_from);
        this->split_convert->Panel1->Controls->Add(this->label_conversion_input);
        //
        // split_convert.Panel2
        //
        this->split_convert->Panel2->Controls->Add(this->combo_to);
        this->split_convert->Panel2->Controls->Add(this->label_conversion_to);
        this->split_convert->Panel2->Controls->Add(this->label_conversion_result);
        this->split_convert->Size = System::Drawing::Size(306, 104);
        this->split_convert->SplitterDistance = 48;
        this->split_convert->TabIndex = 3;
        //
        // combo_from
        //
        this->combo_from->BackColor = System::Drawing::SystemColors::WindowText;
        this->combo_from->Dock = System::Windows::Forms::DockStyle::Bottom;
        this->combo_from->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
        this->combo_from->FlatStyle = System::Windows::Forms::FlatStyle::System;
        this->combo_from->ForeColor = System::Drawing::Color::White;
        this->combo_from->FormattingEnabled = true;
        this->combo_from->Location = System::Drawing::Point(65, 27);
        this->combo_from->Name = L"combo_from";
        this->combo_from->RightToLeft = System::Windows::Forms::RightToLeft::No;
        this->combo_from->Size = System::Drawing::Size(241, 21);
        this->combo_from->TabIndex = 3;
        this->combo_from->TabStop = false;
        this->combo_from->SelectedIndexChanged += gcnew System::EventHandler(this, &MainForm::callAPI);
        this->combo_from->Leave += gcnew System::EventHandler(this, &MainForm::FocusListener);
        //
        // label_conversion_from
        //
        this->label_conversion_from->BackColor = System::Drawing::Color::Transparent;
        this->label_conversion_from->Dock = System::Windows::Forms::DockStyle::Left;
        this->label_conversion_from->ForeColor = System::Drawing::Color::White;
        this->label_conversion_from->Location = System::Drawing::Point(0, 29);
        this->label_conversion_from->Name = L"label_conversion_from";
        this->label_conversion_from->Size = System::Drawing::Size(65, 19);
        this->label_conversion_from->TabIndex = 4;
        this->label_conversion_from->Text = L"FROM:";
        this->label_conversion_from->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
        //
        // label_conversion_input
        //
        this->label_conversion_input->BackColor = System::Drawing::Color::Transparent;
        this->label_conversion_input->Dock = System::Windows::Forms::DockStyle::Top;
        this->label_conversion_input->Font = (gcnew System::Drawing::Font(L"Roboto Slab ExtraLight", 12));
        this->label_conversion_input->ForeColor = System::Drawing::Color::White;
        this->label_conversion_input->Location = System::Drawing::Point(0, 0);
        this->label_conversion_input->Name = L"label_conversion_input";
        this->label_conversion_input->Size = System::Drawing::Size(306, 29);
        this->label_conversion_input->TabIndex = 1;
        this->label_conversion_input->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
        this->label_conversion_input->TextChanged += gcnew System::EventHandler(this, &MainForm::callAPI);
        //
        // combo_to
        //
        this->combo_to->BackColor = System::Drawing::SystemColors::WindowText;
        this->combo_to->Dock = System::Windows::Forms::DockStyle::Bottom;
        this->combo_to->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
        this->combo_to->FlatStyle = System::Windows::Forms::FlatStyle::System;
        this->combo_to->ForeColor = System::Drawing::Color::White;
        this->combo_to->FormattingEnabled = true;
        this->combo_to->Location = System::Drawing::Point(65, 31);
        this->combo_to->Name = L"combo_to";
        this->combo_to->Size = System::Drawing::Size(241, 21);
        this->combo_to->TabIndex = 2;
        this->combo_to->TabStop = false;
        this->combo_to->SelectedIndexChanged += gcnew System::EventHandler(this, &MainForm::callAPI);
        this->combo_to->Leave += gcnew System::EventHandler(this, &MainForm::FocusListener);
        //
        // label_conversion_to
        //
        this->label_conversion_to->BackColor = System::Drawing::Color::Transparent;
        this->label_conversion_to->Dock = System::Windows::Forms::DockStyle::Left;
        this->label_conversion_to->ForeColor = System::Drawing::Color::White;
        this->label_conversion_to->Location = System::Drawing::Point(0, 27);
        this->label_conversion_to->Name = L"label_conversion_to";
        this->label_conversion_to->Size = System::Drawing::Size(65, 25);
        this->label_conversion_to->TabIndex = 5;
        this->label_conversion_to->Text = L"TO:";
        this->label_conversion_to->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
        //
        // label_conversion_result
        //
        this->label_conversion_result->BackColor = System::Drawing::Color::Transparent;
        this->label_conversion_result->Dock = System::Windows::Forms::DockStyle::Top;
        this->label_conversion_result->Font = (gcnew System::Drawing::Font(L"Roboto Slab SemiBold", 20.25F, System::Drawing::FontStyle::Bold));
        this->label_conversion_result->ForeColor = System::Drawing::Color::White;
        this->label_conversion_result->Location = System::Drawing::Point(0, 0);
        this->label_conversion_result->Name = L"label_conversion_result";
        this->label_conversion_result->Size = System::Drawing::Size(306, 27);
        this->label_conversion_result->TabIndex = 0;
        this->label_conversion_result->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
        //
        // table_convert
        //
        this->table_convert->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
        this->table_convert->ColumnCount = 3;
        this->table_convert->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                                                                                          33.33332F)));
        this->table_convert->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                                                                                          33.33334F)));
        this->table_convert->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                                                                                          33.33334F)));
        this->table_convert->Controls->Add(this->convert_button_period, 2, 4);
        this->table_convert->Controls->Add(this->convert_button_zero, 1, 4);
        this->table_convert->Controls->Add(this->convert_button_one, 0, 3);
        this->table_convert->Controls->Add(this->convert_button_two, 0, 3);
        this->table_convert->Controls->Add(this->convert_button_three, 0, 3);
        this->table_convert->Controls->Add(this->convert_button_six, 0, 2);
        this->table_convert->Controls->Add(this->convert_button_five, 0, 2);
        this->table_convert->Controls->Add(this->convert_button_four, 0, 2);
        this->table_convert->Controls->Add(this->convert_button_seven, 0, 1);
        this->table_convert->Controls->Add(this->convert_button_eight, 0, 1);
        this->table_convert->Controls->Add(this->convert_button_nine, 0, 1);
        this->table_convert->Controls->Add(this->convert_button_erase, 2, 0);
        this->table_convert->Controls->Add(this->convert_button_erase_everything, 1, 0);
        this->table_convert->Dock = System::Windows::Forms::DockStyle::Bottom;
        this->table_convert->Location = System::Drawing::Point(0, 110);
        this->table_convert->Name = L"table_convert";
        this->table_convert->RowCount = 5;
        this->table_convert->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 20)));
        this->table_convert->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 20)));
        this->table_convert->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 20)));
        this->table_convert->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 20)));
        this->table_convert->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 20)));
        this->table_convert->Size = System::Drawing::Size(306, 426);
        this->table_convert->TabIndex = 2;
        //
        // convert_button_period
        //
        this->convert_button_period->BackColor = System::Drawing::Color::Transparent;
        this->convert_button_period->Dock = System::Windows::Forms::DockStyle::Fill;
        this->convert_button_period->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
        this->convert_button_period->Font = (gcnew System::Drawing::Font(L"Roboto Slab", 14.25F));
        this->convert_button_period->ForeColor = System::Drawing::Color::White;
        this->convert_button_period->Location = System::Drawing::Point(206, 343);
        this->convert_button_period->Name = L"convert_button_period";
        this->convert_button_period->Size = System::Drawing::Size(97, 80);
        this->convert_button_period->TabIndex = 13;
        this->convert_button_period->TabStop = false;
        this->convert_button_period->Text = L",";
        this->convert_button_period->UseVisualStyleBackColor = false;
        this->convert_button_period->Click += gcnew System::EventHandler(this, &MainForm::convert_button_period_Click);
        this->convert_button_period->Leave += gcnew System::EventHandler(this, &MainForm::FocusListener);
        //
        // convert_button_zero
        //
        this->convert_button_zero->BackColor = System::Drawing::Color::Transparent;
        this->convert_button_zero->Dock = System::Windows::Forms::DockStyle::Fill;
        this->convert_button_zero->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
        this->convert_button_zero->Font = (gcnew System::Drawing::Font(L"Roboto Slab", 14.25F));
        this->convert_button_zero->ForeColor = System::Drawing::Color::White;
        this->convert_button_zero->Location = System::Drawing::Point(104, 343);
        this->convert_button_zero->Name = L"convert_button_zero";
        this->convert_button_zero->Size = System::Drawing::Size(96, 80);
        this->convert_button_zero->TabIndex = 12;
        this->convert_button_zero->TabStop = false;
        this->convert_button_zero->Text = L"0";
        this->convert_button_zero->UseVisualStyleBackColor = false;
        this->convert_button_zero->Click += gcnew System::EventHandler(this, &MainForm::convert_button_zero_Click);
        this->convert_button_zero->Leave += gcnew System::EventHandler(this, &MainForm::FocusListener);
        //
        // convert_button_one
        //
        this->convert_button_one->BackColor = System::Drawing::Color::Transparent;
        this->convert_button_one->Dock = System::Windows::Forms::DockStyle::Fill;
        this->convert_button_one->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
        this->convert_button_one->Font = (gcnew System::Drawing::Font(L"Roboto Slab", 14.25F));
        this->convert_button_one->ForeColor = System::Drawing::Color::White;
        this->convert_button_one->Location = System::Drawing::Point(3, 258);
        this->convert_button_one->Name = L"convert_button_one";
        this->convert_button_one->Size = System::Drawing::Size(95, 79);
        this->convert_button_one->TabIndex = 11;
        this->convert_button_one->TabStop = false;
        this->convert_button_one->Text = L"1";
        this->convert_button_one->UseVisualStyleBackColor = false;
        this->convert_button_one->Click += gcnew System::EventHandler(this, &MainForm::convert_button_one_Click);
        this->convert_button_one->Leave += gcnew System::EventHandler(this, &MainForm::FocusListener);
        //
        // convert_button_two
        //
        this->convert_button_two->BackColor = System::Drawing::Color::Transparent;
        this->convert_button_two->Dock = System::Windows::Forms::DockStyle::Fill;
        this->convert_button_two->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
        this->convert_button_two->Font = (gcnew System::Drawing::Font(L"Roboto Slab", 14.25F));
        this->convert_button_two->ForeColor = System::Drawing::Color::White;
        this->convert_button_two->Location = System::Drawing::Point(104, 258);
        this->convert_button_two->Name = L"convert_button_two";
        this->convert_button_two->Size = System::Drawing::Size(96, 79);
        this->convert_button_two->TabIndex = 10;
        this->convert_button_two->TabStop = false;
        this->convert_button_two->Text = L"2";
        this->convert_button_two->UseVisualStyleBackColor = false;
        this->convert_button_two->Click += gcnew System::EventHandler(this, &MainForm::convert_button_two_Click);
        this->convert_button_two->Leave += gcnew System::EventHandler(this, &MainForm::FocusListener);
        //
        // convert_button_three
        //
        this->convert_button_three->BackColor = System::Drawing::Color::Transparent;
        this->convert_button_three->Dock = System::Windows::Forms::DockStyle::Fill;
        this->convert_button_three->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
        this->convert_button_three->Font = (gcnew System::Drawing::Font(L"Roboto Slab", 14.25F));
        this->convert_button_three->ForeColor = System::Drawing::Color::White;
        this->convert_button_three->Location = System::Drawing::Point(206, 258);
        this->convert_button_three->Name = L"convert_button_three";
        this->convert_button_three->Size = System::Drawing::Size(97, 79);
        this->convert_button_three->TabIndex = 9;
        this->convert_button_three->TabStop = false;
        this->convert_button_three->Text = L"3";
        this->convert_button_three->UseVisualStyleBackColor = false;
        this->convert_button_three->Click += gcnew System::EventHandler(this, &MainForm::convert_button_three_Click);
        this->convert_button_three->Leave += gcnew System::EventHandler(this, &MainForm::FocusListener);
        //
        // convert_button_six
        //
        this->convert_button_six->BackColor = System::Drawing::Color::Transparent;
        this->convert_button_six->Dock = System::Windows::Forms::DockStyle::Fill;
        this->convert_button_six->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
        this->convert_button_six->Font = (gcnew System::Drawing::Font(L"Roboto Slab", 14.25F));
        this->convert_button_six->ForeColor = System::Drawing::Color::White;
        this->convert_button_six->Location = System::Drawing::Point(206, 173);
        this->convert_button_six->Name = L"convert_button_six";
        this->convert_button_six->Size = System::Drawing::Size(97, 79);
        this->convert_button_six->TabIndex = 8;
        this->convert_button_six->TabStop = false;
        this->convert_button_six->Text = L"6";
        this->convert_button_six->UseVisualStyleBackColor = false;
        this->convert_button_six->Click += gcnew System::EventHandler(this, &MainForm::convert_button_six_Click);
        this->convert_button_six->Leave += gcnew System::EventHandler(this, &MainForm::FocusListener);
        //
        // convert_button_five
        //
        this->convert_button_five->BackColor = System::Drawing::Color::Transparent;
        this->convert_button_five->Dock = System::Windows::Forms::DockStyle::Fill;
        this->convert_button_five->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
        this->convert_button_five->Font = (gcnew System::Drawing::Font(L"Roboto Slab", 14.25F));
        this->convert_button_five->ForeColor = System::Drawing::Color::White;
        this->convert_button_five->Location = System::Drawing::Point(104, 173);
        this->convert_button_five->Name = L"convert_button_five";
        this->convert_button_five->Size = System::Drawing::Size(96, 79);
        this->convert_button_five->TabIndex = 2;
        this->convert_button_five->TabStop = false;
        this->convert_button_five->Text = L"5";
        this->convert_button_five->UseVisualStyleBackColor = false;
        this->convert_button_five->Click += gcnew System::EventHandler(this, &MainForm::convert_button_five_Click);
        this->convert_button_five->Leave += gcnew System::EventHandler(this, &MainForm::FocusListener);
        //
        // convert_button_four
        //
        this->convert_button_four->BackColor = System::Drawing::Color::Transparent;
        this->convert_button_four->Dock = System::Windows::Forms::DockStyle::Fill;
        this->convert_button_four->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
        this->convert_button_four->Font = (gcnew System::Drawing::Font(L"Roboto Slab", 14.25F));
        this->convert_button_four->ForeColor = System::Drawing::Color::White;
        this->convert_button_four->Location = System::Drawing::Point(3, 173);
        this->convert_button_four->Name = L"convert_button_four";
        this->convert_button_four->Size = System::Drawing::Size(95, 79);
        this->convert_button_four->TabIndex = 6;
        this->convert_button_four->TabStop = false;
        this->convert_button_four->Text = L"4";
        this->convert_button_four->UseVisualStyleBackColor = false;
        this->convert_button_four->Click += gcnew System::EventHandler(this, &MainForm::convert_button_four_Click);
        this->convert_button_four->Leave += gcnew System::EventHandler(this, &MainForm::FocusListener);
        //
        // convert_button_seven
        //
        this->convert_button_seven->BackColor = System::Drawing::Color::Transparent;
        this->convert_button_seven->Dock = System::Windows::Forms::DockStyle::Fill;
        this->convert_button_seven->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
        this->convert_button_seven->Font = (gcnew System::Drawing::Font(L"Roboto Slab", 14.25F));
        this->convert_button_seven->ForeColor = System::Drawing::Color::White;
        this->convert_button_seven->Location = System::Drawing::Point(3, 88);
        this->convert_button_seven->Name = L"convert_button_seven";
        this->convert_button_seven->Size = System::Drawing::Size(95, 79);
        this->convert_button_seven->TabIndex = 5;
        this->convert_button_seven->TabStop = false;
        this->convert_button_seven->Text = L"7";
        this->convert_button_seven->UseVisualStyleBackColor = false;
        this->convert_button_seven->Click += gcnew System::EventHandler(this, &MainForm::convert_button_seven_Click);
        this->convert_button_seven->Leave += gcnew System::EventHandler(this, &MainForm::FocusListener);
        //
        // convert_button_eight
        //
        this->convert_button_eight->BackColor = System::Drawing::Color::Transparent;
        this->convert_button_eight->Dock = System::Windows::Forms::DockStyle::Fill;
        this->convert_button_eight->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
        this->convert_button_eight->Font = (gcnew System::Drawing::Font(L"Roboto Slab", 14.25F));
        this->convert_button_eight->ForeColor = System::Drawing::Color::White;
        this->convert_button_eight->Location = System::Drawing::Point(104, 88);
        this->convert_button_eight->Name = L"convert_button_eight";
        this->convert_button_eight->Size = System::Drawing::Size(96, 79);
        this->convert_button_eight->TabIndex = 4;
        this->convert_button_eight->TabStop = false;
        this->convert_button_eight->Text = L"8";
        this->convert_button_eight->UseVisualStyleBackColor = false;
        this->convert_button_eight->Click += gcnew System::EventHandler(this, &MainForm::convert_button_eight_Click);
        this->convert_button_eight->Leave += gcnew System::EventHandler(this, &MainForm::FocusListener);
        //
        // convert_button_nine
        //
        this->convert_button_nine->BackColor = System::Drawing::Color::Transparent;
        this->convert_button_nine->Dock = System::Windows::Forms::DockStyle::Fill;
        this->convert_button_nine->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
        this->convert_button_nine->Font = (gcnew System::Drawing::Font(L"Roboto Slab", 14.25F));
        this->convert_button_nine->ForeColor = System::Drawing::Color::White;
        this->convert_button_nine->Location = System::Drawing::Point(206, 88);
        this->convert_button_nine->Name = L"convert_button_nine";
        this->convert_button_nine->Size = System::Drawing::Size(97, 79);
        this->convert_button_nine->TabIndex = 3;
        this->convert_button_nine->TabStop = false;
        this->convert_button_nine->Text = L"9";
        this->convert_button_nine->UseVisualStyleBackColor = false;
        this->convert_button_nine->Click += gcnew System::EventHandler(this, &MainForm::convert_button_nine_Click);
        this->convert_button_nine->Leave += gcnew System::EventHandler(this, &MainForm::FocusListener);
        //
        // convert_button_erase
        //
        this->convert_button_erase->BackColor = System::Drawing::Color::Transparent;
        this->convert_button_erase->Dock = System::Windows::Forms::DockStyle::Fill;
        this->convert_button_erase->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
        this->convert_button_erase->Font = (gcnew System::Drawing::Font(L"Roboto Slab", 14.25F));
        this->convert_button_erase->ForeColor = System::Drawing::Color::White;
        this->convert_button_erase->Location = System::Drawing::Point(206, 3);
        this->convert_button_erase->Name = L"convert_button_erase";
        this->convert_button_erase->Size = System::Drawing::Size(97, 79);
        this->convert_button_erase->TabIndex = 2;
        this->convert_button_erase->TabStop = false;
        this->convert_button_erase->Text = L"⇐";
        this->convert_button_erase->UseVisualStyleBackColor = false;
        this->convert_button_erase->Click += gcnew System::EventHandler(this, &MainForm::convert_button_erase_Click);
        this->convert_button_erase->Leave += gcnew System::EventHandler(this, &MainForm::FocusListener);
        //
        // convert_button_erase_everything
        //
        this->convert_button_erase_everything->BackColor = System::Drawing::Color::Transparent;
        this->convert_button_erase_everything->Dock = System::Windows::Forms::DockStyle::Fill;
        this->convert_button_erase_everything->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
        this->convert_button_erase_everything->Font = (gcnew System::Drawing::Font(L"Roboto Slab", 14.25F));
        this->convert_button_erase_everything->ForeColor = System::Drawing::Color::White;
        this->convert_button_erase_everything->Location = System::Drawing::Point(104, 3);
        this->convert_button_erase_everything->Name = L"convert_button_erase_everything";
        this->convert_button_erase_everything->Size = System::Drawing::Size(96, 79);
        this->convert_button_erase_everything->TabIndex = 1;
        this->convert_button_erase_everything->TabStop = false;
        this->convert_button_erase_everything->Text = L"CE";
        this->convert_button_erase_everything->UseVisualStyleBackColor = false;
        this->convert_button_erase_everything->Click += gcnew System::EventHandler(this, &MainForm::convert_button_erase_everything_Click);
        this->convert_button_erase_everything->Leave += gcnew System::EventHandler(this, &MainForm::FocusListener);
        //
        // panel_basic
        //
        this->panel_basic->Controls->Add(this->split_basic);
        this->panel_basic->Controls->Add(this->table_basic);
        this->panel_basic->Dock = System::Windows::Forms::DockStyle::Fill;
        this->panel_basic->Location = System::Drawing::Point(78, 25);
        this->panel_basic->Name = L"panel_basic";
        this->panel_basic->Size = System::Drawing::Size(306, 536);
        this->panel_basic->TabIndex = 4;
        //
        // split_basic
        //
        this->split_basic->Dock = System::Windows::Forms::DockStyle::Top;
        this->split_basic->Location = System::Drawing::Point(0, 0);
        this->split_basic->Name = L"split_basic";
        this->split_basic->Orientation = System::Windows::Forms::Orientation::Horizontal;
        //
        // split_basic.Panel1
        //
        this->split_basic->Panel1->Controls->Add(this->basic_label_action);
        //
        // split_basic.Panel2
        //
        this->split_basic->Panel2->Controls->Add(this->basic_label_result_input);
        this->split_basic->Size = System::Drawing::Size(306, 100);
        this->split_basic->SplitterDistance = 47;
        this->split_basic->TabIndex = 0;
        this->split_basic->TabStop = false;
        //
        // basic_label_action
        //
        this->basic_label_action->BackColor = System::Drawing::Color::Transparent;
        this->basic_label_action->Dock = System::Windows::Forms::DockStyle::Fill;
        this->basic_label_action->Font = (gcnew System::Drawing::Font(L"Roboto Slab ExtraLight", 12));
        this->basic_label_action->ForeColor = System::Drawing::Color::White;
        this->basic_label_action->Location = System::Drawing::Point(0, 0);
        this->basic_label_action->Name = L"basic_label_action";
        this->basic_label_action->Size = System::Drawing::Size(306, 47);
        this->basic_label_action->TabIndex = 0;
        this->basic_label_action->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
        //
        // basic_label_result_input
        //
        this->basic_label_result_input->BackColor = System::Drawing::Color::Transparent;
        this->basic_label_result_input->Dock = System::Windows::Forms::DockStyle::Fill;
        this->basic_label_result_input->Font = (gcnew System::Drawing::Font(L"Roboto Slab SemiBold", 20.25F, System::Drawing::FontStyle::Bold));
        this->basic_label_result_input->ForeColor = System::Drawing::Color::White;
        this->basic_label_result_input->Location = System::Drawing::Point(0, 0);
        this->basic_label_result_input->Name = L"basic_label_result_input";
        this->basic_label_result_input->Size = System::Drawing::Size(306, 49);
        this->basic_label_result_input->TabIndex = 0;
        this->basic_label_result_input->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
        //
        // table_basic
        //
        this->table_basic->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
        this->table_basic->ColumnCount = 4;
        this->table_basic->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 25)));
        this->table_basic->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 25)));
        this->table_basic->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 25)));
        this->table_basic->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 25)));
        this->table_basic->Controls->Add(this->basic_button_zero, 0, 5);
        this->table_basic->Controls->Add(this->basic_button_plus_minus, 0, 5);
        this->table_basic->Controls->Add(this->basic_button_equals, 0, 5);
        this->table_basic->Controls->Add(this->basic_button_period, 0, 5);
        this->table_basic->Controls->Add(this->basic_button_two, 0, 4);
        this->table_basic->Controls->Add(this->basic_button_one, 0, 4);
        this->table_basic->Controls->Add(this->basic_button_addition, 0, 4);
        this->table_basic->Controls->Add(this->basic_button_three, 0, 4);
        this->table_basic->Controls->Add(this->basic_button_five, 0, 3);
        this->table_basic->Controls->Add(this->basic_button_four, 0, 3);
        this->table_basic->Controls->Add(this->basic_button_subtraction, 0, 3);
        this->table_basic->Controls->Add(this->basic_button_six, 0, 3);
        this->table_basic->Controls->Add(this->basic_button_nine, 0, 2);
        this->table_basic->Controls->Add(this->basic_button_seven, 0, 2);
        this->table_basic->Controls->Add(this->basic_button_miltiplication, 0, 2);
        this->table_basic->Controls->Add(this->basic_button_eight, 0, 2);
        this->table_basic->Controls->Add(this->basic_button_power_two, 0, 1);
        this->table_basic->Controls->Add(this->basic_button_one_divided_by, 0, 1);
        this->table_basic->Controls->Add(this->basic_button_division, 0, 1);
        this->table_basic->Controls->Add(this->basic_button_square_root, 0, 1);
        this->table_basic->Controls->Add(this->basic_button_clear_everything, 0, 0);
        this->table_basic->Controls->Add(this->basic_button_percent, 0, 0);
        this->table_basic->Controls->Add(this->basic_button_delete, 0, 0);
        this->table_basic->Controls->Add(this->basic_button_clear, 0, 0);
        this->table_basic->Dock = System::Windows::Forms::DockStyle::Bottom;
        this->table_basic->Location = System::Drawing::Point(0, 103);
        this->table_basic->Name = L"table_basic";
        this->table_basic->RowCount = 6;
        this->table_basic->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 16.66667F)));
        this->table_basic->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 16.66667F)));
        this->table_basic->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 16.66667F)));
        this->table_basic->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 16.66667F)));
        this->table_basic->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 16.66667F)));
        this->table_basic->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 16.66667F)));
        this->table_basic->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 20)));
        this->table_basic->Size = System::Drawing::Size(306, 433);
        this->table_basic->TabIndex = 3;
        //
        // basic_button_zero
        //
        this->basic_button_zero->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
        this->basic_button_zero->BackColor = System::Drawing::Color::Transparent;
        this->basic_button_zero->Dock = System::Windows::Forms::DockStyle::Fill;
        this->basic_button_zero->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
        this->basic_button_zero->Font = (gcnew System::Drawing::Font(L"Roboto Slab", 14.25F));
        this->basic_button_zero->ForeColor = System::Drawing::Color::White;
        this->basic_button_zero->Location = System::Drawing::Point(79, 363);
        this->basic_button_zero->Name = L"basic_button_zero";
        this->basic_button_zero->Size = System::Drawing::Size(70, 67);
        this->basic_button_zero->TabIndex = 0;
        this->basic_button_zero->TabStop = false;
        this->basic_button_zero->Text = L"0";
        this->basic_button_zero->UseVisualStyleBackColor = false;
        this->basic_button_zero->Click += gcnew System::EventHandler(this, &MainForm::basic_button_zero_Click);
        this->basic_button_zero->Leave += gcnew System::EventHandler(this, &MainForm::FocusListener);
        //
        // basic_button_plus_minus
        //
        this->basic_button_plus_minus->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
        this->basic_button_plus_minus->BackColor = System::Drawing::Color::Transparent;
        this->basic_button_plus_minus->Dock = System::Windows::Forms::DockStyle::Fill;
        this->basic_button_plus_minus->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
        this->basic_button_plus_minus->Font = (gcnew System::Drawing::Font(L"Roboto Slab", 14.25F));
        this->basic_button_plus_minus->ForeColor = System::Drawing::Color::White;
        this->basic_button_plus_minus->Location = System::Drawing::Point(3, 363);
        this->basic_button_plus_minus->Name = L"basic_button_plus_minus";
        this->basic_button_plus_minus->Size = System::Drawing::Size(70, 67);
        this->basic_button_plus_minus->TabIndex = 0;
        this->basic_button_plus_minus->TabStop = false;
        this->basic_button_plus_minus->Text = L"±";
        this->basic_button_plus_minus->UseVisualStyleBackColor = false;
        this->basic_button_plus_minus->Click += gcnew System::EventHandler(this, &MainForm::basic_button_plus_minus_Click);
        this->basic_button_plus_minus->Leave += gcnew System::EventHandler(this, &MainForm::FocusListener);
        //
        // basic_button_equals
        //
        this->basic_button_equals->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
        this->basic_button_equals->BackColor = System::Drawing::Color::Transparent;
        this->basic_button_equals->Dock = System::Windows::Forms::DockStyle::Fill;
        this->basic_button_equals->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
        this->basic_button_equals->Font = (gcnew System::Drawing::Font(L"Roboto Slab", 14.25F));
        this->basic_button_equals->ForeColor = System::Drawing::Color::White;
        this->basic_button_equals->Location = System::Drawing::Point(231, 363);
        this->basic_button_equals->Name = L"basic_button_equals";
        this->basic_button_equals->Size = System::Drawing::Size(72, 67);
        this->basic_button_equals->TabIndex = 0;
        this->basic_button_equals->TabStop = false;
        this->basic_button_equals->Text = L"=";
        this->basic_button_equals->UseVisualStyleBackColor = false;
        this->basic_button_equals->Click += gcnew System::EventHandler(this, &MainForm::basic_button_equals_Click);
        this->basic_button_equals->Leave += gcnew System::EventHandler(this, &MainForm::FocusListener);
        //
        // basic_button_period
        //
        this->basic_button_period->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
        this->basic_button_period->BackColor = System::Drawing::Color::Transparent;
        this->basic_button_period->Dock = System::Windows::Forms::DockStyle::Fill;
        this->basic_button_period->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
        this->basic_button_period->Font = (gcnew System::Drawing::Font(L"Roboto Slab", 14.25F));
        this->basic_button_period->ForeColor = System::Drawing::Color::White;
        this->basic_button_period->Location = System::Drawing::Point(155, 363);
        this->basic_button_period->Name = L"basic_button_period";
        this->basic_button_period->Size = System::Drawing::Size(70, 67);
        this->basic_button_period->TabIndex = 0;
        this->basic_button_period->TabStop = false;
        this->basic_button_period->Text = L",";
        this->basic_button_period->UseVisualStyleBackColor = false;
        this->basic_button_period->Click += gcnew System::EventHandler(this, &MainForm::basic_button_period_Click);
        this->basic_button_period->Leave += gcnew System::EventHandler(this, &MainForm::FocusListener);
        //
        // basic_button_two
        //
        this->basic_button_two->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
        this->basic_button_two->BackColor = System::Drawing::Color::Transparent;
        this->basic_button_two->Dock = System::Windows::Forms::DockStyle::Fill;
        this->basic_button_two->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
        this->basic_button_two->Font = (gcnew System::Drawing::Font(L"Roboto Slab", 14.25F));
        this->basic_button_two->ForeColor = System::Drawing::Color::White;
        this->basic_button_two->Location = System::Drawing::Point(79, 291);
        this->basic_button_two->Name = L"basic_button_two";
        this->basic_button_two->Size = System::Drawing::Size(70, 66);
        this->basic_button_two->TabIndex = 0;
        this->basic_button_two->TabStop = false;
        this->basic_button_two->Text = L"2";
        this->basic_button_two->UseVisualStyleBackColor = false;
        this->basic_button_two->Click += gcnew System::EventHandler(this, &MainForm::basic_button_two_Click);
        this->basic_button_two->Leave += gcnew System::EventHandler(this, &MainForm::FocusListener);
        //
        // basic_button_one
        //
        this->basic_button_one->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
        this->basic_button_one->BackColor = System::Drawing::Color::Transparent;
        this->basic_button_one->Dock = System::Windows::Forms::DockStyle::Fill;
        this->basic_button_one->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
        this->basic_button_one->Font = (gcnew System::Drawing::Font(L"Roboto Slab", 14.25F));
        this->basic_button_one->ForeColor = System::Drawing::Color::White;
        this->basic_button_one->Location = System::Drawing::Point(3, 291);
        this->basic_button_one->Name = L"basic_button_one";
        this->basic_button_one->Size = System::Drawing::Size(70, 66);
        this->basic_button_one->TabIndex = 0;
        this->basic_button_one->TabStop = false;
        this->basic_button_one->Text = L"1";
        this->basic_button_one->UseVisualStyleBackColor = false;
        this->basic_button_one->Click += gcnew System::EventHandler(this, &MainForm::basic_button_one_Click);
        this->basic_button_one->Leave += gcnew System::EventHandler(this, &MainForm::FocusListener);
        //
        // basic_button_addition
        //
        this->basic_button_addition->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
        this->basic_button_addition->BackColor = System::Drawing::Color::Transparent;
        this->basic_button_addition->Dock = System::Windows::Forms::DockStyle::Fill;
        this->basic_button_addition->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
        this->basic_button_addition->Font = (gcnew System::Drawing::Font(L"Roboto Slab", 14.25F));
        this->basic_button_addition->ForeColor = System::Drawing::Color::White;
        this->basic_button_addition->Location = System::Drawing::Point(231, 291);
        this->basic_button_addition->Name = L"basic_button_addition";
        this->basic_button_addition->Size = System::Drawing::Size(72, 66);
        this->basic_button_addition->TabIndex = 0;
        this->basic_button_addition->TabStop = false;
        this->basic_button_addition->Text = L"+";
        this->basic_button_addition->UseVisualStyleBackColor = false;
        this->basic_button_addition->Click += gcnew System::EventHandler(this, &MainForm::basic_button_addition_Click);
        this->basic_button_addition->Leave += gcnew System::EventHandler(this, &MainForm::FocusListener);
        //
        // basic_button_three
        //
        this->basic_button_three->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
        this->basic_button_three->BackColor = System::Drawing::Color::Transparent;
        this->basic_button_three->Dock = System::Windows::Forms::DockStyle::Fill;
        this->basic_button_three->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
        this->basic_button_three->Font = (gcnew System::Drawing::Font(L"Roboto Slab", 14.25F));
        this->basic_button_three->ForeColor = System::Drawing::Color::White;
        this->basic_button_three->Location = System::Drawing::Point(155, 291);
        this->basic_button_three->Name = L"basic_button_three";
        this->basic_button_three->Size = System::Drawing::Size(70, 66);
        this->basic_button_three->TabIndex = 0;
        this->basic_button_three->TabStop = false;
        this->basic_button_three->Text = L"3";
        this->basic_button_three->UseVisualStyleBackColor = false;
        this->basic_button_three->Click += gcnew System::EventHandler(this, &MainForm::basic_button_three_Click);
        this->basic_button_three->Leave += gcnew System::EventHandler(this, &MainForm::FocusListener);
        //
        // basic_button_five
        //
        this->basic_button_five->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
        this->basic_button_five->BackColor = System::Drawing::Color::Transparent;
        this->basic_button_five->Dock = System::Windows::Forms::DockStyle::Fill;
        this->basic_button_five->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
        this->basic_button_five->Font = (gcnew System::Drawing::Font(L"Roboto Slab", 14.25F));
        this->basic_button_five->ForeColor = System::Drawing::Color::White;
        this->basic_button_five->Location = System::Drawing::Point(79, 219);
        this->basic_button_five->Name = L"basic_button_five";
        this->basic_button_five->Size = System::Drawing::Size(70, 66);
        this->basic_button_five->TabIndex = 0;
        this->basic_button_five->TabStop = false;
        this->basic_button_five->Text = L"5";
        this->basic_button_five->UseVisualStyleBackColor = false;
        this->basic_button_five->Click += gcnew System::EventHandler(this, &MainForm::basic_button_five_Click);
        this->basic_button_five->Leave += gcnew System::EventHandler(this, &MainForm::FocusListener);
        //
        // basic_button_four
        //
        this->basic_button_four->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
        this->basic_button_four->BackColor = System::Drawing::Color::Transparent;
        this->basic_button_four->Dock = System::Windows::Forms::DockStyle::Fill;
        this->basic_button_four->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
        this->basic_button_four->Font = (gcnew System::Drawing::Font(L"Roboto Slab", 14.25F));
        this->basic_button_four->ForeColor = System::Drawing::Color::White;
        this->basic_button_four->Location = System::Drawing::Point(3, 219);
        this->basic_button_four->Name = L"basic_button_four";
        this->basic_button_four->Size = System::Drawing::Size(70, 66);
        this->basic_button_four->TabIndex = 0;
        this->basic_button_four->TabStop = false;
        this->basic_button_four->Text = L"4";
        this->basic_button_four->UseVisualStyleBackColor = false;
        this->basic_button_four->Click += gcnew System::EventHandler(this, &MainForm::basic_button_four_Click);
        this->basic_button_four->Leave += gcnew System::EventHandler(this, &MainForm::FocusListener);
        //
        // basic_button_subtraction
        //
        this->basic_button_subtraction->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
        this->basic_button_subtraction->BackColor = System::Drawing::Color::Transparent;
        this->basic_button_subtraction->Dock = System::Windows::Forms::DockStyle::Fill;
        this->basic_button_subtraction->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
        this->basic_button_subtraction->Font = (gcnew System::Drawing::Font(L"Roboto Slab", 14.25F));
        this->basic_button_subtraction->ForeColor = System::Drawing::Color::White;
        this->basic_button_subtraction->Location = System::Drawing::Point(231, 219);
        this->basic_button_subtraction->Name = L"basic_button_subtraction";
        this->basic_button_subtraction->Size = System::Drawing::Size(72, 66);
        this->basic_button_subtraction->TabIndex = 0;
        this->basic_button_subtraction->TabStop = false;
        this->basic_button_subtraction->Text = L"-";
        this->basic_button_subtraction->UseVisualStyleBackColor = false;
        this->basic_button_subtraction->Click += gcnew System::EventHandler(this, &MainForm::basic_button_subtraction_Click);
        this->basic_button_subtraction->Leave += gcnew System::EventHandler(this, &MainForm::FocusListener);
        //
        // basic_button_six
        //
        this->basic_button_six->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
        this->basic_button_six->BackColor = System::Drawing::Color::Transparent;
        this->basic_button_six->Dock = System::Windows::Forms::DockStyle::Fill;
        this->basic_button_six->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
        this->basic_button_six->Font = (gcnew System::Drawing::Font(L"Roboto Slab", 14.25F));
        this->basic_button_six->ForeColor = System::Drawing::Color::White;
        this->basic_button_six->Location = System::Drawing::Point(155, 219);
        this->basic_button_six->Name = L"basic_button_six";
        this->basic_button_six->Size = System::Drawing::Size(70, 66);
        this->basic_button_six->TabIndex = 0;
        this->basic_button_six->TabStop = false;
        this->basic_button_six->Text = L"6";
        this->basic_button_six->UseVisualStyleBackColor = false;
        this->basic_button_six->Click += gcnew System::EventHandler(this, &MainForm::basic_button_six_Click);
        this->basic_button_six->Leave += gcnew System::EventHandler(this, &MainForm::FocusListener);
        //
        // basic_button_nine
        //
        this->basic_button_nine->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
        this->basic_button_nine->BackColor = System::Drawing::Color::Transparent;
        this->basic_button_nine->Dock = System::Windows::Forms::DockStyle::Fill;
        this->basic_button_nine->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
        this->basic_button_nine->Font = (gcnew System::Drawing::Font(L"Roboto Slab", 14.25F));
        this->basic_button_nine->ForeColor = System::Drawing::Color::White;
        this->basic_button_nine->Location = System::Drawing::Point(79, 147);
        this->basic_button_nine->Name = L"basic_button_nine";
        this->basic_button_nine->Size = System::Drawing::Size(70, 66);
        this->basic_button_nine->TabIndex = 0;
        this->basic_button_nine->TabStop = false;
        this->basic_button_nine->Text = L"9";
        this->basic_button_nine->UseVisualStyleBackColor = false;
        this->basic_button_nine->Click += gcnew System::EventHandler(this, &MainForm::basic_button_nine_Click);
        this->basic_button_nine->Leave += gcnew System::EventHandler(this, &MainForm::FocusListener);
        //
        // basic_button_seven
        //
        this->basic_button_seven->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
        this->basic_button_seven->BackColor = System::Drawing::Color::Transparent;
        this->basic_button_seven->Dock = System::Windows::Forms::DockStyle::Fill;
        this->basic_button_seven->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
        this->basic_button_seven->Font = (gcnew System::Drawing::Font(L"Roboto Slab", 14.25F));
        this->basic_button_seven->ForeColor = System::Drawing::Color::White;
        this->basic_button_seven->Location = System::Drawing::Point(3, 147);
        this->basic_button_seven->Name = L"basic_button_seven";
        this->basic_button_seven->Size = System::Drawing::Size(70, 66);
        this->basic_button_seven->TabIndex = 0;
        this->basic_button_seven->TabStop = false;
        this->basic_button_seven->Text = L"7";
        this->basic_button_seven->UseVisualStyleBackColor = false;
        this->basic_button_seven->Click += gcnew System::EventHandler(this, &MainForm::basic_button_seven_Click);
        this->basic_button_seven->Leave += gcnew System::EventHandler(this, &MainForm::FocusListener);
        //
        // basic_button_miltiplication
        //
        this->basic_button_miltiplication->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
        this->basic_button_miltiplication->BackColor = System::Drawing::Color::Transparent;
        this->basic_button_miltiplication->Dock = System::Windows::Forms::DockStyle::Fill;
        this->basic_button_miltiplication->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
        this->basic_button_miltiplication->Font = (gcnew System::Drawing::Font(L"Roboto Slab", 14.25F));
        this->basic_button_miltiplication->ForeColor = System::Drawing::Color::White;
        this->basic_button_miltiplication->Location = System::Drawing::Point(231, 147);
        this->basic_button_miltiplication->Name = L"basic_button_miltiplication";
        this->basic_button_miltiplication->Size = System::Drawing::Size(72, 66);
        this->basic_button_miltiplication->TabIndex = 0;
        this->basic_button_miltiplication->TabStop = false;
        this->basic_button_miltiplication->Text = L"*";
        this->basic_button_miltiplication->UseVisualStyleBackColor = false;
        this->basic_button_miltiplication->Click += gcnew System::EventHandler(this, &MainForm::basic_button_miltiplication_Click);
        this->basic_button_miltiplication->Leave += gcnew System::EventHandler(this, &MainForm::FocusListener);
        //
        // basic_button_eight
        //
        this->basic_button_eight->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
        this->basic_button_eight->BackColor = System::Drawing::Color::Transparent;
        this->basic_button_eight->Dock = System::Windows::Forms::DockStyle::Fill;
        this->basic_button_eight->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
        this->basic_button_eight->Font = (gcnew System::Drawing::Font(L"Roboto Slab", 14.25F));
        this->basic_button_eight->ForeColor = System::Drawing::Color::White;
        this->basic_button_eight->Location = System::Drawing::Point(155, 147);
        this->basic_button_eight->Name = L"basic_button_eight";
        this->basic_button_eight->Size = System::Drawing::Size(70, 66);
        this->basic_button_eight->TabIndex = 0;
        this->basic_button_eight->TabStop = false;
        this->basic_button_eight->Text = L"8";
        this->basic_button_eight->UseVisualStyleBackColor = false;
        this->basic_button_eight->Click += gcnew System::EventHandler(this, &MainForm::basic_button_eight_Click);
        this->basic_button_eight->Leave += gcnew System::EventHandler(this, &MainForm::FocusListener);
        //
        // basic_button_power_two
        //
        this->basic_button_power_two->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
        this->basic_button_power_two->BackColor = System::Drawing::Color::Transparent;
        this->basic_button_power_two->Dock = System::Windows::Forms::DockStyle::Fill;
        this->basic_button_power_two->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
        this->basic_button_power_two->Font = (gcnew System::Drawing::Font(L"Roboto Slab", 14.25F));
        this->basic_button_power_two->ForeColor = System::Drawing::Color::White;
        this->basic_button_power_two->Location = System::Drawing::Point(79, 75);
        this->basic_button_power_two->Name = L"basic_button_power_two";
        this->basic_button_power_two->Size = System::Drawing::Size(70, 66);
        this->basic_button_power_two->TabIndex = 0;
        this->basic_button_power_two->TabStop = false;
        this->basic_button_power_two->Text = L"x²";
        this->basic_button_power_two->UseVisualStyleBackColor = false;
        this->basic_button_power_two->Click += gcnew System::EventHandler(this, &MainForm::basic_button_power_two_Click);
        this->basic_button_power_two->Leave += gcnew System::EventHandler(this, &MainForm::FocusListener);
        //
        // basic_button_one_divided_by
        //
        this->basic_button_one_divided_by->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
        this->basic_button_one_divided_by->BackColor = System::Drawing::Color::Transparent;
        this->basic_button_one_divided_by->Dock = System::Windows::Forms::DockStyle::Fill;
        this->basic_button_one_divided_by->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
        this->basic_button_one_divided_by->Font = (gcnew System::Drawing::Font(L"Roboto Slab", 14.25F));
        this->basic_button_one_divided_by->ForeColor = System::Drawing::Color::White;
        this->basic_button_one_divided_by->Location = System::Drawing::Point(3, 75);
        this->basic_button_one_divided_by->Name = L"basic_button_one_divided_by";
        this->basic_button_one_divided_by->Size = System::Drawing::Size(70, 66);
        this->basic_button_one_divided_by->TabIndex = 0;
        this->basic_button_one_divided_by->TabStop = false;
        this->basic_button_one_divided_by->Text = L"⅟x";
        this->basic_button_one_divided_by->UseVisualStyleBackColor = false;
        this->basic_button_one_divided_by->Click += gcnew System::EventHandler(this, &MainForm::basic_button_one_divided_by_Click);
        this->basic_button_one_divided_by->Leave += gcnew System::EventHandler(this, &MainForm::FocusListener);
        //
        // basic_button_division
        //
        this->basic_button_division->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
        this->basic_button_division->BackColor = System::Drawing::Color::Transparent;
        this->basic_button_division->Dock = System::Windows::Forms::DockStyle::Fill;
        this->basic_button_division->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
        this->basic_button_division->Font = (gcnew System::Drawing::Font(L"Roboto Slab", 14.25F));
        this->basic_button_division->ForeColor = System::Drawing::Color::White;
        this->basic_button_division->Location = System::Drawing::Point(231, 75);
        this->basic_button_division->Name = L"basic_button_division";
        this->basic_button_division->Size = System::Drawing::Size(72, 66);
        this->basic_button_division->TabIndex = 0;
        this->basic_button_division->TabStop = false;
        this->basic_button_division->Text = L"/";
        this->basic_button_division->UseVisualStyleBackColor = false;
        this->basic_button_division->Click += gcnew System::EventHandler(this, &MainForm::basic_button_division_Click);
        this->basic_button_division->Leave += gcnew System::EventHandler(this, &MainForm::FocusListener);
        //
        // basic_button_square_root
        //
        this->basic_button_square_root->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
        this->basic_button_square_root->BackColor = System::Drawing::Color::Transparent;
        this->basic_button_square_root->Dock = System::Windows::Forms::DockStyle::Fill;
        this->basic_button_square_root->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
        this->basic_button_square_root->Font = (gcnew System::Drawing::Font(L"Roboto Slab", 14.25F));
        this->basic_button_square_root->ForeColor = System::Drawing::Color::White;
        this->basic_button_square_root->Location = System::Drawing::Point(155, 75);
        this->basic_button_square_root->Name = L"basic_button_square_root";
        this->basic_button_square_root->Size = System::Drawing::Size(70, 66);
        this->basic_button_square_root->TabIndex = 0;
        this->basic_button_square_root->TabStop = false;
        this->basic_button_square_root->Text = L"√x";
        this->basic_button_square_root->UseVisualStyleBackColor = false;
        this->basic_button_square_root->Click += gcnew System::EventHandler(this, &MainForm::basic_button_square_root_Click);
        this->basic_button_square_root->Leave += gcnew System::EventHandler(this, &MainForm::FocusListener);
        //
        // basic_button_clear_everything
        //
        this->basic_button_clear_everything->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
        this->basic_button_clear_everything->BackColor = System::Drawing::Color::Transparent;
        this->basic_button_clear_everything->Dock = System::Windows::Forms::DockStyle::Fill;
        this->basic_button_clear_everything->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
        this->basic_button_clear_everything->Font = (gcnew System::Drawing::Font(L"Roboto Slab", 14.25F));
        this->basic_button_clear_everything->ForeColor = System::Drawing::Color::White;
        this->basic_button_clear_everything->Location = System::Drawing::Point(79, 3);
        this->basic_button_clear_everything->Name = L"basic_button_clear_everything";
        this->basic_button_clear_everything->Size = System::Drawing::Size(70, 66);
        this->basic_button_clear_everything->TabIndex = 0;
        this->basic_button_clear_everything->TabStop = false;
        this->basic_button_clear_everything->Text = L"CE";
        this->basic_button_clear_everything->UseVisualStyleBackColor = false;
        this->basic_button_clear_everything->Click += gcnew System::EventHandler(this, &MainForm::basic_button_clear_everything_Click);
        this->basic_button_clear_everything->Leave += gcnew System::EventHandler(this, &MainForm::FocusListener);
        //
        // basic_button_percent
        //
        this->basic_button_percent->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
        this->basic_button_percent->BackColor = System::Drawing::Color::Transparent;
        this->basic_button_percent->Dock = System::Windows::Forms::DockStyle::Fill;
        this->basic_button_percent->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
        this->basic_button_percent->Font = (gcnew System::Drawing::Font(L"Roboto Slab", 14.25F));
        this->basic_button_percent->ForeColor = System::Drawing::Color::White;
        this->basic_button_percent->Location = System::Drawing::Point(3, 3);
        this->basic_button_percent->Name = L"basic_button_percent";
        this->basic_button_percent->Size = System::Drawing::Size(70, 66);
        this->basic_button_percent->TabIndex = 0;
        this->basic_button_percent->TabStop = false;
        this->basic_button_percent->Text = L"%";
        this->basic_button_percent->UseVisualStyleBackColor = false;
        this->basic_button_percent->Click += gcnew System::EventHandler(this, &MainForm::basic_button_percent_Click);
        this->basic_button_percent->Leave += gcnew System::EventHandler(this, &MainForm::FocusListener);
        //
        // basic_button_delete
        //
        this->basic_button_delete->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
        this->basic_button_delete->BackColor = System::Drawing::Color::Transparent;
        this->basic_button_delete->Dock = System::Windows::Forms::DockStyle::Fill;
        this->basic_button_delete->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
        this->basic_button_delete->Font = (gcnew System::Drawing::Font(L"Roboto Slab", 14.25F));
        this->basic_button_delete->ForeColor = System::Drawing::Color::White;
        this->basic_button_delete->Location = System::Drawing::Point(231, 3);
        this->basic_button_delete->Name = L"basic_button_delete";
        this->basic_button_delete->Size = System::Drawing::Size(72, 66);
        this->basic_button_delete->TabIndex = 0;
        this->basic_button_delete->TabStop = false;
        this->basic_button_delete->Text = L"⇐";
        this->basic_button_delete->UseVisualStyleBackColor = false;
        this->basic_button_delete->Click += gcnew System::EventHandler(this, &MainForm::basic_button_delete_Click);
        this->basic_button_delete->Leave += gcnew System::EventHandler(this, &MainForm::FocusListener);
        //
        // basic_button_clear
        //
        this->basic_button_clear->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
        this->basic_button_clear->BackColor = System::Drawing::Color::Transparent;
        this->basic_button_clear->Dock = System::Windows::Forms::DockStyle::Fill;
        this->basic_button_clear->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
        this->basic_button_clear->Font = (gcnew System::Drawing::Font(L"Roboto Slab", 14.25F));
        this->basic_button_clear->ForeColor = System::Drawing::Color::White;
        this->basic_button_clear->Location = System::Drawing::Point(155, 3);
        this->basic_button_clear->Name = L"basic_button_clear";
        this->basic_button_clear->Size = System::Drawing::Size(70, 66);
        this->basic_button_clear->TabIndex = 0;
        this->basic_button_clear->TabStop = false;
        this->basic_button_clear->Text = L"C";
        this->basic_button_clear->UseVisualStyleBackColor = false;
        this->basic_button_clear->Click += gcnew System::EventHandler(this, &MainForm::basic_button_clear_Click);
        this->basic_button_clear->Leave += gcnew System::EventHandler(this, &MainForm::FocusListener);
        //
        // MainForm
        //
        this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
        this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
        this->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
        this->ClientSize = System::Drawing::Size(384, 561);
        this->Controls->Add(this->panel_conversion);
        this->Controls->Add(this->panel_basic);
        this->Controls->Add(this->menu_left);
        this->Controls->Add(this->menu_top);
        this->KeyPreview = true;
        this->MinimumSize = System::Drawing::Size(400, 600);
        this->Name = L"MainForm";
        this->SizeGripStyle = System::Windows::Forms::SizeGripStyle::Show;
        this->Text = L"MainForm";
        this->SizeChanged += gcnew System::EventHandler(this, &MainForm::FormSizeListener);
        this->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MainForm::KeyListener);
        this->menu_top->ResumeLayout(false);
        this->menu_top->PerformLayout();
        this->menu_left->ResumeLayout(false);
        this->menu_left->PerformLayout();
        this->panel_conversion->ResumeLayout(false);
        this->split_convert->Panel1->ResumeLayout(false);
        this->split_convert->Panel2->ResumeLayout(false);
        (cli::safe_cast<System::ComponentModel::ISupportInitialize ^>(this->split_convert))->EndInit();
        this->split_convert->ResumeLayout(false);
        this->table_convert->ResumeLayout(false);
        this->panel_basic->ResumeLayout(false);
        this->split_basic->Panel1->ResumeLayout(false);
        this->split_basic->Panel2->ResumeLayout(false);
        (cli::safe_cast<System::ComponentModel::ISupportInitialize ^>(this->split_basic))->EndInit();
        this->split_basic->ResumeLayout(false);
        this->table_basic->ResumeLayout(false);
        this->ResumeLayout(false);
        this->PerformLayout();
    }
#pragma endregion

   private:
    Void FocusListener(Object ^ sender, EventArgs ^ e) {
        this->Focus();
        this->ActiveControl = nullptr;
    }

   private:
    Void ValidateConnection() {
        try {
            API::MakeHttpRequest("http://localhost:8080/", nullptr);
            button_Lenght->Enabled = true;
            button_Weight->Enabled = true;
            button_Temperature->Enabled = true;
            button_Area->Enabled = true;
            button_Speed->Enabled = true;
        } catch (Exception ^ e) {
            button_Lenght->Enabled = false;
            button_Weight->Enabled = false;
            button_Temperature->Enabled = false;
            button_Area->Enabled = false;
            button_Speed->Enabled = false;
        }
    }

   private:
    Void button_controll_left_menu_Click(Object ^ sender, EventArgs ^ e) {
        if (menu_left->Visible && this->Width < 600) {
            menu_left->Visible = false;
        } else {
            menu_left->Visible = true;
        }
        GC::Collect();
    }

   private:
    Void menu_left_ItemClicked(Object ^ sender, ToolStripItemClickedEventArgs ^ e) {
        String ^ selected = e->ClickedItem->Text;
        if (e->ClickedItem->Name->ToString()->Equals("button_basic")) {
            panel_basic->Show();
            panel_basic->Enabled = true;
            panel_conversion->Hide();
            panel_conversion->Enabled = false;
            basic_label_result_input->ResetText();
        } else {
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
            } else if (selected->Equals("Weight")) {
                for each (DictionaryEntry ^ val in weights) {
                    combo_from->Items->Add(val->Key);
                }
                for each (DictionaryEntry ^ val in weights) {
                    combo_to->Items->Add(val->Key);
                }
            } else if (selected->Equals("Temperature")) {
                for each (DictionaryEntry ^ val in temperatures) {
                    combo_from->Items->Add(val->Key);
                }
                for each (DictionaryEntry ^ val in temperatures) {
                    combo_to->Items->Add(val->Key);
                }
            } else if (selected->Equals("Area")) {
                for each (DictionaryEntry ^ val in areas) {
                    combo_from->Items->Add(val->Key);
                }
                for each (DictionaryEntry ^ val in areas) {
                    combo_to->Items->Add(val->Key);
                }
            } else if (selected->Equals("Speed")) {
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
            label_conversion_result->ResetText();
        }

        label_top_operaion->Text = selected;
        GC::Collect();
    }

   private:
    Void basic_button_equals_Click(Object ^ sender, EventArgs ^ e) {
        if (firstValue != System::Double::MinValue && action != ' ') {
            switch (action) {
                case '+':
                    if (calculated) {
                        firstValue = System::Convert::ToDouble(basic_label_result_input->Text);
                        basic_label_action->Text = System::Convert::ToString(firstValue) + " + " + System::Convert::ToString(secondValue);
                    } else {
                        basic_label_action->Text += basic_label_result_input->Text;
                        secondValue = System::Convert::ToDouble(basic_label_result_input->Text);
                    }
                    basic_label_result_input->Text = System::Convert::ToString(firstValue + secondValue);
                    break;
                case '-':
                    if (calculated) {
                        firstValue = System::Convert::ToDouble(basic_label_result_input->Text);
                        basic_label_action->Text = System::Convert::ToString(firstValue) + " - " + System::Convert::ToString(secondValue);
                    } else {
                        basic_label_action->Text += basic_label_result_input->Text;
                        secondValue = System::Convert::ToDouble(basic_label_result_input->Text);
                    }
                    basic_label_result_input->Text = System::Convert::ToString(firstValue - secondValue);
                    break;
                case '/':
                    if (calculated) {
                        firstValue = System::Convert::ToDouble(basic_label_result_input->Text);
                        basic_label_action->Text = System::Convert::ToString(firstValue) + " / " + System::Convert::ToString(secondValue);
                    } else {
                        basic_label_action->Text += basic_label_result_input->Text;
                        secondValue = System::Convert::ToDouble(basic_label_result_input->Text);
                    }
                    basic_label_result_input->Text = System::Convert::ToString(firstValue / secondValue);
                    break;
                case '*':
                    if (calculated) {
                        firstValue = System::Convert::ToDouble(basic_label_result_input->Text);
                        basic_label_action->Text = System::Convert::ToString(firstValue) + " * " + System::Convert::ToString(secondValue);
                    } else {
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

   private:
    Void basic_button_period_Click(Object ^ sender, EventArgs ^ e) {
        if (!basic_label_result_input->Text->Contains(",")) {
            basic_label_result_input->Text += ",";
        }
    }

   private:
    Void basic_button_addition_Click(Object ^ sender, EventArgs ^ e) {
        if (basic_label_result_input->Text->Length > 0) {
            firstValue = System::Convert::ToDouble(basic_label_result_input->Text);
            action = '+';
            basic_label_action->Text = basic_label_result_input->Text + " + ";
        }
        basic_label_result_input->ResetText();
    }

   private:
    Void basic_button_subtraction_Click(Object ^ sender, EventArgs ^ e) {
        if (basic_label_result_input->Text->Length > 0) {
            firstValue = System::Convert::ToDouble(basic_label_result_input->Text);
            action = '-';
            basic_label_action->Text = basic_label_result_input->Text + " - ";
        }
        basic_label_result_input->ResetText();
    }

   private:
    Void basic_button_plus_minus_Click(Object ^ sender, EventArgs ^ e) {
        if (basic_label_result_input->Text->Contains("-")) {
            basic_label_result_input->Text = basic_label_result_input->Text->Substring(1);
        } else {
            basic_label_result_input->Text = basic_label_result_input->Text->Insert(0, "-");
        }
    }

   private:
    Void basic_button_miltiplication_Click(Object ^ sender, EventArgs ^ e) {
        if (basic_label_result_input->Text->Length > 0) {
            firstValue = System::Convert::ToDouble(basic_label_result_input->Text);
            action = '*';
            basic_label_action->Text = basic_label_result_input->Text + " * ";
        }
        basic_label_result_input->ResetText();
    }

   private:
    Void basic_button_division_Click(Object ^ sender, EventArgs ^ e) {
        if (basic_label_result_input->Text->Length > 0) {
            firstValue = System::Convert::ToDouble(basic_label_result_input->Text);
            action = '/';
            basic_label_action->Text = basic_label_result_input->Text + " / ";
        }
        basic_label_result_input->ResetText();
    }

   private:
    Void basic_button_one_divided_by_Click(Object ^ sender, EventArgs ^ e) {
        if (basic_label_result_input->Text->Length > 0) {
            double val;
            val = System::Double::Parse(basic_label_result_input->Text);
            basic_label_action->Text = L"⅟" + System::Convert::ToString(val);
            basic_label_result_input->Text = System::Convert::ToString(1 / val);
        }
    }

   private:
    Void basic_button_power_two_Click(Object ^ sender, EventArgs ^ e) {
        if (basic_label_result_input->Text->Length > 0) {
            double val;
            val = System::Double::Parse(basic_label_result_input->Text);
            basic_label_action->Text = System::Convert::ToString(val) + L"²";
            basic_label_result_input->Text = System::Convert::ToString(System::Math::Pow(val, 2));
        }
    }

   private:
    Void basic_button_square_root_Click(Object ^ sender, EventArgs ^ e) {
        if (basic_label_result_input->Text->Length > 0) {
            double val;
            val = System::Double::Parse(basic_label_result_input->Text);
            basic_label_action->Text = L"√" + System::Convert::ToString(val);
            basic_label_result_input->Text = System::Convert::ToString(System::Math::Sqrt(val));
        }
    }

   private:
    Void basic_button_percent_Click(Object ^ sender, EventArgs ^ e) {
        if (basic_label_result_input->Text->Length > 0) {
            double val;
            val = System::Double::Parse(basic_label_result_input->Text);
            basic_label_action->Text = L"%" + System::Convert::ToString(val);
            if ((int)val % 2) {
                basic_label_result_input->Text = "Odd";
            } else {
                basic_label_result_input->Text = "Even";
            }
        }
        calculated = true;
    }

   private:
    Void basic_button_delete_Click(Object ^ sender, EventArgs ^ e) {
        if (basic_label_result_input->Text->Length > 0) {
            basic_label_result_input->Text = basic_label_result_input->Text->Substring(0, basic_label_result_input->Text->Length - 1);
        }
    }

   private:
    Void basic_button_clear_Click(Object ^ sender, EventArgs ^ e) {
        basic_label_result_input->ResetText();
    }

   private:
    Void basic_button_clear_everything_Click(Object ^ sender, EventArgs ^ e) {
        action = ' ';
        firstValue = System::Double::MinValue;
        secondValue = System::Double::MinValue;
        basic_label_action->ResetText();
        basic_label_result_input->ResetText();
        calculated = false;
    }

   private:
    Void basic_button_zero_Click(Object ^ sender, EventArgs ^ e) {
        if (calculated) {
            basic_button_clear_everything->PerformClick();
        }
        basic_label_result_input->Text += "0";
    }

   private:
    Void basic_button_one_Click(Object ^ sender, EventArgs ^ e) {
        if (calculated) {
            basic_button_clear_everything->PerformClick();
        }
        basic_label_result_input->Text += "1";
    }

   private:
    Void basic_button_two_Click(Object ^ sender, EventArgs ^ e) {
        if (calculated) {
            basic_button_clear_everything->PerformClick();
        }
        basic_label_result_input->Text += "2";
    }

   private:
    Void basic_button_three_Click(Object ^ sender, EventArgs ^ e) {
        if (calculated) {
            basic_button_clear_everything->PerformClick();
        }
        basic_label_result_input->Text += "3";
    }

   private:
    Void basic_button_four_Click(Object ^ sender, EventArgs ^ e) {
        if (calculated) {
            basic_button_clear_everything->PerformClick();
        }
        basic_label_result_input->Text += "4";
    }

   private:
    Void basic_button_five_Click(Object ^ sender, EventArgs ^ e) {
        if (calculated) {
            basic_button_clear_everything->PerformClick();
        }
        basic_label_result_input->Text += "5";
    }

   private:
    Void basic_button_six_Click(Object ^ sender, EventArgs ^ e) {
        if (calculated) {
            basic_button_clear_everything->PerformClick();
        }
        basic_label_result_input->Text += "6";
    }

   private:
    Void basic_button_seven_Click(Object ^ sender, EventArgs ^ e) {
        if (calculated) {
            basic_button_clear_everything->PerformClick();
        }
        basic_label_result_input->Text += "7";
    }

   private:
    Void basic_button_eight_Click(Object ^ sender, EventArgs ^ e) {
        if (calculated) {
            basic_button_clear_everything->PerformClick();
        }
        basic_label_result_input->Text += "8";
    }

   private:
    Void basic_button_nine_Click(Object ^ sender, EventArgs ^ e) {
        if (calculated) {
            basic_button_clear_everything->PerformClick();
        }
        basic_label_result_input->Text += "9";
    }

   private:
    Void perform_conversion(Object ^ sender, EventArgs ^ e) {
        if (label_conversion_input->Text->Length > 0) {
            Console::Write(label_conversion_input->Text);
        }
    }

   private:
    Void convert_button_zero_Click(Object ^ sender, EventArgs ^ e) {
        label_conversion_input->Text += "0";
    }

   private:
    Void convert_button_one_Click(Object ^ sender, EventArgs ^ e) {
        label_conversion_input->Text += "1";
    }

   private:
    Void convert_button_two_Click(Object ^ sender, EventArgs ^ e) {
        label_conversion_input->Text += "2";
    }

   private:
    Void convert_button_three_Click(Object ^ sender, EventArgs ^ e) {
        label_conversion_input->Text += "3";
    }

   private:
    Void convert_button_four_Click(Object ^ sender, EventArgs ^ e) {
        label_conversion_input->Text += "4";
    }

   private:
    Void convert_button_five_Click(Object ^ sender, EventArgs ^ e) {
        label_conversion_input->Text += "5";
    }

   private:
    Void convert_button_six_Click(Object ^ sender, EventArgs ^ e) {
        label_conversion_input->Text += "6";
    }

   private:
    Void convert_button_seven_Click(Object ^ sender, EventArgs ^ e) {
        label_conversion_input->Text += "7";
    }

   private:
    Void convert_button_eight_Click(Object ^ sender, EventArgs ^ e) {
        label_conversion_input->Text += "8";
    }

   private:
    Void convert_button_nine_Click(Object ^ sender, EventArgs ^ e) {
        label_conversion_input->Text += "9";
    }

   private:
    Void convert_button_period_Click(Object ^ sender, EventArgs ^ e) {
        if (!label_conversion_input->Text->ToString()->Contains(",")) {
            if (label_conversion_input->Text->Length == 0) {
                label_conversion_input->Text += "0,";
            } else {
                label_conversion_input->Text += ",";
            }
        }
    }

   private:
    Void convert_button_erase_Click(Object ^ sender, EventArgs ^ e) {
        if (label_conversion_input->Text->Length > 0) {
            label_conversion_input->Text = label_conversion_input->Text->Substring(0, label_conversion_input->Text->Length - 1);
        }
    }

   private:
    Void convert_button_erase_everything_Click(Object ^ sender, EventArgs ^ e) {
        label_conversion_input->ResetText();
        label_conversion_result->ResetText();
    }

   private:
    Void KeyListener(Object ^ sender, KeyEventArgs ^ e) {
        if (panel_basic->Visible) {
            switch (e->KeyCode) {
                    // Numpad number Keys
                case Keys::NumPad0:
                    basic_button_zero->PerformClick();
                    break;
                case Keys::NumPad1:
                    basic_button_one->PerformClick();
                    break;
                case Keys::NumPad2:
                    basic_button_two->PerformClick();
                    break;
                case Keys::NumPad3:
                    basic_button_three->PerformClick();
                    break;
                case Keys::NumPad4:
                    basic_button_four->PerformClick();
                    break;
                case Keys::NumPad5:
                    basic_button_five->PerformClick();
                    break;
                case Keys::NumPad6:
                    basic_button_six->PerformClick();
                    break;
                case Keys::NumPad7:
                    basic_button_seven->PerformClick();
                    break;
                case Keys::NumPad8:
                    basic_button_eight->PerformClick();
                    break;
                case Keys::NumPad9:
                    basic_button_nine->PerformClick();
                    break;
                    // Number Keys
                case Keys::D0:
                    basic_button_zero->PerformClick();
                    break;
                case Keys::D1:
                    basic_button_one->PerformClick();
                    break;
                case Keys::D2:
                    basic_button_two->PerformClick();
                    break;
                case Keys::D3:
                    basic_button_three->PerformClick();
                    break;
                case Keys::D4:
                    basic_button_four->PerformClick();
                    break;
                case Keys::D5:
                    basic_button_five->PerformClick();
                    break;
                case Keys::D6:
                    basic_button_six->PerformClick();
                    break;
                case Keys::D7:
                    basic_button_seven->PerformClick();
                    break;
                case Keys::D8:
                    basic_button_eight->PerformClick();
                    break;
                case Keys::D9:
                    basic_button_nine->PerformClick();
                    break;
                    // Action Buttons
                case Keys::Enter:
                    basic_button_equals->PerformClick();
                    break;
                case Keys::Delete:
                    basic_button_clear_everything->PerformClick();
                    break;
                case Keys::Multiply:
                    basic_button_miltiplication->PerformClick();
                    break;
                case Keys::Add:
                    basic_button_addition->PerformClick();
                    break;
                case Keys::Subtract:
                    basic_button_subtraction->PerformClick();
                    break;
                case Keys::Decimal:
                    basic_button_period->PerformClick();
                    break;
                case Keys::Divide:
                    basic_button_division->PerformClick();
                    break;
                case Keys::Oemplus:
                    basic_button_addition->PerformClick();
                    break;
                case Keys::OemMinus:
                    basic_button_subtraction->PerformClick();
                    break;
                case Keys::OemPeriod:
                    basic_button_period->PerformClick();
                    break;
                case Keys::Back:
                    basic_button_delete->PerformClick();
                    break;
                case Keys::Tab:
                    button_controll_left_menu->PerformClick();
                    break;
                default:
                    break;
            }
        } else {
            switch (e->KeyCode) {
                    // Numpad number Keys
                case Keys::NumPad0:
                    convert_button_zero->PerformClick();
                    break;
                case Keys::NumPad1:
                    convert_button_one->PerformClick();
                    break;
                case Keys::NumPad2:
                    convert_button_two->PerformClick();
                    break;
                case Keys::NumPad3:
                    convert_button_three->PerformClick();
                    break;
                case Keys::NumPad4:
                    convert_button_four->PerformClick();
                    break;
                case Keys::NumPad5:
                    convert_button_five->PerformClick();
                    break;
                case Keys::NumPad6:
                    convert_button_six->PerformClick();
                    break;
                case Keys::NumPad7:
                    convert_button_seven->PerformClick();
                    break;
                case Keys::NumPad8:
                    convert_button_eight->PerformClick();
                    break;
                case Keys::NumPad9:
                    convert_button_nine->PerformClick();
                    break;
                    // Number Keys
                case Keys::D0:
                    convert_button_zero->PerformClick();
                    break;
                case Keys::D1:
                    convert_button_one->PerformClick();
                    break;
                case Keys::D2:
                    convert_button_two->PerformClick();
                    break;
                case Keys::D3:
                    convert_button_three->PerformClick();
                    break;
                case Keys::D4:
                    convert_button_four->PerformClick();
                    break;
                case Keys::D5:
                    convert_button_five->PerformClick();
                    break;
                case Keys::D6:
                    convert_button_six->PerformClick();
                    break;
                case Keys::D7:
                    convert_button_seven->PerformClick();
                    break;
                case Keys::D8:
                    convert_button_eight->PerformClick();
                    break;
                case Keys::D9:
                    convert_button_nine->PerformClick();
                    break;
                    // Action Buttons
                case Keys::Delete:
                    convert_button_erase_everything->PerformClick();
                    break;
                case Keys::Decimal:
                    convert_button_period->PerformClick();
                    break;
                case Keys::OemPeriod:
                    convert_button_period->PerformClick();
                    break;
                case Keys::Back:
                    convert_button_erase->PerformClick();
                    break;
                default:
                    break;
            }
        }
        this->Focus();
        e->Handled = true;
        e->SuppressKeyPress = true;
    }

   private:
    String ^ getValueFromHash(Hashtable ^ table, String ^ key) {
        for each (DictionaryEntry ^ val in table) {
            if (val->Key->Equals(key)) {
                return val->Value->ToString();
            }
        }
        return nullptr;
    }
        // http://localhost:8080/length?from=meter&to=meter&value=
        private : System::Void callAPI(System::Object ^ sender, System::EventArgs ^ e) {
        try {
            String ^ value = label_conversion_input->Text->ToString()->Replace(",", ".");
            if (!value->EndsWith(".") && value->Length > 0) {
                String ^ URL = "http://localhost:8080/";
                String ^ operaion = label_top_operaion->Text;
                URL += operaion->ToLower();
                if (operaion->Equals("Length")) {
                    URL += "?from=" + getValueFromHash(% lenghts, combo_from->SelectedItem->ToString());
                    URL += "&to=" + getValueFromHash(% lenghts, combo_to->SelectedItem->ToString());
                } else if (operaion->Equals("Weight")) {
                    URL += "?from=" + getValueFromHash(% weights, combo_from->SelectedItem->ToString());
                    URL += "&to=" + getValueFromHash(% weights, combo_to->SelectedItem->ToString());
                } else if (operaion->Equals("Temperature")) {
                    URL += "?from=" + getValueFromHash(% temperatures, combo_from->SelectedItem->ToString());
                    URL += "&to=" + getValueFromHash(% temperatures, combo_to->SelectedItem->ToString());
                } else if (operaion->Equals("Area")) {
                    URL += "?from=" + getValueFromHash(% areas, combo_from->SelectedItem->ToString());
                    URL += "&to=" + getValueFromHash(% areas, combo_to->SelectedItem->ToString());
                } else if (operaion->Equals("Speed")) {
                    URL += "?from=" + getValueFromHash(% speeds, combo_from->SelectedItem->ToString());
                    URL += "&to=" + getValueFromHash(% speeds, combo_to->SelectedItem->ToString());
                }
                URL += "&value=" + value;
                for each (KeyValuePair<String ^, Object ^> ^ var in API::MakeHttpRequest(URL, nullptr))
                    if (var->Key->Equals("result"))
                        label_conversion_result->Text = var->Value->ToString();
            }
        } catch (Exception ^ e) {
            panel_basic->Show();
            panel_basic->Enabled = true;
            panel_conversion->Hide();
            panel_conversion->Enabled = false;
            basic_label_result_input->ResetText();
        }
    }

   private:
    System::Void button_check_connection_Click(System::Object ^ sender, System::EventArgs ^ e) {
        Threading::Thread ^ acquireThread = gcnew Threading::Thread(gcnew Threading::ThreadStart(this, &MainForm::ValidateConnection));
        acquireThread->Start();
    }

   private:
    System::Void FormSizeListener(System::Object ^ sender, System::EventArgs ^ e) {
        if (this->Width > 680) {
            if (panel_basic->Visible && panel_basic->Enabled) {
                this->table_basic->Dock = DockStyle::Right;
                this->split_basic->Dock = DockStyle::Right;
            } else {
                this->table_convert->Dock = DockStyle::Right;
                this->split_convert->Dock = DockStyle::Right;
            }
        } else {
            if (panel_basic->Visible && panel_basic->Enabled) {
                this->split_basic->Dock = DockStyle::Top;
                this->table_basic->Dock = DockStyle::Bottom;
            } else {
                this->split_convert->Dock = DockStyle::Top;
                this->table_convert->Dock = DockStyle::Bottom;
            }
        }
    }
};
}  // namespace Convo
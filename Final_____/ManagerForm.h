﻿#pragma once
#include <string>
#include <fstream>
#include "File.h"

namespace Final {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for ManagerForm
	/// </summary>
	public ref class ManagerForm : public System::Windows::Forms::Form
	{
	public:
		ManagerForm(void)
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
		~ManagerForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TabPage^ tabPage4;
	protected:
	private: System::Windows::Forms::TabPage^ tabPage3;
	private: System::Windows::Forms::Button^ buttonlast;

	private: System::Windows::Forms::Button^ Midbutton;

	private: System::Windows::Forms::Button^ Secondbutton;

	private: System::Windows::Forms::Button^ Firstbutton;

	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart1;
	private: System::Windows::Forms::TabPage^ tabPage2;








	private: System::Windows::Forms::DataGridView^ dataGridView2;
	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::TextBox^ Quantitytextbox;
	private: System::Windows::Forms::TextBox^ Capacitytextbox;
	private: System::Windows::Forms::TextBox^ IDtextbox;
	private: System::Windows::Forms::ComboBox^ Typecombobox;
	private: System::Windows::Forms::Button^ donebutton;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;

	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::TabControl^ tabControl1;
	private: System::Windows::Forms::TabPage^ Historytab;
	private: System::Windows::Forms::Button^ Showbutton;

	private: System::Windows::Forms::DataGridView^ dataGridView3;


	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart2;
	private: System::Windows::Forms::Button^ loadbutton;

	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Button^ buttonshow;
	private: System::Windows::Forms::Button^ buttondel;



	protected:


























































	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea3 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Title^ title3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Title());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea4 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend4 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series4 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Title^ title4 = (gcnew System::Windows::Forms::DataVisualization::Charting::Title());
			this->tabPage4 = (gcnew System::Windows::Forms::TabPage());
			this->loadbutton = (gcnew System::Windows::Forms::Button());
			this->chart2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->buttonlast = (gcnew System::Windows::Forms::Button());
			this->Midbutton = (gcnew System::Windows::Forms::Button());
			this->Secondbutton = (gcnew System::Windows::Forms::Button());
			this->Firstbutton = (gcnew System::Windows::Forms::Button());
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->buttonshow = (gcnew System::Windows::Forms::Button());
			this->buttondel = (gcnew System::Windows::Forms::Button());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->Quantitytextbox = (gcnew System::Windows::Forms::TextBox());
			this->Capacitytextbox = (gcnew System::Windows::Forms::TextBox());
			this->IDtextbox = (gcnew System::Windows::Forms::TextBox());
			this->Typecombobox = (gcnew System::Windows::Forms::ComboBox());
			this->donebutton = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->Historytab = (gcnew System::Windows::Forms::TabPage());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->Showbutton = (gcnew System::Windows::Forms::Button());
			this->dataGridView3 = (gcnew System::Windows::Forms::DataGridView());
			this->tabPage4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart2))->BeginInit();
			this->tabPage3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
			this->tabPage2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			this->tabPage1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->tabControl1->SuspendLayout();
			this->Historytab->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->BeginInit();
			this->SuspendLayout();
			// 
			// tabPage4
			// 
			this->tabPage4->Controls->Add(this->loadbutton);
			this->tabPage4->Controls->Add(this->chart2);
			this->tabPage4->Location = System::Drawing::Point(4, 37);
			this->tabPage4->Margin = System::Windows::Forms::Padding(3, 5, 3, 5);
			this->tabPage4->Name = L"tabPage4";
			this->tabPage4->Padding = System::Windows::Forms::Padding(3, 5, 3, 5);
			this->tabPage4->Size = System::Drawing::Size(1275, 570);
			this->tabPage4->TabIndex = 3;
			this->tabPage4->Text = L"Year Revenue Statistics";
			this->tabPage4->UseVisualStyleBackColor = true;
			// 
			// loadbutton
			// 
			this->loadbutton->Location = System::Drawing::Point(962, 384);
			this->loadbutton->Margin = System::Windows::Forms::Padding(3, 5, 3, 5);
			this->loadbutton->Name = L"loadbutton";
			this->loadbutton->Size = System::Drawing::Size(242, 94);
			this->loadbutton->TabIndex = 1;
			this->loadbutton->Text = L"Load";
			this->loadbutton->UseVisualStyleBackColor = true;
			this->loadbutton->Click += gcnew System::EventHandler(this, &ManagerForm::button2_Click);
			// 
			// chart2
			// 
			chartArea3->Name = L"ChartArea1";
			this->chart2->ChartAreas->Add(chartArea3);
			legend3->Name = L"Legend1";
			this->chart2->Legends->Add(legend3);
			this->chart2->Location = System::Drawing::Point(-4, 0);
			this->chart2->Margin = System::Windows::Forms::Padding(3, 5, 3, 5);
			this->chart2->Name = L"chart2";
			series3->ChartArea = L"ChartArea1";
			series3->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Doughnut;
			series3->Legend = L"Legend1";
			series3->Name = L"Revenue ";
			this->chart2->Series->Add(series3);
			this->chart2->Size = System::Drawing::Size(1278, 570);
			this->chart2->TabIndex = 0;
			this->chart2->Text = L"chart2";
			title3->Font = (gcnew System::Drawing::Font(L"Agency FB", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			title3->Name = L"Title1";
			title3->Text = L"Revenue Of Years";
			this->chart2->Titles->Add(title3);
			// 
			// tabPage3
			// 
			this->tabPage3->Controls->Add(this->buttonlast);
			this->tabPage3->Controls->Add(this->Midbutton);
			this->tabPage3->Controls->Add(this->Secondbutton);
			this->tabPage3->Controls->Add(this->Firstbutton);
			this->tabPage3->Controls->Add(this->chart1);
			this->tabPage3->Location = System::Drawing::Point(4, 37);
			this->tabPage3->Margin = System::Windows::Forms::Padding(3, 5, 3, 5);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Padding = System::Windows::Forms::Padding(3, 5, 3, 5);
			this->tabPage3->Size = System::Drawing::Size(1275, 570);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"Quarterly Revenue Statistics";
			this->tabPage3->UseVisualStyleBackColor = true;
			// 
			// buttonlast
			// 
			this->buttonlast->Font = (gcnew System::Drawing::Font(L"Agency FB", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonlast->Location = System::Drawing::Point(125, 415);
			this->buttonlast->Margin = System::Windows::Forms::Padding(3, 5, 3, 5);
			this->buttonlast->Name = L"buttonlast";
			this->buttonlast->Size = System::Drawing::Size(218, 63);
			this->buttonlast->TabIndex = 4;
			this->buttonlast->Text = L"Last Quater";
			this->buttonlast->UseVisualStyleBackColor = true;
			this->buttonlast->Click += gcnew System::EventHandler(this, &ManagerForm::buttonlast_Click);
			// 
			// Midbutton
			// 
			this->Midbutton->Font = (gcnew System::Drawing::Font(L"Agency FB", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Midbutton->Location = System::Drawing::Point(125, 292);
			this->Midbutton->Margin = System::Windows::Forms::Padding(3, 5, 3, 5);
			this->Midbutton->Name = L"Midbutton";
			this->Midbutton->Size = System::Drawing::Size(218, 63);
			this->Midbutton->TabIndex = 3;
			this->Midbutton->Text = L"Mid Quater";
			this->Midbutton->UseVisualStyleBackColor = true;
			this->Midbutton->Click += gcnew System::EventHandler(this, &ManagerForm::Midbutton_Click);
			// 
			// Secondbutton
			// 
			this->Secondbutton->Font = (gcnew System::Drawing::Font(L"Agency FB", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Secondbutton->Location = System::Drawing::Point(125, 172);
			this->Secondbutton->Margin = System::Windows::Forms::Padding(3, 5, 3, 5);
			this->Secondbutton->Name = L"Secondbutton";
			this->Secondbutton->Size = System::Drawing::Size(218, 63);
			this->Secondbutton->TabIndex = 2;
			this->Secondbutton->Text = L"Second Quater";
			this->Secondbutton->UseVisualStyleBackColor = true;
			this->Secondbutton->Click += gcnew System::EventHandler(this, &ManagerForm::Secondbutton_Click);
			// 
			// Firstbutton
			// 
			this->Firstbutton->Font = (gcnew System::Drawing::Font(L"Agency FB", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Firstbutton->Location = System::Drawing::Point(125, 57);
			this->Firstbutton->Margin = System::Windows::Forms::Padding(3, 5, 3, 5);
			this->Firstbutton->Name = L"Firstbutton";
			this->Firstbutton->Size = System::Drawing::Size(218, 63);
			this->Firstbutton->TabIndex = 1;
			this->Firstbutton->Text = L"First Quater ";
			this->Firstbutton->UseVisualStyleBackColor = true;
			this->Firstbutton->Click += gcnew System::EventHandler(this, &ManagerForm::Firstbutton_Click);
			// 
			// chart1
			// 
			this->chart1->BackImageTransparentColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->chart1->BorderlineColor = System::Drawing::Color::DarkGray;
			chartArea4->Name = L"ChartArea1";
			this->chart1->ChartAreas->Add(chartArea4);
			legend4->Name = L"Legend1";
			this->chart1->Legends->Add(legend4);
			this->chart1->Location = System::Drawing::Point(480, 31);
			this->chart1->Margin = System::Windows::Forms::Padding(3, 5, 3, 5);
			this->chart1->Name = L"chart1";
			this->chart1->Palette = System::Windows::Forms::DataVisualization::Charting::ChartColorPalette::Berry;
			series4->ChartArea = L"ChartArea1";
			series4->Font = (gcnew System::Drawing::Font(L"Agency FB", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			series4->Legend = L"Legend1";
			series4->Name = L"Revenue";
			this->chart1->Series->Add(series4);
			this->chart1->Size = System::Drawing::Size(757, 486);
			this->chart1->TabIndex = 0;
			this->chart1->Text = L"chart1";
			title4->Font = (gcnew System::Drawing::Font(L"Agency FB", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			title4->Name = L"Title1";
			title4->Text = L"Revenue Of Quater";
			this->chart1->Titles->Add(title4);
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->buttonshow);
			this->tabPage2->Controls->Add(this->buttondel);
			this->tabPage2->Controls->Add(this->dataGridView2);
			this->tabPage2->Font = (gcnew System::Drawing::Font(L"Agency FB", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tabPage2->Location = System::Drawing::Point(4, 37);
			this->tabPage2->Margin = System::Windows::Forms::Padding(3, 5, 3, 5);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3, 5, 3, 5);
			this->tabPage2->Size = System::Drawing::Size(1275, 570);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Customer List";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// buttonshow
			// 
			this->buttonshow->Font = (gcnew System::Drawing::Font(L"Agency FB", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonshow->Location = System::Drawing::Point(724, 460);
			this->buttonshow->Name = L"buttonshow";
			this->buttonshow->Size = System::Drawing::Size(162, 67);
			this->buttonshow->TabIndex = 2;
			this->buttonshow->Text = L"Show ";
			this->buttonshow->UseVisualStyleBackColor = true;
			this->buttonshow->Click += gcnew System::EventHandler(this, &ManagerForm::buttonshow_Click);
			// 
			// buttondel
			// 
			this->buttondel->Font = (gcnew System::Drawing::Font(L"Agency FB", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttondel->Location = System::Drawing::Point(419, 460);
			this->buttondel->Name = L"buttondel";
			this->buttondel->Size = System::Drawing::Size(162, 67);
			this->buttondel->TabIndex = 1;
			this->buttondel->Text = L"Delete Nearest";
			this->buttondel->UseVisualStyleBackColor = true;
			this->buttondel->Click += gcnew System::EventHandler(this, &ManagerForm::buttondel_Click);
			// 
			// dataGridView2
			// 
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Location = System::Drawing::Point(314, 26);
			this->dataGridView2->Margin = System::Windows::Forms::Padding(3, 5, 3, 5);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->RowHeadersWidth = 51;
			this->dataGridView2->RowTemplate->Height = 24;
			this->dataGridView2->Size = System::Drawing::Size(689, 396);
			this->dataGridView2->TabIndex = 0;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->label8);
			this->tabPage1->Controls->Add(this->Quantitytextbox);
			this->tabPage1->Controls->Add(this->Capacitytextbox);
			this->tabPage1->Controls->Add(this->IDtextbox);
			this->tabPage1->Controls->Add(this->Typecombobox);
			this->tabPage1->Controls->Add(this->donebutton);
			this->tabPage1->Controls->Add(this->label4);
			this->tabPage1->Controls->Add(this->label3);
			this->tabPage1->Controls->Add(this->label2);
			this->tabPage1->Controls->Add(this->label1);
			this->tabPage1->Controls->Add(this->dataGridView1);
			this->tabPage1->Font = (gcnew System::Drawing::Font(L"Agency FB", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tabPage1->Location = System::Drawing::Point(4, 37);
			this->tabPage1->Margin = System::Windows::Forms::Padding(3, 5, 3, 5);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3, 5, 3, 5);
			this->tabPage1->Size = System::Drawing::Size(1275, 570);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Edit Restaurent ";
			this->tabPage1->UseVisualStyleBackColor = true;
			this->tabPage1->Click += gcnew System::EventHandler(this, &ManagerForm::tabPage1_Click);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Agency FB", 28.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(108, 36);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(292, 57);
			this->label8->TabIndex = 15;
			this->label8->Text = L"Make Restaurant";
			// 
			// Quantitytextbox
			// 
			this->Quantitytextbox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Quantitytextbox->Location = System::Drawing::Point(83, 452);
			this->Quantitytextbox->Margin = System::Windows::Forms::Padding(3, 5, 3, 5);
			this->Quantitytextbox->Name = L"Quantitytextbox";
			this->Quantitytextbox->Size = System::Drawing::Size(361, 41);
			this->Quantitytextbox->TabIndex = 14;
			this->Quantitytextbox->TextChanged += gcnew System::EventHandler(this, &ManagerForm::Quantitytextbox_TextChanged);
			// 
			// Capacitytextbox
			// 
			this->Capacitytextbox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Capacitytextbox->Location = System::Drawing::Point(82, 356);
			this->Capacitytextbox->Margin = System::Windows::Forms::Padding(3, 5, 3, 5);
			this->Capacitytextbox->Name = L"Capacitytextbox";
			this->Capacitytextbox->Size = System::Drawing::Size(361, 41);
			this->Capacitytextbox->TabIndex = 13;
			this->Capacitytextbox->TextChanged += gcnew System::EventHandler(this, &ManagerForm::Capacitytextbox_TextChanged);
			// 
			// IDtextbox
			// 
			this->IDtextbox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->IDtextbox->Location = System::Drawing::Point(83, 167);
			this->IDtextbox->Margin = System::Windows::Forms::Padding(3, 5, 3, 5);
			this->IDtextbox->Name = L"IDtextbox";
			this->IDtextbox->Size = System::Drawing::Size(361, 41);
			this->IDtextbox->TabIndex = 12;
			this->IDtextbox->TextChanged += gcnew System::EventHandler(this, &ManagerForm::IDtextbox_TextChanged);
			// 
			// Typecombobox
			// 
			this->Typecombobox->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->Typecombobox->Font = (gcnew System::Drawing::Font(L"Agency FB", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Typecombobox->FormattingEnabled = true;
			this->Typecombobox->Items->AddRange(gcnew cli::array< System::Object^  >(6) {
				L"Buffet Restaurant", L"Sea Food Restaurant",
					L"Traditional Vietnamese Restaurant", L"Wedding Restaurant ", L"Event Restaurant", L""
			});
			this->Typecombobox->Location = System::Drawing::Point(84, 257);
			this->Typecombobox->Margin = System::Windows::Forms::Padding(3, 5, 3, 5);
			this->Typecombobox->Name = L"Typecombobox";
			this->Typecombobox->Size = System::Drawing::Size(362, 44);
			this->Typecombobox->TabIndex = 11;
			this->Typecombobox->SelectedIndexChanged += gcnew System::EventHandler(this, &ManagerForm::Typecombobox_SelectedIndexChanged);
			// 
			// donebutton
			// 
			this->donebutton->Font = (gcnew System::Drawing::Font(L"Agency FB", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->donebutton->Location = System::Drawing::Point(819, 485);
			this->donebutton->Margin = System::Windows::Forms::Padding(3, 5, 3, 5);
			this->donebutton->Name = L"donebutton";
			this->donebutton->Size = System::Drawing::Size(153, 59);
			this->donebutton->TabIndex = 10;
			this->donebutton->Text = L"Done";
			this->donebutton->UseVisualStyleBackColor = true;
			this->donebutton->Click += gcnew System::EventHandler(this, &ManagerForm::donebutton_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Agency FB", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(80, 419);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(115, 28);
			this->label4->TabIndex = 9;
			this->label4->Text = L"Quantity Staff";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Agency FB", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(82, 323);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(78, 28);
			this->label3->TabIndex = 8;
			this->label3->Text = L"Capacity";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Agency FB", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(84, 224);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(50, 28);
			this->label2->TabIndex = 7;
			this->label2->Text = L"Type";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Agency FB", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(80, 134);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(115, 28);
			this->label1->TabIndex = 6;
			this->label1->Text = L"ID Restaurant";
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(527, 36);
			this->dataGridView1->Margin = System::Windows::Forms::Padding(3, 5, 3, 5);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(713, 413);
			this->dataGridView1->TabIndex = 4;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &ManagerForm::dataGridView1_CellContentClick);
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Controls->Add(this->tabPage3);
			this->tabControl1->Controls->Add(this->tabPage4);
			this->tabControl1->Controls->Add(this->Historytab);
			this->tabControl1->Location = System::Drawing::Point(-3, 2);
			this->tabControl1->Margin = System::Windows::Forms::Padding(3, 5, 3, 5);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(1283, 611);
			this->tabControl1->TabIndex = 9;
			this->tabControl1->SelectedIndexChanged += gcnew System::EventHandler(this, &ManagerForm::tabControl1_SelectedIndexChanged);
			// 
			// Historytab
			// 
			this->Historytab->Controls->Add(this->label7);
			this->Historytab->Controls->Add(this->Showbutton);
			this->Historytab->Controls->Add(this->dataGridView3);
			this->Historytab->Location = System::Drawing::Point(4, 37);
			this->Historytab->Margin = System::Windows::Forms::Padding(3, 5, 3, 5);
			this->Historytab->Name = L"Historytab";
			this->Historytab->Padding = System::Windows::Forms::Padding(3, 5, 3, 5);
			this->Historytab->Size = System::Drawing::Size(1275, 570);
			this->Historytab->TabIndex = 4;
			this->Historytab->Text = L"History";
			this->Historytab->UseVisualStyleBackColor = true;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Agency FB", 28.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(117, 159);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(150, 57);
			this->label7->TabIndex = 2;
			this->label7->Text = L"History ";
			// 
			// Showbutton
			// 
			this->Showbutton->Font = (gcnew System::Drawing::Font(L"Agency FB", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Showbutton->Location = System::Drawing::Point(88, 306);
			this->Showbutton->Margin = System::Windows::Forms::Padding(3, 5, 3, 5);
			this->Showbutton->Name = L"Showbutton";
			this->Showbutton->Size = System::Drawing::Size(194, 69);
			this->Showbutton->TabIndex = 1;
			this->Showbutton->Text = L"Show";
			this->Showbutton->UseVisualStyleBackColor = true;
			this->Showbutton->Click += gcnew System::EventHandler(this, &ManagerForm::Showbutton_Click_1);
			// 
			// dataGridView3
			// 
			this->dataGridView3->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView3->Location = System::Drawing::Point(411, 53);
			this->dataGridView3->Margin = System::Windows::Forms::Padding(3, 5, 3, 5);
			this->dataGridView3->Name = L"dataGridView3";
			this->dataGridView3->RowHeadersWidth = 51;
			this->dataGridView3->RowTemplate->Height = 24;
			this->dataGridView3->Size = System::Drawing::Size(829, 473);
			this->dataGridView3->TabIndex = 0;
			this->dataGridView3->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &ManagerForm::dataGridView3_CellContentClick);
			// 
			// ManagerForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 28);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1281, 614);
			this->Controls->Add(this->tabControl1);
			this->Font = (gcnew System::Drawing::Font(L"Agency FB", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Margin = System::Windows::Forms::Padding(3, 5, 3, 5);
			this->Name = L"ManagerForm";
			this->Text = L"ManagerForm";
			this->tabPage4->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart2))->EndInit();
			this->tabPage3->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
			this->tabPage2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->tabControl1->ResumeLayout(false);
			this->Historytab->ResumeLayout(false);
			this->Historytab->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion

	private: System::Void tabPage1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void IDtextbox_TextChanged(System::Object^ sender, System::EventArgs^ e) 
	{

	}
private: System::Void donebutton_Click(System::Object^ sender, System::EventArgs^ e) 
{	
	string id = toStandardString(IDtextbox->Text);
	string type = toStandardString(Typecombobox->Text);
	string Capacity = toStandardString(Capacitytextbox->Text);
	string Quantity = toStandardString(Quantitytextbox->Text);
	int intCa = stoi(Capacity);
	int intQa = stoi(Quantity);

	makeRestaurant(Chain, id, type, intCa, intQa);	

	IDtextbox->Clear();
	Capacitytextbox->Clear();
	Quantitytextbox->Clear();

	if (dataGridView1->Columns->Count == 0)
	{
		dataGridView1->Columns->Add("id", "ID");
		dataGridView1->Columns->Add("type", "Type");
		dataGridView1->Columns->Add("Capacity", "Capacity");
		dataGridView1->Columns->Add("Quantity", "Quantity");
	}

	dataGridView1->Columns[0]->Name = "id";
	dataGridView1->Columns[1]->Name = "type";
	dataGridView1->Columns[2]->Name = "Capacity";
	dataGridView1->Columns[3]->Name = "Quantity";
	
	ToArray(Chain, ChainArr);

	for (int i=0;i<=30;i++)
	{
		dataGridView1->Rows->Add();
		dataGridView1->Rows[i]->Cells[0]->Value = gcnew String(ChainArr[i].id.c_str());
		dataGridView1->Rows[i]->Cells[1]->Value = gcnew String(ChainArr[i].type.c_str());
		dataGridView1->Rows[i]->Cells[2]->Value = ChainArr[i].Capacity;
		dataGridView1->Rows[i]->Cells[3]->Value = ChainArr[i].staff;
	}

	writeRestaurantToCSV(fname, ChainArr);

}
private: System::Void Typecombobox_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) 
{

}
private: System::Void Capacitytextbox_TextChanged(System::Object^ sender, System::EventArgs^ e) { 
}
private: System::Void Quantitytextbox_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) 
{

}
private: System::Void Showbutton_Click(System::Object^ sender, System::EventArgs^ e) 
{

}
private: System::Void tabControl1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void Firstbutton_Click(System::Object^ sender, System::EventArgs^ e) 
{
	double a = FinalProfitbymoth(History, 1, 1, 1);
	double b = FinalProfitbymoth(History, 2, 2, 2);
	double c = FinalProfitbymoth(History, 3, 3, 3);

	chart1->Series["Revenue"]->Points->AddXY("Month 1", a);
	chart1->Series["Revenue"]->Points->AddXY("Month 2", b);
	chart1->Series["Revenue"]->Points->AddXY("Month 3", c);

}
private: System::Void Secondbutton_Click(System::Object^ sender, System::EventArgs^ e) 
{
	double a = FinalProfitbymoth(History, 4, 4, 4);
	double b = FinalProfitbymoth(History, 5, 5, 5);
	double c = FinalProfitbymoth(History, 6, 6, 6);

	// Clear dữ liệu cũ của button trước
	chart1->Series["Revenue"]->Points->Clear();

	chart1->Series["Revenue"]->Points->AddXY("Month 4", a);
	chart1->Series["Revenue"]->Points->AddXY("Month 5", b);
	chart1->Series["Revenue"]->Points->AddXY("Month 6", c);
}
private: System::Void Midbutton_Click(System::Object^ sender, System::EventArgs^ e) 
{
	double a = FinalProfitbymoth(History, 7, 7, 7);
	double b = FinalProfitbymoth(History, 8, 8, 8);
	double c = FinalProfitbymoth(History, 9, 9, 9);
	chart1->Series["Revenue"]->Points->Clear();


	chart1->Series["Revenue"]->Points->AddXY("Month 7", a);
	chart1->Series["Revenue"]->Points->AddXY("Month 8", b);
	chart1->Series["Revenue"]->Points->AddXY("Month 9", c);
}
private: System::Void buttonlast_Click(System::Object^ sender, System::EventArgs^ e) 
{
	double a = FinalProfitbymoth(History, 10, 10, 10);
	double b = FinalProfitbymoth(History, 11, 11, 11);
	double c = FinalProfitbymoth(History, 12, 12, 12);
	chart1->Series["Revenue"]->Points->Clear();

	chart1->Series["Revenue"]->Points->AddXY("Month 10", a);
	chart1->Series["Revenue"]->Points->AddXY("Month 11", b);
	chart1->Series["Revenue"]->Points->AddXY("Month 12", c);
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) 
{
	double a = FinalProfitbymoth(History, 1, 2, 3) + FinalProfitbymoth(History, 4, 5, 6) + FinalProfitbymoth(History, 7, 8, 9) + FinalProfitbymoth(History, 10, 11, 12);

	chart2->Series["Revenuenut"]->Points->AddXY("Year", a);
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) 
{
	ToArrayHistory(History, HistoryArr);

}
private: System::Void buttondel_Click(System::Object^ sender, System::EventArgs^ e) 
{
	
}
private: System::Void buttonshow_Click(System::Object^ sender, System::EventArgs^ e) 
{
	ReadHistoryListCSV(fname2);
	ToArrayHistory(History, HistoryArr);

	if (dataGridView2->Columns->Count == 0)
	{
		dataGridView2->Columns->Add("cusname", "Cusname");
		dataGridView2->Columns->Add("phonenumber", "Phonenumber");
		dataGridView2->Columns->Add("tableid", "Tableid");

	}

	dataGridView2->Columns[0]->Name = "cusname";
	dataGridView2->Columns[1]->Name = "phonenumber";
	dataGridView2->Columns[2]->Name = "tableid";

	ToArrayHistory(History, HistoryArr);

	for (int i = 0; i <= 30; i++)
	{
		dataGridView2->Rows->Add();
		dataGridView2->Rows[i]->Cells[0]->Value = gcnew String(HistoryArr[i].cusname.c_str());
		dataGridView2->Rows[i]->Cells[1]->Value = gcnew String(HistoryArr[i].phonenumber.c_str());
		dataGridView2->Rows[i]->Cells[1]->Value = gcnew String(HistoryArr[i].tableid.c_str());
	}

}
private: System::Void deletebutton_Click(System::Object^ sender, System::EventArgs^ e) 
{
	

}
private: System::Void Showbutton_Click_1(System::Object^ sender, System::EventArgs^ e) 
{

}
private: System::Void dataGridView3_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}
};
}

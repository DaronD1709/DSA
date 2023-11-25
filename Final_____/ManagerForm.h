#pragma once
#include <string>
#include <fstream>
#include "File.h"
#include "Fuction.h"

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

	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ Phonetextbox;

	private: System::Windows::Forms::TextBox^ Customertextbox;

	private: System::Windows::Forms::DataGridView^ dataGridView2;
	private: System::Windows::Forms::TabPage^ tabPage1;

	private: System::Windows::Forms::TextBox^ Capacitytextbox;
	private: System::Windows::Forms::TextBox^ IDtextbox;
	private: System::Windows::Forms::ComboBox^ Typecombobox;
	private: System::Windows::Forms::Button^ donebutton;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ deletebutton;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::TabControl^ tabControl1;
	private: System::Windows::Forms::TabPage^ Historytab;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::DataGridView^ dataGridView3;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ quantitytextbox;

	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart2;
	private: System::Windows::Forms::Button^ Loadbutton;



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
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Title^ title1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Title());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea2 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Title^ title2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Title());
			this->tabPage4 = (gcnew System::Windows::Forms::TabPage());
			this->Loadbutton = (gcnew System::Windows::Forms::Button());
			this->chart2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->buttonlast = (gcnew System::Windows::Forms::Button());
			this->Midbutton = (gcnew System::Windows::Forms::Button());
			this->Secondbutton = (gcnew System::Windows::Forms::Button());
			this->Firstbutton = (gcnew System::Windows::Forms::Button());
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->Phonetextbox = (gcnew System::Windows::Forms::TextBox());
			this->Customertextbox = (gcnew System::Windows::Forms::TextBox());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->quantitytextbox = (gcnew System::Windows::Forms::TextBox());
			this->Capacitytextbox = (gcnew System::Windows::Forms::TextBox());
			this->IDtextbox = (gcnew System::Windows::Forms::TextBox());
			this->Typecombobox = (gcnew System::Windows::Forms::ComboBox());
			this->donebutton = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->deletebutton = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->Historytab = (gcnew System::Windows::Forms::TabPage());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
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
			this->tabPage4->Controls->Add(this->Loadbutton);
			this->tabPage4->Controls->Add(this->chart2);
			this->tabPage4->Location = System::Drawing::Point(4, 33);
			this->tabPage4->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->tabPage4->Name = L"tabPage4";
			this->tabPage4->Padding = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->tabPage4->Size = System::Drawing::Size(1329, 637);
			this->tabPage4->TabIndex = 3;
			this->tabPage4->Text = L"Year Revenue Statistics";
			this->tabPage4->UseVisualStyleBackColor = true;
			// 
			// Loadbutton
			// 
			this->Loadbutton->Location = System::Drawing::Point(1033, 520);
			this->Loadbutton->Name = L"Loadbutton";
			this->Loadbutton->Size = System::Drawing::Size(200, 67);
			this->Loadbutton->TabIndex = 1;
			this->Loadbutton->Text = L"Load";
			this->Loadbutton->UseVisualStyleBackColor = true;
			this->Loadbutton->Click += gcnew System::EventHandler(this, &ManagerForm::Loadbutton_Click);
			// 
			// chart2
			// 
			chartArea1->Name = L"ChartArea1";
			this->chart2->ChartAreas->Add(chartArea1);
			legend1->Name = L"Legend1";
			this->chart2->Legends->Add(legend1);
			this->chart2->Location = System::Drawing::Point(6, 4);
			this->chart2->Name = L"chart2";
			series1->ChartArea = L"ChartArea1";
			series1->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Doughnut;
			series1->Legend = L"Legend1";
			series1->Name = L"Series1";
			this->chart2->Series->Add(series1);
			this->chart2->Size = System::Drawing::Size(1317, 626);
			this->chart2->TabIndex = 0;
			this->chart2->Text = L"chart2";
			title1->Font = (gcnew System::Drawing::Font(L"Agency FB", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			title1->Name = L"Title1";
			title1->Text = L"Revenue Of Years";
			this->chart2->Titles->Add(title1);
			this->chart2->Click += gcnew System::EventHandler(this, &ManagerForm::chart2_Click);
			// 
			// tabPage3
			// 
			this->tabPage3->Controls->Add(this->buttonlast);
			this->tabPage3->Controls->Add(this->Midbutton);
			this->tabPage3->Controls->Add(this->Secondbutton);
			this->tabPage3->Controls->Add(this->Firstbutton);
			this->tabPage3->Controls->Add(this->chart1);
			this->tabPage3->Location = System::Drawing::Point(4, 33);
			this->tabPage3->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Padding = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->tabPage3->Size = System::Drawing::Size(1329, 637);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"Quarterly Revenue Statistics";
			this->tabPage3->UseVisualStyleBackColor = true;
			// 
			// buttonlast
			// 
			this->buttonlast->Font = (gcnew System::Drawing::Font(L"Agency FB", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonlast->Location = System::Drawing::Point(163, 444);
			this->buttonlast->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->buttonlast->Name = L"buttonlast";
			this->buttonlast->Size = System::Drawing::Size(189, 69);
			this->buttonlast->TabIndex = 4;
			this->buttonlast->Text = L"Last Quater";
			this->buttonlast->UseVisualStyleBackColor = true;
			this->buttonlast->Click += gcnew System::EventHandler(this, &ManagerForm::buttonlast_Click);
			// 
			// Midbutton
			// 
			this->Midbutton->Font = (gcnew System::Drawing::Font(L"Agency FB", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Midbutton->Location = System::Drawing::Point(163, 332);
			this->Midbutton->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->Midbutton->Name = L"Midbutton";
			this->Midbutton->Size = System::Drawing::Size(189, 69);
			this->Midbutton->TabIndex = 3;
			this->Midbutton->Text = L"Mid Quater";
			this->Midbutton->UseVisualStyleBackColor = true;
			this->Midbutton->Click += gcnew System::EventHandler(this, &ManagerForm::Midbutton_Click);
			// 
			// Secondbutton
			// 
			this->Secondbutton->Font = (gcnew System::Drawing::Font(L"Agency FB", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Secondbutton->Location = System::Drawing::Point(163, 224);
			this->Secondbutton->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->Secondbutton->Name = L"Secondbutton";
			this->Secondbutton->Size = System::Drawing::Size(189, 69);
			this->Secondbutton->TabIndex = 2;
			this->Secondbutton->Text = L"Second Quater";
			this->Secondbutton->UseVisualStyleBackColor = true;
			this->Secondbutton->Click += gcnew System::EventHandler(this, &ManagerForm::Secondbutton_Click);
			// 
			// Firstbutton
			// 
			this->Firstbutton->Font = (gcnew System::Drawing::Font(L"Agency FB", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Firstbutton->Location = System::Drawing::Point(163, 119);
			this->Firstbutton->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->Firstbutton->Name = L"Firstbutton";
			this->Firstbutton->Size = System::Drawing::Size(189, 69);
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
			chartArea2->Name = L"ChartArea1";
			this->chart1->ChartAreas->Add(chartArea2);
			legend2->Name = L"Legend1";
			this->chart1->Legends->Add(legend2);
			this->chart1->Location = System::Drawing::Point(461, 38);
			this->chart1->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->chart1->Name = L"chart1";
			this->chart1->Palette = System::Windows::Forms::DataVisualization::Charting::ChartColorPalette::Berry;
			series2->ChartArea = L"ChartArea1";
			series2->Legend = L"Legend1";
			series2->Name = L"Revenue";
			this->chart1->Series->Add(series2);
			this->chart1->Size = System::Drawing::Size(827, 546);
			this->chart1->TabIndex = 0;
			this->chart1->Text = L"chart1";
			title2->Font = (gcnew System::Drawing::Font(L"Agency FB", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			title2->Name = L"Title1";
			title2->Text = L"Revenue Quater";
			this->chart1->Titles->Add(title2);
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->button1);
			this->tabPage2->Controls->Add(this->label6);
			this->tabPage2->Controls->Add(this->label5);
			this->tabPage2->Controls->Add(this->Phonetextbox);
			this->tabPage2->Controls->Add(this->Customertextbox);
			this->tabPage2->Controls->Add(this->dataGridView2);
			this->tabPage2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tabPage2->Location = System::Drawing::Point(4, 33);
			this->tabPage2->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->tabPage2->Size = System::Drawing::Size(1329, 637);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Customer List";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Agency FB", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(238, 480);
			this->button1->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(116, 75);
			this->button1->TabIndex = 5;
			this->button1->Text = L"Search";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Agency FB", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(117, 308);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(247, 36);
			this->label6->TabIndex = 4;
			this->label6->Text = L"Phone Number Customer";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Agency FB", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(117, 113);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(169, 36);
			this->label5->TabIndex = 3;
			this->label5->Text = L"Customer Name ";
			// 
			// Phonetextbox
			// 
			this->Phonetextbox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Phonetextbox->Location = System::Drawing::Point(123, 167);
			this->Phonetextbox->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->Phonetextbox->Multiline = true;
			this->Phonetextbox->Name = L"Phonetextbox";
			this->Phonetextbox->Size = System::Drawing::Size(338, 52);
			this->Phonetextbox->TabIndex = 2;
			// 
			// Customertextbox
			// 
			this->Customertextbox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Customertextbox->Location = System::Drawing::Point(123, 358);
			this->Customertextbox->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->Customertextbox->Multiline = true;
			this->Customertextbox->Name = L"Customertextbox";
			this->Customertextbox->Size = System::Drawing::Size(338, 52);
			this->Customertextbox->TabIndex = 1;
			// 
			// dataGridView2
			// 
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Location = System::Drawing::Point(606, 26);
			this->dataGridView2->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->RowHeadersWidth = 51;
			this->dataGridView2->RowTemplate->Height = 24;
			this->dataGridView2->Size = System::Drawing::Size(684, 566);
			this->dataGridView2->TabIndex = 0;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->quantitytextbox);
			this->tabPage1->Controls->Add(this->Capacitytextbox);
			this->tabPage1->Controls->Add(this->IDtextbox);
			this->tabPage1->Controls->Add(this->Typecombobox);
			this->tabPage1->Controls->Add(this->donebutton);
			this->tabPage1->Controls->Add(this->label4);
			this->tabPage1->Controls->Add(this->label3);
			this->tabPage1->Controls->Add(this->label2);
			this->tabPage1->Controls->Add(this->label1);
			this->tabPage1->Controls->Add(this->deletebutton);
			this->tabPage1->Controls->Add(this->dataGridView1);
			this->tabPage1->Font = (gcnew System::Drawing::Font(L"Agency FB", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tabPage1->Location = System::Drawing::Point(4, 33);
			this->tabPage1->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->tabPage1->Size = System::Drawing::Size(1329, 637);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Edit Restaurent ";
			this->tabPage1->UseVisualStyleBackColor = true;
			this->tabPage1->Click += gcnew System::EventHandler(this, &ManagerForm::tabPage1_Click);
			// 
			// quantitytextbox
			// 
			this->quantitytextbox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->quantitytextbox->Location = System::Drawing::Point(371, 326);
			this->quantitytextbox->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->quantitytextbox->Name = L"quantitytextbox";
			this->quantitytextbox->Size = System::Drawing::Size(220, 41);
			this->quantitytextbox->TabIndex = 14;
			// 
			// Capacitytextbox
			// 
			this->Capacitytextbox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Capacitytextbox->Location = System::Drawing::Point(371, 191);
			this->Capacitytextbox->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->Capacitytextbox->Name = L"Capacitytextbox";
			this->Capacitytextbox->Size = System::Drawing::Size(221, 41);
			this->Capacitytextbox->TabIndex = 13;
			this->Capacitytextbox->TextChanged += gcnew System::EventHandler(this, &ManagerForm::Capacitytextbox_TextChanged);
			// 
			// IDtextbox
			// 
			this->IDtextbox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->IDtextbox->Location = System::Drawing::Point(72, 191);
			this->IDtextbox->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->IDtextbox->Name = L"IDtextbox";
			this->IDtextbox->Size = System::Drawing::Size(221, 41);
			this->IDtextbox->TabIndex = 12;
			this->IDtextbox->TextChanged += gcnew System::EventHandler(this, &ManagerForm::IDtextbox_TextChanged);
			// 
			// Typecombobox
			// 
			this->Typecombobox->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->Typecombobox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Typecombobox->FormattingEnabled = true;
			this->Typecombobox->Items->AddRange(gcnew cli::array< System::Object^  >(6) {
				L"Buffet Restaurant", L"Sea Food Restaurant",
					L"Traditional Vietnamese Restaurant", L"Wedding Restaurant ", L"Event Restaurant", L""
			});
			this->Typecombobox->Location = System::Drawing::Point(72, 326);
			this->Typecombobox->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->Typecombobox->Name = L"Typecombobox";
			this->Typecombobox->Size = System::Drawing::Size(221, 44);
			this->Typecombobox->TabIndex = 11;
			this->Typecombobox->SelectedIndexChanged += gcnew System::EventHandler(this, &ManagerForm::Typecombobox_SelectedIndexChanged);
			// 
			// donebutton
			// 
			this->donebutton->Font = (gcnew System::Drawing::Font(L"Agency FB", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->donebutton->Location = System::Drawing::Point(372, 447);
			this->donebutton->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->donebutton->Name = L"donebutton";
			this->donebutton->Size = System::Drawing::Size(186, 87);
			this->donebutton->TabIndex = 10;
			this->donebutton->Text = L"Done";
			this->donebutton->UseVisualStyleBackColor = true;
			this->donebutton->Click += gcnew System::EventHandler(this, &ManagerForm::donebutton_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Agency FB", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(366, 286);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(137, 36);
			this->label4->TabIndex = 9;
			this->label4->Text = L"Quantity Staff";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Agency FB", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(365, 151);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(94, 36);
			this->label3->TabIndex = 8;
			this->label3->Text = L"Capacity";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Agency FB", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(67, 286);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(59, 36);
			this->label2->TabIndex = 7;
			this->label2->Text = L"Type";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Agency FB", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(66, 151);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(140, 36);
			this->label1->TabIndex = 6;
			this->label1->Text = L"ID Restaurant";
			// 
			// deletebutton
			// 
			this->deletebutton->Font = (gcnew System::Drawing::Font(L"Agency FB", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->deletebutton->Location = System::Drawing::Point(87, 447);
			this->deletebutton->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->deletebutton->Name = L"deletebutton";
			this->deletebutton->Size = System::Drawing::Size(186, 87);
			this->deletebutton->TabIndex = 5;
			this->deletebutton->Text = L"Delete";
			this->deletebutton->UseVisualStyleBackColor = true;
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(662, 38);
			this->dataGridView1->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(626, 564);
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
			this->tabControl1->Font = (gcnew System::Drawing::Font(L"Agency FB", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tabControl1->Location = System::Drawing::Point(-3, 2);
			this->tabControl1->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(1337, 674);
			this->tabControl1->TabIndex = 9;
			// 
			// Historytab
			// 
			this->Historytab->Controls->Add(this->label7);
			this->Historytab->Controls->Add(this->textBox1);
			this->Historytab->Controls->Add(this->button3);
			this->Historytab->Controls->Add(this->dataGridView3);
			this->Historytab->Location = System::Drawing::Point(4, 33);
			this->Historytab->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->Historytab->Name = L"Historytab";
			this->Historytab->Padding = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->Historytab->Size = System::Drawing::Size(1329, 637);
			this->Historytab->TabIndex = 4;
			this->Historytab->Text = L"History";
			this->Historytab->UseVisualStyleBackColor = true;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Agency FB", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(186, 171);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(209, 50);
			this->label7->TabIndex = 4;
			this->label7->Text = L"ID Restaurant";
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(116, 280);
			this->textBox1->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(348, 64);
			this->textBox1->TabIndex = 3;
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Agency FB", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(218, 422);
			this->button3->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(129, 86);
			this->button3->TabIndex = 1;
			this->button3->Text = L"Search";
			this->button3->UseVisualStyleBackColor = true;
			// 
			// dataGridView3
			// 
			this->dataGridView3->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView3->Location = System::Drawing::Point(591, 30);
			this->dataGridView3->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->dataGridView3->Name = L"dataGridView3";
			this->dataGridView3->RowHeadersWidth = 51;
			this->dataGridView3->RowTemplate->Height = 24;
			this->dataGridView3->Size = System::Drawing::Size(697, 562);
			this->dataGridView3->TabIndex = 0;
			// 
			// ManagerForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(7, 24);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1338, 674);
			this->Controls->Add(this->tabControl1);
			this->Font = (gcnew System::Drawing::Font(L"Agency FB", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->Name = L"ManagerForm";
			this->Text = L"ManagerForm";
			this->tabPage4->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart2))->EndInit();
			this->tabPage3->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
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
	string Quantity = toStandardString(quantitytextbox->Text);
	int intCa = stoi(Capacity);
	int intQa = stoi(Quantity);

	makeRestaurant(Chain, id, type, intCa, intQa);	

	IDtextbox->Clear();
	Capacitytextbox->Clear();
	quantitytextbox->Clear();

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
private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}
private: System::Void Showbutton_Click(System::Object^ sender, System::EventArgs^ e) 
{

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
private: System::Void chart2_Click(System::Object^ sender, System::EventArgs^ e) 
{
	
}
private: System::Void Loadbutton_Click(System::Object^ sender, System::EventArgs^ e) 
{
	double a = FinalProfitbymoth(History, 1, 2, 3) + FinalProfitbymoth(History, 4, 5, 6) + FinalProfitbymoth(History, 7, 8, 9) + FinalProfitbymoth(History, 10, 11, 12);

	chart2->Series["Revenuenut"]->Points->AddXY("Year", a);
}
};
}

#pragma once
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
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ Phonetextbox;

	private: System::Windows::Forms::TextBox^ Customertextbox;

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
	private: System::Windows::Forms::Button^ deletebutton;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::TabControl^ tabControl1;
	private: System::Windows::Forms::TabPage^ Historytab;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::DataGridView^ dataGridView3;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ Showbutton;

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
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea2 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			this->tabPage4 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->buttonlast = (gcnew System::Windows::Forms::Button());
			this->Midbutton = (gcnew System::Windows::Forms::Button());
			this->Secondbutton = (gcnew System::Windows::Forms::Button());
			this->Firstbutton = (gcnew System::Windows::Forms::Button());
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->Phonetextbox = (gcnew System::Windows::Forms::TextBox());
			this->Customertextbox = (gcnew System::Windows::Forms::TextBox());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->Showbutton = (gcnew System::Windows::Forms::Button());
			this->Quantitytextbox = (gcnew System::Windows::Forms::TextBox());
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
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->dataGridView3 = (gcnew System::Windows::Forms::DataGridView());
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
			this->tabPage4->Location = System::Drawing::Point(4, 25);
			this->tabPage4->Name = L"tabPage4";
			this->tabPage4->Padding = System::Windows::Forms::Padding(3);
			this->tabPage4->Size = System::Drawing::Size(1156, 527);
			this->tabPage4->TabIndex = 3;
			this->tabPage4->Text = L"Year Revenue Statistics";
			this->tabPage4->UseVisualStyleBackColor = true;
			// 
			// tabPage3
			// 
			this->tabPage3->Controls->Add(this->buttonlast);
			this->tabPage3->Controls->Add(this->Midbutton);
			this->tabPage3->Controls->Add(this->Secondbutton);
			this->tabPage3->Controls->Add(this->Firstbutton);
			this->tabPage3->Controls->Add(this->chart1);
			this->tabPage3->Location = System::Drawing::Point(4, 25);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Padding = System::Windows::Forms::Padding(3);
			this->tabPage3->Size = System::Drawing::Size(1156, 527);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"Quarterly Revenue Statistics";
			this->tabPage3->UseVisualStyleBackColor = true;
			// 
			// buttonlast
			// 
			this->buttonlast->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonlast->Location = System::Drawing::Point(111, 375);
			this->buttonlast->Name = L"buttonlast";
			this->buttonlast->Size = System::Drawing::Size(216, 46);
			this->buttonlast->TabIndex = 4;
			this->buttonlast->Text = L"Last Quater";
			this->buttonlast->UseVisualStyleBackColor = true;
			// 
			// Midbutton
			// 
			this->Midbutton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Midbutton->Location = System::Drawing::Point(111, 278);
			this->Midbutton->Name = L"Midbutton";
			this->Midbutton->Size = System::Drawing::Size(216, 46);
			this->Midbutton->TabIndex = 3;
			this->Midbutton->Text = L"Mid Quater";
			this->Midbutton->UseVisualStyleBackColor = true;
			// 
			// Secondbutton
			// 
			this->Secondbutton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Secondbutton->Location = System::Drawing::Point(111, 183);
			this->Secondbutton->Name = L"Secondbutton";
			this->Secondbutton->Size = System::Drawing::Size(216, 46);
			this->Secondbutton->TabIndex = 2;
			this->Secondbutton->Text = L"Second Quater";
			this->Secondbutton->UseVisualStyleBackColor = true;
			this->Secondbutton->Click += gcnew System::EventHandler(this, &ManagerForm::Secondbutton_Click);
			// 
			// Firstbutton
			// 
			this->Firstbutton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Firstbutton->Location = System::Drawing::Point(111, 88);
			this->Firstbutton->Name = L"Firstbutton";
			this->Firstbutton->Size = System::Drawing::Size(216, 46);
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
			this->chart1->Location = System::Drawing::Point(452, 24);
			this->chart1->Name = L"chart1";
			this->chart1->Palette = System::Windows::Forms::DataVisualization::Charting::ChartColorPalette::Berry;
			series2->ChartArea = L"ChartArea1";
			series2->Legend = L"Legend1";
			series2->Name = L"Series1";
			this->chart1->Series->Add(series2);
			this->chart1->Size = System::Drawing::Size(666, 472);
			this->chart1->TabIndex = 0;
			this->chart1->Text = L"chart1";
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->button2);
			this->tabPage2->Controls->Add(this->button1);
			this->tabPage2->Controls->Add(this->label6);
			this->tabPage2->Controls->Add(this->label5);
			this->tabPage2->Controls->Add(this->Phonetextbox);
			this->tabPage2->Controls->Add(this->Customertextbox);
			this->tabPage2->Controls->Add(this->dataGridView2);
			this->tabPage2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tabPage2->Location = System::Drawing::Point(4, 25);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(1156, 527);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Customer List";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(198, 376);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(132, 50);
			this->button2->TabIndex = 6;
			this->button2->Text = L"Print";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(39, 376);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(132, 50);
			this->button1->TabIndex = 5;
			this->button1->Text = L"Search";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(29, 220);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(371, 36);
			this->label6->TabIndex = 4;
			this->label6->Text = L"Phone Number Customer";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(29, 72);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(249, 36);
			this->label5->TabIndex = 3;
			this->label5->Text = L"Customer Name ";
			// 
			// Phonetextbox
			// 
			this->Phonetextbox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Phonetextbox->Location = System::Drawing::Point(27, 266);
			this->Phonetextbox->Multiline = true;
			this->Phonetextbox->Name = L"Phonetextbox";
			this->Phonetextbox->Size = System::Drawing::Size(318, 41);
			this->Phonetextbox->TabIndex = 2;
			// 
			// Customertextbox
			// 
			this->Customertextbox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Customertextbox->Location = System::Drawing::Point(27, 123);
			this->Customertextbox->Multiline = true;
			this->Customertextbox->Name = L"Customertextbox";
			this->Customertextbox->Size = System::Drawing::Size(318, 41);
			this->Customertextbox->TabIndex = 1;
			// 
			// dataGridView2
			// 
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Location = System::Drawing::Point(439, 22);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->RowHeadersWidth = 51;
			this->dataGridView2->RowTemplate->Height = 24;
			this->dataGridView2->Size = System::Drawing::Size(683, 476);
			this->dataGridView2->TabIndex = 0;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->Showbutton);
			this->tabPage1->Controls->Add(this->Quantitytextbox);
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
			this->tabPage1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tabPage1->Location = System::Drawing::Point(4, 25);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(1156, 527);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Edit Restaurent ";
			this->tabPage1->UseVisualStyleBackColor = true;
			this->tabPage1->Click += gcnew System::EventHandler(this, &ManagerForm::tabPage1_Click);
			// 
			// Showbutton
			// 
			this->Showbutton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Showbutton->Location = System::Drawing::Point(459, 18);
			this->Showbutton->Name = L"Showbutton";
			this->Showbutton->Size = System::Drawing::Size(153, 47);
			this->Showbutton->TabIndex = 15;
			this->Showbutton->Text = L"Show All";
			this->Showbutton->UseVisualStyleBackColor = true;
			this->Showbutton->Click += gcnew System::EventHandler(this, &ManagerForm::Showbutton_Click);
			// 
			// Quantitytextbox
			// 
			this->Quantitytextbox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Quantitytextbox->Location = System::Drawing::Point(79, 338);
			this->Quantitytextbox->Name = L"Quantitytextbox";
			this->Quantitytextbox->Size = System::Drawing::Size(321, 41);
			this->Quantitytextbox->TabIndex = 14;
			this->Quantitytextbox->TextChanged += gcnew System::EventHandler(this, &ManagerForm::Quantitytextbox_TextChanged);
			// 
			// Capacitytextbox
			// 
			this->Capacitytextbox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Capacitytextbox->Location = System::Drawing::Point(79, 247);
			this->Capacitytextbox->Name = L"Capacitytextbox";
			this->Capacitytextbox->Size = System::Drawing::Size(321, 41);
			this->Capacitytextbox->TabIndex = 13;
			this->Capacitytextbox->TextChanged += gcnew System::EventHandler(this, &ManagerForm::Capacitytextbox_TextChanged);
			// 
			// IDtextbox
			// 
			this->IDtextbox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->IDtextbox->Location = System::Drawing::Point(80, 71);
			this->IDtextbox->Name = L"IDtextbox";
			this->IDtextbox->Size = System::Drawing::Size(321, 41);
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
			this->Typecombobox->Location = System::Drawing::Point(79, 155);
			this->Typecombobox->Name = L"Typecombobox";
			this->Typecombobox->Size = System::Drawing::Size(322, 44);
			this->Typecombobox->TabIndex = 11;
			this->Typecombobox->SelectedIndexChanged += gcnew System::EventHandler(this, &ManagerForm::Typecombobox_SelectedIndexChanged);
			// 
			// donebutton
			// 
			this->donebutton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->donebutton->Location = System::Drawing::Point(258, 420);
			this->donebutton->Name = L"donebutton";
			this->donebutton->Size = System::Drawing::Size(161, 45);
			this->donebutton->TabIndex = 10;
			this->donebutton->Text = L"Done";
			this->donebutton->UseVisualStyleBackColor = true;
			this->donebutton->Click += gcnew System::EventHandler(this, &ManagerForm::donebutton_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(76, 306);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(207, 36);
			this->label4->TabIndex = 9;
			this->label4->Text = L"Quantity Staff";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(76, 215);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(138, 36);
			this->label3->TabIndex = 8;
			this->label3->Text = L"Capacity";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(77, 123);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(85, 36);
			this->label2->TabIndex = 7;
			this->label2->Text = L"Type";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(77, 34);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(210, 36);
			this->label1->TabIndex = 6;
			this->label1->Text = L"ID Restaurant";
			// 
			// deletebutton
			// 
			this->deletebutton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->deletebutton->Location = System::Drawing::Point(62, 420);
			this->deletebutton->Name = L"deletebutton";
			this->deletebutton->Size = System::Drawing::Size(161, 45);
			this->deletebutton->TabIndex = 5;
			this->deletebutton->Text = L"Delete";
			this->deletebutton->UseVisualStyleBackColor = true;
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(459, 86);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(669, 406);
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
			this->tabControl1->Location = System::Drawing::Point(-3, 1);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(1164, 556);
			this->tabControl1->TabIndex = 9;
			this->tabControl1->SelectedIndexChanged += gcnew System::EventHandler(this, &ManagerForm::tabControl1_SelectedIndexChanged);
			// 
			// Historytab
			// 
			this->Historytab->Controls->Add(this->label7);
			this->Historytab->Controls->Add(this->textBox1);
			this->Historytab->Controls->Add(this->button4);
			this->Historytab->Controls->Add(this->button3);
			this->Historytab->Controls->Add(this->dataGridView3);
			this->Historytab->Location = System::Drawing::Point(4, 25);
			this->Historytab->Name = L"Historytab";
			this->Historytab->Padding = System::Windows::Forms::Padding(3);
			this->Historytab->Size = System::Drawing::Size(1156, 527);
			this->Historytab->TabIndex = 4;
			this->Historytab->Text = L"History";
			this->Historytab->UseVisualStyleBackColor = true;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(116, 103);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(206, 36);
			this->label7->TabIndex = 4;
			this->label7->Text = L"Booking Date";
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(71, 159);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(236, 44);
			this->textBox1->TabIndex = 3;
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->Location = System::Drawing::Point(109, 346);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(147, 57);
			this->button4->TabIndex = 2;
			this->button4->Text = L"Print";
			this->button4->UseVisualStyleBackColor = true;
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(109, 254);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(147, 57);
			this->button3->TabIndex = 1;
			this->button3->Text = L"Search";
			this->button3->UseVisualStyleBackColor = true;
			// 
			// dataGridView3
			// 
			this->dataGridView3->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView3->Location = System::Drawing::Point(370, 17);
			this->dataGridView3->Name = L"dataGridView3";
			this->dataGridView3->RowHeadersWidth = 51;
			this->dataGridView3->RowTemplate->Height = 24;
			this->dataGridView3->Size = System::Drawing::Size(764, 476);
			this->dataGridView3->TabIndex = 0;
			// 
			// ManagerForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1155, 549);
			this->Controls->Add(this->tabControl1);
			this->Name = L"ManagerForm";
			this->Text = L"ManagerForm";
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
private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}
private: System::Void Showbutton_Click(System::Object^ sender, System::EventArgs^ e) 
{

}
private: System::Void tabControl1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void Firstbutton_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void Secondbutton_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}

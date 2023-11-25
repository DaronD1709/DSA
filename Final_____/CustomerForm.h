#pragma once
#include "Fuction.h"
namespace Final {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for CustomerForm
	/// </summary>
	public ref class CustomerForm : public System::Windows::Forms::Form
	{
	public:
		CustomerForm(void)
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
		~CustomerForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TabControl^ tabControl1;
	protected:
	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::TabPage^ tabPage2;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::TextBox^ bookingtextbox;
	private: System::Windows::Forms::TextBox^ idtextbox;
	private: System::Windows::Forms::TextBox^ phonetextbox;
	private: System::Windows::Forms::TextBox^ nametextbox;







	private: System::Windows::Forms::Button^ listbutton;



	private: System::Windows::Forms::Button^ clearbutton;
	private: System::Windows::Forms::Button^ donebutton;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ textboxid;

	private: System::Windows::Forms::TextBox^ textboxname;
	private: System::Windows::Forms::Button^ buttondone;

	private: System::Windows::Forms::Label^ label6;














	protected:



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
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->donebutton = (gcnew System::Windows::Forms::Button());
			this->clearbutton = (gcnew System::Windows::Forms::Button());
			this->listbutton = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->bookingtextbox = (gcnew System::Windows::Forms::TextBox());
			this->idtextbox = (gcnew System::Windows::Forms::TextBox());
			this->phonetextbox = (gcnew System::Windows::Forms::TextBox());
			this->nametextbox = (gcnew System::Windows::Forms::TextBox());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->buttondone = (gcnew System::Windows::Forms::Button());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textboxid = (gcnew System::Windows::Forms::TextBox());
			this->textboxname = (gcnew System::Windows::Forms::TextBox());
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->tabPage2->SuspendLayout();
			this->SuspendLayout();
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Location = System::Drawing::Point(1, 0);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(1151, 496);
			this->tabControl1->TabIndex = 0;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->donebutton);
			this->tabPage1->Controls->Add(this->clearbutton);
			this->tabPage1->Controls->Add(this->listbutton);
			this->tabPage1->Controls->Add(this->label4);
			this->tabPage1->Controls->Add(this->label3);
			this->tabPage1->Controls->Add(this->label2);
			this->tabPage1->Controls->Add(this->label1);
			this->tabPage1->Controls->Add(this->dataGridView1);
			this->tabPage1->Controls->Add(this->bookingtextbox);
			this->tabPage1->Controls->Add(this->idtextbox);
			this->tabPage1->Controls->Add(this->phonetextbox);
			this->tabPage1->Controls->Add(this->nametextbox);
			this->tabPage1->Location = System::Drawing::Point(4, 25);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(1143, 467);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Booking The Table ";
			this->tabPage1->UseVisualStyleBackColor = true;
			this->tabPage1->Click += gcnew System::EventHandler(this, &CustomerForm::tabPage1_Click);
			// 
			// donebutton
			// 
			this->donebutton->Location = System::Drawing::Point(214, 382);
			this->donebutton->Name = L"donebutton";
			this->donebutton->Size = System::Drawing::Size(118, 48);
			this->donebutton->TabIndex = 11;
			this->donebutton->Text = L"Done ";
			this->donebutton->UseVisualStyleBackColor = true;
			this->donebutton->Click += gcnew System::EventHandler(this, &CustomerForm::donebutton_Click);
			// 
			// clearbutton
			// 
			this->clearbutton->Location = System::Drawing::Point(61, 382);
			this->clearbutton->Name = L"clearbutton";
			this->clearbutton->Size = System::Drawing::Size(118, 48);
			this->clearbutton->TabIndex = 10;
			this->clearbutton->Text = L"Clear ";
			this->clearbutton->UseVisualStyleBackColor = true;
			// 
			// listbutton
			// 
			this->listbutton->Location = System::Drawing::Point(459, 31);
			this->listbutton->Name = L"listbutton";
			this->listbutton->Size = System::Drawing::Size(209, 44);
			this->listbutton->TabIndex = 9;
			this->listbutton->Text = L"List of available tables";
			this->listbutton->UseVisualStyleBackColor = true;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(65, 286);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(92, 16);
			this->label4->TabIndex = 8;
			this->label4->Text = L"Booking Date ";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(65, 198);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(62, 16);
			this->label3->TabIndex = 7;
			this->label3->Text = L"ID Table ";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(65, 111);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(100, 16);
			this->label2->TabIndex = 6;
			this->label2->Text = L"Phone Number ";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(65, 31);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(47, 16);
			this->label1->TabIndex = 5;
			this->label1->Text = L"Name ";
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(460, 94);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(654, 336);
			this->dataGridView1->TabIndex = 4;
			// 
			// bookingtextbox
			// 
			this->bookingtextbox->Location = System::Drawing::Point(61, 320);
			this->bookingtextbox->Multiline = true;
			this->bookingtextbox->Name = L"bookingtextbox";
			this->bookingtextbox->Size = System::Drawing::Size(271, 36);
			this->bookingtextbox->TabIndex = 3;
			// 
			// idtextbox
			// 
			this->idtextbox->Location = System::Drawing::Point(61, 230);
			this->idtextbox->Multiline = true;
			this->idtextbox->Name = L"idtextbox";
			this->idtextbox->Size = System::Drawing::Size(271, 36);
			this->idtextbox->TabIndex = 2;
			// 
			// phonetextbox
			// 
			this->phonetextbox->Location = System::Drawing::Point(61, 143);
			this->phonetextbox->Multiline = true;
			this->phonetextbox->Name = L"phonetextbox";
			this->phonetextbox->Size = System::Drawing::Size(271, 36);
			this->phonetextbox->TabIndex = 1;
			// 
			// nametextbox
			// 
			this->nametextbox->Location = System::Drawing::Point(61, 59);
			this->nametextbox->Multiline = true;
			this->nametextbox->Name = L"nametextbox";
			this->nametextbox->Size = System::Drawing::Size(271, 36);
			this->nametextbox->TabIndex = 0;
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->buttondone);
			this->tabPage2->Controls->Add(this->label6);
			this->tabPage2->Controls->Add(this->label5);
			this->tabPage2->Controls->Add(this->textboxid);
			this->tabPage2->Controls->Add(this->textboxname);
			this->tabPage2->Location = System::Drawing::Point(4, 25);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(1143, 467);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Cancel The Table ";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// buttondone
			// 
			this->buttondone->Location = System::Drawing::Point(153, 347);
			this->buttondone->Name = L"buttondone";
			this->buttondone->Size = System::Drawing::Size(143, 48);
			this->buttondone->TabIndex = 4;
			this->buttondone->Text = L"Done";
			this->buttondone->UseVisualStyleBackColor = true;
			this->buttondone->Click += gcnew System::EventHandler(this, &CustomerForm::buttondone_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(91, 197);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(59, 16);
			this->label6->TabIndex = 3;
			this->label6->Text = L"ID Table";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(91, 62);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(44, 16);
			this->label5->TabIndex = 2;
			this->label5->Text = L"Name";
			// 
			// textboxid
			// 
			this->textboxid->Location = System::Drawing::Point(94, 236);
			this->textboxid->Multiline = true;
			this->textboxid->Name = L"textboxid";
			this->textboxid->Size = System::Drawing::Size(260, 49);
			this->textboxid->TabIndex = 1;
			// 
			// textboxname
			// 
			this->textboxname->Location = System::Drawing::Point(94, 106);
			this->textboxname->Multiline = true;
			this->textboxname->Name = L"textboxname";
			this->textboxname->Size = System::Drawing::Size(260, 49);
			this->textboxname->TabIndex = 0;
			// 
			// CustomerForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1150, 496);
			this->Controls->Add(this->tabControl1);
			this->Name = L"CustomerForm";
			this->Text = L"CustomerForm";
			this->Load += gcnew System::EventHandler(this, &CustomerForm::CustomerForm_Load);
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void CustomerForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void tabPage1_Click(System::Object^ sender, System::EventArgs^ e) {
	}



private: System::Void buttondone_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void donebutton_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}

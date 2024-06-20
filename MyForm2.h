#pragma once
#include <windows.graphics.h>
#include "MyForm1.h"



namespace sample2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	/// <summary>
	/// Summary for MyForm2
	/// </summary>
	public ref class MyForm2 : public System::Windows::Forms::Form
	{
	private:
		System::String^ carsTypeBox;
		System::String^ brandbox;
		System::String^ conditionBox;
	private: System::Windows::Forms::Label^ PaymentLabel;
	private: System::Windows::Forms::Label^ DurationLabel;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label8;
	private: System::Drawing::Printing::PrintDocument^ printDocument1;
	private: System::Windows::Forms::PrintPreviewDialog^ printPreviewDialog1;
		   System::String^ timeBox;
	private: System::Drawing::Printing::PrintDocument^ printDocument2;
	private: System::Windows::Forms::CheckBox^ BankPayment;
	private: System::Windows::Forms::CheckBox^ CashBox;


	private: System::Windows::Forms::Label^ label9;

		   System::Windows::Forms::TextBox^ rtPrint;

		
	public:
		int CalculatePayment(String^ carsTypeBox, String^ brandbox, String^ conditionBox, String^ timeBox)
		{

			int typePrice=0;
			int brandPrice=0;
			int conditionPrice=0;
			int timePrice=0 ;

			// Assign prices based on user selections
			if (carsTypeBox == "MICRO") {
				typePrice = 500;
			}
			else if (carsTypeBox == "HATCHBACK") {
				typePrice = 750;
			}
			else if (carsTypeBox == "ROADSTER") {
				typePrice = 1000;
			}
			else if (carsTypeBox == "COUPE") {
				typePrice = 1000;
			}
			else if (carsTypeBox == "SUPERCAR") {
				typePrice = 2000;
			}
			if (brandbox == "NISSAN") {
				brandPrice = 800;
			}
			else if (brandbox == "HONDA") {
				brandPrice = 500;
			}
			else if (brandbox == "FORD") {
				brandPrice = 600;
			}
			else if (brandbox == "BMW") {
				brandPrice = 800;
			}
			else if (brandbox == "AUDI") {
				brandPrice = 1000;
			}
			else if (brandbox == "TOYOTA") {
				brandPrice = 500;
			}


			if (conditionBox == "Outstanding (Brand new)") {
				conditionPrice = 5000;
			}
			else if (conditionBox == "Clean(used)")
			{
				conditionPrice = 3000;
			}
			else if (conditionBox == "Avarage(used)") {
				conditionPrice = 2000;
			}


			if (timeBox == "24 h") {
				timePrice = 1000;
			}
			else if (timeBox == "2 Days") {
				timePrice = 2500;
			}
			else if (timeBox == "3-5 Days") {
				timePrice = 5000;
			}
			else if (timeBox == "1 Week") {
				timePrice = 7000;
			}


			int totalPrice = typePrice + brandPrice + conditionPrice + timePrice;


			return totalPrice;
		}
		
	
		MyForm2(void)
		{
			rtPrint = gcnew System::Windows::Forms::TextBox();
			rtPrint->Name = "rtPrint";

			rtPrint->Size = System::Drawing::Size(200, 100); // Set the size

			InitializeComponent();
			
			this->Controls->Add(rtPrint);
			
			
			//
			//TODO: Add the constructor code here		
			//
			
		}
		MyForm2(System::String^ userName, String^ userRegisterNo, String^ userIDNo, String^ userMobileNo, String^ brandbox,String^ carsTypebox,String^ conditionBox, String^ carColorBox, String^ timeBox) : Form() {
			InitializeComponent();

			// Set values using the parameters
			NameLabel->Text = userName;
			RegNolabel->Text = userRegisterNo;
			IDlabel->Text = userIDNo;
			MobileNumlabel->Text = userMobileNo;
			Brandlabel->Text = brandbox;
			Typelabel->Text = carsTypebox;
			Conditionlabel->Text = conditionBox;
			Colorlabel->Text = carColorBox;
			DurationLabel->Text = timeBox;

			
			this->carsTypeBox = carsTypebox;
			this->brandbox = brandbox;
			this->conditionBox = conditionBox;
			this->timeBox = timeBox;

		


		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm2()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ NameLabel;
	private: System::Windows::Forms::Label^ RegNolabel;
	private: System::Windows::Forms::Label^ IDlabel;
	private: System::Windows::Forms::Label^ MobileNumlabel;
	protected:

	protected:



	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ Conditionlabel;

	private: System::Windows::Forms::Label^ Typelabel;
	private: System::Windows::Forms::Label^ Brandlabel;
	private: System::Windows::Forms::Label^ Colorlabel;

	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ CalculateButton;



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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm2::typeid));
			this->NameLabel = (gcnew System::Windows::Forms::Label());
			this->RegNolabel = (gcnew System::Windows::Forms::Label());
			this->IDlabel = (gcnew System::Windows::Forms::Label());
			this->MobileNumlabel = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->DurationLabel = (gcnew System::Windows::Forms::Label());
			this->Colorlabel = (gcnew System::Windows::Forms::Label());
			this->Conditionlabel = (gcnew System::Windows::Forms::Label());
			this->Typelabel = (gcnew System::Windows::Forms::Label());
			this->Brandlabel = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->CalculateButton = (gcnew System::Windows::Forms::Button());
			this->PaymentLabel = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->printDocument1 = (gcnew System::Drawing::Printing::PrintDocument());
			this->printPreviewDialog1 = (gcnew System::Windows::Forms::PrintPreviewDialog());
			this->printDocument2 = (gcnew System::Drawing::Printing::PrintDocument());
			this->BankPayment = (gcnew System::Windows::Forms::CheckBox());
			this->CashBox = (gcnew System::Windows::Forms::CheckBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// NameLabel
			// 
			this->NameLabel->AutoSize = true;
			this->NameLabel->BackColor = System::Drawing::Color::Transparent;
			this->NameLabel->Location = System::Drawing::Point(12, 9);
			this->NameLabel->Name = L"NameLabel";
			this->NameLabel->Size = System::Drawing::Size(73, 22);
			this->NameLabel->TabIndex = 0;
			this->NameLabel->Text = L"Name :";
			// 
			// RegNolabel
			// 
			this->RegNolabel->AutoSize = true;
			this->RegNolabel->BackColor = System::Drawing::Color::Transparent;
			this->RegNolabel->Location = System::Drawing::Point(10, 57);
			this->RegNolabel->Name = L"RegNolabel";
			this->RegNolabel->Size = System::Drawing::Size(93, 22);
			this->RegNolabel->TabIndex = 1;
			this->RegNolabel->Text = L"REG NO :";
			this->RegNolabel->Click += gcnew System::EventHandler(this, &MyForm2::label2_Click);
			// 
			// IDlabel
			// 
			this->IDlabel->AutoSize = true;
			this->IDlabel->BackColor = System::Drawing::Color::Transparent;
			this->IDlabel->Location = System::Drawing::Point(11, 104);
			this->IDlabel->Name = L"IDlabel";
			this->IDlabel->Size = System::Drawing::Size(77, 22);
			this->IDlabel->TabIndex = 2;
			this->IDlabel->Text = L"ID NO :";
			// 
			// MobileNumlabel
			// 
			this->MobileNumlabel->AutoSize = true;
			this->MobileNumlabel->BackColor = System::Drawing::Color::Transparent;
			this->MobileNumlabel->Location = System::Drawing::Point(10, 148);
			this->MobileNumlabel->Name = L"MobileNumlabel";
			this->MobileNumlabel->Size = System::Drawing::Size(167, 22);
			this->MobileNumlabel->TabIndex = 3;
			this->MobileNumlabel->Text = L"MOBILE NUMBER:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(3, 321);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(0, 22);
			this->label5->TabIndex = 14;
			// 
			// groupBox1
			// 
			this->groupBox1->BackColor = System::Drawing::Color::Transparent;
			this->groupBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"groupBox1.BackgroundImage")));
			this->groupBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->groupBox1->Controls->Add(this->label8);
			this->groupBox1->Controls->Add(this->label7);
			this->groupBox1->Controls->Add(this->label6);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->DurationLabel);
			this->groupBox1->Controls->Add(this->Colorlabel);
			this->groupBox1->Controls->Add(this->Conditionlabel);
			this->groupBox1->Controls->Add(this->Typelabel);
			this->groupBox1->Controls->Add(this->Brandlabel);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Pristina", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox1->ForeColor = System::Drawing::SystemColors::HighlightText;
			this->groupBox1->Location = System::Drawing::Point(12, 203);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(844, 153);
			this->groupBox1->TabIndex = 15;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Selected Car Details";
			this->groupBox1->Enter += gcnew System::EventHandler(this, &MyForm2::groupBox1_Enter);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(37, 92);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(93, 29);
			this->label8->TabIndex = 10;
			this->label8->Text = L"Duration :";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(384, 92);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(65, 29);
			this->label7->TabIndex = 9;
			this->label7->Text = L"Color :";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(455, 42);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(96, 29);
			this->label6->TabIndex = 8;
			this->label6->Text = L"Condition :";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(274, 42);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(61, 29);
			this->label4->TabIndex = 7;
			this->label4->Text = L"Type :";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(37, 42);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(75, 29);
			this->label3->TabIndex = 6;
			this->label3->Text = L"Brand :";
			// 
			// DurationLabel
			// 
			this->DurationLabel->AutoSize = true;
			this->DurationLabel->Location = System::Drawing::Point(135, 92);
			this->DurationLabel->Name = L"DurationLabel";
			this->DurationLabel->Size = System::Drawing::Size(88, 29);
			this->DurationLabel->TabIndex = 5;
			this->DurationLabel->Text = L"Duration ";
			// 
			// Colorlabel
			// 
			this->Colorlabel->AutoSize = true;
			this->Colorlabel->Location = System::Drawing::Point(455, 92);
			this->Colorlabel->Name = L"Colorlabel";
			this->Colorlabel->Size = System::Drawing::Size(55, 29);
			this->Colorlabel->TabIndex = 4;
			this->Colorlabel->Text = L"Color";
			// 
			// Conditionlabel
			// 
			this->Conditionlabel->AutoSize = true;
			this->Conditionlabel->Location = System::Drawing::Point(547, 42);
			this->Conditionlabel->Name = L"Conditionlabel";
			this->Conditionlabel->Size = System::Drawing::Size(86, 29);
			this->Conditionlabel->TabIndex = 3;
			this->Conditionlabel->Text = L"Condition";
			// 
			// Typelabel
			// 
			this->Typelabel->AutoSize = true;
			this->Typelabel->Location = System::Drawing::Point(343, 42);
			this->Typelabel->Name = L"Typelabel";
			this->Typelabel->Size = System::Drawing::Size(51, 29);
			this->Typelabel->TabIndex = 2;
			this->Typelabel->Text = L"Type";
			// 
			// Brandlabel
			// 
			this->Brandlabel->AutoSize = true;
			this->Brandlabel->Location = System::Drawing::Point(118, 42);
			this->Brandlabel->Name = L"Brandlabel";
			this->Brandlabel->Size = System::Drawing::Size(65, 29);
			this->Brandlabel->TabIndex = 1;
			this->Brandlabel->Text = L"Brand";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(45, 42);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(0, 29);
			this->label1->TabIndex = 0;
			// 
			// button1
			// 
			this->button1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.BackgroundImage")));
			this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->button1->Font = (gcnew System::Drawing::Font(L"MV Boli", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::LightYellow;
			this->button1->Location = System::Drawing::Point(114, 665);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(347, 53);
			this->button1->TabIndex = 17;
			this->button1->Text = L"Print Recipt";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm2::button1_Click);
			// 
			// button2
			// 
			this->button2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button2.BackgroundImage")));
			this->button2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->button2->Font = (gcnew System::Drawing::Font(L"MV Boli", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::Color::LightYellow;
			this->button2->Location = System::Drawing::Point(461, 665);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(306, 53);
			this->button2->TabIndex = 18;
			this->button2->Text = L"Continue to Payment";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm2::button2_Click);
			// 
			// CalculateButton
			// 
			this->CalculateButton->BackColor = System::Drawing::Color::DarkCyan;
			this->CalculateButton->Font = (gcnew System::Drawing::Font(L"Segoe Print", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->CalculateButton->ForeColor = System::Drawing::Color::Snow;
			this->CalculateButton->Location = System::Drawing::Point(12, 378);
			this->CalculateButton->Name = L"CalculateButton";
			this->CalculateButton->Size = System::Drawing::Size(343, 46);
			this->CalculateButton->TabIndex = 19;
			this->CalculateButton->Text = L"Calculate Payment";
			this->CalculateButton->UseVisualStyleBackColor = false;
			this->CalculateButton->Click += gcnew System::EventHandler(this, &MyForm2::button3_Click);
			// 
			// PaymentLabel
			// 
			this->PaymentLabel->AutoSize = true;
			this->PaymentLabel->BackColor = System::Drawing::Color::Transparent;
			this->PaymentLabel->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->PaymentLabel->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->PaymentLabel->Location = System::Drawing::Point(235, 437);
			this->PaymentLabel->Name = L"PaymentLabel";
			this->PaymentLabel->Size = System::Drawing::Size(0, 30);
			this->PaymentLabel->TabIndex = 20;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label2->Location = System::Drawing::Point(12, 437);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(154, 30);
			this->label2->TabIndex = 21;
			this->label2->Text = L"Total Payment :";
			// 
			// printDocument1
			// 
			this->printDocument1->PrintPage += gcnew System::Drawing::Printing::PrintPageEventHandler(this, &MyForm2::printDocument1_PrintPage);
			// 
			// printPreviewDialog1
			// 
			this->printPreviewDialog1->AutoScrollMargin = System::Drawing::Size(0, 0);
			this->printPreviewDialog1->AutoScrollMinSize = System::Drawing::Size(0, 0);
			this->printPreviewDialog1->ClientSize = System::Drawing::Size(400, 300);
			this->printPreviewDialog1->Document = this->printDocument1;
			this->printPreviewDialog1->Enabled = true;
			this->printPreviewDialog1->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"printPreviewDialog1.Icon")));
			this->printPreviewDialog1->Name = L"printPreviewDialog1";
			this->printPreviewDialog1->Visible = false;
			this->printPreviewDialog1->Load += gcnew System::EventHandler(this, &MyForm2::printPreviewDialog1_Load);
			// 
			// BankPayment
			// 
			this->BankPayment->AutoSize = true;
			this->BankPayment->BackColor = System::Drawing::Color::Transparent;
			this->BankPayment->Checked = true;
			this->BankPayment->CheckState = System::Windows::Forms::CheckState::Checked;
			this->BankPayment->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->BankPayment->ForeColor = System::Drawing::Color::MediumBlue;
			this->BankPayment->Location = System::Drawing::Point(275, 600);
			this->BankPayment->Name = L"BankPayment";
			this->BankPayment->Size = System::Drawing::Size(172, 34);
			this->BankPayment->TabIndex = 22;
			this->BankPayment->Text = L"Bank Payment";
			this->BankPayment->UseVisualStyleBackColor = false;
			this->BankPayment->CheckedChanged += gcnew System::EventHandler(this, &MyForm2::BankPayment_CheckedChanged);
			// 
			// CashBox
			// 
			this->CashBox->AutoSize = true;
			this->CashBox->BackColor = System::Drawing::Color::Transparent;
			this->CashBox->Checked = true;
			this->CashBox->CheckState = System::Windows::Forms::CheckState::Checked;
			this->CashBox->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->CashBox->ForeColor = System::Drawing::Color::MediumBlue;
			this->CashBox->Location = System::Drawing::Point(485, 600);
			this->CashBox->Name = L"CashBox";
			this->CashBox->Size = System::Drawing::Size(96, 34);
			this->CashBox->TabIndex = 23;
			this->CashBox->Text = L"$ Cash";
			this->CashBox->UseVisualStyleBackColor = false;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->BackColor = System::Drawing::Color::Transparent;
			this->label9->Font = (gcnew System::Drawing::Font(L"Perpetua Titling MT", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(12, 604);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(238, 26);
			this->label9->TabIndex = 24;
			this->label9->Text = L"Payment Method ";
			// 
			// MyForm2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(13, 22);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(849, 753);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->CashBox);
			this->Controls->Add(this->BankPayment);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->PaymentLabel);
			this->Controls->Add(this->CalculateButton);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->MobileNumlabel);
			this->Controls->Add(this->IDlabel);
			this->Controls->Add(this->RegNolabel);
			this->Controls->Add(this->NameLabel);
			this->DoubleBuffered = true;
			this->Font = (gcnew System::Drawing::Font(L"Perpetua Titling MT", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Margin = System::Windows::Forms::Padding(6, 5, 6, 5);
			this->Name = L"MyForm2";
			this->Text = L"Confirmation & Recipt page";
			this->Load += gcnew System::EventHandler(this, &MyForm2::MyForm2_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {

		int totalPrice = CalculatePayment(carsTypeBox, brandbox, conditionBox, timeBox);


		PaymentLabel->Text = System::Convert::ToString( totalPrice);
		
		


}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	if (BankPayment->Checked || CashBox->Checked) {
		this->Close();
	}
	else {
		MessageBox::Show("Please choose a Payment method", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}
private: System::Void groupBox1_Enter(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void printDocument1_PrintPage(System::Object^ sender, System::Drawing::Printing::PrintPageEventArgs^ e) {
	System::Drawing::Font^ fntString = gcnew System::Drawing::Font("Times New Roman", 18, FontStyle::Regular);

	String^ textToPrint = rtPrint->Text;

	e->Graphics->DrawString(textToPrint, fntString, Brushes::Black, 120, 120);
	
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

	printDocument1->PrintPage += gcnew System::Drawing::Printing::PrintPageEventHandler(this, &MyForm2::printDocument1_PrintPage);

	printPreviewDialog1->ShowDialog();
}
private: System::Void printPreviewDialog1_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void MyForm2_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void BankPayment_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}

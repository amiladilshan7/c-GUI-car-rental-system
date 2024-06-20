#pragma once
#include "MyForm2.h"

namespace sample2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm1
	/// </summary>
	public ref class MyForm1 : public System::Windows::Forms::Form
	{
	public:
		double CalculatePayment(String^ carsTypeBox, String^ brandbox, String^ conditionBox, String^ timeBox)
		{

			double typePrice = 0.0;
			double brandPrice = 0.0;
			double conditionPrice = 0.0;
			double timePrice = 0.0;

			// Assign prices based on user selections
			if (carsTypeBox == "MICRO") {
				typePrice = 500.0;
			}
			else if (carsTypeBox == "HATCHBACK") {
				typePrice = 750.0;
			}
			else if (carsTypeBox == "ROADSTER") {
				typePrice = 1000.0;
			}
			else if (carsTypeBox == "COUPE") {
				typePrice = 1000.0;
			}
			else if (carsTypeBox == "SUPERCAR") {
				typePrice = 2000.0;
			}
			if (brandbox == "NISSAN") {
				brandPrice = 800.0;
			}
			else if (brandbox == "HONDA") {
				brandPrice = 500.0;
			}
			else if (brandbox == "FORD") {
				brandPrice = 600.0;
			}
			else if (brandbox == "BMW") {
				brandPrice = 800.0;
			}
			else if (brandbox == "AUDI") {
				brandPrice = 1000.0;
			}
			else if (brandbox == "TOYOTA") {
				brandPrice = 500.0;
			}


			if (conditionBox == "Outstanding (Brand new)") {
				conditionPrice = 5000.0;
			}
			else if (conditionBox == "Clean(used)")
			{
				conditionPrice = 3000.0;
			}
			else if (conditionBox == "Avarage(used)") {
				conditionPrice = 2000.0;
			}


			if (timeBox == "24 h") {
				timePrice = 1000.0;
			}
			else if (timeBox == "2 Days") {
				timePrice = 2500.0;
			}
			else if (timeBox == "3-5 Days") {
				timePrice = 5000.0;
			}
			else if (timeBox == "1 Week") {
				timePrice = 7000.0;
			}


			double totalPrice = typePrice + brandPrice + conditionPrice + timePrice;


			return totalPrice;
		}
		

		MyForm1(void)
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
		~MyForm1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ nameLabel;
	private: System::Windows::Forms::Label^ RegNolabel;
	private: System::Windows::Forms::Label^ IDnoLebel;
	private: System::Windows::Forms::Label^ mobileNoLebel;
	protected:




	private: System::Windows::Forms::TextBox^ userName;
	private: System::Windows::Forms::TextBox^ userRegisterNo;
	private: System::Windows::Forms::TextBox^ userIDNo;
	private: System::Windows::Forms::TextBox^ userMobileNo;
	private: System::Windows::Forms::ComboBox^ brandbox;

	private: System::Windows::Forms::ErrorProvider^ errorProvider1;
	private: System::Windows::Forms::ErrorProvider^ errorProvider2;
	private: System::Windows::Forms::ErrorProvider^ errorProvider3;
	private: System::Windows::Forms::ComboBox^ carsTypeBox;


	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::ComboBox^ conditionBox;

	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::ComboBox^ carColorBox;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::ComboBox^ timeBox;
	private: System::Windows::Forms::Button^ Backbutton;
	private: System::Windows::Forms::Button^ continueButton;



	private: System::ComponentModel::IContainer^ components;


	protected:

	private:
		

		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm1::typeid));
			this->nameLabel = (gcnew System::Windows::Forms::Label());
			this->RegNolabel = (gcnew System::Windows::Forms::Label());
			this->IDnoLebel = (gcnew System::Windows::Forms::Label());
			this->mobileNoLebel = (gcnew System::Windows::Forms::Label());
			this->userName = (gcnew System::Windows::Forms::TextBox());
			this->userRegisterNo = (gcnew System::Windows::Forms::TextBox());
			this->userIDNo = (gcnew System::Windows::Forms::TextBox());
			this->userMobileNo = (gcnew System::Windows::Forms::TextBox());
			this->brandbox = (gcnew System::Windows::Forms::ComboBox());
			this->errorProvider1 = (gcnew System::Windows::Forms::ErrorProvider(this->components));
			this->carsTypeBox = (gcnew System::Windows::Forms::ComboBox());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->carColorBox = (gcnew System::Windows::Forms::ComboBox());
			this->conditionBox = (gcnew System::Windows::Forms::ComboBox());
			this->errorProvider2 = (gcnew System::Windows::Forms::ErrorProvider(this->components));
			this->errorProvider3 = (gcnew System::Windows::Forms::ErrorProvider(this->components));
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->timeBox = (gcnew System::Windows::Forms::ComboBox());
			this->Backbutton = (gcnew System::Windows::Forms::Button());
			this->continueButton = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->errorProvider1))->BeginInit();
			this->groupBox2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->errorProvider2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->errorProvider3))->BeginInit();
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// nameLabel
			// 
			this->nameLabel->AutoSize = true;
			this->nameLabel->BackColor = System::Drawing::Color::Transparent;
			this->nameLabel->Font = (gcnew System::Drawing::Font(L"Tempus Sans ITC", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->nameLabel->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->nameLabel->Location = System::Drawing::Point(10, 40);
			this->nameLabel->Name = L"nameLabel";
			this->nameLabel->Size = System::Drawing::Size(85, 27);
			this->nameLabel->TabIndex = 0;
			this->nameLabel->Text = L"NAME :";
			// 
			// RegNolabel
			// 
			this->RegNolabel->AutoSize = true;
			this->RegNolabel->BackColor = System::Drawing::Color::Transparent;
			this->RegNolabel->Font = (gcnew System::Drawing::Font(L"Tempus Sans ITC", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->RegNolabel->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->RegNolabel->Location = System::Drawing::Point(10, 92);
			this->RegNolabel->Name = L"RegNolabel";
			this->RegNolabel->Size = System::Drawing::Size(104, 27);
			this->RegNolabel->TabIndex = 1;
			this->RegNolabel->Text = L"REG. NO :";
			// 
			// IDnoLebel
			// 
			this->IDnoLebel->AutoSize = true;
			this->IDnoLebel->BackColor = System::Drawing::Color::Transparent;
			this->IDnoLebel->Font = (gcnew System::Drawing::Font(L"Tempus Sans ITC", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->IDnoLebel->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->IDnoLebel->Location = System::Drawing::Point(10, 143);
			this->IDnoLebel->Name = L"IDnoLebel";
			this->IDnoLebel->Size = System::Drawing::Size(80, 27);
			this->IDnoLebel->TabIndex = 2;
			this->IDnoLebel->Text = L"ID NO :";
			// 
			// mobileNoLebel
			// 
			this->mobileNoLebel->AutoSize = true;
			this->mobileNoLebel->BackColor = System::Drawing::Color::Transparent;
			this->mobileNoLebel->Font = (gcnew System::Drawing::Font(L"Tempus Sans ITC", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->mobileNoLebel->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->mobileNoLebel->Location = System::Drawing::Point(10, 198);
			this->mobileNoLebel->Name = L"mobileNoLebel";
			this->mobileNoLebel->Size = System::Drawing::Size(128, 27);
			this->mobileNoLebel->TabIndex = 3;
			this->mobileNoLebel->Text = L"MOBILE NO:";
			// 
			// userName
			// 
			this->userName->BackColor = System::Drawing::Color::NavajoWhite;
			this->userName->Font = (gcnew System::Drawing::Font(L"Tempus Sans ITC", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->userName->ForeColor = System::Drawing::Color::Black;
			this->userName->Location = System::Drawing::Point(154, 37);
			this->userName->Name = L"userName";
			this->userName->Size = System::Drawing::Size(515, 35);
			this->userName->TabIndex = 4;
			this->userName->Text = L"Enter the full name with Initials";
			// 
			// userRegisterNo
			// 
			this->userRegisterNo->BackColor = System::Drawing::Color::NavajoWhite;
			this->userRegisterNo->Font = (gcnew System::Drawing::Font(L"Tempus Sans ITC", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->userRegisterNo->ForeColor = System::Drawing::Color::Black;
			this->userRegisterNo->Location = System::Drawing::Point(154, 89);
			this->userRegisterNo->Name = L"userRegisterNo";
			this->userRegisterNo->Size = System::Drawing::Size(515, 35);
			this->userRegisterNo->TabIndex = 5;
			this->userRegisterNo->Text = L"Enter Register Number";
			// 
			// userIDNo
			// 
			this->userIDNo->BackColor = System::Drawing::Color::NavajoWhite;
			this->userIDNo->Font = (gcnew System::Drawing::Font(L"Tempus Sans ITC", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->userIDNo->ForeColor = System::Drawing::Color::Black;
			this->userIDNo->Location = System::Drawing::Point(154, 140);
			this->userIDNo->Name = L"userIDNo";
			this->userIDNo->Size = System::Drawing::Size(515, 35);
			this->userIDNo->TabIndex = 6;
			this->userIDNo->Text = L"Identity Card Number";
			// 
			// userMobileNo
			// 
			this->userMobileNo->BackColor = System::Drawing::Color::NavajoWhite;
			this->userMobileNo->Font = (gcnew System::Drawing::Font(L"Tempus Sans ITC", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->userMobileNo->ForeColor = System::Drawing::Color::Black;
			this->userMobileNo->Location = System::Drawing::Point(154, 195);
			this->userMobileNo->Name = L"userMobileNo";
			this->userMobileNo->Size = System::Drawing::Size(515, 35);
			this->userMobileNo->TabIndex = 7;
			this->userMobileNo->Text = L"Enter a Mobile number";
			// 
			// brandbox
			// 
			this->brandbox->AllowDrop = true;
			this->brandbox->BackColor = System::Drawing::SystemColors::Info;
			this->brandbox->Font = (gcnew System::Drawing::Font(L"Tw Cen MT", 14.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->brandbox->ForeColor = System::Drawing::Color::Black;
			this->brandbox->FormattingEnabled = true;
			this->errorProvider1->SetIconAlignment(this->brandbox, System::Windows::Forms::ErrorIconAlignment::TopLeft);
			this->brandbox->Items->AddRange(gcnew cli::array< System::Object^  >(6) { L"NISSAN", L"HONDA", L"FORD", L"BMW", L"AUDI", L"TOYOTA" });
			this->brandbox->Location = System::Drawing::Point(6, 41);
			this->brandbox->Name = L"brandbox";
			this->brandbox->Size = System::Drawing::Size(167, 30);
			this->brandbox->TabIndex = 8;
			this->brandbox->Text = L"Select a Brand";
			this->brandbox->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm1::brandbox_SelectedIndexChanged);
			// 
			// errorProvider1
			// 
			this->errorProvider1->ContainerControl = this;
			// 
			// carsTypeBox
			// 
			this->carsTypeBox->AllowDrop = true;
			this->carsTypeBox->BackColor = System::Drawing::SystemColors::Info;
			this->carsTypeBox->Font = (gcnew System::Drawing::Font(L"Tw Cen MT", 14.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->carsTypeBox->ForeColor = System::Drawing::Color::Black;
			this->carsTypeBox->FormattingEnabled = true;
			this->errorProvider1->SetIconAlignment(this->carsTypeBox, System::Windows::Forms::ErrorIconAlignment::TopLeft);
			this->carsTypeBox->Items->AddRange(gcnew cli::array< System::Object^  >(5) {
				L"MICRO ", L"HATCHBACK", L"ROADSTER", L"COUPE",
					L"SUPER CAR"
			});
			this->carsTypeBox->Location = System::Drawing::Point(207, 41);
			this->carsTypeBox->Name = L"carsTypeBox";
			this->carsTypeBox->Size = System::Drawing::Size(171, 30);
			this->carsTypeBox->TabIndex = 9;
			this->carsTypeBox->Text = L"Cars Type";
			// 
			// groupBox2
			// 
			this->groupBox2->BackColor = System::Drawing::Color::Transparent;
			this->groupBox2->Controls->Add(this->carColorBox);
			this->groupBox2->Controls->Add(this->conditionBox);
			this->groupBox2->Controls->Add(this->carsTypeBox);
			this->groupBox2->Controls->Add(this->brandbox);
			this->groupBox2->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 14.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox2->ForeColor = System::Drawing::SystemColors::InactiveCaption;
			this->errorProvider3->SetIconAlignment(this->groupBox2, System::Windows::Forms::ErrorIconAlignment::TopLeft);
			this->errorProvider2->SetIconAlignment(this->groupBox2, System::Windows::Forms::ErrorIconAlignment::TopLeft);
			this->errorProvider1->SetIconAlignment(this->groupBox2, System::Windows::Forms::ErrorIconAlignment::TopLeft);
			this->groupBox2->Location = System::Drawing::Point(22, 321);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(806, 104);
			this->groupBox2->TabIndex = 11;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"CAR DETAILS";
			// 
			// carColorBox
			// 
			this->carColorBox->AllowDrop = true;
			this->carColorBox->BackColor = System::Drawing::SystemColors::Info;
			this->carColorBox->Font = (gcnew System::Drawing::Font(L"Tw Cen MT", 14.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->carColorBox->ForeColor = System::Drawing::Color::Black;
			this->carColorBox->FormattingEnabled = true;
			this->errorProvider1->SetIconAlignment(this->carColorBox, System::Windows::Forms::ErrorIconAlignment::TopLeft);
			this->carColorBox->Items->AddRange(gcnew cli::array< System::Object^  >(8) {
				L"Black", L"White ", L"Red", L"Blue", L"Yellow",
					L"Silver", L"Grey", L"Default"
			});
			this->carColorBox->Location = System::Drawing::Point(637, 41);
			this->carColorBox->Name = L"carColorBox";
			this->carColorBox->Size = System::Drawing::Size(163, 30);
			this->carColorBox->TabIndex = 11;
			this->carColorBox->Text = L"Color";
			// 
			// conditionBox
			// 
			this->conditionBox->AllowDrop = true;
			this->conditionBox->BackColor = System::Drawing::SystemColors::Info;
			this->conditionBox->Font = (gcnew System::Drawing::Font(L"Tw Cen MT", 14.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->conditionBox->ForeColor = System::Drawing::Color::Black;
			this->conditionBox->FormattingEnabled = true;
			this->errorProvider1->SetIconAlignment(this->conditionBox, System::Windows::Forms::ErrorIconAlignment::TopLeft);
			this->conditionBox->Items->AddRange(gcnew cli::array< System::Object^  >(3) {
				L"Outstanding (Brand new)", L"Clean(used)",
					L"Avarage(used)"
			});
			this->conditionBox->Location = System::Drawing::Point(403, 41);
			this->conditionBox->Name = L"conditionBox";
			this->conditionBox->Size = System::Drawing::Size(196, 30);
			this->conditionBox->TabIndex = 10;
			this->conditionBox->Text = L"Car Condition";
			// 
			// errorProvider2
			// 
			this->errorProvider2->ContainerControl = this;
			// 
			// errorProvider3
			// 
			this->errorProvider3->ContainerControl = this;
			// 
			// groupBox1
			// 
			this->groupBox1->BackColor = System::Drawing::Color::Transparent;
			this->groupBox1->Controls->Add(this->userMobileNo);
			this->groupBox1->Controls->Add(this->userIDNo);
			this->groupBox1->Controls->Add(this->userRegisterNo);
			this->groupBox1->Controls->Add(this->userName);
			this->groupBox1->Controls->Add(this->mobileNoLebel);
			this->groupBox1->Controls->Add(this->IDnoLebel);
			this->groupBox1->Controls->Add(this->RegNolabel);
			this->groupBox1->Controls->Add(this->nameLabel);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 14.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox1->ForeColor = System::Drawing::SystemColors::InactiveCaption;
			this->groupBox1->Location = System::Drawing::Point(22, 5);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(806, 260);
			this->groupBox1->TabIndex = 10;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"USER DETAILS";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(24, 428);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(0, 13);
			this->label5->TabIndex = 12;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Transparent;
			this->label6->Font = (gcnew System::Drawing::Font(L"MV Boli", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label6->Location = System::Drawing::Point(17, 461);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(421, 25);
			this->label6->TabIndex = 13;
			this->label6->Text = L"#\? How long do you want to rent a car for\?";
			// 
			// timeBox
			// 
			this->timeBox->Font = (gcnew System::Drawing::Font(L"MV Boli", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->timeBox->FormattingEnabled = true;
			this->timeBox->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"24 h", L"2 Days", L"3-5 Days", L"1 Week" });
			this->timeBox->Location = System::Drawing::Point(468, 458);
			this->timeBox->Name = L"timeBox";
			this->timeBox->Size = System::Drawing::Size(233, 33);
			this->timeBox->TabIndex = 14;
			this->timeBox->Text = L"Select Duration";
			this->timeBox->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm1::timeBox_SelectedIndexChanged);
			// 
			// Backbutton
			// 
			this->Backbutton->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->Backbutton->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Backbutton.BackgroundImage")));
			this->Backbutton->Font = (gcnew System::Drawing::Font(L"Papyrus", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Backbutton->ForeColor = System::Drawing::Color::Snow;
			this->Backbutton->Location = System::Drawing::Point(214, 512);
			this->Backbutton->Name = L"Backbutton";
			this->Backbutton->Size = System::Drawing::Size(209, 45);
			this->Backbutton->TabIndex = 15;
			this->Backbutton->Text = L"<< Exit";
			this->Backbutton->UseVisualStyleBackColor = false;
			this->Backbutton->Click += gcnew System::EventHandler(this, &MyForm1::Backbutton_Click);
			// 
			// continueButton
			// 
			this->continueButton->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->continueButton->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"continueButton.BackgroundImage")));
			this->continueButton->Font = (gcnew System::Drawing::Font(L"Papyrus", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->continueButton->ForeColor = System::Drawing::Color::Snow;
			this->continueButton->Location = System::Drawing::Point(429, 512);
			this->continueButton->Name = L"continueButton";
			this->continueButton->Size = System::Drawing::Size(209, 45);
			this->continueButton->TabIndex = 16;
			this->continueButton->Text = L"Continue>>";
			this->continueButton->UseVisualStyleBackColor = false;
			this->continueButton->Click += gcnew System::EventHandler(this, &MyForm1::continueButton_Click);
			// 
			// MyForm1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(849, 569);
			this->Controls->Add(this->continueButton);
			this->Controls->Add(this->Backbutton);
			this->Controls->Add(this->timeBox);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::Fixed3D;
			this->Name = L"MyForm1";
			this->Text = L"Registration Form";
			this->Load += gcnew System::EventHandler(this, &MyForm1::MyForm1_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->errorProvider1))->EndInit();
			this->groupBox2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->errorProvider2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->errorProvider3))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void brandbox_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void continueButton_Click(System::Object^ sender, System::EventArgs^ e) {

	


	if (userName->Text == "Enter the full name with Initials" || userRegisterNo->Text == "Enter Register Number" || userIDNo->Text == "Identity Card Number" || userMobileNo->Text == "Enter a Mobile number") {
		MessageBox::Show("Please fill in all the user details.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return;  // Stop further processing
	}
	if (userName->Text == "" || userRegisterNo->Text == "" || userIDNo->Text == "" || userMobileNo->Text == "") {
		MessageBox::Show("Please fill in all the user details.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return;  // Stop further processing
	}
	if (brandbox->SelectedIndex == -1 || carsTypeBox->SelectedIndex == -1 || conditionBox->SelectedIndex == -1 || carColorBox->SelectedIndex == -1) {
		MessageBox::Show("Please fill in all the car details.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return;  // Stop further processing
	}
	if (timeBox->SelectedIndex == -1) {
		MessageBox::Show("Please Select the Time Duration.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return;
	}
	// Create an instance of MyFormH1
	MyForm2^ myForm2Instance = gcnew MyForm2(userName->Text, userRegisterNo->Text, userIDNo->Text, userMobileNo->Text, brandbox->Text, carsTypeBox->Text,conditionBox->Text,carColorBox->Text, timeBox->Text);

	Console::WriteLine("About to show MyFormH1");  // Add this line for debugging
	myForm2Instance->Show();

	// Optionally, hide the current form if needed
	this->Hide();

	

	// Show MyForm2
	myForm2Instance->Show();
}

	
	private: System::Void Backbutton_Click(System::Object^ sender, System::EventArgs^ e) {
		// Close the current form (MyForm1)
		this->Hide();


	}

private: System::Void MyForm1_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void timeBox_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}
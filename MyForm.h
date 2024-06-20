#pragma once
#include "MyForm1.h"

namespace sample2 {

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

	protected:


	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ usernameTXT;
	private: System::Windows::Forms::TextBox^ PasswordTXT;


	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label6;







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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->usernameTXT = (gcnew System::Windows::Forms::TextBox());
			this->PasswordTXT = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Mistral", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label1->Location = System::Drawing::Point(12, 21);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(517, 57);
			this->label1->TabIndex = 0;
			this->label1->Text = L"T.A.A.K. CAR RENTAL SYSTEM ";
			// 
			// usernameTXT
			// 
			this->usernameTXT->BackColor = System::Drawing::SystemColors::Window;
			this->usernameTXT->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 15.75F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->usernameTXT->ForeColor = System::Drawing::SystemColors::GrayText;
			this->usernameTXT->Location = System::Drawing::Point(517, 122);
			this->usernameTXT->Name = L"usernameTXT";
			this->usernameTXT->Size = System::Drawing::Size(285, 31);
			this->usernameTXT->TabIndex = 1;
			// 
			// PasswordTXT
			// 
			this->PasswordTXT->BackColor = System::Drawing::SystemColors::Window;
			this->PasswordTXT->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 15.75F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->PasswordTXT->ForeColor = System::Drawing::SystemColors::GrayText;
			this->PasswordTXT->Location = System::Drawing::Point(517, 206);
			this->PasswordTXT->Name = L"PasswordTXT";
			this->PasswordTXT->PasswordChar = '*';
			this->PasswordTXT->Size = System::Drawing::Size(285, 31);
			this->PasswordTXT->TabIndex = 2;
			this->PasswordTXT->UseSystemPasswordChar = true;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 20.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::Tomato;
			this->label2->Location = System::Drawing::Point(325, 122);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(178, 33);
			this->label2->TabIndex = 3;
			this->label2->Text = L"USER NAME ";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 20.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::Tomato;
			this->label3->Location = System::Drawing::Point(325, 203);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(161, 33);
			this->label3->TabIndex = 4;
			this->label3->Text = L"PASSWORD ";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 20.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::Tomato;
			this->label4->Location = System::Drawing::Point(488, 203);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(23, 33);
			this->label4->TabIndex = 5;
			this->label4->Text = L":";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 20.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::Tomato;
			this->label5->Location = System::Drawing::Point(488, 120);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(23, 33);
			this->label5->TabIndex = 6;
			this->label5->Text = L":";
			// 
			// button1
			// 
			this->button1->AllowDrop = true;
			this->button1->AutoSize = true;
			this->button1->BackColor = System::Drawing::Color::Black;
			this->button1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.BackgroundImage")));
			this->button1->Font = (gcnew System::Drawing::Font(L"ROG Fonts", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::Tomato;
			this->button1->ImageAlign = System::Drawing::ContentAlignment::BottomRight;
			this->button1->Location = System::Drawing::Point(554, 437);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(269, 60);
			this->button1->TabIndex = 7;
			this->button1->Text = L"LOGIN >>";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->AllowDrop = true;
			this->button2->AutoSize = true;
			this->button2->BackColor = System::Drawing::Color::Black;
			this->button2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button2.BackgroundImage")));
			this->button2->Font = (gcnew System::Drawing::Font(L"ROG Fonts", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::Color::Tomato;
			this->button2->ImageAlign = System::Drawing::ContentAlignment::BottomRight;
			this->button2->Location = System::Drawing::Point(279, 437);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(269, 60);
			this->button2->TabIndex = 8;
			this->button2->Text = L"<< EXIT";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Hack", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::Red;
			this->label6->Location = System::Drawing::Point(346, 261);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(0, 19);
			this->label6->TabIndex = 9;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ControlText;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(835, 548);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->PasswordTXT);
			this->Controls->Add(this->usernameTXT);
			this->Controls->Add(this->label1);
			this->Name = L"MyForm";
			this->Text = L"LOGIN PAGE";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

		if (usernameTXT->Text == "admin")
		{
			if (PasswordTXT->Text == "eng@jfn.ac.lk")
			{
				MyForm1^ myForm1Instance = gcnew MyForm1();
				myForm1Instance->Show();

			}
			else
			{
				MessageBox::Show("Incorrect Password", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		}
		else
		{
			MessageBox::Show("Incorrect Username", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			
		}
		String^ usernameError = "";
		String^ passwordError = "";

		bool isEmptyusername = String::IsNullOrEmpty(usernameTXT->Text);
		bool isEmptypassword = String::IsNullOrEmpty(PasswordTXT->Text);


		if (isEmptyusername || isEmptypassword) {
			// Set error messages
			if (isEmptyusername) {
				usernameError = "Please enter your username.\n";
			}
			else {
				usernameError = "";
			}

			if (isEmptypassword) {
				passwordError = "Please enter your password.\n";
			}
			else {
				passwordError = "";
			}

		label6->Text = usernameError + " " + passwordError;
			


		}
		


	}

	}
	;}


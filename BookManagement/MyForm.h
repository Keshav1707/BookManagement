#pragma once
#include "user.h"
#include "Dashboard.h"
#include "Signup.h"
namespace BookManagement {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;

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
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::CheckBox^ checkBox1;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::LinkLabel^ switchtosignup;

	private: System::Windows::Forms::Label^ label5;
	protected:

	protected:

	protected:

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
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->switchtosignup = (gcnew System::Windows::Forms::LinkLabel());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Black;
			this->label1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(127, 102);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(222, 81);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Sign in";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click_1);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Black;
			this->label2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label2->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12, System::Drawing::FontStyle::Bold));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(157, 250);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(104, 28);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Username";
			this->label2->Click += gcnew System::EventHandler(this, &MyForm::label2_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Black;
			this->label3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label3->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12, System::Drawing::FontStyle::Bold));
			this->label3->ForeColor = System::Drawing::Color::White;
			this->label3->Location = System::Drawing::Point(157, 353);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(97, 28);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Password\r\n";
			this->label3->Click += gcnew System::EventHandler(this, &MyForm::label3_Click);
			// 
			// panel1
			// 
			this->panel1->Location = System::Drawing::Point(162, 315);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(315, 1);
			this->panel1->TabIndex = 3;
			// 
			// panel2
			// 
			this->panel2->Location = System::Drawing::Point(162, 420);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(315, 1);
			this->panel2->TabIndex = 4;
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::Color::Black;
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.8F));
			this->textBox1->ForeColor = System::Drawing::Color::White;
			this->textBox1->Location = System::Drawing::Point(162, 287);
			this->textBox1->Margin = System::Windows::Forms::Padding(0);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(315, 25);
			this->textBox1->TabIndex = 5;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::Color::Black;
			this->textBox2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.8F));
			this->textBox2->ForeColor = System::Drawing::Color::White;
			this->textBox2->Location = System::Drawing::Point(162, 392);
			this->textBox2->Margin = System::Windows::Forms::Padding(0);
			this->textBox2->Name = L"textBox2";
			this->textBox2->PasswordChar = '*';
			this->textBox2->Size = System::Drawing::Size(315, 25);
			this->textBox2->TabIndex = 6;
			this->textBox2->UseSystemPasswordChar = true;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox2_TextChanged);
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->BackColor = System::Drawing::Color::Black;
			this->checkBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.8F));
			this->checkBox1->ForeColor = System::Drawing::Color::White;
			this->checkBox1->Location = System::Drawing::Point(162, 459);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(109, 22);
			this->checkBox1->TabIndex = 7;
			this->checkBox1->Text = L"I agree to all\r\n";
			this->checkBox1->UseVisualStyleBackColor = false;
			this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox1_CheckedChanged);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Black;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.8F));
			this->label4->ForeColor = System::Drawing::Color::Red;
			this->label4->Location = System::Drawing::Point(265, 460);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(146, 18);
			this->label4->TabIndex = 8;
			this->label4->Text = L"terms and conditions";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Red;
			this->button1->Enabled = false;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::Transparent;
			this->button1->Location = System::Drawing::Point(162, 515);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(119, 48);
			this->button1->TabIndex = 9;
			this->button1->Text = L"Sign in";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click_1);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Black;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::Color::Transparent;
			this->button2->Location = System::Drawing::Point(303, 515);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(119, 48);
			this->button2->TabIndex = 10;
			this->button2->Text = L"Exit";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// switchtosignup
			// 
			this->switchtosignup->AutoSize = true;
			this->switchtosignup->BackColor = System::Drawing::Color::Black;
			this->switchtosignup->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F));
			this->switchtosignup->Location = System::Drawing::Point(347, 586);
			this->switchtosignup->Name = L"switchtosignup";
			this->switchtosignup->Size = System::Drawing::Size(86, 22);
			this->switchtosignup->TabIndex = 11;
			this->switchtosignup->TabStop = true;
			this->switchtosignup->Text = L"click here";
			this->switchtosignup->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &MyForm::switchtosignup_LinkClicked);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Black;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F));
			this->label5->ForeColor = System::Drawing::Color::White;
			this->label5->Location = System::Drawing::Point(253, 586);
			this->label5->Margin = System::Windows::Forms::Padding(0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(96, 22);
			this->label5->TabIndex = 12;
			this->label5->Text = L"New user\?";
			// 
			// MyForm
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1080, 720);
			this->ControlBox = false;
			this->Controls->Add(this->label5);
			this->Controls->Add(this->switchtosignup);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label1_Click_1(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	public: User^ user=nullptr;
	private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e) {
		String^ email = this->textBox1->Text;
		String^ password = this->textBox2->Text;
		if (email->Length==0||password->Length==0)
		{
			MessageBox::Show("Fill all Fields", "Enter username and Password", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}
		try
		{
    		String^ connString = "Data Source=KESHAV-PC\\SQLEXPRESS;Initial Catalog=accounts;Integrated Security=True;TrustServerCertificate=True";

			SqlConnection sqlconn(connString);
			sqlconn.Open();

			String^ sqlquery = "SELECT * FROM users	WHERE email=@email AND password = @pwd;";
			SqlCommand command (sqlquery, % sqlconn);
			command.Parameters->AddWithValue("@email", this->textBox1->Text);
			command.Parameters->AddWithValue("@pwd", this->textBox2->Text);
			SqlDataReader^ reader = command.ExecuteReader();
			if (reader->Read())
			{
				user = gcnew User;
				user->id = reader->GetInt32(0);
				user->username = reader->GetString(1);
				user->email = reader->GetString(2);
				user->password = reader->GetString(3);
				user->phone = reader->GetString(4);
				this->Close();
			}
			else
			{
				MessageBox::Show("Email and password incorrect", "Email and Password error", MessageBoxButtons::OK);
			}
			
		}
		catch (SqlException^ ex)
		{
			// Handle SQL Server-specific exceptions
			MessageBox::Show("SQL Server Error: " + ex->Message, "Database Error", MessageBoxButtons::OK);
		}

		
	}
	private: System::Void checkBox1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		if (checkBox1->Checked)
		{
			button1->Enabled = true;
		}
		else
		{
			button1->Enabled = false;
		}
	}

	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		Application::Exit();

	}
	private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
public: bool switchtosignupbool=false;
private: System::Void switchtosignup_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
	switchtosignupbool = true;
	this->Close();
}
};
}

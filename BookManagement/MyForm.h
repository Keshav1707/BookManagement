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


	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;


	private: System::Windows::Forms::Button^ button1;




	private: System::Windows::Forms::Panel^ emailpnl;
	private: System::Windows::Forms::Panel^ pwdpnl;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ switchtosignup;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
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
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->emailpnl = (gcnew System::Windows::Forms::Panel());
			this->pwdpnl = (gcnew System::Windows::Forms::Panel());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->switchtosignup = (gcnew System::Windows::Forms::Button());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->emailpnl->SuspendLayout();
			this->pwdpnl->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(338, 134);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(264, 38);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Here you can Login";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click_1);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label2->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12, System::Drawing::FontStyle::Bold));
			this->label2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(94)), static_cast<System::Int32>(static_cast<System::Byte>(123)),
				static_cast<System::Int32>(static_cast<System::Byte>(170)));
			this->label2->Location = System::Drawing::Point(340, 235);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(60, 28);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Email";
			this->label2->Click += gcnew System::EventHandler(this, &MyForm::label2_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label3->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12, System::Drawing::FontStyle::Bold));
			this->label3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(94)), static_cast<System::Int32>(static_cast<System::Byte>(123)),
				static_cast<System::Int32>(static_cast<System::Byte>(170)));
			this->label3->Location = System::Drawing::Point(340, 333);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(97, 28);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Password\r\n";
			this->label3->Click += gcnew System::EventHandler(this, &MyForm::label3_Click);
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(27)), static_cast<System::Int32>(static_cast<System::Byte>(41)),
				static_cast<System::Int32>(static_cast<System::Byte>(86)));
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->ForeColor = System::Drawing::Color::White;
			this->textBox1->Location = System::Drawing::Point(10, 11);
			this->textBox1->Margin = System::Windows::Forms::Padding(0);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(323, 23);
			this->textBox1->TabIndex = 5;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(27)), static_cast<System::Int32>(static_cast<System::Byte>(41)),
				static_cast<System::Int32>(static_cast<System::Byte>(86)));
			this->textBox2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox2->ForeColor = System::Drawing::Color::White;
			this->textBox2->Location = System::Drawing::Point(19, 13);
			this->textBox2->Margin = System::Windows::Forms::Padding(0);
			this->textBox2->Name = L"textBox2";
			this->textBox2->PasswordChar = '*';
			this->textBox2->Size = System::Drawing::Size(314, 23);
			this->textBox2->TabIndex = 6;
			this->textBox2->UseSystemPasswordChar = true;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox2_TextChanged);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(100)), static_cast<System::Int32>(static_cast<System::Byte>(50)),
				static_cast<System::Int32>(static_cast<System::Byte>(235)));
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::Transparent;
			this->button1->Location = System::Drawing::Point(345, 454);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(352, 48);
			this->button1->TabIndex = 9;
			this->button1->Text = L"Sign in";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click_1);
			// 
			// emailpnl
			// 
			this->emailpnl->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(27)), static_cast<System::Int32>(static_cast<System::Byte>(41)),
				static_cast<System::Int32>(static_cast<System::Byte>(86)));
			this->emailpnl->Controls->Add(this->textBox1);
			this->emailpnl->Location = System::Drawing::Point(345, 276);
			this->emailpnl->Name = L"emailpnl";
			this->emailpnl->Size = System::Drawing::Size(352, 45);
			this->emailpnl->TabIndex = 13;
			// 
			// pwdpnl
			// 
			this->pwdpnl->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(27)), static_cast<System::Int32>(static_cast<System::Byte>(41)),
				static_cast<System::Int32>(static_cast<System::Byte>(86)));
			this->pwdpnl->Controls->Add(this->textBox2);
			this->pwdpnl->Location = System::Drawing::Point(345, 365);
			this->pwdpnl->Name = L"pwdpnl";
			this->pwdpnl->Size = System::Drawing::Size(352, 50);
			this->pwdpnl->TabIndex = 14;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(0, 581);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(1080, 150);
			this->pictureBox1->TabIndex = 15;
			this->pictureBox1->TabStop = false;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label4->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12, System::Drawing::FontStyle::Bold));
			this->label4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(94)), static_cast<System::Int32>(static_cast<System::Byte>(123)),
				static_cast<System::Int32>(static_cast<System::Byte>(170)));
			this->label4->Location = System::Drawing::Point(340, 172);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(283, 28);
			this->label4->TabIndex = 16;
			this->label4->Text = L"login using your credentials :)";
			// 
			// switchtosignup
			// 
			this->switchtosignup->BackColor = System::Drawing::Color::Transparent;
			this->switchtosignup->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->switchtosignup->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->switchtosignup->ForeColor = System::Drawing::Color::Transparent;
			this->switchtosignup->Location = System::Drawing::Point(920, 33);
			this->switchtosignup->Name = L"switchtosignup";
			this->switchtosignup->Size = System::Drawing::Size(130, 48);
			this->switchtosignup->TabIndex = 17;
			this->switchtosignup->Text = L"Sign up";
			this->switchtosignup->UseVisualStyleBackColor = false;
			this->switchtosignup->Click += gcnew System::EventHandler(this, &MyForm::switchtosignup_Click);
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(49, 33);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(64, 64);
			this->pictureBox2->TabIndex = 18;
			this->pictureBox2->TabStop = false;
			this->pictureBox2->Click += gcnew System::EventHandler(this, &MyForm::pictureBox2_Click);
			// 
			// MyForm
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(10)), static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(74)));
			this->ClientSize = System::Drawing::Size(1078, 720);
			this->ControlBox = false;
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->switchtosignup);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->pwdpnl);
			this->Controls->Add(this->emailpnl);
			this->Controls->Add(this->button1);
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
			this->emailpnl->ResumeLayout(false);
			this->emailpnl->PerformLayout();
			this->pwdpnl->ResumeLayout(false);
			this->pwdpnl->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
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
	

	
	private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
public: bool switchtosignupbool=false;

private: System::Void switchtosignup_Click(System::Object^ sender, System::EventArgs^ e) {
	switchtosignupbool = true;
	this->Close();
}
private: System::Void pictureBox2_Click(System::Object^ sender, System::EventArgs^ e) {
	Application::Exit();
}
};
}

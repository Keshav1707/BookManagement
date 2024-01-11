#pragma once
#include "MyForm.h"
#include "user.h"
namespace BookManagement {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;

	/// <summary>
	/// Summary for signup
	/// </summary>
	public ref class Signup : public System::Windows::Forms::Form
	{
	public:
		Signup(void)
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
		~Signup()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;




	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;






	private: System::Windows::Forms::Button^ submitbtn;

	private: System::Windows::Forms::TextBox^ emailbox;
	private: System::Windows::Forms::TextBox^ phonebox;



	private: System::Windows::Forms::TextBox^ cnfpasswordbox;

	private: System::Windows::Forms::TextBox^ passwordbox;

	private: System::Windows::Forms::TextBox^ usernamebox;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::LinkLabel^ switchtologin;



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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Signup::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->submitbtn = (gcnew System::Windows::Forms::Button());
			this->emailbox = (gcnew System::Windows::Forms::TextBox());
			this->phonebox = (gcnew System::Windows::Forms::TextBox());
			this->cnfpasswordbox = (gcnew System::Windows::Forms::TextBox());
			this->passwordbox = (gcnew System::Windows::Forms::TextBox());
			this->usernamebox = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->switchtologin = (gcnew System::Windows::Forms::LinkLabel());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 31.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(189, 78);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(220, 71);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Sign Up";
			this->label1->Click += gcnew System::EventHandler(this, &Signup::label1_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::White;
			this->label6->Location = System::Drawing::Point(167, 240);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(71, 28);
			this->label6->TabIndex = 5;
			this->label6->Text = L"Email :";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(156, 480);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(82, 28);
			this->label2->TabIndex = 6;
			this->label2->Text = L"Phone :";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::White;
			this->label3->Location = System::Drawing::Point(51, 420);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(187, 28);
			this->label3->TabIndex = 7;
			this->label3->Text = L"Confirm Password :";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::White;
			this->label4->Location = System::Drawing::Point(130, 360);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(108, 28);
			this->label4->TabIndex = 8;
			this->label4->Text = L"Password :";
			this->label4->Click += gcnew System::EventHandler(this, &Signup::label4_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::White;
			this->label5->Location = System::Drawing::Point(123, 300);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(115, 28);
			this->label5->TabIndex = 9;
			this->label5->Text = L"Username :";
			this->label5->Click += gcnew System::EventHandler(this, &Signup::label5_Click);
			// 
			// submitbtn
			// 
			this->submitbtn->BackColor = System::Drawing::Color::Red;
			this->submitbtn->Cursor = System::Windows::Forms::Cursors::Hand;
			this->submitbtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->submitbtn->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->submitbtn->ForeColor = System::Drawing::Color::White;
			this->submitbtn->Location = System::Drawing::Point(246, 559);
			this->submitbtn->Name = L"submitbtn";
			this->submitbtn->Size = System::Drawing::Size(146, 51);
			this->submitbtn->TabIndex = 16;
			this->submitbtn->Text = L"Submit";
			this->submitbtn->UseVisualStyleBackColor = false;
			this->submitbtn->Click += gcnew System::EventHandler(this, &Signup::submitbtn_Click);
			// 
			// emailbox
			// 
			this->emailbox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.8F));
			this->emailbox->Location = System::Drawing::Point(245, 244);
			this->emailbox->Name = L"emailbox";
			this->emailbox->Size = System::Drawing::Size(268, 26);
			this->emailbox->TabIndex = 17;
			this->emailbox->TextChanged += gcnew System::EventHandler(this, &Signup::emailbox_TextChanged);
			// 
			// phonebox
			// 
			this->phonebox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.8F));
			this->phonebox->Location = System::Drawing::Point(246, 478);
			this->phonebox->Name = L"phonebox";
			this->phonebox->Size = System::Drawing::Size(267, 26);
			this->phonebox->TabIndex = 19;
			// 
			// cnfpasswordbox
			// 
			this->cnfpasswordbox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.8F));
			this->cnfpasswordbox->Location = System::Drawing::Point(246, 423);
			this->cnfpasswordbox->Name = L"cnfpasswordbox";
			this->cnfpasswordbox->Size = System::Drawing::Size(267, 26);
			this->cnfpasswordbox->TabIndex = 20;
			// 
			// passwordbox
			// 
			this->passwordbox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.8F));
			this->passwordbox->Location = System::Drawing::Point(246, 363);
			this->passwordbox->Name = L"passwordbox";
			this->passwordbox->Size = System::Drawing::Size(267, 26);
			this->passwordbox->TabIndex = 21;
			// 
			// usernamebox
			// 
			this->usernamebox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.8F));
			this->usernamebox->Location = System::Drawing::Point(246, 304);
			this->usernamebox->Name = L"usernamebox";
			this->usernamebox->Size = System::Drawing::Size(267, 26);
			this->usernamebox->TabIndex = 22;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F));
			this->label7->ForeColor = System::Drawing::Color::White;
			this->label7->Location = System::Drawing::Point(243, 633);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(166, 22);
			this->label7->TabIndex = 23;
			this->label7->Text = L"Already registered\?";
			// 
			// switchtologin
			// 
			this->switchtologin->AutoSize = true;
			this->switchtologin->Cursor = System::Windows::Forms::Cursors::Hand;
			this->switchtologin->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F));
			this->switchtologin->LinkBehavior = System::Windows::Forms::LinkBehavior::HoverUnderline;
			this->switchtologin->Location = System::Drawing::Point(405, 633);
			this->switchtologin->Name = L"switchtologin";
			this->switchtologin->Size = System::Drawing::Size(95, 22);
			this->switchtologin->TabIndex = 24;
			this->switchtologin->TabStop = true;
			this->switchtologin->Text = L"Login here";
			this->switchtologin->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &Signup::switchtologin_LinkClicked);
			// 
			// Signup
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->BackColor = System::Drawing::Color::Black;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1080, 720);
			this->ControlBox = false;
			this->Controls->Add(this->switchtologin);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->usernamebox);
			this->Controls->Add(this->passwordbox);
			this->Controls->Add(this->cnfpasswordbox);
			this->Controls->Add(this->phonebox);
			this->Controls->Add(this->emailbox);
			this->Controls->Add(this->submitbtn);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"Signup";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"signup";
			this->Load += gcnew System::EventHandler(this, &Signup::signup_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void signup_Load(System::Object^ sender, System::EventArgs^ e) {
}
public: User^ user = nullptr;
private: System::Void submitbtn_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ email = this->emailbox->Text;
	String^ username = this->usernamebox->Text;
	String^ password = this->passwordbox->Text;
	String^ cnfpassword = this->cnfpasswordbox->Text;
	String^ phone= this->phonebox->Text;
	if (email->Length == 0 || password->Length == 0 || username->Length == 0 || cnfpassword->Length == 0 || phone->Length == 0)
	{
		MessageBox::Show("Fill all Fields", "Please enter all the required fields", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return;
	}
	try
	{
		String^ conn = "Data Source=KESHAV-PC\\SQLEXPRESS;Initial Catalog=accounts;Integrated Security=True;TrustServerCertificate=True";
		SqlConnection sqlconn(conn);
		sqlconn.Open();

		// Check if the email already exists
		String^ checkEmailQuery = "SELECT COUNT(*) FROM users WHERE email=@email;";
		SqlCommand checkEmailCommand(checkEmailQuery, % sqlconn);
		checkEmailCommand.Parameters->AddWithValue("@email", email);

		int emailCount = safe_cast<int>(checkEmailCommand.ExecuteScalar());

		// Check if the username already exists
		String^ checkUsernameQuery = "SELECT COUNT(*) FROM users WHERE username=@username;";
		SqlCommand checkUsernameCommand(checkUsernameQuery, % sqlconn);
		checkUsernameCommand.Parameters->AddWithValue("@username",username);

		int usernameCount = safe_cast<int>(checkUsernameCommand.ExecuteScalar());

		if (emailCount > 0)
		{
			// Email already exists, display an error message
			MessageBox::Show("Email already exists. Please choose a different email.", "Duplicate Email", MessageBoxButtons::OK);
		}
		else if (usernameCount > 0)
		{
			// Username already exists, display an error message
			MessageBox::Show("Username already exists. Please choose a different username.", "Duplicate Username", MessageBoxButtons::OK);
		}
		else
		{
			// Email and username don't exist, proceed with the record insertion

			// Check if the password matches the confirm password
			if (password != cnfpassword)
			{
				MessageBox::Show("Password and Confirm Password do not match.", "Password Mismatch", MessageBoxButtons::OK);
				return;
			}

			String^ insertQuery = "INSERT INTO users ( email, username,password, phone) VALUES ( @email,@username, @password, @phone);";
			SqlCommand insertCommand(insertQuery, % sqlconn);

			// Parameters for the INSERT query
			insertCommand.Parameters->AddWithValue("@username", username);
			insertCommand.Parameters->AddWithValue("@email", email);
			insertCommand.Parameters->AddWithValue("@password", password);  
			insertCommand.Parameters->AddWithValue("@phone", phone);

			// Execute the INSERT query
			int rowsAffected = insertCommand.ExecuteNonQuery();

			if (rowsAffected > 0)
			{
				// Record inserted successfully
				MessageBox::Show("Record added successfully.", "Success", MessageBoxButtons::OK);
				user = gcnew User;
				user->email = email;
				user->username = username;
				user->password = password;
				user->phone = phone;
				this->Close();

			}
			else
			{
				// Failed to insert record
				MessageBox::Show("Failed to add record. Please try again.", "Insert Error", MessageBoxButtons::OK);
			}
		}
	}
	catch (Exception^ e)
	{
		// Display an error message if the connection fails
		MessageBox::Show("Failed to connect to the database", "Database Connection Error", MessageBoxButtons::OK);
	}

}
private: System::Void emailbox_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
	   public:bool switchtologinbool = false;
private: System::Void switchtologin_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
	switchtologinbool = true;
	this->Close();
}
private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}

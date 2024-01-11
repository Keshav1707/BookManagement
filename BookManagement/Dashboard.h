#pragma once
#include "user.h"
#include "Dashboard.cpp"

namespace BookManagement {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Dashboard
	/// </summary>
	public ref class Dashboard : public System::Windows::Forms::Form
	{
	public:
		Dashboard(User^ user)
		{
			InitializeComponent();
			SetWelcomeMessage(user);
			
			//
			//TODO: Add the constructor code here
			//

		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Dashboard()
		{
			if (components)
			{
				delete components;
			}
		}
	private: 

		System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ emailshow;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Panel^ Viewpnl;



	private: System::Windows::Forms::Label^ Viewlbl;
	private: System::Windows::Forms::Panel^ removepnl;

	private: System::Windows::Forms::Label^ removelbl;
	private: System::Windows::Forms::Panel^ addpnl;


	private: System::Windows::Forms::Label^ addlbl;
	private: System::Windows::Forms::PictureBox^ viewpng;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::Panel^ Mainpnl;
	private: System::Windows::Forms::Panel^ panel3;





		   System::Windows::Forms::Label^ label1;


			void SetWelcomeMessage(User^ user)
			{
			   label1->Text = "Welcome, " + user->username;
			   emailshow->Text = user->email;
			   
			}
		


	protected:

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
		
		void InitializeComponent()
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Dashboard::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->removepnl = (gcnew System::Windows::Forms::Panel());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->removelbl = (gcnew System::Windows::Forms::Label());
			this->addpnl = (gcnew System::Windows::Forms::Panel());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->addlbl = (gcnew System::Windows::Forms::Label());
			this->Viewpnl = (gcnew System::Windows::Forms::Panel());
			this->viewpng = (gcnew System::Windows::Forms::PictureBox());
			this->Viewlbl = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->emailshow = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->Mainpnl = (gcnew System::Windows::Forms::Panel());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			this->removepnl->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->addpnl->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->Viewpnl->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->viewpng))->BeginInit();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(46)), static_cast<System::Int32>(static_cast<System::Byte>(61)),
				static_cast<System::Int32>(static_cast<System::Byte>(96)));
			this->panel1->Controls->Add(this->panel3);
			this->panel1->Controls->Add(this->pictureBox3);
			this->panel1->Controls->Add(this->removepnl);
			this->panel1->Controls->Add(this->addpnl);
			this->panel1->Controls->Add(this->Viewpnl);
			this->panel1->Controls->Add(this->panel2);
			this->panel1->Controls->Add(this->emailshow);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(320, 720);
			this->panel1->TabIndex = 1;
			// 
			// pictureBox3
			// 
			this->pictureBox3->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(47, 12);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(162, 137);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->pictureBox3->TabIndex = 5;
			this->pictureBox3->TabStop = false;
			// 
			// removepnl
			// 
			this->removepnl->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(46)), static_cast<System::Int32>(static_cast<System::Byte>(61)),
				static_cast<System::Int32>(static_cast<System::Byte>(96)));
			this->removepnl->Controls->Add(this->pictureBox2);
			this->removepnl->Controls->Add(this->removelbl);
			this->removepnl->Location = System::Drawing::Point(19, 335);
			this->removepnl->Name = L"removepnl";
			this->removepnl->Size = System::Drawing::Size(277, 34);
			this->removepnl->TabIndex = 4;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(8, 1);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(32, 32);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->pictureBox2->TabIndex = 3;
			this->pictureBox2->TabStop = false;
			// 
			// removelbl
			// 
			this->removelbl->AutoSize = true;
			this->removelbl->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->removelbl->Location = System::Drawing::Point(53, 6);
			this->removelbl->Name = L"removelbl";
			this->removelbl->Size = System::Drawing::Size(78, 23);
			this->removelbl->TabIndex = 0;
			this->removelbl->Text = L"Remove ";
			// 
			// addpnl
			// 
			this->addpnl->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(46)), static_cast<System::Int32>(static_cast<System::Byte>(61)),
				static_cast<System::Int32>(static_cast<System::Byte>(96)));
			this->addpnl->Controls->Add(this->pictureBox1);
			this->addpnl->Controls->Add(this->addlbl);
			this->addpnl->Location = System::Drawing::Point(19, 284);
			this->addpnl->Name = L"addpnl";
			this->addpnl->Size = System::Drawing::Size(277, 34);
			this->addpnl->TabIndex = 4;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(8, 0);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(34, 34);
			this->pictureBox1->TabIndex = 2;
			this->pictureBox1->TabStop = false;
			// 
			// addlbl
			// 
			this->addlbl->AutoSize = true;
			this->addlbl->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->addlbl->Location = System::Drawing::Point(53, 6);
			this->addlbl->Name = L"addlbl";
			this->addlbl->Size = System::Drawing::Size(41, 23);
			this->addlbl->TabIndex = 0;
			this->addlbl->Text = L"Add";
			// 
			// Viewpnl
			// 
			this->Viewpnl->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(46)), static_cast<System::Int32>(static_cast<System::Byte>(61)),
				static_cast<System::Int32>(static_cast<System::Byte>(96)));
			this->Viewpnl->Controls->Add(this->viewpng);
			this->Viewpnl->Controls->Add(this->Viewlbl);
			this->Viewpnl->Location = System::Drawing::Point(19, 232);
			this->Viewpnl->Name = L"Viewpnl";
			this->Viewpnl->Size = System::Drawing::Size(277, 34);
			this->Viewpnl->TabIndex = 3;
			this->Viewpnl->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Dashboard::View_Paint);
			this->Viewpnl->MouseEnter += gcnew System::EventHandler(this, &Dashboard::View_MouseEnter);
			this->Viewpnl->MouseLeave += gcnew System::EventHandler(this, &Dashboard::View_MouseLeave);
			// 
			// viewpng
			// 
			this->viewpng->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->viewpng->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"viewpng.Image")));
			this->viewpng->Location = System::Drawing::Point(8, 0);
			this->viewpng->Name = L"viewpng";
			this->viewpng->Size = System::Drawing::Size(34, 34);
			this->viewpng->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->viewpng->TabIndex = 1;
			this->viewpng->TabStop = false;
			// 
			// Viewlbl
			// 
			this->Viewlbl->AutoSize = true;
			this->Viewlbl->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Viewlbl->Location = System::Drawing::Point(53, 6);
			this->Viewlbl->Name = L"Viewlbl";
			this->Viewlbl->Size = System::Drawing::Size(52, 23);
			this->Viewlbl->TabIndex = 0;
			this->Viewlbl->Text = L"View ";
			this->Viewlbl->Click += gcnew System::EventHandler(this, &Dashboard::label2_Click);
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::White;
			this->panel2->Location = System::Drawing::Point(19, 212);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(200, 1);
			this->panel2->TabIndex = 2;
			// 
			// emailshow
			// 
			this->emailshow->AutoSize = true;
			this->emailshow->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic))));
			this->emailshow->Location = System::Drawing::Point(23, 186);
			this->emailshow->Name = L"emailshow";
			this->emailshow->Size = System::Drawing::Size(54, 23);
			this->emailshow->TabIndex = 1;
			this->emailshow->Text = L"email";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(22, 158);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(91, 28);
			this->label1->TabIndex = 0;
			this->label1->Text = L"welcome";
			// 
			// Mainpnl
			// 
			this->Mainpnl->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(39)),
				static_cast<System::Int32>(static_cast<System::Byte>(68)));
			this->Mainpnl->Location = System::Drawing::Point(320, 0);
			this->Mainpnl->Name = L"Mainpnl";
			this->Mainpnl->Size = System::Drawing::Size(760, 720);
			this->Mainpnl->TabIndex = 2;
			this->Mainpnl->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Dashboard::Mainpnl_Paint);
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::White;
			this->panel3->Location = System::Drawing::Point(19, 609);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(200, 1);
			this->panel3->TabIndex = 0;
			// 
			// Dashboard
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->BackColor = System::Drawing::Color::Black;
			this->ClientSize = System::Drawing::Size(1080, 720);
			this->Controls->Add(this->Mainpnl);
			this->Controls->Add(this->panel1);
			this->ForeColor = System::Drawing::Color::White;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"Dashboard";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Dashboard";
			this->Load += gcnew System::EventHandler(this, &Dashboard::Dashboard_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			this->removepnl->ResumeLayout(false);
			this->removepnl->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->addpnl->ResumeLayout(false);
			this->addpnl->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->Viewpnl->ResumeLayout(false);
			this->Viewpnl->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->viewpng))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void Dashboard_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void wlcmlbl_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void View_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
		Viewpnl->BackColor = System::Drawing::Color::Black;
	}

private: System::Void View_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void View_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
	Viewpnl->BackColor = System::Drawing::Color::FromArgb(64,64,64);
}
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void Mainpnl_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
};
}

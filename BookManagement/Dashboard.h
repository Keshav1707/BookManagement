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
		System::Windows::Forms::Label^ wlcmlbl;
		System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ emailshow;

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
			this->wlcmlbl = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->emailshow = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// wlcmlbl
			// 
			this->wlcmlbl->AutoSize = true;
			this->wlcmlbl->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 31.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->wlcmlbl->Location = System::Drawing::Point(386, 44);
			this->wlcmlbl->Name = L"wlcmlbl";
			this->wlcmlbl->Size = System::Drawing::Size(608, 71);
			this->wlcmlbl->TabIndex = 0;
			this->wlcmlbl->Text = L"Bookshop Management";
			this->wlcmlbl->Click += gcnew System::EventHandler(this, &Dashboard::wlcmlbl_Click);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->panel1->Controls->Add(this->emailshow);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Location = System::Drawing::Point(-3, 1);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(305, 720);
			this->panel1->TabIndex = 1;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(15, 109);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(91, 28);
			this->label1->TabIndex = 0;
			this->label1->Text = L"welcome";
			// 
			// emailshow
			// 
			this->emailshow->AutoSize = true;
			this->emailshow->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic))));
			this->emailshow->Location = System::Drawing::Point(15, 152);
			this->emailshow->Name = L"emailshow";
			this->emailshow->Size = System::Drawing::Size(54, 23);
			this->emailshow->TabIndex = 1;
			this->emailshow->Text = L"email";
			// 
			// Dashboard
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Black;
			this->ClientSize = System::Drawing::Size(1080, 720);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->wlcmlbl);
			this->ForeColor = System::Drawing::Color::White;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"Dashboard";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Dashboard";
			this->Load += gcnew System::EventHandler(this, &Dashboard::Dashboard_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Dashboard_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void wlcmlbl_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	};
}

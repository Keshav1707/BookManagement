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
	using namespace System::Data::SqlClient;

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
			LoadDataFromSqlServer();
			datapnl->Hide();
			searchpnl->Hide();
			addmainpnl->Hide();
			//salesmainpnl->Hide();
			dataGridView1->RowPrePaint += gcnew System::Windows::Forms::DataGridViewRowPrePaintEventHandler(this, &Dashboard::dataGridView1_RowPrePaint);

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



	private: System::Windows::Forms::Panel^ addpnl;


	private: System::Windows::Forms::Label^ addlbl;
	private: System::Windows::Forms::PictureBox^ viewpng;

	private: System::Windows::Forms::PictureBox^ addpng;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::Panel^ Mainpnl;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Panel^ datapnl;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Panel^ searchpnl;
	private: System::Windows::Forms::TextBox^ Searchbox;
	private: System::Windows::Forms::ComboBox^ Searchbydropbox;
	private: System::Windows::Forms::Button^ searchbtn;
	public:DataTable^ dataTable = gcnew DataTable();
	private: System::Windows::Forms::Panel^ searchsidepnl;
	private: System::Windows::Forms::PictureBox^ searchpng;
	private: System::Windows::Forms::Label^ searchsidebox;
	private: System::Windows::Forms::Panel^ logoutpnl;
	private: System::Windows::Forms::PictureBox^ logoutpng;
	private: System::Windows::Forms::Label^ signoutlbl;
	private: System::Windows::Forms::Label^ toplbl;
	private: System::Windows::Forms::Panel^ addmainpnl;









	private: System::Windows::Forms::TextBox^ addtitle;
	private: System::Windows::Forms::TextBox^ addauthor;
	private: System::Windows::Forms::TextBox^ addgenre;
	private: System::Windows::Forms::TextBox^ addpublisher;
	private: System::Windows::Forms::TextBox^ addprice;
	private: System::Windows::Forms::TextBox^ addqty;
	private: System::Windows::Forms::Label^ authorlbl;
	private: System::Windows::Forms::Label^ genrelbl;
	private: System::Windows::Forms::Label^ pricelbl;
	private: System::Windows::Forms::Label^ publisherlbl;
	private: System::Windows::Forms::Label^ qtylbl;
	private: System::Windows::Forms::Label^ titlelbl;
	private: System::Windows::Forms::Button^ addbtn;
	private: System::Windows::Forms::Panel^ salessidepnl;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ saleslbl;















		   System::Windows::Forms::Label^ label1;


			void SetWelcomeMessage(User^ user)
			{
			   label1->Text = "Welcome, " + user->username;
			   emailshow->Text = user->email;
			   
			}
		
			void LoadDataFromSqlServer()
			{
				try
				{
					String^ connectionString = "Data Source=KESHAV-PC\\SQLEXPRESS;Initial Catalog=accounts;Integrated Security=True;TrustServerCertificate=True";

					SqlConnection^ connection = gcnew SqlConnection(connectionString);

					String^ query = "SELECT * FROM Books";
					SqlCommand^ command = gcnew SqlCommand(query, connection);
					
					connection->Open();
					SqlDataReader^ reader = command->ExecuteReader();

					dataTable->Load(reader);

					dataGridView1->DataSource = dataTable;
				}
				catch (Exception^ ex)
				{
					MessageBox::Show("Error: " + ex->Message + "\n" + ex->StackTrace, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				}

				
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
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->salessidepnl = (gcnew System::Windows::Forms::Panel());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->saleslbl = (gcnew System::Windows::Forms::Label());
			this->logoutpnl = (gcnew System::Windows::Forms::Panel());
			this->signoutlbl = (gcnew System::Windows::Forms::Label());
			this->logoutpng = (gcnew System::Windows::Forms::PictureBox());
			this->searchsidepnl = (gcnew System::Windows::Forms::Panel());
			this->searchpng = (gcnew System::Windows::Forms::PictureBox());
			this->searchsidebox = (gcnew System::Windows::Forms::Label());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->addpnl = (gcnew System::Windows::Forms::Panel());
			this->addpng = (gcnew System::Windows::Forms::PictureBox());
			this->addlbl = (gcnew System::Windows::Forms::Label());
			this->Viewpnl = (gcnew System::Windows::Forms::Panel());
			this->viewpng = (gcnew System::Windows::Forms::PictureBox());
			this->Viewlbl = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->emailshow = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->Mainpnl = (gcnew System::Windows::Forms::Panel());
			this->addmainpnl = (gcnew System::Windows::Forms::Panel());
			this->addbtn = (gcnew System::Windows::Forms::Button());
			this->authorlbl = (gcnew System::Windows::Forms::Label());
			this->genrelbl = (gcnew System::Windows::Forms::Label());
			this->pricelbl = (gcnew System::Windows::Forms::Label());
			this->publisherlbl = (gcnew System::Windows::Forms::Label());
			this->qtylbl = (gcnew System::Windows::Forms::Label());
			this->titlelbl = (gcnew System::Windows::Forms::Label());
			this->addauthor = (gcnew System::Windows::Forms::TextBox());
			this->addgenre = (gcnew System::Windows::Forms::TextBox());
			this->addpublisher = (gcnew System::Windows::Forms::TextBox());
			this->addprice = (gcnew System::Windows::Forms::TextBox());
			this->addqty = (gcnew System::Windows::Forms::TextBox());
			this->addtitle = (gcnew System::Windows::Forms::TextBox());
			this->toplbl = (gcnew System::Windows::Forms::Label());
			this->searchpnl = (gcnew System::Windows::Forms::Panel());
			this->searchbtn = (gcnew System::Windows::Forms::Button());
			this->Searchbox = (gcnew System::Windows::Forms::TextBox());
			this->Searchbydropbox = (gcnew System::Windows::Forms::ComboBox());
			this->datapnl = (gcnew System::Windows::Forms::Panel());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->panel1->SuspendLayout();
			this->salessidepnl->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->logoutpnl->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->logoutpng))->BeginInit();
			this->searchsidepnl->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->searchpng))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			this->addpnl->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->addpng))->BeginInit();
			this->Viewpnl->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->viewpng))->BeginInit();
			this->Mainpnl->SuspendLayout();
			this->addmainpnl->SuspendLayout();
			this->searchpnl->SuspendLayout();
			this->datapnl->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(46)), static_cast<System::Int32>(static_cast<System::Byte>(61)),
				static_cast<System::Int32>(static_cast<System::Byte>(96)));
			this->panel1->Controls->Add(this->salessidepnl);
			this->panel1->Controls->Add(this->logoutpnl);
			this->panel1->Controls->Add(this->searchsidepnl);
			this->panel1->Controls->Add(this->panel3);
			this->panel1->Controls->Add(this->pictureBox3);
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
			// salessidepnl
			// 
			this->salessidepnl->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(46)), static_cast<System::Int32>(static_cast<System::Byte>(61)),
				static_cast<System::Int32>(static_cast<System::Byte>(96)));
			this->salessidepnl->Controls->Add(this->pictureBox1);
			this->salessidepnl->Controls->Add(this->saleslbl);
			this->salessidepnl->Location = System::Drawing::Point(19, 379);
			this->salessidepnl->Name = L"salessidepnl";
			this->salessidepnl->Size = System::Drawing::Size(277, 34);
			this->salessidepnl->TabIndex = 5;
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
			// saleslbl
			// 
			this->saleslbl->AutoSize = true;
			this->saleslbl->BackColor = System::Drawing::Color::Transparent;
			this->saleslbl->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->saleslbl->Location = System::Drawing::Point(53, 6);
			this->saleslbl->Name = L"saleslbl";
			this->saleslbl->Size = System::Drawing::Size(48, 23);
			this->saleslbl->TabIndex = 0;
			this->saleslbl->Text = L"Sales";
			// 
			// logoutpnl
			// 
			this->logoutpnl->Controls->Add(this->signoutlbl);
			this->logoutpnl->Controls->Add(this->logoutpng);
			this->logoutpnl->Location = System::Drawing::Point(19, 617);
			this->logoutpnl->Name = L"logoutpnl";
			this->logoutpnl->Size = System::Drawing::Size(277, 91);
			this->logoutpnl->TabIndex = 7;
			// 
			// signoutlbl
			// 
			this->signoutlbl->AutoSize = true;
			this->signoutlbl->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->signoutlbl->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10.8F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->signoutlbl->Location = System::Drawing::Point(2, 62);
			this->signoutlbl->Name = L"signoutlbl";
			this->signoutlbl->Size = System::Drawing::Size(184, 25);
			this->signoutlbl->TabIndex = 1;
			this->signoutlbl->Text = L"Click here to signout";
			// 
			// logoutpng
			// 
			this->logoutpng->Dock = System::Windows::Forms::DockStyle::Fill;
			this->logoutpng->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"logoutpng.Image")));
			this->logoutpng->Location = System::Drawing::Point(0, 0);
			this->logoutpng->Name = L"logoutpng";
			this->logoutpng->Size = System::Drawing::Size(277, 91);
			this->logoutpng->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->logoutpng->TabIndex = 0;
			this->logoutpng->TabStop = false;
			this->logoutpng->Click += gcnew System::EventHandler(this, &Dashboard::logoutpng_Click);
			this->logoutpng->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Dashboard::logoutpng_MouseClick);
			// 
			// searchsidepnl
			// 
			this->searchsidepnl->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(46)), static_cast<System::Int32>(static_cast<System::Byte>(61)),
				static_cast<System::Int32>(static_cast<System::Byte>(96)));
			this->searchsidepnl->Controls->Add(this->searchpng);
			this->searchsidepnl->Controls->Add(this->searchsidebox);
			this->searchsidepnl->Location = System::Drawing::Point(19, 299);
			this->searchsidepnl->Name = L"searchsidepnl";
			this->searchsidepnl->Size = System::Drawing::Size(277, 34);
			this->searchsidepnl->TabIndex = 6;
			this->searchsidepnl->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Dashboard::searchsidepnl_Paint);
			this->searchsidepnl->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Dashboard::searchsidepnl_MouseClick);
			this->searchsidepnl->MouseEnter += gcnew System::EventHandler(this, &Dashboard::searchsidepnl_MouseEnter);
			this->searchsidepnl->MouseLeave += gcnew System::EventHandler(this, &Dashboard::searchsidepnl_MouseLeave);
			// 
			// searchpng
			// 
			this->searchpng->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->searchpng->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"searchpng.Image")));
			this->searchpng->Location = System::Drawing::Point(8, 0);
			this->searchpng->Name = L"searchpng";
			this->searchpng->Size = System::Drawing::Size(34, 34);
			this->searchpng->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->searchpng->TabIndex = 2;
			this->searchpng->TabStop = false;
			// 
			// searchsidebox
			// 
			this->searchsidebox->AutoSize = true;
			this->searchsidebox->BackColor = System::Drawing::Color::Transparent;
			this->searchsidebox->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->searchsidebox->Location = System::Drawing::Point(53, 6);
			this->searchsidebox->Name = L"searchsidebox";
			this->searchsidebox->Size = System::Drawing::Size(61, 23);
			this->searchsidebox->TabIndex = 0;
			this->searchsidebox->Text = L"Search";
			this->searchsidebox->Click += gcnew System::EventHandler(this, &Dashboard::searchsidebox_Click);
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::White;
			this->panel3->Location = System::Drawing::Point(19, 609);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(200, 1);
			this->panel3->TabIndex = 0;
			// 
			// pictureBox3
			// 
			this->pictureBox3->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->pictureBox3->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(85, 12);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(137, 137);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->pictureBox3->TabIndex = 5;
			this->pictureBox3->TabStop = false;
			this->pictureBox3->Click += gcnew System::EventHandler(this, &Dashboard::pictureBox3_Click);
			// 
			// addpnl
			// 
			this->addpnl->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(46)), static_cast<System::Int32>(static_cast<System::Byte>(61)),
				static_cast<System::Int32>(static_cast<System::Byte>(96)));
			this->addpnl->Controls->Add(this->addpng);
			this->addpnl->Controls->Add(this->addlbl);
			this->addpnl->Location = System::Drawing::Point(19, 339);
			this->addpnl->Name = L"addpnl";
			this->addpnl->Size = System::Drawing::Size(277, 34);
			this->addpnl->TabIndex = 4;
			this->addpnl->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Dashboard::addpnl_MouseClick);
			this->addpnl->MouseEnter += gcnew System::EventHandler(this, &Dashboard::addpnl_MouseEnter);
			this->addpnl->MouseLeave += gcnew System::EventHandler(this, &Dashboard::addpnl_MouseLeave);
			// 
			// addpng
			// 
			this->addpng->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->addpng->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"addpng.Image")));
			this->addpng->Location = System::Drawing::Point(8, 0);
			this->addpng->Name = L"addpng";
			this->addpng->Size = System::Drawing::Size(34, 34);
			this->addpng->TabIndex = 2;
			this->addpng->TabStop = false;
			// 
			// addlbl
			// 
			this->addlbl->AutoSize = true;
			this->addlbl->BackColor = System::Drawing::Color::Transparent;
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
			this->Viewpnl->Location = System::Drawing::Point(19, 259);
			this->Viewpnl->Name = L"Viewpnl";
			this->Viewpnl->Size = System::Drawing::Size(277, 34);
			this->Viewpnl->TabIndex = 3;
			this->Viewpnl->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Dashboard::View_Paint);
			this->Viewpnl->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Dashboard::Viewpnl_MouseClick);
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
			this->Viewlbl->BackColor = System::Drawing::Color::Transparent;
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
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(22, 158);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(93, 28);
			this->label1->TabIndex = 0;
			this->label1->Text = L"welcome";
			// 
			// Mainpnl
			// 
			this->Mainpnl->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(39)),
				static_cast<System::Int32>(static_cast<System::Byte>(68)));
			this->Mainpnl->Controls->Add(this->addmainpnl);
			this->Mainpnl->Controls->Add(this->toplbl);
			this->Mainpnl->Controls->Add(this->searchpnl);
			this->Mainpnl->Controls->Add(this->datapnl);
			this->Mainpnl->Location = System::Drawing::Point(320, 0);
			this->Mainpnl->Name = L"Mainpnl";
			this->Mainpnl->Size = System::Drawing::Size(760, 720);
			this->Mainpnl->TabIndex = 2;
			this->Mainpnl->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Dashboard::Mainpnl_Paint);
			// 
			// addmainpnl
			// 
			this->addmainpnl->Controls->Add(this->addbtn);
			this->addmainpnl->Controls->Add(this->authorlbl);
			this->addmainpnl->Controls->Add(this->genrelbl);
			this->addmainpnl->Controls->Add(this->pricelbl);
			this->addmainpnl->Controls->Add(this->publisherlbl);
			this->addmainpnl->Controls->Add(this->qtylbl);
			this->addmainpnl->Controls->Add(this->titlelbl);
			this->addmainpnl->Controls->Add(this->addauthor);
			this->addmainpnl->Controls->Add(this->addgenre);
			this->addmainpnl->Controls->Add(this->addpublisher);
			this->addmainpnl->Controls->Add(this->addprice);
			this->addmainpnl->Controls->Add(this->addqty);
			this->addmainpnl->Controls->Add(this->addtitle);
			this->addmainpnl->Location = System::Drawing::Point(19, 108);
			this->addmainpnl->Name = L"addmainpnl";
			this->addmainpnl->Size = System::Drawing::Size(727, 600);
			this->addmainpnl->TabIndex = 1;
			// 
			// addbtn
			// 
			this->addbtn->BackColor = System::Drawing::Color::MediumPurple;
			this->addbtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->addbtn->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->addbtn->ForeColor = System::Drawing::Color::White;
			this->addbtn->Location = System::Drawing::Point(427, 383);
			this->addbtn->Name = L"addbtn";
			this->addbtn->Size = System::Drawing::Size(133, 48);
			this->addbtn->TabIndex = 12;
			this->addbtn->Text = L"ADD";
			this->addbtn->UseVisualStyleBackColor = false;
			this->addbtn->Click += gcnew System::EventHandler(this, &Dashboard::addbtn_Click);
			// 
			// authorlbl
			// 
			this->authorlbl->AutoSize = true;
			this->authorlbl->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->authorlbl->Location = System::Drawing::Point(386, 128);
			this->authorlbl->Name = L"authorlbl";
			this->authorlbl->Size = System::Drawing::Size(63, 23);
			this->authorlbl->TabIndex = 11;
			this->authorlbl->Text = L"Author";
			// 
			// genrelbl
			// 
			this->genrelbl->AutoSize = true;
			this->genrelbl->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->genrelbl->Location = System::Drawing::Point(113, 207);
			this->genrelbl->Name = L"genrelbl";
			this->genrelbl->Size = System::Drawing::Size(56, 23);
			this->genrelbl->TabIndex = 10;
			this->genrelbl->Text = L"Genre";
			this->genrelbl->Click += gcnew System::EventHandler(this, &Dashboard::genrelbl_Click);
			// 
			// pricelbl
			// 
			this->pricelbl->AutoSize = true;
			this->pricelbl->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->pricelbl->Location = System::Drawing::Point(113, 286);
			this->pricelbl->Name = L"pricelbl";
			this->pricelbl->Size = System::Drawing::Size(47, 23);
			this->pricelbl->TabIndex = 9;
			this->pricelbl->Text = L"Price";
			// 
			// publisherlbl
			// 
			this->publisherlbl->AutoSize = true;
			this->publisherlbl->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->publisherlbl->Location = System::Drawing::Point(386, 206);
			this->publisherlbl->Name = L"publisherlbl";
			this->publisherlbl->Size = System::Drawing::Size(80, 23);
			this->publisherlbl->TabIndex = 8;
			this->publisherlbl->Text = L"Publisher";
			// 
			// qtylbl
			// 
			this->qtylbl->AutoSize = true;
			this->qtylbl->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->qtylbl->Location = System::Drawing::Point(389, 282);
			this->qtylbl->Name = L"qtylbl";
			this->qtylbl->Size = System::Drawing::Size(77, 23);
			this->qtylbl->TabIndex = 7;
			this->qtylbl->Text = L"Quantity";
			// 
			// titlelbl
			// 
			this->titlelbl->AutoSize = true;
			this->titlelbl->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10, System::Drawing::FontStyle::Bold));
			this->titlelbl->Location = System::Drawing::Point(113, 127);
			this->titlelbl->Name = L"titlelbl";
			this->titlelbl->Size = System::Drawing::Size(42, 23);
			this->titlelbl->TabIndex = 6;
			this->titlelbl->Text = L"Title";
			this->titlelbl->Click += gcnew System::EventHandler(this, &Dashboard::titlelbl_Click);
			// 
			// addauthor
			// 
			this->addauthor->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(46)), static_cast<System::Int32>(static_cast<System::Byte>(61)),
				static_cast<System::Int32>(static_cast<System::Byte>(96)));
			this->addauthor->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->addauthor->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->addauthor->ForeColor = System::Drawing::Color::White;
			this->addauthor->Location = System::Drawing::Point(389, 151);
			this->addauthor->Name = L"addauthor";
			this->addauthor->Size = System::Drawing::Size(171, 27);
			this->addauthor->TabIndex = 5;
			// 
			// addgenre
			// 
			this->addgenre->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(46)), static_cast<System::Int32>(static_cast<System::Byte>(61)),
				static_cast<System::Int32>(static_cast<System::Byte>(96)));
			this->addgenre->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->addgenre->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->addgenre->ForeColor = System::Drawing::Color::White;
			this->addgenre->Location = System::Drawing::Point(113, 230);
			this->addgenre->Name = L"addgenre";
			this->addgenre->Size = System::Drawing::Size(171, 27);
			this->addgenre->TabIndex = 4;
			// 
			// addpublisher
			// 
			this->addpublisher->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(46)), static_cast<System::Int32>(static_cast<System::Byte>(61)),
				static_cast<System::Int32>(static_cast<System::Byte>(96)));
			this->addpublisher->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->addpublisher->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->addpublisher->ForeColor = System::Drawing::Color::White;
			this->addpublisher->Location = System::Drawing::Point(389, 230);
			this->addpublisher->Name = L"addpublisher";
			this->addpublisher->Size = System::Drawing::Size(171, 27);
			this->addpublisher->TabIndex = 3;
			// 
			// addprice
			// 
			this->addprice->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(46)), static_cast<System::Int32>(static_cast<System::Byte>(61)),
				static_cast<System::Int32>(static_cast<System::Byte>(96)));
			this->addprice->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->addprice->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->addprice->ForeColor = System::Drawing::Color::White;
			this->addprice->Location = System::Drawing::Point(113, 310);
			this->addprice->Name = L"addprice";
			this->addprice->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->addprice->Size = System::Drawing::Size(171, 27);
			this->addprice->TabIndex = 2;
			// 
			// addqty
			// 
			this->addqty->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(46)), static_cast<System::Int32>(static_cast<System::Byte>(61)),
				static_cast<System::Int32>(static_cast<System::Byte>(96)));
			this->addqty->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->addqty->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->addqty->ForeColor = System::Drawing::Color::White;
			this->addqty->Location = System::Drawing::Point(389, 310);
			this->addqty->Name = L"addqty";
			this->addqty->Size = System::Drawing::Size(171, 27);
			this->addqty->TabIndex = 1;
			// 
			// addtitle
			// 
			this->addtitle->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(46)), static_cast<System::Int32>(static_cast<System::Byte>(61)),
				static_cast<System::Int32>(static_cast<System::Byte>(96)));
			this->addtitle->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->addtitle->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->addtitle->ForeColor = System::Drawing::Color::White;
			this->addtitle->Location = System::Drawing::Point(113, 150);
			this->addtitle->Name = L"addtitle";
			this->addtitle->Size = System::Drawing::Size(171, 27);
			this->addtitle->TabIndex = 0;
			// 
			// toplbl
			// 
			this->toplbl->AutoSize = true;
			this->toplbl->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 25.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->toplbl->Location = System::Drawing::Point(9, 27);
			this->toplbl->Name = L"toplbl";
			this->toplbl->Size = System::Drawing::Size(144, 59);
			this->toplbl->TabIndex = 2;
			this->toplbl->Text = L"Home";
			// 
			// searchpnl
			// 
			this->searchpnl->Controls->Add(this->searchbtn);
			this->searchpnl->Controls->Add(this->Searchbox);
			this->searchpnl->Controls->Add(this->Searchbydropbox);
			this->searchpnl->Location = System::Drawing::Point(19, 108);
			this->searchpnl->Name = L"searchpnl";
			this->searchpnl->Size = System::Drawing::Size(730, 59);
			this->searchpnl->TabIndex = 1;
			// 
			// searchbtn
			// 
			this->searchbtn->Anchor = System::Windows::Forms::AnchorStyles::Right;
			this->searchbtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(69)), static_cast<System::Int32>(static_cast<System::Byte>(173)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->searchbtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->searchbtn->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 8.2F, System::Drawing::FontStyle::Bold));
			this->searchbtn->Location = System::Drawing::Point(623, 28);
			this->searchbtn->MaximumSize = System::Drawing::Size(92, 31);
			this->searchbtn->Name = L"searchbtn";
			this->searchbtn->Size = System::Drawing::Size(92, 25);
			this->searchbtn->TabIndex = 2;
			this->searchbtn->Text = L"SEARCH";
			this->searchbtn->UseVisualStyleBackColor = false;
			this->searchbtn->Click += gcnew System::EventHandler(this, &Dashboard::searchbtn_Click);
			// 
			// Searchbox
			// 
			this->Searchbox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->Searchbox->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->Searchbox->Font = (gcnew System::Drawing::Font(L"Segoe UI", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Searchbox->Location = System::Drawing::Point(212, 28);
			this->Searchbox->Name = L"Searchbox";
			this->Searchbox->Size = System::Drawing::Size(411, 31);
			this->Searchbox->TabIndex = 1;
			this->Searchbox->TextChanged += gcnew System::EventHandler(this, &Dashboard::textBox1_TextChanged);
			// 
			// Searchbydropbox
			// 
			this->Searchbydropbox->BackColor = System::Drawing::SystemColors::HighlightText;
			this->Searchbydropbox->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Searchbydropbox->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10));
			this->Searchbydropbox->FormattingEnabled = true;
			this->Searchbydropbox->Items->AddRange(gcnew cli::array< System::Object^  >(5) { L"All", L"Title", L"Author", L"Genre", L"Publisher" });
			this->Searchbydropbox->Location = System::Drawing::Point(0, 28);
			this->Searchbydropbox->Margin = System::Windows::Forms::Padding(10);
			this->Searchbydropbox->Name = L"Searchbydropbox";
			this->Searchbydropbox->Size = System::Drawing::Size(211, 31);
			this->Searchbydropbox->TabIndex = 0;
			this->Searchbydropbox->Text = L"All";
			// 
			// datapnl
			// 
			this->datapnl->BackColor = System::Drawing::Color::Navy;
			this->datapnl->Controls->Add(this->dataGridView1);
			this->datapnl->Location = System::Drawing::Point(19, 186);
			this->datapnl->Name = L"datapnl";
			this->datapnl->Size = System::Drawing::Size(730, 522);
			this->datapnl->TabIndex = 0;
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->AllowUserToDeleteRows = false;
			this->dataGridView1->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dataGridView1->BackgroundColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)),
				static_cast<System::Int32>(static_cast<System::Byte>(39)), static_cast<System::Int32>(static_cast<System::Byte>(68)));
			this->dataGridView1->CellBorderStyle = System::Windows::Forms::DataGridViewCellBorderStyle::None;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->dataGridView1->GridColor = System::Drawing::Color::DarkSlateBlue;
			this->dataGridView1->Location = System::Drawing::Point(0, 0);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->ReadOnly = true;
			this->dataGridView1->RowHeadersWidth = 51;
			dataGridViewCellStyle1->ForeColor = System::Drawing::Color::White;
			this->dataGridView1->RowsDefaultCellStyle = dataGridViewCellStyle1;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(730, 522);
			this->dataGridView1->TabIndex = 0;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Dashboard::dataGridView1_CellContentClick);
			// 
			// Dashboard
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->BackColor = System::Drawing::Color::Black;
			this->ClientSize = System::Drawing::Size(1080, 720);
			this->Controls->Add(this->Mainpnl);
			this->Controls->Add(this->panel1);
			this->ForeColor = System::Drawing::Color::Transparent;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"Dashboard";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Dashboard";
			this->Load += gcnew System::EventHandler(this, &Dashboard::Dashboard_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->salessidepnl->ResumeLayout(false);
			this->salessidepnl->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->logoutpnl->ResumeLayout(false);
			this->logoutpnl->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->logoutpng))->EndInit();
			this->searchsidepnl->ResumeLayout(false);
			this->searchsidepnl->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->searchpng))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			this->addpnl->ResumeLayout(false);
			this->addpnl->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->addpng))->EndInit();
			this->Viewpnl->ResumeLayout(false);
			this->Viewpnl->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->viewpng))->EndInit();
			this->Mainpnl->ResumeLayout(false);
			this->Mainpnl->PerformLayout();
			this->addmainpnl->ResumeLayout(false);
			this->addmainpnl->PerformLayout();
			this->searchpnl->ResumeLayout(false);
			this->searchpnl->PerformLayout();
			this->datapnl->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void Dashboard_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void wlcmlbl_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void Mainpnl_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void pictureBox3_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}
public: bool viewtoggle = false;
public:bool searchtoggle = false;
private: System::Void Viewpnl_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	addmainpnl->Hide();
	datapnl->Hide();
	searchpnl->Hide();
	addtoggle = false;
	searchtoggle = false;
	if (viewtoggle == false)
	{
		datapnl->Show();
		toplbl->Text = L"View";
		viewtoggle = true;
		searchpnl->Hide();
		
		Viewpnl->BackColor = System::Drawing::Color::FromArgb(26, 39, 68);
		Viewlbl->BackColor = System::Drawing::Color::FromArgb(26, 39, 68);
		viewpng->BackColor = System::Drawing::Color::FromArgb(26, 39, 68);
	}
	else
	{
		datapnl->Hide();
		viewtoggle = false;
		
		toplbl->Text = L"Home";
		Viewpnl->BackColor = System::Drawing::Color::FromArgb(46, 61, 96);
		Viewlbl->BackColor = System::Drawing::Color::FromArgb(46, 61, 96);
		viewpng->BackColor = System::Drawing::Color::FromArgb(46, 61, 96);
	}
}
private: System::Void searchsidepnl_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	datapnl->Hide();
	searchpnl->Hide();
	addmainpnl->Hide();
	viewtoggle = false;
	addtoggle = false;
	if (searchtoggle==false)
	{
		datapnl->Show();
		searchpnl->Show();
		toplbl->Text = L"Search";
		
		searchtoggle = true;
		searchsidepnl->BackColor = System::Drawing::Color::FromArgb(26, 39, 68);
		searchsidebox->BackColor = System::Drawing::Color::FromArgb(26, 39, 68);
		searchpng->BackColor = System::Drawing::Color::FromArgb(26, 39, 68);

	}
	else
	{
		datapnl->Hide();
		searchpnl->Hide();
		toplbl->Text = L"Home";
		searchtoggle = false;
		viewtoggle = false;
		searchsidepnl->BackColor = System::Drawing::Color::FromArgb(46, 61, 96);
		searchsidebox->BackColor = System::Drawing::Color::FromArgb(46, 61, 96);
		searchpng->BackColor = System::Drawing::Color::FromArgb(46, 61, 96);
	}
}
private: System::Void View_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void View_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
	Viewpnl->BackColor = System::Drawing::Color::FromArgb(26, 39, 68);
	Viewlbl->BackColor = System::Drawing::Color::FromArgb(26, 39, 68);
	viewpng->BackColor = System::Drawing::Color::FromArgb(26, 39, 68);
}
private: System::Void View_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
	Viewpnl->BackColor = System::Drawing::Color::FromArgb(46, 61, 96);
	Viewlbl->BackColor = System::Drawing::Color::FromArgb(46, 61, 96);
	viewpng->BackColor = System::Drawing::Color::FromArgb(46, 61, 96);
}
private: System::Void addpnl_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
	addpnl->BackColor = System::Drawing::Color::FromArgb(26, 39, 68);
	addlbl->BackColor = System::Drawing::Color::FromArgb(26, 39, 68);
	addpng->BackColor = System::Drawing::Color::FromArgb(26, 39, 68);
}
private: System::Void addpnl_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
	addpnl->BackColor = System::Drawing::Color::FromArgb(46, 61, 96);
	addlbl->BackColor = System::Drawing::Color::FromArgb(46, 61, 96);
	addpng->BackColor = System::Drawing::Color::FromArgb(46, 61, 96);
}

private: System::Void searchsidepnl_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
	searchsidepnl->BackColor = System::Drawing::Color::FromArgb(26, 39, 68);
	searchsidebox->BackColor = System::Drawing::Color::FromArgb(26, 39, 68);
	searchpng->BackColor = System::Drawing::Color::FromArgb(26, 39, 68);
}
private: System::Void searchsidepnl_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
	searchsidepnl->BackColor = System::Drawing::Color::FromArgb(46, 61, 96);
	searchsidebox->BackColor = System::Drawing::Color::FromArgb(46, 61, 96);
	searchpng->BackColor = System::Drawing::Color::FromArgb(46, 61, 96);
}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void searchbtn_Click(System::Object^ sender, System::EventArgs^ e) {
	try {
		String^ searchText = Searchbox->Text;
		//int searchTextint = System::Convert::ToInt32(searchText);
		String^ selectedColumn = Searchbydropbox->Text;

		DataTable^ filteredDataTable = gcnew DataTable();

		DataTable^ originalDataTable = dataTable;

		DataView^ dataView = gcnew DataView(originalDataTable);

		if (selectedColumn == "All") {
			String^ filterExpression = "Title LIKE '%" + searchText + "%' OR Author LIKE '%" + searchText + "%' OR Genre LIKE '%" + searchText + "%' OR Publisher LIKE '%" + searchText + "%'";
			dataView->RowFilter = filterExpression;
		}
		else {
			String^ filterExpression = selectedColumn + " LIKE '%" + searchText + "%'";
			dataView->RowFilter = filterExpression;
		}

		filteredDataTable = dataView->ToTable();

		dataGridView1->DataSource = filteredDataTable;
	}
	catch (Exception^ ex) {
		MessageBox::Show("Error: " + ex->Message + "\n" + ex->StackTrace, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}

}
private: System::Void dataGridView1_RowPrePaint(System::Object^ sender, System::Windows::Forms::DataGridViewRowPrePaintEventArgs^ e) {
	
	if (e->RowIndex % 2 == 0) {
		
		dataGridView1->Rows[e->RowIndex]->DefaultCellStyle->BackColor = System::Drawing::Color::FromArgb(26, 39, 68);
	}
	else {
		
		dataGridView1->Rows[e->RowIndex]->DefaultCellStyle->BackColor = System::Drawing::Color::FromArgb(46, 61, 96);
	}
}
private: System::Void logoutpng_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	auto result = MessageBox::Show("Signout", "Do you really want to signout", MessageBoxButtons::YesNo, MessageBoxIcon::Question);
	if (result == System::Windows::Forms::DialogResult::Yes)
	{
		Application::Exit();
	}

}
private: System::Void searchsidebox_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void logoutpng_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void searchsidepnl_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
public: bool addtoggle = false;
private: System::Void addpnl_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	addmainpnl->Hide();
	datapnl->Hide();
	searchpnl->Hide();
	searchtoggle = false;
	viewtoggle = false;
	if (addtoggle == false)
	{
		addmainpnl->Show();
		datapnl->Hide();
		searchpnl->Hide();
		toplbl->Text = L"Add";
		addtoggle = true;
	}
	else
	{
		addmainpnl->Hide();
		toplbl->Text = L"Home";
		addtoggle = false;
	}
}
private: System::Void titlelbl_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void genrelbl_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void addbtn_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ title = addtitle->Text;
	String^ author = addauthor->Text;
	String^ genre = addgenre->Text;
	String^ publisher = addpublisher->Text;
	String^ pricestring = addprice->Text;
	int price = System::Convert::ToInt32(pricestring);
	String^ qtystring = addqty->Text;
	int quantity = System::Convert::ToInt32(qtystring);
	try
	{
		String^ connectionString = "Data Source=KESHAV-PC\\SQLEXPRESS;Initial Catalog=accounts;Integrated Security=True;TrustServerCertificate=True";

		SqlConnection^ connection = gcnew SqlConnection(connectionString);
		connection->Open();
		String^ checkIfExistsQuery = "SELECT COUNT(*) FROM Books WHERE Title = @Title AND Author = @Author AND Genre = @Genre AND Publisher = @Publisher AND Price = @Price";
		SqlCommand^ checkCmd = gcnew SqlCommand(checkIfExistsQuery, connection);
		checkCmd->Parameters->AddWithValue("@Title", title);
		checkCmd->Parameters->AddWithValue("@Author", author);
		checkCmd->Parameters->AddWithValue("@Genre", genre);
		checkCmd->Parameters->AddWithValue("@Publisher", publisher);
		checkCmd->Parameters->AddWithValue("@Price", price);
		int rowCount = (int)checkCmd->ExecuteScalar();

		if (rowCount > 0)
		{
		String^	updateQuantityQuery = "UPDATE Books SET Quantity = Quantity + @Quantity WHERE Title = @Title AND Author = @Author AND Genre = @Genre AND Publisher = @Publisher AND Price = @Price";
		SqlCommand^ updateCmd = gcnew SqlCommand(updateQuantityQuery, connection);
		updateCmd->Parameters->AddWithValue("@Title", title);
		updateCmd->Parameters->AddWithValue("@Author", author);
		updateCmd->Parameters->AddWithValue("@Genre", genre);
		updateCmd->Parameters->AddWithValue("@Publisher", publisher);
		updateCmd->Parameters->AddWithValue("@Price", price);
		updateCmd->Parameters->AddWithValue("@Quantity", quantity);
		int rowsAffected = updateCmd->ExecuteNonQuery();
		MessageBox::Show("Record updated successfully.", "Success", MessageBoxButtons::OK);
		}
		else
		{
			String^ insertQuery = "INSERT INTO Books (Title, Author, Genre, Publisher, Price, Quantity) VALUES (@Title, @Author, @Genre, @Publisher, @Price, @Quantity)";

			// Create a new SqlCommand for insertion
			SqlCommand^ insertCmd = gcnew SqlCommand(insertQuery, connection);
			insertCmd->Parameters->AddWithValue("@Title", title);
			insertCmd->Parameters->AddWithValue("@Author", author);
			insertCmd->Parameters->AddWithValue("@Genre", genre);
			insertCmd->Parameters->AddWithValue("@Publisher", publisher);
			insertCmd->Parameters->AddWithValue("@Price", price);
			insertCmd->Parameters->AddWithValue("@Quantity", quantity);
			// Execute the insertion command
			insertCmd->ExecuteNonQuery();
			
			MessageBox::Show("New row added successfully!", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
		dataTable->Clear();
		LoadDataFromSqlServer();

	}
	catch (Exception^ ex)
	{
		MessageBox::Show("Error: " + ex->Message + "\n" + ex->StackTrace, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}
};
}

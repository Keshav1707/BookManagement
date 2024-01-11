#include "MyForm.h"
#include "Dashboard.h"
#include "Signup.h"


using namespace System;
using namespace System::Windows::Forms;
[STAThreadAttribute]

void main(array<String^>^ args)
{
	Application::SetCompatibleTextRenderingDefault(false);
	Application::EnableVisualStyles();

	User^ user = nullptr;
	while (true)
	{
		BookManagement::MyForm login;
		login.ShowDialog();
		if (login.switchtosignupbool)
		{
			BookManagement::Signup snup;
			snup.ShowDialog();
			if (snup.switchtologinbool)
			{
				continue;
			}
			else
			{
				user = snup.user;
				break;
			}
		}
		else
		{
			user = login.user;
			break;
		}

	}
	if (user != nullptr)
	{
		BookManagement::Dashboard dash(user);
		Application::Run(% dash);
	}
	else
	{
		MessageBox::Show("Authentication failure", "Try again", MessageBoxButtons::OK);
	}

}
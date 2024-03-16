#include "DashBoard.h"
#include "Register.h"
#include "Login1.h"
#include "User.h"

using namespace System;
using namespace System::Windows::Forms;

void main(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	User^ user = nullptr;

	while (true)
	{
		CarManagment::Login loginForm;
		loginForm.ShowDialog();

		if (loginForm.SwitchToRegister)
		{
			//Switch to Register Form
			CarManagment::Register registerForm;
			registerForm.ShowDialog();


			//check if RegisterForm swap with LoginForm
			if (registerForm.SwitchToLogin)
			{

				continue;
			}
			else
			{
				user = registerForm.user;
				break;
			}
		}
		else
		{
			user = loginForm.user;
			break;
		}
	}
	if (user)
	{
		CarManagment::DashBoard dashboardForm(user);
		Application::Run(% dashboardForm);
	}
	else
	{
		MessageBox::Show("Fail to Enter in the Program", "Fail", MessageBoxButtons::OK);
	}
}

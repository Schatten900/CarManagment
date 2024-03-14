#include "DashBoard.h"

using namespace System;
using namespace System::Windows::Forms;
using namespace Data::SqlClient;

void main(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	CarManagment::DashBoard dashboard;
	Application::Run(% dashboard);
}
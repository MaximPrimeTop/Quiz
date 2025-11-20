#include "StartForm.h"

using namespace System;
using namespace System::Windows::Forms;
using namespace Start;

[STAThread]
int main(array<System::String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew StartForm);
	return 0;
}


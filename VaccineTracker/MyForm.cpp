#include "MyForm.h"
#include <stdio.h>
#include <sqlite3.h>

using namespace System;
using namespace System::Windows::Forms;
[STAThreadAttribute]
void main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	VaccineTracker::MyForm form;
	Application::Run(% form);
}





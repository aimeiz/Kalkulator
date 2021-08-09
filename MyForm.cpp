#include "MyForm.h"

using namespace System;
using namespace System::Windows::Forms;
using namespace Kalkulator;

[STAThreadAttribute]


void main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Kalkulator::MyForm form;
	Application::Run(% form);
}

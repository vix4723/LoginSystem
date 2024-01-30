#include "ManagementSystem.h"
#include <iostream>

using namespace System;
using namespace System::Windows::Forms;

[STAThread]
void main(array<String^>^ args) {
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    LoginAndSignUp::ManagementSystem form;
    Application::Run(% form);
}
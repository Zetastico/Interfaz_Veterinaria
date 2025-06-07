#include "MyForm.h"

using namespace System;
using namespace System::Windows::Forms;
using namespace InterfazVeterinaria;  // Usa tu namespace real

[STAThreadAttribute]
int main(array<String^>^ args)
{
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    Application::Run(gcnew MyForm());  // Muestra tu formulario principal

    return 0;
}
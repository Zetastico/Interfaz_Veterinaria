#include "MyForm.h"

using namespace System;
using namespace System::Windows::Forms;
using namespace InterfazVeterinaria;  // <-- IMPORTANTE

[STAThreadAttribute]
int main(array<String^>^ args)
{
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);

    Application::Run(gcnew MyForm());  // Ejecuta el formulario principal

    return 0;
}
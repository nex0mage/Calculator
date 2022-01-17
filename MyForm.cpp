#include "MyForm.h"
#include <iostream>
#include <Windows.h>
#include <math.h>
using namespace Calculator;
int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int)
{
	Application::EnableVisualStyles;
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew MyForm);

	return 0;
}

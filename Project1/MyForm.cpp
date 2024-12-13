#include "MyForm.h"
#include <Windows.h>
using namespace Project1; // Íàçâàíèå ïðîåêòà è íàçâàíèå namespace
//(íåéìñïåéñà)äîëæíû áûòü îäèíàêîâûìè;
int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew MyForm);
}

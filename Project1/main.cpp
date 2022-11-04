#include <Windows.h>
#include <stdio.h>
#include "main.h"


int main(void)
{
    HMODULE hMod;

    Test_MyApi3Func func = 0;

    hMod = LoadLibrary(L"DLL2.dll");

    if (hMod == NULL) {
        printf("Hello");
        return 1;
    }

    func = (Test_MyApi3Func)GetProcAddress(hMod, "Test_MyApi3");

    if (func)
    {
        (*func)(10);
        printf("Koneko");
    }
    FreeLibrary(hMod);

    return (int)0;
}
#include <windows.h>
#include <stdio.h>

#define VC_DLL_EXPORTS
#include "main.h"

// �G�N�X�|�[�g�֐��̎���
void __cdecl Test_MyApi()
{
    const wchar_t* lpText = L"Test\0";
    wprintf_s(lpText);
}

void __cdecl Test_MyApi2(const wchar_t* lpText, const wchar_t* lpCaption)
{
    // MessageBox���Ăяo�������B
    wprintf_s(L"%s", lpText);
    wprintf_s(L"%s", L" ");
    wprintf_s(L"%s", lpCaption);
}

void __cdecl Test_MyApi3(int count)
{
    for (int i = 0; i < count; i++)
    {
        wprintf_s(L"%d,", i);
    }
}
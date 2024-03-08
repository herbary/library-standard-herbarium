#if 0

#include "herbary/std/__win32_crt_float.h"

#ifdef _WIN32
#include "herbary/std/define/__M_X86_32.h"

int _fltused = 0;

#ifdef __M_X86_32
void _ftol2(void) {
#ifdef _MSC_VER
    __asm
    {
        fistp qword ptr [esp-8]
        mov   edx,[esp-4]
        mov   eax,[esp-8]
        ret
    }
#endif // _MSC_VER
}

void _ftol2_sse(void) {
#ifdef _MSC_VER
    __asm
    {
        fistp dword ptr [esp-4]
        mov   eax,[esp-4]
        ret
    }
#endif // _MSC_VER
}

#if 0
void _dtol3() {
#ifdef _MSC_VER
    __asm
    {
    }
#endif // _MSC_VER
}

void _dtoui3() {
#ifdef _MSC_VER
    __asm
    {
    }
#endif // _MSC_VER
}

void _dtoul3() {
#ifdef _MSC_VER
    __asm
    {
    }
#endif // _MSC_VER
}

void _ftol3() {
#ifdef _MSC_VER
    __asm
    {
    }
#endif // _MSC_VER
}

void _ftoui3() {
#ifdef _MSC_VER
    __asm
    {
    }
#endif // _MSC_VER
}

void _ftoul3() {
#ifdef _MSC_VER
    __asm
    {
    }
#endif // _MSC_VER
}

void _ltod3() {
#ifdef _MSC_VER
    __asm
    {
    }
#endif // _MSC_VER
}

void _ultod3() {
#ifdef _MSC_VER
    __asm
    {
    }
#endif // _MSC_VER
}
#endif // 0
#endif // __M_X86_32

#endif // _WIN32

#endif // 0

#include "herbary/std/__win32_crt_entry.h"

#ifdef _WIN32
#ifdef _MSC_VER
#pragma comment(lib, "kernel32.lib")
#endif // _MSC_VER

#include <Windows.h>

#include "herbary/std/define/_Noreturn.h" // IWYU pragma: keep
#include "herbary/std/define/__win32_crt.h"

int main(void);

_Noreturn
int __win32_crt_entry(void) {
    int result = main();
    if (result < 0) {
        result = -result;
    }

    __win32_crt_exit_process((__win32_crt_uint_t)result);
}
#endif // _WIN32

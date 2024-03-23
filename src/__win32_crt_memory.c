#include "herbary/std/__win32_crt_memory.h"

#ifdef _WIN32
#include <stddef.h>
#include <stdint.h>

void * memset(void *dest, int c, size_t count) {
    if (!dest) {
        return dest;
    }

    uint8_t *dest_bytes = (uint8_t *)dest;

    while (count--) {
        *dest_bytes++ = (uint8_t)c;
    }

    return dest;
}

void * memcpy(void *dest, const void *src, size_t count) {
    if (!dest || !src) {
        return dest;
    }

    uint8_t *dest_bytes = (uint8_t *)dest;
    const uint8_t *src_bytes = (const uint8_t *)src;

    while (count--) {
        *dest_bytes++ = *src_bytes++;
    }

    return dest;
}
#endif // _WIN32

#ifndef HERBARY_STD_DEFINE___M_X86_32_BOOL_H_INCLUDED
#define HERBARY_STD_DEFINE___M_X86_32_BOOL_H_INCLUDED

#ifdef __M_X86_32_BOOL
#error "`__M_X86_32_BOOL` mustb't be pre-defined"
#endif // __M_X86_32_BOOL

#include "herbary/std/define/__M_X86_32.h" // IWYU pragma: keep

#ifdef __M_X86_32
#define __M_X86_32_BOOL 1
#else
#define __M_X86_32_BOOL 0
#endif // __M_X86_32


#endif // HERBARY_STD_DEFINE___M_X86_32_BOOL_H_INCLUDED

#ifndef HERBARY_STD_DEFINE___M_X86_64_BOOL_H_INCLUDED
#define HERBARY_STD_DEFINE___M_X86_64_BOOL_H_INCLUDED

#ifdef __M_X86_64_BOOL
#error "`__M_X86_64_BOOL` mustn't be pre-defined"
#endif // __M_X86_64_BOOL

#include "herbary/std/define/__M_X86_64.h" // IWYU pragma: keep

#ifdef __M_X86_64
#define __M_X86_64_BOOL 1
#else
#define __M_X86_64_BOOL 0
#endif // __M_X86_64

#endif // HERBARY_STD_DEFINE___M_X86_64_BOOL_H_INCLUDED

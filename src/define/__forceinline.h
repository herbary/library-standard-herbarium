#ifndef HERBARY_STD_DEFINE___FORCEINLINE_H_INCLUDED
#define HERBARY_STD_DEFINE___FORCEINLINE_H_INCLUDED

#ifndef __forceinline
#ifdef _MSC_VER
#define __forceinline __forceinline
#elif defined(__clang__) || defined(__GNUC__)
#define __forceinline __attribute__((always_inline))
#else // !defined(_MSC_VER) && !defined(__clang__) && !defined(__GNUC__)
#define __forceinline
#endif // _MSC_VER
#endif // __forceinline

#endif // HERBARY_STD_DEFINE___FORCEINLINE_H_INCLUDED

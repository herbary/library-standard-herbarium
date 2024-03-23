#ifndef HERBARY_STD_DEFINE__NORETURN_H_INCLUDED
#define HERBARY_STD_DEFINE__NORETURN_H_INCLUDED

#ifndef _Noreturn
#ifdef __STDC_VERSION__
#if __STDC_VERSION__ >= 201112L
#define _Noreturn _Noreturn
#elif __STDC_VERSION__ >= 202311L
#define _Noreturn [[noreturn]]
#endif // __STDC_VERSION__ < 201112L
#endif // __STDC_VERSION__
#endif // _Noreturn

#ifndef _Noreturn
#define _Noreturn
#endif // _Noreturn

#endif // HERBARY_STD_DEFINE__NORETURN_H_INCLUDED

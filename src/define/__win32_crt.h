#ifdef _WIN32
#ifndef HERBARY_STD_PREDEF___WIN32_CRT_H_INCLUDED
#define HERBARY_STD_PREDEF___WIN32_CRT_H_INCLUDED

#ifdef __win32_crt_uint_t
#error "`__win32_crt_uint_t` mustn't be pre-defined"
#endif // __win32_crt_uint_t
#ifdef __win32_crt_handle_t
#error "`__win32_crt_handle_t` mustn't be pre-defined"
#endif // __win32_crt_handle_t
#ifdef __win32_crt_dword_t
#error "`__win32_crt_dword_t` mustn't be pre-defined"
#endif // __win32_crt_dword_t
#ifdef __win32_crt_dword_t
#error "`__win32_crt_dword_t` mustn't be pre-defined"
#endif // __win32_crt_dword_t
#ifdef __win32_crt_tchar_t
#error "`__win32_crt_tchar_t` mustn't be pre-defined"
#endif // __win32_crt_tchar_t

#define __win32_crt_uint_t UINT
#define __win32_crt_handle_t HANDLE
#define __win32_crt_dword_t DWORD
#define __win32_crt_bool_t BOOL
#define __win32_crt_tchar_t TCHAR

#ifdef __win32_crt_exit_process
#error "`__win32_crt_exit_process` mustn't be pre-defined"
#endif // __win32_crt_exit_process
#ifdef __win32_crt_get_std_handle
#error "`__win32_crt_get_std_handle` mustn't be pre-defined"
#endif // __win32_crt_get_std_handle
#ifdef __win32_crt_close_handle
#error "`__win32_crt_close_handle` mustn't be pre-defined"
#endif // __win32_crt_close_handle
#ifdef __win32_crt_write_console
#error "`__win32_crt_write_console` mustn't be pre-defined"
#endif // __win32_crt_write_console
#ifdef __win32_crt_get_last_error
#error "`__win32_crt_get_last_error` mustn't be pre-defined"
#endif // __win32_crt_get_last_error
#ifdef __win32_crt_format_message
#error "`__win32_crt_format_message` mustn't be pre-defined"
#endif // __win32_crt_format_message
#ifdef __win32_crt_make_language
#error "`__win32_crt_make_language` mustn't be pre-defined"
#endif // __win32_crt_make_language
#ifdef __win32_crt_local_free
#error "`__win32_crt_local_free` mustn't be pre-defined"
#endif // __win32_crt_local_free
#ifdef __win32_crt_text
#error "`__win32_crt_text` mustn't be pre-defined"
#endif // __win32_crt_text
#ifdef __win32_crt_tcslen
#error "`__win32_crt_tcslen` mustn't be pre-defined"
#endif // __win32_crt_tcslen
#ifdef __win32_crt_create_file
#error "`__win32_crt_create_file` mustn't be pre-defined"
#endif // __win32_crt_create_file
#ifdef __win32_crt_read_file
#error "`__win32_crt_read_file` mustn't be pre-defined"
#endif // __win32_crt_read_file
#ifdef __win32_crt_get_full_path
#error "`__win32_crt_get_full_path` mustn't be pre-defined"
#endif // __win32_crt_get_full_path
#ifdef __win32_crt_get_process_heap
#error "`__win32_crt_get_process_heap` mustn't be pre-defined"
#endif // __win32_crt_get_process_heap
#ifdef __win32_crt_heap_alloc
#error "`__win32_crt_heap_alloc` mustn't be pre-defined"
#endif // __win32_crt_heap_alloc
#ifdef __win32_crt_heap_free
#error "`__win32_crt_heap_free` mustn't be pre-defined"
#endif // __win32_crt_heap_free
#ifdef __win32_crt_copy_memory
#error "`__win32_crt_copy_memory` mustn't be pre-defined"
#endif // __win32_crt_copy_memory
#ifdef __win32_crt_move_memory
#error "`__win32_crt_move_memory` mustn't be pre-defined"
#endif // __win32_crt_move_memory

#define __win32_crt_exit_process ExitProcess
#define __win32_crt_get_std_handle GetStdHandle
#define __win32_crt_close_handle CloseHandle
#define __win32_crt_write_console WriteConsole
#define __win32_crt_get_last_error GetLastError
#define __win32_crt_format_message FormatMessage
#define __win32_crt_make_language MAKELANGID
#define __win32_crt_local_free LocalFree
#define __win32_crt_text TEXT
#define __win32_crt_tcslen _tcslen
#define __win32_crt_create_file CreateFile
#define __win32_crt_read_file ReadFile
#define __win32_crt_get_full_path GetFullPathName
#define __win32_crt_get_process_heap GetProcessHeap
#define __win32_crt_heap_alloc HeapAlloc
#define __win32_crt_heap_free HeapFree
#define __win32_crt_copy_memory CopyMemory
#define __win32_crt_move_memory MoveMemory

#endif // HERBARY_STD_PREDEF___WIN32_CRT_H_INCLUDED
#endif // _WIN32

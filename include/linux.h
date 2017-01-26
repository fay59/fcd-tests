// Functions that glibc implements and gcc links against, but that are not
// directly exposed by glibc headers. The functions in this file are added the
// first time that they are encountered in a test program, but it's kind of a
// lazy attitude given that there's a list at
// https://refspecs.linuxbase.org/LSB_4.0.0/LSB-Core-generic/LSB-Core-generic/libcman.html

#include <stdint.h>
#include <stdio.h>

typedef int main_f(int, char**, char**);
typedef void init_fini_f(void);

void __assert_fail(const char* message, const char* file, int line, const char* function) __attribute__((noreturn));
void __stack_chk_fail(void) __attribute__((noreturn));
int __libc_start_main(main_f* main, int argc, char** argv, init_fini_f* init, init_fini_f* fini, init_fini_f* rtld_fini, void* stack_end);
void __memcpy_chk(void* dest, void* src, size_t len, size_t destlen);
int __printf_chk(int flag, const char* format, ...) __attribute__((format(printf, 2, 3)));
int __fprintf_chk(FILE* f, int flag, const char* format, ...) __attribute__((format(printf, 3, 4)));

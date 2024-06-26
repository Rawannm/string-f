#ifndef FUNC_H_
#define FUNC_H_
typedef size_t;
#define NULL 0

char *strcpy(char *dest, const char *src);
char *strncpy(char *dest, const char *src, size_t n);
size_t strlen(const char *str);
char *strcat(char *dest, const char *src);
char *strncat(char *dest, const char *src, size_t n);
int strcmp(const char *str1, const char *str2);
int strncmp(const char *str1, const char *str2, size_t n);
char *strchr(const char *str, int c);
int strcoll(const char *str1, const char *str2);
size_t strcspn(const char *str1, const char *str2);
char *strpbrk(const char *str1, const char *str2);
char *strrchr(const char *str, int c);
size_t strspn(const char *str1, const char *str2);
char *strstr(const char *haystack, const char *needle);
size_t strxfrm(char *dest, const char *src, size_t n);
void *memchr(const void *str, int c, size_t n);
int memcmp(const void *str1, const void *str2, size_t n);
void *memcpy(void *dest, const void *src, size_t n);
void *memmove(void *dest, const void *src, size_t n);
void *memset(void *str, int c, size_t n);
#endif
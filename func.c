#include "func.h"

char *strcpy(char *dest, const char *src)
{
    while (*src !='\0')
    {
        *dest++ = *src++ ;
    }
    *dest = '\0';
    return *dest;
}
char *strncpy(char *dest, const char *src, int n)
{
    while (*src && n--)
    {
        *dest++ = *src++ ;
    }
    *dest = '\0';
    return *dest;
}
int strlen(const char *str)
{
    int i=0;
    while(*str != '\0')
    {
        i++;
        str++;
    }
    return i;
}
char *strcat(char *dest, const char *src)
{
    char *end = dest + strlen(dest);
    while (*src !='\0')
    {
        *end++ = *src++ ;
    }
    *end = '\0';
    return *end;
}
char *strncat(char *dest, const char *src, size_t n)
{
    char *end = dest + strlen(dest);
    while (*src && n--)
    {
        *end++ = *src++ ;
    }
    *end = '\0';
    return *end;
}
int strcmp(const char *str1, const char *str2)
{
    while((*str1 !='\0') && (*str2 != '\0'))
    {
        if( *str2 >= *str1)
        {return 1;}
        else if( *str2 <= *str1)
        {return -1;}
        else if( *str2 == *str1)
        {return 0;}

        *str2++ ;
        *str1++ ;
    }
}
int strncmp(const char *str1, const char *str2, size_t n)
{
    while(n-- > 0)
    {
        if( *str2 <= *str1)
        {return 1;}
        else if( *str2 >= *str1)
        {return -1;}
        else if( *str2 == *str1)
        {return 0;}
        
        *str1++ ;
        *str2++ ;
    }
}
char *strchr(const char *str, int c)
{
    while(*str != '\0')
    {
        if (*str == c)
        {return *str;}
        else
        {
            return (NULL);
        }
        *str ++;
    }
}
int strcoll(const char *str1, const char *str2)
{

    while((*str1 !='\0') && (*str2 != '\0'))
    {
        if( *str2 >= *str1)
        {return 1;}
        else if( *str2 <= *str1)
        {return -1;}
        else if( *str2 == *str1)
        {return 0;}

        *str2++ ;
        *str1++ ;
    }
}
size_t strcspn(const char *str1, const char *str2)
{
    int count = 0;
    while(*str1 != *str2)
    {
        *str1++ ;
        *str2++ ;
        count++;
    }
    return count;
}
char *strpbrk(const char *str1, const char *str2)
{
    
    while(*str1 != '\0')
    {
        char *temp;
        *temp = *str2;
        while(*temp != '\0')
        {
            if (*str1 == *temp)
            {
                return *temp;
            }
            else
            {
                return(NULL);
            }
            *temp++;
        }
        *str1++ ;
    }
    return *str1;
}
char *strrchr(const char *str, int c)
{
    const char *last;
   while(*str != '\0')
    {
        if (*str == c)
        {
            last = str;
        }
        else
            {
                return(NULL);
            }
        *str ++;
    }
    return *last;
}
size_t strspn(const char *str1, const char *str2)
{
    int i=0;
    int j=0;

    while(*(str1+i))
    {
    while(*(str2+j))
    {
      if(*(str1+i) == *(str2+j))
      j++;
    }
    if(!*(str2+j)){
      return i;
    }
    i++;
  }
  return i;
}
char *strstr(const char *haystack, const char *needle)
{
    char *p = haystack;
    int len = strlen (needle);
  for (; (p = strchr (p, *needle)) != 0; p++)
    {
      if (strncmp (p, needle , len) == 0)
	return *p;
    }
  return (0);
}
size_t strxfrm(char *dest, const char *src, size_t n)
{
    int count =0;
    while ((*src !='\0')&& n--)
    {
        *dest++ = *src++ ;
        count++;
    }
    *dest = '\0';
    return count;
}
void *memchr(const void *str, int c, size_t n)
{
     const unsigned char *p = str;

        while (--n != 0)
        {
            if (*p++ == c)
            return ((void *)(p - 1));
        }
    
    return (NULL);
}
int memcmp(const void *str1, const void *str2, size_t n)
{
    while(n-- > 0)
    {
        if( str2 <= str1)
        {return 1;}
        else if( str2 >= str1)
        {return -1;}
        else if( str2 == str1)
        {return 0;}
        
        str1++ ;
        str2++ ;
    }
}
void *memcpy(void *dest, const void *src, size_t n)
{
    char *csrc = (char *)src;  
    char *cdest = (char *)dest;    
    for (int i=0; i<n; i++)  
    cdest[i] = csrc[i];  
}
void *memmove(void *dest, const void *src, size_t n)
{
    char *cdest;
    char *csrc;

   cdest = (char *)dest;
   csrc = (char *)src;

   if (dest <= src)
   {
      while(n--)
      {
        *cdest++ = *csrc++;
      }
   }
   else if (dest > src)
   {
      cdest += n - 1;
      csrc += n - 1;
      while(n--)
      {
         *cdest-- = *csrc--;
      }
   }
   return (dest);
}
void *memset(void *str, int c, size_t n)
{
    int i;

    i = 0;
    while(str && n > 0)
    {
        str = c;
        str++;
        n--;
    }
    return(str);
}
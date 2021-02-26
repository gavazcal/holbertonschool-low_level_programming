/*include guard*/
#ifndef HOLBERTON_H
#define HOLBERTON_H
/*PROTOTYPES*/
int _putchar(char c);
void _islower(void);
void _isalpha(void);
void _abs(void);
void _isupper(void);
void _isdigit(void);
int _strlen(char *s);
void _puts(char *s);
void _strcpy(void);
void _atoi(void);
char *_strcat(char *dest, char *src);
char *_strncat(char *dest, char *src, int n);
char *_strncpy(char *dest, char *src, int n);
int _strcmp(char *s1, char *s2);
char *_memset(char *s, char b, unsigned int n);
char *_memcpy(char *dest, char *src, unsigned int n);
char *_strchr(char *s, char c);
unsigned int _strspn(char *s, char *accept);
char *_strpbrk(char *s, char *accept);
void _strstr(void);

#endif

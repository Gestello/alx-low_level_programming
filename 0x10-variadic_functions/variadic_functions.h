#ifndef VARIADIC_FNS
#define VARIADIC_FNS

#define VALIDTYPESCONDITIONAL(i) (format[i] == 'c' || format[i] == 'i' || format[i] == 'f' || format[i] == 's')

typedef struct validtypes
{
	char *valid;
	void (*f)();
} v_types;

int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *seperator, const unsigned int n, ...);
void print_strings(const char *seperator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif

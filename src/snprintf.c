/*
 * snprintf.c
 */

#include "inttypes.h"
#include "stdarg.h"
extern int vsnprintf(char *buffer, size_t n, const char *format, va_list ap);

int snprintf(char *buffer, size_t n, const char *format, ...)
{
	va_list ap;
	int rv;

	va_start(ap, format);
	rv = vsnprintf(buffer, n, format, ap);
	va_end(ap);
	return rv;
}
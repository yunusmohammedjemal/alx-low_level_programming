#include "ariadic_functions.h"
/**
 *print_numbers - prints number with separator.
 *@separator: string to separate numbers.
 *
 *returns: the numbers.
 */

void print_numbers(const char *separator, const unsigned int n, ...){
unsigned int i;
va_list ap;

va_start(ap,n);

if (separator == NULL)
separator = "";
for(i = 0; i < n; i++)
 {
 printf("%d",va_arg(ap,int));
 if (i < (n-1))
 printf("%s",separator);
 }
 printf("\n");


va_end(ap);




}

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <float.h>

/* Online C Compiler and Editor */
int main(int argc, char** argv)
{
    printf("INTEGER TYPES(SizeOf)\n\n");
    printf("1.  CHAR_BIT   :   %d\n", CHAR_BIT);
    printf("2.  CHAR_MIN   :   %d\n", CHAR_MIN);
    printf("3.  CHAR_MAX   :   %d\n", CHAR_MAX);
    printf("4.  SCHAR_MIN  :   %d\n", SCHAR_MIN);
    printf("5.  SCHAR_MAX  :   %d\n", SCHAR_MAX);
    printf("6.  LONG_MIN   :   %ld\n", LONG_MIN);
    printf("7.  LONG_MAX   :   %ld\n", LONG_MAX);
    printf("8.  SHRT_MIN   :   %d\n", SHRT_MIN);
    printf("9.  SHRT_MAX   :   %d\n", SHRT_MAX);
    printf("10. UCHAR_MAX  :   %d\n", UCHAR_MAX);
    printf("11. UINT_MAX   :   %u\n", UINT_MAX);
    printf("12. USHRT_MAX  :   %u\n", USHRT_MAX);
    printf("13. ULONG_MAX  :   %lu\n", ULONG_MAX);
    
    printf("________________________________\n\n");
    printf("FLOAT TYPE (SizeOf\n");
    printf("    The header file float.h defines macros that allow you to use these values and other details about the binary representation of real numbers in your programs. The following example prints the storage space taken by a float type and its range values...\n\n");
    printf("FLT_MAX    :  %g\n", (float) FLT_MAX);
    printf("FLT_MIN    :  %g\n", (float) FLT_MIN);
    printf("-FLT_MIN   :  %g\n", (float) -FLT_MIN);
    printf("-FLT_MAX   : %g\n", (float) -FLT_MAX);
    printf("DBL_MAX    : %g\n", (double) DBL_MAX);
    printf("DBL_MIN    : %g\n", (double) DBL_MIN);
    printf("-DBL_MIN   : %g\n", (double) -DBL_MIN);
    printf("-DBL_MAX   : %g\n", (double) -DBL_MAX);
    printf("Precision Value  : %d\n\n", FLT_DIG);
    
    printf("____________________________________\n");
    printf("Good for today!");
    
    
    return 0;
}

#include "libasm.h"

int main()
{
//BZERO TEST 
    printf("\n");
    printf("***** BZERO TEST\n");
    char str_bzero[] = "Hello World!";
    char str_bzero2[] = "";
    //write (1, str, 12);
    printf("Word before bzero %s\n", str_bzero);
    ft_bzero(str_bzero, 12);
    ft_bzero(str_bzero2, 1);
    printf("Word after %s\n", str_bzero);
    printf("END OF BZERO TEST *******\n\n"); //END BZERO
//END BZERO

//STRLEN TEST
    printf("***** STRLEN TEST\n");
    char str_strlen[] = "Hello World!";
    printf("Actual Length of string %s is %lu\n", str_strlen, strlen(str_strlen));
    printf("My length is %lu\n", ft_strlen(str_strlen));
    printf("END OF STRLEN TEST *****\n\n");
//END STRLEN

//STRCAT TEST
    printf("***** STRCAT TEST\n");
    char    str_strcat[12] = "Hello ";
    char     str_strcat2[] = "World";
    printf("strcat of %sand %s is ", str_strcat, str_strcat2);
    ft_strcat(str_strcat, str_strcat2);
    printf("%s\n", str_strcat);
    printf("END OF STRCAT TEST *****\n\n");
//END STRCAT

//ISALPHA TEST
    printf("***** ISALPHA TEST\n");
    char    str_isalpha = 'A';
    char    str_isalpha2 = 'l';
    char    str_isalpha3 = 'z';
    char    str_isalpha4 = '5';
    printf("'%c' is alpha: %i\n", str_isalpha, ft_isalpha(str_isalpha));
    printf("'%c' is alpha: %i\n", str_isalpha2, ft_isalpha(str_isalpha2));
    printf("'%c' is alpha: %i\n", str_isalpha3, ft_isalpha(str_isalpha3));
    printf("'%c' is alpha: %i\n", str_isalpha4, ft_isalpha(str_isalpha4));
    printf("END OF ISALPHA TEST *****\n\n");
//END ISALPHA

//ISDIGIT TEST
    printf("***** ISDIGIT TEST\n");
    char    str_isdigit = '0';
    char    str_isdigit2 = '9';
    char    str_isdigit3 = 'Z';
    char    str_isdigit4 = 'a';
    printf("'%c' is digit: %i\n", str_isalpha, ft_isalpha(str_isalpha));
    printf("'%c' is digit: %i\n", str_isalpha2, ft_isalpha(str_isalpha2));
    printf("'%c' is digit: %i\n", str_isalpha3, ft_isalpha(str_isalpha3));
    printf("'%c' is digit: %i\n", str_isalpha4, ft_isalpha(str_isalpha4));
    printf("END OF ISDIGIT TEST *****\n\n");
//END ISDIGIT

//ISALNUM TEST
    printf("***** ISALNUM TEST\n");
    char    str_isalnum = '5';
    char    str_isalnum2 = 's';
    char    str_isalnum3 = ';';
    char    str_isalnum4 = ' ';
    printf("'%c' is alnum: %i\n", str_isalnum, ft_isalnum(str_isalnum));
    printf("'%c' is alnum: %i\n", str_isalnum2, ft_isalnum(str_isalnum2));
    printf("'%c' is alnum: %i\n", str_isalnum3, ft_isalnum(str_isalnum3));
    printf("'%c' is alnum: %i\n", str_isalnum4, ft_isalnum(str_isalnum4));
    printf("END OF ISALNUM TEST *****\n\n");
//END ISALNUM

//ISASCII TEST
    printf("***** ISASCII TEST\n");
    int    str_isascii = ' ';
    char    str_isascii2 = 127;
    char    str_isascii3 = -1;
    int    str_isascii4 = 128;
    printf("'%c' is ascii: %i\n", str_isascii, ft_isascii(str_isascii));
    printf("'%c' is ascii: %i\n", str_isascii2, ft_isascii(str_isascii2));
    printf("'%c' is ascii: %i\n", str_isascii3, ft_isascii(str_isascii3));
    printf("'%c' is ascii: %i\n", str_isascii4, ft_isascii(str_isascii4));
    printf("END OF ISASCII TEST *****\n\n");
//END ISASCII
}
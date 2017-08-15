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
    printf("'%c' is digit: %i\n", str_isdigit, ft_isdigit(str_isdigit));
    printf("'%c' is digit: %i\n", str_isdigit2, ft_isdigit(str_isdigit2));
    printf("'%c' is digit: %i\n", str_isdigit3, ft_isdigit(str_isdigit3));
    printf("'%c' is digit: %i\n", str_isdigit4, ft_isdigit(str_isdigit4));
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

//ISPRINT TEST
    printf("***** ISPRINT TEST\n");
    char    str_isprint = ' ';
    char    str_isprint2 = '~';
    int     str_isprint3 = 25;
    int     str_isprint4 = 127;
    printf("'%c' is print: %i\n", str_isprint, ft_isprint(str_isprint));
    printf("'%c' is print: %i\n", str_isprint2, ft_isprint(str_isprint2));
    printf("'%c' is print: %i\n", str_isprint3, ft_isprint(str_isprint3));
    printf("'%c' is print: %i\n", str_isprint4, ft_isprint(str_isprint4));
    printf("END OF ISPRINT TEST *****\n\n");
//END ISPRINT TEST

//TOUPPER TEST
    printf("***** TOUPPER TEST\n");
    char    str_toupper = 'a';
    char    str_toupper2 = 'i';
    char    str_toupper3 = 'G';
    char    str_toupper4 = '7';
    printf("'%c' to upper case: '%c'\n", str_toupper, ft_toupper(str_toupper));
    printf("'%c' to upper case: '%c'\n", str_toupper2, ft_toupper(str_toupper2));
    printf("'%c' to upper case: '%c'\n", str_toupper3, ft_toupper(str_toupper3));
    printf("'%c' to upper case: '%c'\n", str_toupper4, ft_toupper(str_toupper4));
    printf("END OF TOUPPER TEST *****\n\n");
//END OF TOUPPER TEST

//TOLOWER TEST
    printf("***** TOLOWER TEST\n");
    char    str_tolower = 'A';
    char    str_tolower2 = 'I';
    char    str_tolower3 = 'g';
    char    str_tolower4 = '7';
    printf("'%c' to lower case: '%c'\n", str_tolower, ft_tolower(str_tolower));
    printf("'%c' to lower case: '%c'\n", str_tolower2, ft_tolower(str_tolower2));
    printf("'%c' to lower case: '%c'\n", str_tolower3, ft_tolower(str_tolower3));
    printf("'%c' to lower case: '%c'\n", str_tolower4, ft_tolower(str_tolower4));
    printf("END OF TOLOWER TEST *****\n\n");
//END OF TOLOWER TEST

//PUTS TEST
    ft_puts("***** PUTS TEST");
    char *c = NULL;
    char str_puts[] = "Hello World!";
    ft_puts(c);
    ft_puts(str_puts);
    ft_puts("Testing 123456789");
    ft_puts("END OF PUTS TEST *****\n");
    //printf("\nlength is %lu \n", ft_strlen("HEllo World !"));
//END OF PUTS TEST

//MEMSET TEST
    printf("***** MEMSET TEST\n");
    char str_mem[5];
    ft_memset(&str_mem, 'K', 5);
    printf("Set value 'K' 5 times: %s\n", str_mem);
    printf("END OF MEMSET TEST *****\n\n");
//END OF MEMSET TEST

//MEMCPY TEST
    printf("***** MEMCPY TEST\n");
    char    str_cpy[] = "HELLO";
    ft_memcpy(&str_mem, &str_cpy, 5);
    printf("Copied Memory to previous string : '%s'\n", str_mem);
    printf("END OF MEMCPY TEST *****\n\n");
//END OF MEMCPY TEST

//STRDUP TEST
    printf("***** STRDUP TEST\n");
    char    *str_strdup = "Hello Motto !";
    char    *str_duplicate;
    str_duplicate = ft_strdup(str_strdup);
    printf("Duplicated string %s\n", str_duplicate);
    //free (str_duplicate);
    printf("END OF STRDUP TEST *****\n\n");
//END OF STRDUP TEST

//CAT TEST
    printf("***** CAT TEST\n");
    printf("Catting 'test.txt':\n\n");
    int fd = open("text.txt", O_RDONLY);
    ft_cat(fd);
    printf("\n Catting STDIN\n");
    ft_cat(0);
    printf("END OF CAT TEST\n\n");
//END OF CAT TEST
}
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    char *str, *str1 = "I hate You bokka reyyyyyyyy";
    str = malloc(strlen(str1));
    strcpy(str,str1);
    printf("%s", str);
    free(str);
}



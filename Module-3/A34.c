// A34. Write a program to read data from file.
///r//fgetc
#include <stdio.h>
int main()
{
    FILE *ak;
    char c;
    ak=fopen("k11.txt","r");
    if(ak==NULL){
        printf("file is not Exist\n");
        return 0;
    }
    while((c=fgetc(ak))!=EOF){
        printf("%c",c);
    }
    fclose(ak);
    return 0;
}
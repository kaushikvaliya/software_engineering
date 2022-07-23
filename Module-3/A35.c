// A35. Write a program to read and write data from the file.
#include <stdio.h>
int main()
{

   FILE *kk;
   int code;
   char name[20], ch;
   kk = fopen("k.txt", "w");
   if (kk == NULL)
   {
      printf("Some Arror..");
      return 0;
   }

   printf("Enter code :");
   scanf("%d", &code);
   fprintf(kk, "code = %d\n", code);

   printf("Enter name :");
   scanf("%s", &name);
   fprintf(kk, "name = %s\n", name);

   fclose(kk);

   kk = fopen("k.txt", "r");
   if (kk == NULL)
   {
      printf("file is not Exist\n");
      return 0;
   }
   while ((ch = fgetc(kk)) != EOF)
   {
      printf("%c", ch);
   }
   fclose(kk);

   return 0;
}
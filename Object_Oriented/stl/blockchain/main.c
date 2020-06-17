#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str[20],str1[22];
    printf("ST Lukes!\n");

    FILE *fp;

    fp=fopen("blockchian.txt","a");
    fprintf(fp,"ST Lukes!\n");
    fprintf(fp,"\nEnter patient name:");
    printf("\nEnter patient name:");
    gets(str);
     fprintf(fp,"Enter patient address:");
    gets(str1);
    fputs(str,fp);
    fputs(str1,fp);
    fclose(fp);
    return 0;
}

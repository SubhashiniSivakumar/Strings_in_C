#include<stdio.h>
void stringConcatenate(char *str1, char*str2, char *str3);
int main()
{
    char str1[1000], str2[1000], str3[2000];
    scanf("%[^\n]s",str1);
    getchar();
    scanf("%[^\n]s",str2);
    stringConcatenate(str1, str2, str3);
    printf("%s",str3);
    return 0;
}
void stringConcatenate(char *str1, char*str2, char *str3)
{
    //your code starts here
   int i=0,j=0;
   while(str1[i]!='\0'){
       str3[i]=str1[i];
       i++;
   }
    str3[i++]=' ';
    
    while(str2[j]!='\0'){
        str3[i++]=str2[j++];
    }
   
   str3[i]='\0';
   
   
   
   
    //your code ends here
}

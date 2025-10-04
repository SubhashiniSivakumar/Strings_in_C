#include<stdio.h>
int countWords(char *str);
int main()
{
    char str[1000];
    scanf("%[^\n]s",str);
    printf("%d",countWords(str));
    return 0;
}
int countWords(char *str)
{
    //your code starts here
   
   int i,count=0;;
   for(int i=0;str[i]!='\0';i++){
       if(str[i]==' ' && str[i+1]!='\0' && str[i+1]!=' '){
           count++;
       }
   }
   if(str[0]!='\0'){
       count++;
   }
   return count;
   
    //your code ends here
}

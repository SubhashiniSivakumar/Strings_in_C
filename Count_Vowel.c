#include<stdio.h>
#define isVowel(ch) (ch=='a') || (ch=='e') || (ch=='i') || (ch=='o') || (ch=='u') || (ch=='A') || (ch=='E') || (ch=='I') || (ch=='O') || (ch=='U')
int countVowel(char *str);
int main()
{
    char str[1000];
    scanf("%[^\n]s",str);
    printf("%d",countVowel(str));
    return 0;
}
int countVowel(char *str)
{
    //your code starts here
    int count =0;
    while(*str!='\0'){
        if(isVowel(*str)){
            count++;
         
        }   
        str++;
        
      
    }
    //your code ends here
      return count;
}

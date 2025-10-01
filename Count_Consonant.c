#include<stdio.h>
#define isVowel(ch) (ch=='a') || (ch=='e') || (ch=='i') || (ch=='o') || (ch=='u') || (ch=='A') || (ch=='E') || (ch=='I') || (ch=='O') || (ch=='U')
int countConsonant(char *str);
int main()
{
    char str[1000];
    scanf("%[^\n]s",str);
    printf("%d",countConsonant(str));
    return 0;
}
int countConsonant(char *str)
{
    //your code starts here
    int count =0;
    while(*str!='\0'){
        if(((*str>='a' && *str<='z') || (*str>='A' && *str<='Z')) && !(isVowel(*str)))
             count++;
             
        str++;
    }
    return count;
    //your code ends here
}

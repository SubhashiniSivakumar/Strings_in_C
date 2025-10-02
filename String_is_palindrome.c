#include<stdio.h>
int isPalindrome(char *str);
void stringCopy(char *str1, char*str2)
{
    int index;
    for(index=0;str1[index];index++)
        str2[index]=str1[index];
    str2[index]='\0';
}
void strReverse(char *str)
{
    int start, end;
    char temp;
    for(end=0;str[end];end++);
    end--;
    start=0;
    while(start<end)
    {
        temp=str[start];
        str[start]=str[end];
        str[end]=temp;
        start++;
        end--;
    }
}
int stringCompare(char *str1, char*str2)
{
    while(*str1||*str2)
    {
        if(*str1!=*str2)
        {
            return 1;
        }
        else if ((*str1)&&(*str2)&&(*str1==*str2))
        {
            str1++;
            str2++;
        }
    }
    return 0;
}
int main()
{
    char str[1000];
    int result;
    scanf("%[^\n]s",str);
    result=isPalindrome(str);
    if(result==0)
        printf("Yes");
    else
        printf("No");
    return 0;
}
int isPalindrome(char *str)
{
    
    //your code starts here
    char temp[1000];
    stringCopy(str, temp);
    strReverse(str);
    return stringCompare(str, temp);
   
    //your code ends here
}

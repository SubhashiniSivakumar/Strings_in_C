#include<stdio.h>
int stringCompare(char *str1, char*str2);
int main()
{
    char str1[1000], str2[1000];
    int result;
    scanf("%[^\n]s",str1);
    getchar();
    scanf("%[^\n]s",str2);
    result=stringCompare(str1,str2);
    if(result==0)
        printf("Yes");
    else
        printf("No");
    return 0;
}
int stringCompare(char *str1, char*str2)
{
    //your code starts here
    
    while(*str1!='\0' && *str2!='\0'){
        if(*str1!=*str2)
            return 1;
            
        *str1++;
        *str2++;
    }
    
    if(*str1=='\0' && *str2=='\0'){
        return 0;
    }else{
        return 1;
    }
    //your code ends here
}

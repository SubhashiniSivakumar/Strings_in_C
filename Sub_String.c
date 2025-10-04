#include<stdio.h>
int searchString(char *str1, char*str2);
int main()
{
    char str1[1000], str2[1000];
    int result;
    scanf("%[^\n]s",str1);
    getchar();
    scanf("%[^\n]s",str2);
    result=searchString(str1, str2);
    if(result==0)
        printf("Yes");
    else
        printf("No");
    return 0;
}
int searchString(char *str1, char*str2)
{
    //your code start here
    if(strstr(str1 , str2)!=NULL){
        return 0;
    }else{
        return 1;
    }
    //your code ends here
}

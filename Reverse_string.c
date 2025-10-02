#include<stdio.h>
void strReverse(char *str);
int main()
{
    char str[1000];
    scanf("%[^\n]s",str);
    strReverse(str);
    printf("%s",str);
    return 0;
}
void strReverse(char *str)
{
    //your code starts here
    int i,j;
    char temp;
    
    for(i=0;str[i]!='\0';i++);
    j=i-1;
        
    for(i=0;i<j;i++,j--){
        temp=str[i];
        str[i]=str[j];
        str[j]=temp;
    }
    
    //your code ends here
}
    

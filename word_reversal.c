#include<stdio.h>
#include<string.h>
int main(){
    char str[101];
    scanf("%[^\n]s",str);
    int i,start=0,end,len;
    len=strlen(str);
    
    for(int i=0;i<=len;i++){
        if(str[i]==' ' || str[i]=='\0'){
            end=i-1;
        
        
        while(end>=start){
            printf("%c",str[end]);
            end--;
        }
        
        if(str[i]=' '){
            printf(" ");
        }
        start=i+1;
    }
    }
    return 0;
}

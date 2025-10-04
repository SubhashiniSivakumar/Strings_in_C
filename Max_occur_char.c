#include<stdio.h>
int main(){
    char str[101];
    int freq[26]={0};
    int max=0;
    char maxchar;
    
    scanf("%[^\n]s",str);
    
    for(int i=0;str[i]!='\0';i++){
        if(str[i]>='a' && str[i]<='z'){
            freq[str[i]-'a']++;
        }
    }
    
    for(int i=0;str[i]!='\0';i++){
        if(str[i]>='a' && str[i]<='z'){
           if(freq[str[i]-'a']>max){
               max=freq[str[i]-'a'];
               maxchar=str[i];
           }
       }
    }
    printf("%c:%d",maxchar,max);
    
    
}

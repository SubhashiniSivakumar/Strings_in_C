#include<stdio.h>
int main(){
    char str[101];
    int max=0;
    char maxchar;
    int freq[26]={0};
    
    scanf("%[^\n]s",str);
    
    for(int i=0;str[i]!='\0';i++){
        char ch=str[i];
        
        if(ch>='A' && ch<='Z'){
            ch=ch+('a'-'A');
        }
        
        if(ch>='a' && ch<='z'){
            freq[ch-'a']++;
        }
    }
    
    for(int i=0;str[i]!='\n';i++){
        char ch=str[i];
        
        if(ch>='A' && ch<='Z'){
            ch=ch+('a'-'A');
        }
        if(ch>='a' && ch<='z'){
            if(freq[ch-'a']>max){
                max=freq[ch-'a'];
                maxchar=ch;
            }
        }
    }
    printf("%c:%d",maxchar,max);
}

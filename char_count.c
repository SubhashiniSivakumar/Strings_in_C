#include<stdio.h>
int main(){
    char str[101];
    int freq[26]={0};
    int printed[26]={0};
    
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
    for(int i=0;str[i]!='\0';i++){
        char ch=str[i];
        
        if(ch>='A' && ch<='Z'){
            ch=ch+('a'-'A');
        }
        if(ch>='a' && ch<='z'){
            if(!printed[ch-'a']){
                printf("%c:%d\n",ch,freq[ch-'a']);
                printed[ch-'a']=1;
            }
        }
    }
    
    
    return 0;
    
}

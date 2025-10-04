#include<stdio.h>
int main(){
    char str[101];
    int seen[26]={0};
    int printed=0;
    int space_printed=0;
    
    scanf("%[^\n]s",str);
    for(int i=0;str[i]!='\0';i++){
        char ch=str[i];
        
        if(ch>='A' && ch<='Z'){
            ch=ch+('a'-'A');
        }
       if(ch==' '){
           continue;
       }

       if(ch>='a' && ch<='z'){
           if(!seen[ch-'a']){
               if(printed && !space_printed && str[i-1]==' '){
                   printf(" ");
                   space_printed=1;
               }
               printf("%c",ch);
               seen[ch-'a']=1;
               printed=1;
           }
       }else{
           printf("%c",ch);
       }
 
}
return 0;
}




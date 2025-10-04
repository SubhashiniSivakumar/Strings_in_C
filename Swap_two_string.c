#include<stdio.h>
void stringcopy(char *src,char *dest);
int main(){
    char str1[101],str2[101],temp[101];
    scanf("%[^\n]s",str1);
    getchar();
    scanf("%[^\n]s",str2);
    
    stringcopy(str1,temp);
    stringcopy(str2,str1);
    stringcopy(temp,str2);
    
 
    printf("%s\n",str1);
    printf("%s",str2);
    return 0;
    
}
    
    void stringcopy(char *src,char *dest){
        int i;
        for(i=0;src[i]!='\0';i++){
            dest[i]=src[i];
            
        }
        dest[i]='\0';
    }

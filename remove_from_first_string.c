#include<stdio.h>
#include<string.h>
int main(){
    char str1[101],str2[101],result[101];
    int i,j,k=0,found;
    scanf("%[^\n]",str1);
    getchar();
    scanf("%[^\n]",str2);
    
    for(int i=0;str1[i]!='\0';i++){
        found=0;
        for(int j=0;str2[j]!='\0';j++){
            if(str1[i]==str2[j]){
                found=1;
                break;
            }
        }
        if(found==0){
            result[k++]=str1[i];
        }
    }
    result[k]='\0';
    printf("%s",result);
    return 0;
}

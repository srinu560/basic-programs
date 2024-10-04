#include<stdio.h>
#include<math.h>
#include<string.h>
void main(){
    char str[200]="ram raj";
    scanf("%s",str);
    int n=pow(2,strlen(str));
    int i,j;
    for(int i=0;i<=n;i++){
        for(int j=0;j<=n;j++){
            //chech if the j th bit is set or not
            if(i&(1<<j))
                printf("%c",str[j]);
        }
        printf("\n");
    }
    
}
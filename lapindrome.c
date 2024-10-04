#include<stdio.h>
#include<string.h>
int main(){
    char str[20],count1[26];
    int i,j,n,mid;
    printf("Enter the string:\n");
    scanf("%s",str);
    n=strlen(str);
    mid=n/2;
    for(int i=0;i<n;i++){
        if(n%2!=0&&i==mid){
            continue;
        }
        count1[str[i]-'a']++;
        
    }
    for(int i=0;i<mid;i++){
        if(count1[str[i]-'a']!=2){
            printf("not a lapindrome");
            return 0;
    }}
    printf("lapindrome");
        
}
#include<stdio.h>
void main(){
    char str[20],max_ele;
    int count[26],max_count;
    scanf("%s",str);
    for(int i=0;i<strlen(str);i++){
        count[str[i]-'a']++;
    }
    max_ele='a';
    max_count=0;
    for(int i=0;i<26;i++){
        if(count[i]>max_count){
            max_count=count[i];
            max_ele='a'+i;
        }
    }
    printf("The max element is %c",max_ele);

}







/*#include<stdio.h>
#include<string.h>
void main()
{
    char str[100],temp[50];
    int i,count,j=0,cd[50],index;
    printf("enter the string:\n");
    scanf("%s",str);
    for(i=0;i<strlen(str);i++){
        count=0;
        for(int k=0;k<j;k++){
            if(str[i]==temp[k]){
                count++;
            }
        }
        if(count==0){
            temp[j++]=str[i];
        }
    }
    for(int i=0;i<j;i++){
        for(int l=0;l<strlen(str);l++){
            if(temp[i]==str[l]){
                cd[i]++;
            }
        }
    }
    for(int i=0;i<j;i++){
        printf(" %c=%d \n",temp[i],cd[i]);
    }
    index=0;
    for(int i=0;i<j;i++){
        if(cd[index]<=cd[i])
            index=i;
    }
    printf("The largest occured character is: %c",temp[index]);
    
}*/
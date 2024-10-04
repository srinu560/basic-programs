#include<stdio.h>
#include<string.h>
void main()
{
    int n;
    printf("Enter the size:\n");
    scanf("%d",&n);
    
    int names[n][20];
    int votes[n];
    printf("Enter the names of candidates:\n");
    for(int i=0;i<n;i++)
        scanf("%s",names[i]);
    
    printf("Enter the votes:\n");
    for(int i=0;i<n;i++)
        scanf("%d",&votes[i]);
        
    int max_votes=0;
    char max_can[20];
    for(int i=1;i<n;i++){
        if(votes[max_votes]<votes[i]){
            max_votes=i;
            
        }
    }
    
    strcpy(max_can,names[max_votes]);
    for(int i=0;i<n;i++){
        if(votes[max_votes]==votes[i]){
            if(strcmp(max_can,names[i])<0){
                strcpy(max_can,names[i]);
            }
        }
    }
    printf("%s",max_can);
        
}
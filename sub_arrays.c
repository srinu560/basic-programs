// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int a[]={1,2,3,4};
    int n=4,k=1;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            for(int k=i;k<=j;k++){
                printf("%d",a[k]);
            }
            printf("\n");
        }
        
    }
}
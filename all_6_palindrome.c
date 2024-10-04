
#include <stdio.h>

int is_palindrome(int n);

int main()
{
    int i,j,product,small_pal=999999;
    for(i=100;i<1000;i++){
        for(j=i;j<1000;j++){
            product=i*j;
            if(100000<=product && product<=999999 &&is_palindrome(product))
                {
                    printf("Smallest palindrome: %d = %d * %d\n", product, i, j);
                }
            
        }
    }
    return 0;
}

int is_palindrome(int n){
    int temp=n,r,sum=0;
    while(temp>0){
        r=temp%10;
        sum=sum*10+r;
        temp/=10;
    }
    if(sum==n)
        return 1;
    return 0;
}

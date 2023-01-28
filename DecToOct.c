#include <stdio.h>

void decToOct(int n){
    int rem[100],arr[100],i=0,j;
    while(n!=0){
        rem[i]=n%8;  //store remainder of n in rem variable
        n=n/8;
        i++;
    }
    for(j=i-1;j>=0;j--)
    {
        printf("%d",rem[j]);
    }
}

int main()
{
    int n,octal;
    printf("enter decimal number:");
    scanf("%d",&n);
    
    printf("\noctal equivalent of %d is:",n);
    decToOct(n);
    
    return 0;

}

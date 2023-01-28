#include <stdio.h>
#include<math.h>

int bintodec(long int n)
{
    int i=0,sum=0,rem=0;
    while(n>0)
    {
        rem=n%10;  //modules give last digit of resp binary no.
        sum=sum+rem*pow(2,i);   //rem value gets multiplied by the weight by pow function ie.2 to the power of 0 and so on...
        n=n/10;   //by dividing it gives quotient ie.adjacent remaining digits of binary no.
        i++;
    }
    return sum;
}

int main()
{
    long int n;
    printf("enter binary number:");
    scanf("%ld",&n);
    printf("decimal equivalent:%d",bintodec(n));
    return 0;
}

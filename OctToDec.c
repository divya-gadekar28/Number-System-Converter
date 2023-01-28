#include<stdio.h>
#include<math.h>

int octToDec(int n)
{
    int arr[100],i=0,sum,rem;
    while(n!=0)
    {
        rem=n%10;   //gives last digit 
        sum=sum+rem*pow(8,i);   //multiplies and add the digit with 8*power of 8
        n=n/10;   //gives next adjacent digit from last
        i++;    //increments the value of power from 0 to n
    }
    return sum;
}

int main()
{
    int num,i;
    printf("enter the octal number:");
    scanf("%d",&num);
   
    printf("\ndecimal equivalent:%d",octToDec(num));
    return 0;
}

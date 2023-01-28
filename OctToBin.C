// Online C compiler to run C program online
#include<stdio.h>
#include<math.h>

int decToBin(int n)
{
    int i=0,j,arr[100];
    while(n>0){
        arr[i]=n%2; //stores the remainder in array arr[]
        n=n/2;
        i++;
     }
     printf("\noctal to binary equivalent:");
     for(j=i-1;j>=0;j--){
         printf("%d",arr[j]);//inverse loop coz we need remainders in reverse order to get correct binary ans
     }
}
int octToDec(int n)
{
    int arr[100],i=0,rem,sum=0;
    while(n!=0)
    {
        rem=n%10;               //gives last digit
        sum=sum+rem*pow(8,i);   //multiplies last digit with 8*power of 8
        i++;                    //increment of power from 0 to n
        n=n/10;                 //gives next adjacent digit from last
    }
    decToBin(sum);
    return sum;
}


int main()
{
    int num,i,num2;
    printf("enter the octal number:");
    scanf("%d",&num);

    printf("\n octal to decimal equivalent:%d",octToDec(num));
    return 0;
}
    
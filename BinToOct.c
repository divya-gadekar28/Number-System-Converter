#include <stdio.h>
#include<math.h>

int binToDec(int n){
    int i=0,rem=0,sum=0;
    while(n>0){
        rem=n%10; //will give last 1 digits
        sum=sum+rem*pow(2,i); //rem value will get multiply by the weight of that value using pow
        n=n/10;  //will give next adjacent digit
        i++;
    }
    return sum;
}
int BinToOct(long int n)
{
    int octal=0,value,lastDigit,i=1;
    while(n!=0){
        lastDigit=n%1000;  //this will give last 3 digits of resp binary no.
        value=binToDec(lastDigit);  //will convert the last 3 digit to its decimal no.
        octal=octal+value*i;  //will add up the value of i to the above value
        i=i*10;   //will increment the value from tens to hundreds to thousands and so on....
        n=n/1000;  //will increment the next 3 digits to be converted to decimal
    }
    return octal;
}


int main()
{
    long int n;
    int octal;
    printf("enter binary number:");
    scanf("%ld",&n);
    octal=BinToOct(n);
    printf("\noctal equivalent of %ld is %d",n,octal);
    return 0;

}

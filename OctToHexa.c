#include<stdio.h>
#include<string.h>
#include<math.h>

int DecToHexa(int n)  //function to convert dec to hexa which in turns converts octal to hexa
{
    int i=0,rem=0,j;
    char hexa[100];
    while(n!=0){
        rem=n%16;
        if(rem<10){
            hexa[i]=rem+48;
        }
        else{
            hexa[i]=rem+55;
        }
        i++;
        n=n/16;
    } 
    printf("\nhexadecimal equivalent:");
    for(j=i-1;j>=0;j--){
        printf("%c",hexa[j]); 
    }
    return 0;
    
}

int octToDec(int n)  //function for octal to decimal
{
    int i=0,sum=0,rem;
    while(n!=0)
    {
        rem=n%10;   //gives last digit 
        sum=sum+rem*pow(8,i);   //multiplies and add the digit with 8*power of 8
        n=n/10;   //gives next adjacent digit from last
        i++;    //increments the value of power from 0 to n
    }
    DecToHexa(sum);  //this decimal value is then converted to hexa
    return sum;
}

int main(){
    int octnum;
    printf("enter octal number:");
    scanf("%d",&octnum);
    octToDec(octnum);
    return 0;
}
#include<stdio.h>
#include<math.h>


int BinToDec(int n){
    int i=0,rem,sum=0;
    while(n>0){
        rem=n%10;  //finds last digit
        sum=sum+rem*pow(2,i);   //multiplies this last digit with power of 2 and add it to remainder
        i++;   //increment in power of 2 from 0 to n
        n=n/10;    //gives next adjacent number
     }
     return sum;
    
}
int BinToHexa(int n){
    int i=0,rem=0,j;
    char hexa[100];
    while(n!=0){
        rem=n%16;   //finds remainders by dividing it by 16
        if(rem<10){
            hexa[i]=rem+48;   //if rem is between 0 to 9 then we add 48 
        }
        else{
            hexa[i]=rem+55;   //if rem is greater than 10 then we add 55 since after adding we get alphabets from A
        }
        i++;  //increments position of digit in an array hexa[]
        n=n/16;  //gives next adjacent digit to find its remainder
    } 
    printf("\nbinary to hexa:");
    for(j=i-1;j>=0;j--){
        printf("%c",hexa[j]);  //prints array in reverse order
    }
}
int main(){
    int num;
    int num2;
    printf("enter binary number:");
    scanf("%d",&num);
    num2=BinToDec(num);
    BinToHexa(num2);
    return 0;
}
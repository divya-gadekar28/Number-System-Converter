#include<stdio.h>
#include<math.h>

int DecToHexa(int n){
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
    printf("\ndecimal to hexa:");
    for(j=i-1;j>=0;j--){
        printf("%c",hexa[j]); 
    }
}
int main(){
    int num;
    printf("enter decimal number:");
    scanf("%d",&num);
    DecToHexa(num);
    return 0;
}
#include<stdio.h>

//Function to convert Decimal to Binary Coded Decimal(BCD).
void Dec_BCD(int n, int arr[]){
    int i = 3;
    while(n>0){
        arr[i] = n%2;  //stores the reminder in array
        n = n/2;
        i--;  //loop is in reverse since the '%' gives our required answer in reverse order.
    }
}
//funtion to convert decimal to excess-3 and then to its binary
void BCDtoEX3(int n,int arr[])
{
    int ex;
    int i = 3;
    ex=n+3;
    while(ex>0){
	arr[i] = ex%2;  //stores the reminder in array
	ex = ex/2;
	i--;
    }
}

void main(){
    int n;
//initialized w/ 0 otherwise when the bcd is only 3 or 2 digits rest of the array elmts will be garbage.
//Float data type is used because '%' operation returns value in float.
    int arr[4]={0,0,0,0};
    int i;
    printf("Enter decimal no.(1digit) ");
    scanf("%d",&n);
    if(n<10){  //Since BCD and EX-3 both require more than 5 bits to represent no. >9.
	printf("BCD equivalent is ");
	Dec_BCD(n,arr); // converts decimal to BCD.
	for(i=0;i<4;i++){
	    printf("%d",arr[i]);   //displays BCD result.
	}
	printf("\n");
	printf("Excess-3 equivalent is ");
	BCDtoEX3(n,arr);  //converts and displays Ex-3 result.
	for(i=0;i<4;i++)
	{
	    printf("%d",arr[i]);  //displays excess-3 result
	}
    }
    else{
	printf("\nERROR!!!The decimal number can't be represented in BCD and Excess-3 using only 4 bits.\n\n");
    }

    getch();
}
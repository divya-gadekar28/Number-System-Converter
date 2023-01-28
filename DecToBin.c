#include<stdio.h>

//Function to convert Decimal to Binary Coded Decimal(BCD).
void Dec_BCD(int n){
    int i=0,j;
    int arr[100];
    while(n>0){
        arr[i] = n%2;  //stores the reminder in array
        n = n/2;   //divides the next digit obtain from previous division
        i++;  //increment value of i in an array arr[]
    }
     for (int j = i - 1; j >= 0; j--)
        printf("%d",arr[j]);   //prints array values in reverse order
}
int main(){
    int n;
    int arr[100];
    int i;
    printf("Enter decimal no.");
    scanf("%d",&n); 
	// converts decimal to BCD.
	printf("\nBCD equivalent:");
	Dec_BCD(n);
return 0;
}


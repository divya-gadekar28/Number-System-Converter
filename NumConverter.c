#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>

//function to convert binary to decimal
int BinToDec(int n)
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
//function to convert binary to hexa
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
//function to convert binary to octal
int BinToOct(long int n)
{
    int octal=0,value,lastDigit,i=1;
    while(n!=0){
        lastDigit=n%1000;  //this will give last 3 digits of resp binary no.
        value=BinToDec(lastDigit);  //will convert the last 3 digit to its decimal no.
        octal=octal+value*i;  //will add up the value of i to the above value
        i=i*10;   //will increment the value from tens to hundreds to thousands and so on....
        n=n/1000;  //will increment the next 3 digits to be converted to decimal
    }
    return octal;
}
//function to convert decimal to binary
void DecToBin(int n){
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
//function to convert decimal to ex3
void BinToEx3(int n,int arr[])
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
//function to convert decimal to hexa
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
//function to convert decimal to octal
void DecToOct(int n){
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
//function to convert hexa to binary
int HexToBin(char n[100]){
        int i=0;
        printf("\nhexa to binary:");
    	while(n[i])
	    {
		switch(n[i]){
			case '0' : printf("0000");
				break;
			case '1' : printf("0001");
				break;
			case '2' : printf("0010");
				break;
			case '3' : printf("0011");
				break;
			case '4' : printf("0100");
				break;
			case '5' : printf("0101");
				break;
			case '6' : printf("0110");
				break;
			case '7' : printf("0111");
				break;
			case '8' : printf("1000");
				break;
			case '9' : printf("1001");
				break;
			case 'A' : printf("1010");
				break;
			case 'B' : printf("1011");
				break;
			case 'C' : printf("1100");
				break;
			case 'D' : printf("1101");
				break;
			case 'E' : printf("1110");
				break;
			case 'F' : printf("1111");
				break;
			case 'a' : printf("1010");
				break;
			case 'b' : printf("1011");
				break;
			case 'c' : printf("1100");
				break;
			case 'd' : printf("1101");
				break;
			case 'e' : printf("1110");
				break;
			case 'f' : printf("1111");
				break;
			default  : printf("\nInvalid Entry, Please Try Again %c",n[i]);
		    }
		i++;
	    }
}
//function to convert hexa to decimal
int HexToDec(char hexnum[]){
    long long decimalnumber;
    int i = 0, val, len;
    decimalnumber = 0;
    // Find the length of total number of hex digit
    len = strlen(hexnum);
    len--;
    for(i=0;hexnum[i] != '\0';i++) {
        // finding the equivalent decimal digit for each hexa decimal digit
        if (hexnum[i] >= '0' && hexnum[i] <= '9') {
            val = hexnum[i] - 48;
        }
        else if (hexnum[i] >= 'a' && hexnum[i] <= 'f') {
            val = hexnum[i] - 97 + 10;
        }
        else if (hexnum[i] >= 'A' && hexnum[i] <= 'F') {
            val = hexnum[i] - 65 + 10;
        }
        // final decimal number
        decimalnumber += val * pow(16, len);
        len--;
        
    }
    return decimalnumber;
}
//function to convert hexa to octal
int HexToOct(char hexnum[]){
    long long decimalnumber;
    int i = 0, val, len;
    decimalnumber = 0;
    // Find the length of total number of hex digit
    // finding the length of hexa decimal number
    len = strlen(hexnum);
    len--;
    for(i=0;hexnum[i] != '\0';i++) {
        // finding the equivalent decimal digit for each
        // hexa decimal digit
        if (hexnum[i] >= '0' && hexnum[i] <= '9') {
            val = hexnum[i] - 48;
        }
        else if (hexnum[i] >= 'a' && hexnum[i] <= 'f') {
            val = hexnum[i] - 97 + 10;
        }
        else if (hexnum[i] >= 'A' && hexnum[i] <= 'F') {
            val = hexnum[i] - 65 + 10;
        }
        // final decimal number
        decimalnumber += val * pow(16, len);
        len--;
        
    }
    printf("\noctal equivalent:");
    DecToOct(decimalnumber);
}
//function to convert octal to binary
int OctToBin(int n)
{
    int arr[100],i=0,rem,sum=0;
    while(n!=0)
    {
        rem=n%10;               //gives last digit
        sum=sum+rem*pow(8,i);   //multiplies last digit with 8*power of 8
        i++;                    //increment of power from 0 to n
        n=n/10;                 //gives next adjacent digit from last
    }
    printf("\nbinary equivalent:");
    DecToBin(sum);
    return sum;
}
//function to convert octal to decimal
int OctToDec(int n)
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

//function to convert octal to hexa by first converting oct ot dec and then dec to hexa
int DecToHexa1(int n)  //function to convert dec to hexa which then converts octal to hexa
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
int OctToDec1(int n)  //function for octal to decimal
{
    int i=0,sum=0,rem;
    while(n!=0)
    {
        rem=n%10;   //gives last digit 
        sum=sum+rem*pow(8,i);   //multiplies and add the digit with 8*power of 8
        n=n/10;   //gives next adjacent digit from last
        i++;    //increments the value of power from 0 to n
    }
    DecToHexa1(sum);  //this decimal value is then converted to hexa
    return sum;
}



int menu()
{
    int choice;
    printf("\n\n*****Number System Converter In C******");
    printf("\n---------Menu---------");
    printf("\n\n->->->BINARY<-<-<-");
    printf("\nPress 1:Binary to Decimal");
    printf("\nPress 2:Binary to Octal");
    printf("\nPress 3:Binary to Hexadecimal");
    printf("\n\n->->->DECIMAL<-<-<-");
    printf("\n\nPress 4:Decimal to Binary");
    printf("\nPress 5:Decimal to Octal");
    printf("\nPress 6:Decimal to Hexadecimal");
    printf("\nPress 7:Decimal to Excess3");
    printf("\n\n->->->HEXADECIMAL-<-<-");
    printf("\n\nPress 8:Hexadecimal to Decimal");
    printf("\nPress 9:Hexadecimal to Binary");
    printf("\nPress 10:Hexadecimal to Octal");
    printf("\n\n->->->OCTAL<-<-<-");
    printf("\n\nPress 11:Octal to Decimal");
    printf("\nPress 12:Octal to Binary");
    printf("\nPress 13:Octal to Hexadecimal");
    printf("\n\nPress 14:Exit");

    printf("\n\nEnter Your Choice:");
    scanf("%d",&choice);
    return(choice);
}
int main(){
    while(1){
        switch(menu()){

            case 1:;//binary to decimal
            int n;
            printf("enter binary number:");
            scanf("%d",&n);
            printf("decimal equivalent:%d",BinToDec(n));
            break;

            case 2:;//binary to octal
            long int n1;
            int octal;
            printf("enter binary number:");
            scanf("%ld",&n1);
            octal=BinToOct(n1);
            printf("\noctal equivalent of %ld is %d",n1,octal);
            break;

            case 3:;//binary to hexa
            long int num,num1;
            printf("enter binary number:");
            scanf("%ld",&num);
            num1=BinToDec(num);
            BinToHexa(num1);
            break;

            case 4:;//decimal to binary
            int n2;
            printf("Enter decimal no.");
            scanf("%d",&n2); 
	        printf("\nBCD equivalent:");
	        DecToBin(n2);
            break;

            case 5:;//DecToOct()
            int n3;
            printf("enter decimal number:");
            scanf("%d",&n3);
            printf("\noctal equivalent of %d is:",n3);
            DecToOct(n3);
            break;

            case 6:;//DecToHexa();
            int num2;
            printf("enter decimal number:");
            scanf("%d",&num2);
            DecToHexa(num2);
            break;

            case 7:;//DecToEx3();
            int n4;
            //initialized w/ 0 otherwise when the bcd is only 3 or 2 digits rest of the array elmts will be garbage.
            int arr[4]={0,0,0,0};
            int i;
            printf("Enter decimal no.(1digit) ");
            scanf("%d",&n4);
            if(n4<10){  //Since BCD and EX-3 both require more than 5 bits to represent no. >9.
	        printf("BCD equivalent is ");
	        DecToBin(n4); // converts decimal to BCD.
	        for(i=0;i<4;i++){
	            printf("%d",arr[i]);   //displays BCD result.
	        }
	        printf("\n");
	        printf("Excess-3 equivalent is ");
	        BinToEx3(n4,arr);  //converts and displays Ex-3 result.
	        for(i=0;i<4;i++)
	        {
	            printf("%d",arr[i]);  //displays excess-3 result
	        }
            }
            else{
	            printf("\nERROR!!!The decimal number can't be represented in BCD and Excess-3 using only 4 bits.\n\n");
            }
            break;

            case 8:;//HexToDec();
            char hexnum[100];
            printf("write Hexadecimal number:");
            scanf("%s",&hexnum);
            printf("Decimal number = %lld", HexToDec(hexnum));
            break;

            case 9:;//HexToBin();
            char hexNum1[100];
	        printf("Enter a hexadecimal number To Convet it into Binary : ");
	        scanf("%s",hexNum1);
	        HexToBin(hexNum1);
            break;

            case 10:;//HexToOct();
            char hexnum2[100];
            printf("enter hexadecimal number:");
            scanf("%s",&hexnum2);
            HexToOct(hexnum2);
            break;

            case 11:;//OctToDec();
            int num3;
            printf("enter the octal number:");
            scanf("%d",&num3);
            printf("\ndecimal equivalent:%d",OctToDec(num3));
            break;

            case 12:;//OctToBin();
            int num4;
            printf("enter the octal number:");
            scanf("%d",&num4);
            OctToBin(num4);
            break;

            case 13:;//OctToHex();
            int octnum;
            printf("enter octal number:");
            scanf("%d",&octnum);
            OctToDec1(octnum);
            break;
            
            case 14://to exit
            exit(1);
            break;
            
            default:printf("\nInvalid choice");
        }

    }
    return 0;
}


#include<stdio.h>
#include<string.h>
#include<math.h>

void decToOct(int n){
    int rem[100],arr[100],i=0,j;
    while(n!=0){
        rem[i]=n%8;  //store remainder of n in rem variable
        n=n/8;
        i++;
    }
    printf("\noctal equivalent:");
    for(j=i-1;j>=0;j--)
    {
        printf("%d",rem[j]);
    }
}

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
    decToOct(decimalnumber);
}


int main(){
    char hexnum[100],i;
    printf("enter hexadecimal number:");
    scanf("%s",&hexnum);
    HexToOct(hexnum);
}
#include <math.h>
#include <stdio.h>
#include <string.h>

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
int main(){
    char hexnum[100];
    printf("write Hexadecimal number:");
    scanf("%s",&hexnum);
    printf("Decimal number = %lld", HexToDec(hexnum));
    return 0;
}
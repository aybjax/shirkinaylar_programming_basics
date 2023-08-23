#include <stdio.h>

int main() {
    float num1;
    float num2;
    char sign;
    printf("enter first num: ");
    scanf("%f", &num1);
    printf("\nsign: ");
    scanf(" %c", &sign); 
    printf("\nenter second num: ");
    scanf("%f", &num2);
    
    if (sign == '+') {
        printf("\n Answer: %f\n", num1 + num2); 
    }  else if  (sign == '-') {
        printf("\n Answer: %f\n", num1 - num2); 
    } else if  (sign == '*') {
        printf("\n Answer: %f\n", num1 * num2); 
    } else if  (sign == '/') {
        printf("\n Answer: %f\n", num1 / num2); 
    } 
    else {
        printf("\n ERROR!\n");
    } 

    return 0;
}

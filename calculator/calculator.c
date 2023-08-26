#include <stdio.h>

int main() {
    double num1;
    double num2;
    char sign;
    printf("enter first num: ");
    scanf("%f", &num1);
    printf("\nsign: ");
    scanf(" %c", &sign); 
    printf("\nenter second num: ");
    scanf("%f", &num2);

    switch (sign)
    {
    case '+':
        printf("\n Answer: %f\n", num1 + num2);
        break;
    case '-':
        printf("\n Answer: %f\n", num1 - num2); 
        break;
    case '*':
        printf("\n Answer: %f\n", num1 * num2); 
        break;
    case '/':
        printf("\n Answer: %f\n", num1 / num2); 
        break;
    
    default:
        printf("\n ERROR!\n");
        exit(1);
    }
    
    // if (sign == '+') {
    //     printf("\n Answer: %f\n", num1 + num2); 
    // }  else if  (sign == '-') {
    //     printf("\n Answer: %f\n", num1 - num2); 
    // } else if  (sign == '*') {
    //     printf("\n Answer: %f\n", num1 * num2); 
    // } else if  (sign == '/') {
    //     printf("\n Answer: %f\n", num1 / num2); 
    // } 
    // else {
    //     printf("\n ERROR!\n");
    // } 

    return 0;
}

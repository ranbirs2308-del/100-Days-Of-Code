// Write a program to convert temperature from Celsius to Fahrenheit.
#include <stdio.h>
int main(){
    int cel;
    printf("How much is the tempreature (in celsius): ");
    scanf("%d", &cel);
    float fahrenheit = ((float)cel * 9/5) + 32;
    printf("Tempreature in fahrenheit is: %f", fahrenheit);
    return 0;
}

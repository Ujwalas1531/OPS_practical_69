#include <stdio.h>
int main() {    

    int number1, number2, number3 ,sum;
    
    printf("Enter two integers: ");
    scanf("%d %d", &number1, &number2, &number3);

    // calculate the sum
    sum = number1 + number2 + number3;      
    
    printf("%d + %d = %d", number1, number2, number3 sum);
    return 0;
}

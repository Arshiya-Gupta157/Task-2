//Swap two numbers without third variable

#include <stdio.h>

int main() {
	
    int a,b;

    printf("Enter first no.: ");
    scanf("%d", &a);
    printf("Enter second no.: ");
    scanf("%d", &b);
    
    a = a+b;
    b = a-b;
    a = a-b;
    
    printf("After swapping the value of first no. is %d and the value of second no. is %d", a,b);
    
    return 0;
}

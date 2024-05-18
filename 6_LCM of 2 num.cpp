//LCM of two numbers

#include <stdio.h>

int main() {
	
    int a,b,lcm;
    printf("Enter no.: ");
    scanf("%d%d", &a, &b);
    int i=1;
    for(i;i<= (a*b);i++){
    	if(i%a==0 && i%b==0){
    		printf("%d is the LCM of %d and %d",i,a,b);
    		break;
		}
	}

    return 0;
}

//SWAP TWO NUMBER WITHOUT THIRD VARIABLE.
#include<stdio.h>
#include<conio.h>
int main(){
	int a,b;
	printf("ENTER THE VALUE OF a:");
	scanf("%d",&a);
	printf("ENTER THE VALUE OF b:");
	scanf("%d",&b);
	printf("BEFORE SWAPPING : a=%d,b=%d\n",a,b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("AFTER SWAPPING : a=%d,b=%d\n",a,b);
	return 0;
	getch();
}
//A NUMBER IS POSITIVE OR NEGATIVE.
#include<stdio.h>
#include<conio.h>
int main(){
	int number;
	printf("ENTER THE NUMBER:");
	scanf("%d",&number);
	if(number%2==0)
	{
		printf("NUMBER IS EVEN");
	}
	else 
	{
		printf("NUMBER IS ODD");
	}
	getch();
	
}
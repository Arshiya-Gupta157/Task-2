#include<stdio.h>
#include<ctype.h>

int main(){
	char c;
	printf("ENTET THE CHARACTER:");
	scanf("%c",&c);
	if (isupper(c))
	{
		printf("THE CHARACTER IS UPPERCASE \n");
	}
	else if (islower(c))
	{
		printf("THE CHARACTER IS LOWERCASE \n");
	}
	else
	printf("THE CHARACTER IS SPECIAL CHARACTER \n");
	return 0;
}
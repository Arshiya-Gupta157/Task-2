//A No. is positive or negative
# include<stdio.h>

int main() {
   float a;
   printf("Enter the no.: ");
   scanf("%f",&a);
   if(a<0){
   	printf("The given no. is negative.\n");
   	}
   else if(a==0){
   	printf("The given no. is Zero.\n");
   	}
   else if(a>0){
   	printf("The given no. is positive.\n");
   }
   else{
   	printf("Enter a no.");         // Not working
   }
   
   // Method in which character value can also be identified

   printf("Enter the no.: ");

   if (scanf("%f", &a) == 1) {           // Scanf always return the no. of successfully assigned values... in this case it's 1 therefore, we are checking whether it's a float or a character
      if(a < 0) {
         printf("The given no. is negative.\n");
      }
      else if(a == 0) {
         printf("The given no. is Zero.\n");
      }
      else if(a > 0) {
         printf("The given no. is positive.\n");
      }
   }
   else {
      printf("Enter a valid no.\n");
   }

   return 0;
}

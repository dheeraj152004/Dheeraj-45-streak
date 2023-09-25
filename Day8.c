#include<stdio.h>

int main()
{
float num1, num2, result;
char op;
printf("Enter the first num");
scanf("%f",&num1);
printf("Enter the second num");
scanf("%f",&num2);
printf("Enter the sign you want give between them"),
scanf("%c",&op);

switch(op){
case('+'):
printf("Addtion of twa num is %f%f", num1 +num2) ;
break;
case('-'):
printf("Subtraction of two num is %f%f",num1-num2);
break;
case('*'):
printf("Multiplication of Two num is %f%f",num1*num2);
break;
case('/'):
printf("Division of two num 15 %f%f" ,num1 /num2 );
break;
}
    return 0;
}

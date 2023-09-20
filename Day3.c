/* Calculation of simple interest */
/* Author: gekay Date: 25/03/2021 */
# include <stdio.h>
int main(){
int p, n;
float r, si;
p=1000;
n=3;
r=8.5;
/* formula for simple interest*/
si=p*n*r/100;
printf("Principal(P)    =1000\n");
printf("Time(T)         =3 Years\n");
printf("Rate(R)         =8.5\n");
printf("Simple Interest=P×T×R/100\n");
printf ( "%f\n",si);
return 0;
}

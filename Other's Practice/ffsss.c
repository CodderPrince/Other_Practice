#include<stdio.h>
int main()
{
float numbers[5];
int i, p=0, n=0;
printf("Enter the 5 numbers:\n");
scanf("%f",&numbers[5]);

for(i=0; i<5; i++)
    {
if(numbers[i]>0)
{


p++;

}
else(numbers[i]<0)
{
n++;
}
    }
printf("\nNumber of positive numbers: %d",p);
printf("\nNumber of negative numbers: %d",n);
return 0;
}

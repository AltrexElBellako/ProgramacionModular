// Funcionamiento de un factorial
#include <stdio.h>
int factorial (int n)
{
	long int f;
	if(n==0)
	{
	       	f=1;
	}
	else
	{	
		f=n*factorial(n-1);
	}
	return f;
}
int main()
{
	int fact;
	int n;
	printf ("\nDame un numero: ");
	scanf("%d",&n);
	fact=factorial(n);
	printf("\nEl factorial es = %d \n",fact);
	return 0;
}

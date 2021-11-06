// printing of all arthematic operations
#include<stdio.h>
void main()
{
	int a,b,s,d,p,q,r;
	a = 11;
	b = 2;
	
	s = a+b;
	d = a-b;
	p = a*b;
	q = a/b;
	r = a%b;
	
	printf("Sum of %d and %d is %d\n\n",a,b,s);
	printf("Difference of %d and %d is %d\n\n",a,b,d);
	printf("Product of %d and %d is %d\n\n",a,b,p);
	printf("Quotient of %d and %d is %d\n\n",a,b,q);
	printf("Remainder of %d and %d is %d",a,b,r);
	
}

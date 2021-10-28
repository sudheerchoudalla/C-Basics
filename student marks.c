/* student marks */
#include<stdio.h>
void main()
{
	// variable declaration 
	int phy,che,mat,eng,tot;
	
	// initialization
	phy = 80;
	che = 60;
	mat = 72;
	eng = 82;

     // calculation
     tot = phy+che+mat+eng;
     
     // output 
     printf("marks in physics : %d\n", phy);
     printf("marks in chemistry : %i\n", che);
     printf("marks in maths : %i\n", mat);
     printf("marks in english : %i\n", eng);
     printf("total marks : %i", tot);
}

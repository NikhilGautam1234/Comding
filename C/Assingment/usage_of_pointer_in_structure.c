#include <stdio.h>
struct EmpAddress
{
char *ename;
char stname[20];
int pincode;
}
employee={"Shruti Sharma","Johrat,Assam \n",126101},*pt=&employee;

int main()
{
 	printf("\n\n Pointer : Show the usage of pointer to structure :\n");
	printf(" %s from %s \n\n",pt->ename,(*pt).stname);
	return 0;
}
#include<stdio.h>
struct student
{
	char name[20];
	int roll;
};
int main()
{
	struct student s1;
	s1.roll = 2;
	printf("%d",s1.roll);
	return 0;
}

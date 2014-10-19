#include<stdio.h>
#include<string.h>
struct tag{
	char lname[20];
	char fname[20];
	int age;
	float rate;
};
struct tag mystruct;
void show_name (struct tag *p);
int main(void)
{
	struct tag *ptr;
	ptr = &mystruct;
	strcpy(mystruct.lname,"Aggarwal");
	strcpy(mystruct.fname,"Lavish");
	printf("\n%s",mystruct.fname);
	printf(" %s\n",mystruct.lname);
	mystruct.age=21;
	show_name(ptr);
	return 0;
}
void show_name(struct tag *p)
{
	printf("\n%s", p->fname);
	printf(" %s\n", p->lname);
	printf("%d\n", p->age);
	
}

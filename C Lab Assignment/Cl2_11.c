#include<stdio.h>
int main()
{
	char grade;
	int rn,g;
	printf("enter the students rollnumber and average mark");
	scanf("%d%d",&rn,&g);
	if(g>=85)
	{
		grade='A';
		printf("student with rollnumber %d has pass with grade %c",rn,grade);
	}
	else if(g>=60 && g<85)
	{
		grade='B';
		printf("student with rollnumber %d has pass with grade %c",rn,grade);
	}
	else if(g>=50 && g<60)
	{
		grade='c';
		printf("student with rollnumber %d has pass with grade %c",rn,grade);
	}
	else
	{
		grade='D';
		printf("student with rollnumber %d has fail with grade %c",rn,grade);
	}
	return 0;
}

#include<stdio.h>
int main()
{
	int tm,chk;
	char grd;
	printf("enter total mark");
	scanf("%d",&tm);
	chk=tm/10;
	if(tm==100)
	{
		printf("grade of the student is O");
		return 0;
	}
	else if(tm>=35 && tm<=39)
	{
		printf("grade of the student is D");
		return 0;
	}
	switch(chk)
	{
		case 9:
			grd='O';
		break;
		case 8:
			grd='E';
		break;
		case 7:
			grd='A';
		break;
		case 6:
			grd='B';
		break;
		case 5:
			grd='C';
		break;
		case 4:
			grd='D';
		break;
		default:
			grd='F';	
	}
	printf("grade of the student is %c",grd);
	return 0;
}

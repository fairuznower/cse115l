#include <stdio.h>
int main()
{
	int age;
	int cnt_adult=0;
	int count=0;

	while(count<15)
	{
		printf("Enter age of person [%d]: ",count+1);
		scanf("%d",&age);

		if(age>=40 && age<=60)

			cnt_adult++;

		count++;
	}


        printf("\n\nAge between 40 and 60: %d\n",cnt_adult);
	return 0;
}
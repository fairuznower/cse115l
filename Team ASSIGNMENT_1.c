#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>

int main()
{
	int h1, h2, m1, m2, minutes;

	printf("Enter the time in h1 m1 h2 m2 format and put 0 0 0 0 to quit. \n");
	
	while (1) {
		scanf("%d %d %d %d", &h1, &m1, &h2, &m2);

		if (h1 == 0 && h2 == 0 && m1 == 0 && m2 == 0) {
			break;
		}

		if (h1 < 0 || h1 > 23 || h2 < 0 || h2 > 23 || m1 < 0 || m1 > 59 || m2 < 0 || m2 > 59) {
			printf("Invalid Input! Try again. \n");
			continue;
		}


		if (m1 > m2) {
			m2 += 60;
			h2--;
		}

		if (h1 > h2)
			h2 += 24;

		minutes = (h2 - h1) * 60 + m2 - m1;

		printf("%d %d %d %d -------- %d\n", h1, m1, h2, m2, minutes);
	}

	return 0;
}
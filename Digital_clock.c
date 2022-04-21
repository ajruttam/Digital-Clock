#include <stdio.h>
#include <unistd.h>
int main()
{
	int hour, minute, second;
	char c1,c2;
	printf("Enter the time to set in HH:MM:SS (24-hour-format): ");
	scanf("%d %c %d %c %d",&hour,&c1,&minute,&c2,&second);
	if (hour >= 0 && hour < 24 && minute >= 0 && minute < 60 && second >= 0 && second < 60)
	{
		while (true)
		{
			second++;
			if (second > 59)
			{
				minute++;
				second = 0;
			}
			if (minute > 59)
			{
				hour++;
				minute = 0;
			}
			if (hour > 23)
			{
				printf("The new day has started\n");
				hour = 0;
			}
			printf("%02d:%02d:%02d",hour,minute,second);
			sleep(1);
			printf("\r");
		}
	}
	else printf("Entered an invalid time");
	return 0;
}


extern int seconds;
extern int minutes;
extern int hours;

void counter()
{
	if(seconds == 59)
	{
		seconds = 0;
		if(minutes == 59)
		{
			minutes = 0;
			if (hours == 23)
				hours = 0;
			else
				hours = hours + 1;
		}
		else
			minutes = minutes + 1;
	}
	else
		seconds = seconds + 1;
	return;
}
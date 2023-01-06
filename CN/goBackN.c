#include<stdio.h>
int main()
{
	int windowsize,sent=0,ack,i;
	printf("enter window size\n");
	scanf("%d",&windowsize);
	while(1)
	{
		for( i = 0; i < windowsize; i++)
			{
				printf("Frame %d has been transmitted.\n",sent);
				sent++;
				if(sent == windowsize)
					break;
			}
			printf("\nPlease enter the last Acknowledgement received.\n");
			scanf("%d",&ack);
			
			if(ack == windowsize)
				break;
			else
				sent = ack;
	}
return 0;
}

output:-
enter window size
8
Frame 0 has been transmitted.
Frame 1 has been transmitted.
Frame 2 has been transmitted.
Frame 3 has been transmitted.
Frame 4 has been transmitted.
Frame 5 has been transmitted.
Frame 6 has been transmitted.
Frame 7 has been transmitted.

Please enter the last Acknowledgement received.
2
Frame 2 has been transmitted.
Frame 3 has been transmitted.
Frame 4 has been transmitted.
Frame 5 has been transmitted.
Frame 6 has been transmitted.
Frame 7 has been transmitted.

Please enter the last Acknowledgement received.
8

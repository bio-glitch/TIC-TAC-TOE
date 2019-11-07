#include<stdio.h>
main()
{
	char choice1, choice2;
	int i,j,count=0,x=0,y=0,flag=1,move=1,a[8],p1,p2,k,d=0,position;
	for(i=0;i<9;i++)
	{
		a[i]=3;
	}
	printf("welcome to TIC TAC TOE world\n");
	printf("for reference to players\n");
	printf("____________\n");
	printf("| a[0] | a[1] | a[2] |\n");
	printf("|______|______|______|\n");
	printf("| a[3] | a[4] | a[5] |\n");
	printf("|______|______|______|\n");
	printf("| a[6] | a[7] | a[8] |\n");
	printf("|______|______|______|\n");
	while(flag==1)
	{
		printf("enter x or y for player1\n");
		scanf("%c",&choice1);
		if(choice1=='X'||choice1=='x'||choice1=='O'||choice1=='o')
		flag=0;
		else
		{flag=1;
		printf("invalid choice\n");
	}
	}
	if(choice1=='X'||choice1=='x')
	{choice2='O';
	}
	else
	{
		choice2='x';
	}
	printf("player2 choice is %c\n",choice2);
	if(choice1=='X'||choice1=='x')
	{
		p1=1;
		p2=0;
	}
	else
	{
		p1=0;
		p2=1;
	}
	while(move<3)
	{
		count=0;
		if(move==1)
		{
			printf("player1 enter position\n");
			scanf("%d",& position);
			if(a[position]==3)
			{
				a[position]=p1;
				k=0;
				for(i=0;i<3;i++)
				{
					for(j=0;j<3;j++)
					{
						if(a[k]==3)
						printf("\t-");
						if(a[k]==1)
						printf("\tX");
						if(a[k]==0)
						printf("\tO");
						k++;
					}
					printf("\n");
				}
				if((a[0]==p1&&a[1]==p1&&a[2]==p1)||(a[3]==p1&&a[4]==p1&&a[5]==p1)||(a[6]==p1&&a[7]==p1&&a[8]==p1)||(a[0]==p1&&a[3]==p1&&a[6]==p1)||(a[1]==p1&&a[4]==p1&&a[7]==p1)||(a[2]==p1&&a[5]==p1&&a[8]==p1)||(a[0]==p1&&a[4]==p1&&a[8]==p1)||(a[2]==p1&&a[4]==p1&&a[6]==p1))
				{
					printf("player1 wins\n");
					x=1;
					printf("thank you for playing\n");
					move=3;
					break;	
					
					
				}
				else
				{
					move=2;
				}
			}
			else
			{
				printf("the place is not empty enter another position\n");
				move=1;			
			}
		}
		for(i=0;i<9;i++)
		{
			if(a[i]==3)
			{
				count++;
			}
			if(count==0)
			{
				move=3;
				break;
			}
		}	
				
			
	
		if(move==2)
		{
			printf("enter palyer2 position\n");
			scanf("%d",&position);
			if(a[position]==3)
			{
				a[position]=p2;
				k=0;
				for(i=0;i<3;i++)
				{for(j=0;j<3;j++)
					{
						if(a[k]==3)
						printf("\t-");
						if(a[k]==1)
						printf("\tX");
						if(a[k]==0)
						printf("\tO");
						k++;
					}
				printf("\n");
				}
				if((a[0]==p2&&a[1]==p2&&a[2]==p2)||(a[3]==p2&&a[4]==p2&&a[5]==p2)||(a[6]==p2&&a[7]==p2&&a[8]==p2)||(a[0]==p2&&a[3]==p2&&a[6]==p2)||(a[1]==p2&&a[4]==p2&&a[7]==p2)||(a[2]==p2&&a[5]==p2&&a[8]==p2)||(a[0]==p2&&a[4]==p2&&a[8]==p2)||(a[2]==p2&&a[4]==p2&&a[6]==p2))
				{
					printf("player2 wins\n");
					y=1;
					printf("thank you for playing\n");
					move=3;	
					break;
							
				}
				else
				{
					move=1;
				}
			}
			else
			{
				printf("the place is not empty enter another position\n");
				move=2;
			}
	
		}
	}
	if(x!=1&&y!=1)
	{
		printf("draw match\n");
		printf("thank you for playing\n");
	}
}



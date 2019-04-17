#include<stdio.h>
struct proc
{
	int processid;
	int worsttime;
	int arrivaltime;
	int ct;
}*ptr,*max=NULL,*secondmax=NULL;


//void fun()


int main()
{
	proc p[3];
	printf("enter 3 process u want to enter\n");
	for(int i=0;i<3;i++)
	{
		printf("enter %d pocess id\n",i+1);
		scanf("%d",&p[i].processid);
		printf("enter worsttime for 1st process\n");
		scanf("%d",&p[i].worsttime);
	}
	
	
while(p[0].worsttime!=0 || p[1].worsttime!=0 || p[2].worsttime!=0)	
{
	if(p[0].worsttime>=p[1].worsttime && p[0].worsttime>=p[2].worsttime)
		{
			if( p[0].worsttime==p[1].worsttime && p[0].worsttime==p[2].worsttime )
			{
				if(p[0].processid<p[1].processid && p[0].processid<p[2].processid)
				{
					printf("%d",p[0].processid);
					p[0].worsttime--;
				}
				else if(p[1].processid<p[2].processid)
				{
					printf("%d",p[1].processid);
					p[1].worsttime--;
				}
				else
				{
					printf("%d",p[2].processid);
					p[2].worsttime--;
				}
			}
			
		  else if(p[1].worsttime > p[2].worsttime)
			{
				while(p[0].worsttime!=p[1].worsttime)
				{
					printf("%d",p[0].processid);
					p[0].worsttime--;
				}
			}
			else
			{
				while(p[0].worsttime!=p[2].worsttime)
				{
					printf("%d",p[0].processid);
					p[0].worsttime--;
				}
			}
		}
		
		else if(p[1].worsttime >= p[2].worsttime )
		{
			if(p[1].worsttime==p[2].worsttime)
			{
				if(p[1].processid<p[2].processid)
				{
					printf("%d",p[1].processid);
					p[1].worsttime--;
				}
				else
				{
					printf("%d",p[2].processid);
					p[2].worsttime--;
				}
			}
			else
			{
			while(p[1].worsttime!=p[2].worsttime)
			{
				printf("%d",p[1].processid);
				p[1].worsttime--;
			}
		    }
		}
		
		else if(p[2].worsttime>p[1].worsttime)
		{
			while(p[2].worsttime!=p[1].worsttime)
			{
				printf("%d",p[2].processid);
				p[2].worsttime--;
			}
		}
}

printf("\n%d\n%d\n%d",p[0].worsttime,p[1].worsttime,p[2].worsttime);
		
		
}

	




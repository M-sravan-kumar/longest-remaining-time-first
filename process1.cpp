#include<stdio.h>
struct proc
{

	int ct;
	int tat;
	int wt;
	int arrivaltime;
	int processid;
	int bursttime;

};

//void fun()

int main()
{
	int l[3];
	float avgtat=0, avgwt=0;
	proc p[3]={0,0,0};
	printf("enter 3 processes \n");
	for(int i=0;i<3;i++)
	{
		printf("enter %d  process id\n",i+1);
		scanf("%d",&p[i].processid);
		printf("enter %d  process arrival time\n",i+1);
		scanf("%d",&p[i].arrivaltime);
		printf("enter bursttime for %d  process\n",i+1);
		scanf("%d",&p[i].bursttime);
	}
	
	for(int i=0;i<3;i++)
	{
		l[i]=p[i].bursttime;
	}
	

int time=0;
	
while(p[0].bursttime!=0 || p[1].bursttime!=0 || p[2].bursttime!=0)	
{
	if(p[0].bursttime>=p[1].bursttime && p[0].bursttime>=p[2].bursttime)
		{
			if(p[0].bursttime>p[1].bursttime && p[0].bursttime>p[2].bursttime)
			{
				printf("%d",p[0].processid);
				p[0].bursttime--;
				time++;
				p[0].ct=time;
				
			}
			else if(p[0].bursttime==p[1].bursttime && p[0].bursttime!=p[2].bursttime )
			{
				if(p[0].processid<p[1].processid)
				{
			    printf("%d",p[0].processid);
				p[0].bursttime--;
				time++;
				p[0].ct=time;	
			    }
			    else
			    {
			    printf("%d",p[1].processid);
				p[1].bursttime--;
				time++;
				p[1].ct=time;	
				}
			}
			else if(p[0].bursttime!=p[1].bursttime && p[0].bursttime==p[2].bursttime)
			{
				if(p[0].processid>p[2].processid)
				{
				printf("%d",p[0].processid);
				p[0].bursttime--;
				time++;
				p[0].ct=time;
			    }
			    else
			    {
				printf("%d",p[2].processid);
				p[2].bursttime--;
				time++;
				p[2].ct=time;
				}
			}
			else if( p[0].bursttime==p[1].bursttime && p[0].bursttime==p[2].bursttime )
			{
				if(p[0].processid<p[1].processid && p[0].processid<p[2].processid)
				{
					printf("%d",p[0].processid);
					p[0].bursttime--;
					time++;
					p[0].ct=time;
					
				}
				else if(p[1].processid<p[2].processid)
				{
					printf("%d",p[1].processid);
					p[1].bursttime--;
					time++;
					p[1].ct=time;
				}
				else
				{
					printf("%d",p[2].processid);
					p[2].bursttime--;
					time++;
					p[2].ct=time;
				}
			}
			
		  else if(p[1].bursttime > p[2].bursttime)
			{
				while(p[0].bursttime!=p[1].bursttime)
				{
					printf("%d",p[0].processid);
					p[0].bursttime--;
					time++;
					p[0].ct=time;
					
				}
			}
			else
			{
				while(p[0].bursttime!=p[2].bursttime)
				{
					printf("%d",p[0].processid);
					p[0].bursttime--;
					time++;
					p[0].ct=time;
				}
			}
		}
		
		
		else if(p[1].bursttime >= p[2].bursttime )
		{
			if(p[1].bursttime==p[2].bursttime)
			{
				if(p[1].processid<p[2].processid)
				{
					printf("%d",p[1].processid);
					p[1].bursttime--;
					time++;
					p[1].ct=time;
				}
				else
				{
					printf("%d",p[2].processid);
					p[2].bursttime--;
					time++;
					p[2].ct=time;
				}
			}
			else
			{
			while(p[1].bursttime!=p[2].bursttime)
			{
				printf("%d",p[1].processid);
				p[1].bursttime--;
				time++;
				p[1].ct=time;
			}
		    }
		}
		
		else if(p[2].bursttime>p[1].bursttime)
		{
			while(p[2].bursttime!=p[1].bursttime)
			{
				printf("%d",p[2].processid);
				p[2].bursttime--;
				time++;
				p[2].ct=time;
			}
		}

}

for(int i=0;i<3;i++)
{
   p[i].tat=p[i].ct-p[i].arrivaltime;	
}
 for(int i=0;i<3;i++)
{
   p[i].wt=p[i].tat-l[i];	
}
printf("\n\n");
	
printf("PID: \t");
printf("AT\t");
printf("BT\t");
printf("CT\t");		
printf("TAT\t");		
printf("WT\t");		

printf("\n");

	for(int i=0;i<3;i++)
    {
    	printf("%d\t",p[i].processid);
    	printf("%d\t",p[i].arrivaltime);
    	printf("%d\t",l[i]);
    	printf("%d\t",p[i].ct);
    	printf("%d\t",p[i].tat);
    	printf("%d\t",p[i].wt);
    	
    	printf("\n");
	}  

printf("\n\n");		
	for(int i=0;i<3;i++)
	{
	   avgtat+=p[i].tat;
	   avgwt+=p[i].wt;	
	}	
	
	avgtat=avgtat/3;
	avgwt=avgwt/3;
	
	printf("average turnaround time is : %.2f\n",avgtat);
	printf("average waiting time is : %.2f",avgwt);	
}

	







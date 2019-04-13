#include<stdio.h>
struct proc
{
	int processid;
	int worsttime;
	int arrivaltime;
	int ct;
};




int main()
{
	int n;
	printf("enter how many process u want to enter\n");
	scanf("%d",&n);
	proc p[n];
	for(int i=0;i<n;i++)
	{
		printf("enter %d pocess id\n",i+1);
		scanf("%d",&p[i].processid);
		printf("enter worsttime for 1st process\n");
		scanf("%d",&p[i].bursttime);
		printf("enter arrival time\n");
		scanf("%d",&p[i].arrivaltime);
	}
	
	while(p[0]!=0 && p[1]!=0 && p[2]!=0)
	{ 
     
    proc max=p[0];
	int l=p.length;
	for(int i=0;i<l;i++)
	{
	if(max.worsttime<p[i].worsttime)
	{
	max=p[i];
    }
	}
	
	for(i=0;i<n;i++)
	{
		if(max==p[i])
		{
			p[i].worsttime--;
			break;
		}
	}
	
	for(i=0;i<n;i++)
	{
		if(max!=p[i].worsttime)
		{
			max.worsttime--;
		}
	}
	
	
}




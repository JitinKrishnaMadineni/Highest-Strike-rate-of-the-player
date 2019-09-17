#include<stdio.h>
#include<string.h>
struct cricketer
{
	char name[20];
	int runs;
	int balls;
	double strike_rate;
};
int main()
{
	int n,i,max=0;
	printf("\nenter number of players");
	scanf("%d",&n);
	struct cricketer c[n];
	char name2[20],name3[20];
	for(i=0;i<n;i++)
	{
	printf("\nenter name of the player ");
	scanf("%s",name2);
	strcpy(c[i].name,name2);
	printf("\nenter runs scored by the player");
	scanf("%d",&c[i].runs);
	printf("\nenter balls faced by the player");
	scanf("%d",&c[i].balls);
	c[i].strike_rate=(100*c[i].runs)/c[i].balls;
	}
	for(i=0;i<n;i++)
	{
		if(c[i].strike_rate>max)
		{
			max=c[i].strike_rate;
			strcpy(name3,c[i].name);
		}
		
	}
	printf("\nname of the person with highest strike rate is %s with strike rate %d",name3,max);
}


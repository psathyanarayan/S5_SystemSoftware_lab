#include<stdio.h>
#include<stdlib.h>
int main()
{
	int dq[50],head,i,n,st,diff;
	st = 0;
	printf("Enter the size of the queue\n");
	scanf("%d",&n);
	printf("Enter the head\n");
	scanf("%d",&head);
	dq[0] = head;
	printf("Enter the elements of the disk queue\n");
	for(i=1;i<=n;i++)
	{
	       scanf("%d",&dq[i]); 
        }
        for(i=0;i<n;i++)
        {
                diff = abs(dq[i+1]-dq[i]);
                st+=diff;
                printf("%d to %d with seek time %d\n",dq[i],dq[i+1],diff);
                
        }
        printf("%d",st);
        
}

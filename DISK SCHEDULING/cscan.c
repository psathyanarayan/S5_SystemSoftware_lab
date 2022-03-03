#include<stdio.h>
#include<stdlib.h>
void *sort(int *dq, int n);
void *cscan(int *dq,int n,int head);
int pos,current,i,j,temp,diff,st;
int main()
{
        int head,n,*dq;
        printf("Enter the size of the queue\n");
        scanf("%d",&n);
        printf("Enter the head \n");
        scanf("%d",&head);
        dq[0] = 0;
        dq[n+2] = 199;
        dq[1] = head;
        printf("Enter the elements of the queue \n");
        for(i=2;i<n+2;i++)
        {
               scanf("%d",&dq[i]); 
        }
        sort(dq,n+2);
        cscan(dq,n+2,head);
}

void *cscan(int *dq,int n,int head)
{
        for(i=0;i<n;i++)
        {
                if(dq[i] == head)
                {
                        pos = i;
                }
        }
        
        for(i=pos;i<n;i++)
        {
                diff = abs(dq[i+1] - dq[i]);
                st += diff;
                printf("%d to %d in %d sec\n",dq[i],dq[i+1],diff);
        }
        current = i;
        
        for(i=0;i<pos;i++)
        {
                diff = abs(dq[current]-dq[i]);
                st+=diff;
                 printf("%d to %d in %d sec\n",dq[current],dq[i],diff);
                 current = i;
        }
        printf("\n\n%d",st);
}

void *sort(int *dq, int n)
{
        for(i=0;i<n-1;i++)
        {
                for(j=0;j<n-1-i;j++)
                {
                        if(dq[j+1]<dq[j])
                        {
                             temp = dq[j+1];
                             dq[j+1] = dq[j];
                             dq[j] = temp;  
                        }
                }
        }
}

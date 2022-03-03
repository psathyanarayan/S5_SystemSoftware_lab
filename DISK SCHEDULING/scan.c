#include<stdio.h>
#include<stdlib.h>
//98 183 41 122 14 124 65 67
void *sort(int *dq,int n);
void *scan(int *dq,int n,int head);
int st,diff;
int main()
{
        int *dq,i,n,head;
        st =0;
        printf("Enter the size of the queue\n");
        scanf("%d",&n);
        dq[0] = 0;
        dq[n+2] = 199;
        printf("Enter the head\n");
        scanf("%d",&head);
        dq[1] = head;
        printf("Enter the elements of the queue\n");
        for(i=2;i<n+2;i++)
        {
                scanf("%d",&dq[i]);
        }
        sort(dq,n+2);
        scan(dq,n+2,head);
        for(i=0;i<=n+2;i++)
                printf(" %d ",dq[i]);
        
}

void *scan(int *dq,int n,int head)
{
        int i,pos,current;
        for(i=0;i<n;i++)
        {
                if(dq[i] == head)
                {
                        pos = i;
                }
        }
        for(i=pos;i<n;i++)
        {
               diff = abs(dq[i+1]-dq[i]);
               st+=diff;
               printf("%d to %d with seek time %d\n",dq[i],dq[i+1],diff); 
        }
        current = i;
        //printf("\n%d\n",dq[current]);
        diff = 0;
        for(i=pos-1;i>0;i--)
        {
                diff = abs(dq[current]-dq[i]);
               // printf("\n\n->%d\n\n",dq[i]);
                st+=diff;
                printf("%d to %d with seek time %d\n",dq[current],dq[i],diff);
                current = i;
        }
        printf("\n\n%d",st);        
}

void *sort(int *dq,int n)
{
        int i,j,temp;
        for(i=0;i<n-1;i++)
        {
                for(j=0;j<n-1-i;j++)
                {
                    if(dq[j+1] < dq[j])
                    {
                        temp = dq[j+1];
                        dq[j+1] = dq[j];
                        dq[j] = temp;
                    }    
                }
        }
}

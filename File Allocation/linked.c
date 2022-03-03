#include<stdio.h>
#include<stdlib.h>
int main()
{
        int i,f[50],st,len,p,a;
        char ch;
        for(i=0;i<50;i++)
                f[i] = 0;
      
                printf("Enter the block to be allocated\n");
                scanf("%d",&p);
                
                if(p!=0)
                {
                        
                        for(i=0; i<p; i++)
                        {
                                
                                scanf("%d",&a);
                                f[a] = 1;
                        }
                }
                else
                {
                        printf("No blocks allocated\n");
                        
                }
          do
          {
                printf("Enter the starting\n");
                scanf("%d",&st);
                printf("Enter the length\n");
                scanf("%d",&len);
                for(i=st;i<(st+len);i++)
                {
                        if(f[i] == 0)
                        {
                                f[i] = 1;
                                printf("%d -> %d\n",i,f[i]);
                        }
                        else
                        {
                                printf("Block already allocated\n");
                        }
                }
                printf("Do you want to enter more (y/n)");
                        scanf(" %c",&ch);
        }while(ch == 'Y'|| ch=='y');
}

include<stdio.h>
#include<time.h>
#include<stdlib.h>
int main()
{
        int nf,N,j;
        int tr=0;
        srand(time(NULL));
        printf("enter the number of frames:");
        scanf("%d",&nf);
        printf("Enet the window size : ");
        scanf("%d",&N);
        int i=1;
        while(i<=nf)
        {
                int x=0;
                for(j=i;j<i+N && j<=nf;j++)
                {
                        printf("Sent Frame %d \n", j);
                        tr++;
                }
        for (j=i;j<i+N && j<=nf;j++)
        {
                int flag = rand()%2;
                if(!flag)
                {
                        printf("%d : Acknowledged! \n", j);
                        x++;
                }
                else
                {
                        printf("Frame %d Not Received \n", j);
                        printf("Retransmitting Window \n");
                        break;
                }
        }

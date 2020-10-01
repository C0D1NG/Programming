#include <stdio.h>

int main()
{
    int num;
    printf("Enter the number of Processes: ");
    scanf("%d",&num);
    printf("\n");

    int p[num];
    int t[num];
    int temp[num];

    int wait[num];
    int turn[num];

    for(int i=0;i<num;i++){
        printf("Enter the name of Process P: ");
        scanf("%d",&p[i]);

        printf("Enter the Burst Time: ");
        scanf("%d",&t[i]);
       
        temp[i] = t[i];

        printf("\n");

        wait[i] = 0;
        turn[i] = 0;
    }

    int quant;
    printf("Enter the time quantum: ");
    scanf("%d",&quant);

    int flag = num;
    int timer = 0;
    while(flag!=0){

        for(int i=0;i<num;i++){
            if(temp[i]==0){
                continue;
            }
           
            if(temp[i]>quant){
                temp[i]-=quant;
                timer+=quant;
            }
            else if(temp[i]==quant){
                temp[i] = 0;
                timer+=quant;
                flag-=1;
               
                turn[i] = timer;
                wait[i] = turn[i] - t[i];
            }
            else if(temp[i]<quant){
                timer+=temp[i];
                temp[i] = 0;
                flag-=1;
               
                turn[i] = timer;
                wait[i] = turn[i] - t[i];
            }
        }

    }
   
    float avgw = 0;
    float avgt = 0;
    
    printf("\nProcess\t  Burst Time\tWaiting Time\tTurn Around Time\n");
    for(int i=0; i<num; i++){
        printf("%s%d\t\t%d\t\t%d\t\t%d\n","P",p[i],t[i],wait[i],turn[i]);
        
        avgw+=wait[i];
        avgt+=turn[i];
    }

    avgw = avgw/num;
    avgt = avgt/num;
    
    printf("\nAverage Waiting Time: %f\n",avgw);
    printf("Average Turnaround Time: %f\n",avgt);
    return 0;
}

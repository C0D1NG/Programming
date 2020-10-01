#include<stdio.h>

int main(){
	printf("-------------------------------------------------------");
	printf("\n****Shortest Job First****\n\n");
	int jobs;
	printf("Enter no of jobs: ");
	scanf("%d",&jobs);
	printf("\n");
	int burst_time[jobs];
	int id[jobs];
	for(int i=0;i<jobs;i++){
		printf("Enter Burst Time of %d Process: ",i+1);
		scanf("%d",&burst_time[i]);
		id[i]=i+1;
		printf("\n");
	}
	
	for(int i=0;i<jobs;i++){
		for(int j=0;j<jobs-i-1;j++){
			if(burst_time[j] > burst_time[j+1]){
				int temp1 = burst_time[j];
				burst_time[j]=burst_time[j+1];
				burst_time[j+1]=temp1;

				int temp2 = id[j];
				id[j]=id[j+1];
				id[j+1]=temp2;
			}
		}
	}	
	

	printf("Job   Burst Time   Waiting Time   Turnaround Time\n");
	
	int waiting_time = 0;
	float avg_wait=0;;
	int tat=0;
	float avg_tat=0;

	for(int i=0;i<jobs;i++){
		tat = waiting_time + burst_time[i];
		avg_tat+=tat;

		printf(" %d\t   %d\t\t%d\t\t%d\n",id[i],burst_time[i],waiting_time,tat);

		avg_wait+=waiting_time;
		waiting_time = waiting_time + burst_time[i];
	}

	printf("\n\nAverage Waiting Time is %f\n",avg_wait/jobs);
	printf("Average Turnaround Time is %f\n",avg_tat/jobs);
	printf("------------------------------------------------\n");
}
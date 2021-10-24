#include <iostream>
#include <iomanip> 

using namespace std;
 
const int N=100005;
 
int n;
struct process
{
    int id;
    int burst_time;
    int arrival_time;
    int waiting_time;
    int finishing_time;
    int turn_around_time;
};
process P[N];
 
void SJF()
{
    int complete,current_time,index,minimum;
    double total_waiting_time = 0.0;
    double total_turn_around_time = 0.0;
 
    index = -1;
    complete = 0;
    current_time = 0;
    minimum = INT_MAX;
 
    while(complete < n)
    {
        for(int i=0; i<n; i++)
        {
            if(P[i].arrival_time <= current_time)
            {
                if(P[i].burst_time < minimum && P[i].finishing_time == 0)
                {
                    index = i;
                    minimum = P[i].burst_time;
                }
            }
        }
 
        if(index >= 0)
        {
            complete++;
            minimum = INT_MAX;
            current_time += P[index].burst_time;
            P[index].finishing_time = current_time;
            P[index].turn_around_time = P[index].finishing_time - P[index].arrival_time;
            P[index].waiting_time =  P[index].turn_around_time- P[index].burst_time;
 
            total_waiting_time += P[index].waiting_time;
            total_turn_around_time += P[index].turn_around_time;
 
            index = -1;
        }
        else
        {
            current_time++;
        }
    }
 
    cout<<fixed<<setprecision(2);
    cout<<"Average Waiting Time: "<<(total_waiting_time/n)<<"\n";
    cout<<"Average Turn Around Time: "<<(total_turn_around_time/n)<<"\n";
}
 
int main()
{
    cout<<"Number of Processes: ";
    cin>>n;
 
    cout<<"Process Ids:\n";
    for(int i=0; i<n; i++) cin>>P[i].id;
 
    cout<<"Process Burst Times:\n";
    for(int i=0; i<n; i++) cin>>P[i].burst_time;
 
    cout<<"Process Arrival Times:\n";
    for(int i=0; i<n; i++) cin>>P[i].arrival_time;
 
    SJF();
 
    return 0;
}
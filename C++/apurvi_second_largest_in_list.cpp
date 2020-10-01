#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int solution1(vector<int>&elements){
    int n=elements.size();
    if(n<=1)
    return INT_MIN;
    set<int,greater<int>>myset;
    for(auto val:elements)
    myset.insert(val);
    myset.erase(myset.begin());
    // If all the values in array are same no second max exists
    if(myset.size()==0)
    return INT_MIN;
    
    return *myset.begin();
}
int solution2(vector<int>&elements){
    int n=elements.size();
    if(n<=1)
    return INT_MIN;
    sort(elements.begin(),elements.end(),greater<int>());
    int first_max=elements[0];
    int second_max=INT_MIN;
    int i=0;
    while(i<n && elements[i]==first_max)i++;
    if(i<n)second_max=elements[i];
    return second_max;
    
}
int solution3(vector<int>&elements){
    int n=elements.size();
    if(n<=1)
    return INT_MIN;
    int first_max=*max_element(elements.begin(),elements.end());
    int second_max=INT_MIN;
    for(int i=0;i<n;i++){
        if(elements[i]==first_max)
        continue;
        second_max=max(second_max,elements[i]);
    }
    return second_max;
}


int main() {
    // Cout INT_MIN in case of no 2nd max element
    vector<int>elements{1,2,3,41,41,7,21,21};
    
    // Solution 1 : TC:o(nlogn) SC:o(n) using set
        cout<<solution1(elements)<<"\n";

    // Solution 2 : TC: o(nlogn) SC: O(1) using sort
        cout<<solution2(elements)<<"\n";
    
    // Solution 2: TC:o(n) SC: O(1)
        cout<<solution3(elements)<<"\n";
	return 0;
}

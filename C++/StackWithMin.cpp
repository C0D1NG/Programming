#include <bits/stdc++.h>

#define ll long long

using namespace std;


class MinStack {
    private:
        stack<ll> s;
        int min;
        ll temp, t;

    public:
        void push(int x) {
            if (s.empty()) {
                min = x;
                s.push(x);
            }
            else if (x < min) {
                temp = 2 * (ll)x - (ll)min;
                s.push(temp);
                min = x;
            }
            else {
                s.push(x);
            }
        }
        
        void pop() {
            if (s.empty())
                return;

            t = s.top();
            if (t < min) {
                min = (int)(2 * (ll)min - t);
            }
            s.pop();
        }
        
        int top() {
            if (s.empty()) {
                return -1;
            }

            t = s.top();
            if (t < min) {
                return getMin();
            }
            
            return t;
        }
        
        int getMin() {
            return min;
        }
};

int main() {
    ios_base::sync_with_stdio(0);

    MinStack* minStack = new MinStack();
    minStack -> push(-2);
    minStack -> push(0);
    minStack -> push(-3);
    cout << minStack -> getMin() << endl; 
    minStack -> pop();
    cout << minStack -> top() << endl;
    cout << minStack -> getMin() << endl;

    return 0;
}
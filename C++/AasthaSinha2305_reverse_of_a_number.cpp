//reverse of a number
#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int countDigits(int a){
    int count=0;
    while (a != 0)
    {
        count++;
        a = a / 10;
    }
    return count;
}

int reverseNum(int numb,int d){
    int lastdigit, rev_num = 0, k = 10;
    while (numb!=0)
    {
        lastdigit = numb % 10;
        rev_num = rev_num + pow(k , d) * lastdigit;
        numb = numb / 10;
        d--;
    }
    return rev_num;
}

int main()
{
    int num,digitCount;
    cout << "Enter a number: ";
    cin >> num;
    int ans = 0;
    int temp = num;
    digitCount = countDigits(temp); 
    digitCount--;
    ans = reverseNum(num, digitCount);
    cout << "Reverse of the number " << temp << " is: " << ans << endl;
}

class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> sol;
        
        for(int i = 1; i <= n; i++){
            string ans;
            if(i%3 == 0 && i%5 == 0){
                ans = "FizzBuzz";
            }
            else if(i%3 == 0){
                ans = "Fizz";
            }
            else if(i%5 == 0){
                ans = "Buzz";
            }
            else{
                ans = to_string(i);
            }
            sol.push_back(ans);
        }
        
        return sol;
    }
};


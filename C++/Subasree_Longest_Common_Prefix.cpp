//Write a function to find the longest common prefix string amongst an array of strings
class Solution {
public:
    string longestCommonPrefix(vector<string>& str) {
    
        string ans = "";
        
        if(str.empty())
            return ans;
        
        //str[0][0] means first string ks first element!!
        
        for(int j=0; j<str[0].length();j++){    //till complete first string, as have to compare with rest
            
            for(int i=1; i<str.size();i++){
               //conditions of error hence return
                
                if(j>=str[i].length() || str[0][j]!=str[i][j]){//went out of bound of other string||char no match
                    return ans;
                }
            }
            ans+=str[0][j];
            
        }
        
        return ans;
        
       
    }
};

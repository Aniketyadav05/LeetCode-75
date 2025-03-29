class Solution {
    public:
        string reverseVowels(string s) {
            int n =s.size();
            string ans = s;
            int left = 0;
            int right = n-1;
            string vowels="aeiouAEIOU";
            while(left<right){
                if(vowels.find(ans[left]) == string::npos){
                    left++;
                }
                else if(vowels.find(ans[right]) == string::npos){
                    right--;
                }
                else if(vowels.find(ans[left]) != string::npos && vowels.find(ans[right])!= string::npos){
                    swap(ans[left],ans[right]);
                    left++;
                    right--;
                    
                }
            }
            return ans;
        }
    };
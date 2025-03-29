class Solution {
    public:
        string mergeAlternately(string word1, string word2) {
            string ans;
            int n = word1.length();
            int m = word2.length();
            int k;
            n<m? k=n : k=m;
            for(int i=0;i<k;i++){
                ans+=word1[i];
                ans+=word2[i];
            }
            if(n>m){
                for(int i =m;i<n;i++){
                    ans+=word1[i];
                }
            }
            else {
                for(int i =n;i<m;i++){7
                    ans+=word2[i];
                }
            }
            return ans;
        }
    };
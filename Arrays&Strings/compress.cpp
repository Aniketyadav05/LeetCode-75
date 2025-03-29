class Solution {
    public:
        int compress(vector<char>& chars) {
            int n= chars.size();
            if(n==1){
                return 1;
        }
            int i =0, j=0;
            while(i<n){
                char curr = chars[i];
                int cnt =0;
                while(i<n && chars[i] == curr){
                    i++;
                    cnt++;
                }
                chars[j++] = curr;
                if(cnt>1){
                    string s = to_string(cnt);
                    for(char c : s){
                        chars[j++] = c;
                    }
                }
            }
            
            return j;
        }
    };
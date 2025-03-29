class Solution {
    public:
        string gcdOfStrings(string str1, string str2) {
            int n = str1.length();
            int m = str2.length();
            if(str1+str2 == str2 + str1){
                while(m){
                    int temp = m;
                    m = n % m;
                    n = temp;
                }
                return str1.substr(0,n);
            }
            
                return "";
            
        }
    };
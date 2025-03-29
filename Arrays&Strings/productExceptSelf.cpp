class Solution {
    public:
        vector<int> productExceptSelf(vector<int>& nums) {
            int  left=1, right =1;
            int n= nums.size();
            vector<int>result(n,1);
            for(int i =0;i<n;i++){
                result[i] = left;
                left= left*nums[i];
            }
            for(int i =n-1;i>=0;i--){
                result[i] = result[i]*right;
                right= right*nums[i];
            }
            return result;
        }
    };
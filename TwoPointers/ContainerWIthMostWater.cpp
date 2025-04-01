class Solution {
    public:
        int maxArea(vector<int>& height) {
            int left = 0, right = height.size()-1;
            int w =0, h= 0;
            int area=0;
            while(left<right){
                w = right - left;
                h = min(height[right], height[left]);
                area = max(area, (h*w));
                
                if(height[right]>height[left]){
                    left++;
                }
                else{
                    right--;
                }
            }
            return area;
        }
    };
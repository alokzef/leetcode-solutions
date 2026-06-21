class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double avg = INT_MIN;
        double sum = 0;
        int left = 0, right = 0;
        while(right<nums.size()){
            sum += nums[right];
            if((right-left+1)==k){
                avg = (sum/k)>avg ? (sum/k) : avg;
                sum -= nums[left];
                left++;
            }
            right++;
        }
        return avg;
    }
};

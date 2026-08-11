class Solution {
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        int n=nums.size();
        int i=1;
        int j=*max_element(nums.begin(),nums.end());
        while(i<=j){
            int mid=i+(j-i)/2;
            long long sum=0;
            for(int num:nums){
                sum+=ceil(double(num)/mid);
            }
            if(sum<=threshold){
                j=mid-1;
            }
            else{
                i=mid+1;
            }
        }
        return i;
    }
};
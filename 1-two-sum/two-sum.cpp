class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                if(nums[i]+nums[j] == target){
                    return {i,j};
                }
            }
        }
        return {};
//         sort(nums.begin(),nums.end());
//         int i=0;
//         int j=n-1;
//         while(i<j){
//             int sum =nums[i]+nums[j];
//             if(sum==target){
//                 return {i,j};
//             }
//             else if(sum<target){
//                 i++;
//             }
//             else{
//                 j--;
//             }
//         }
//         return {};

    }
};
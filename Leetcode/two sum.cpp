class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int flag = 0;
        for(int i=0;i<nums.size() - 1; i++){
            for (int j = 1+1; i<nums.size(); j++){ // keep this in mind otherwise you will end up consider the same element twice peeche ke PNC bhulja aage se shuru krna h I ke
                if(nums[i]+nums[j] == target){ 
                    return {i,j};
                    // break;
                }
            }
        }
        return {}; // such combination doesn't exist        
    }
};

/*
Given things

array - nums
integer - target 
indices return krne h of two numbers such that we  add them it is = target 

complexity should be less than O(n2), => ek hi loop se kam chal jae toh behtar h yha fir DnC


*/
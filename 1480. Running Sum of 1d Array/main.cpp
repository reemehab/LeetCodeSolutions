class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
       vector<int> vec;
        int copy ;
        for(int i=0 ; i< nums.size(); i++)
        {   copy=0;
            for(int j=0 ; j <=i; j++)
            {
                copy+=nums[j];
            }
         vec.push_back(copy);
        }
        
        return vec;
    }
};
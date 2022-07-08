class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
    int min = 0;
    int mid;
    int index=0;
    int max=nums.size()-1;

    while(min<=max){ 
        
     mid =min+(max-min)/2;
        
        if(target==nums[mid])
         return mid;
        if(target<nums[mid]) //target in the left side
        max=mid-1;
        else //target in the right side
            min=mid+1;
        }
        if(target>nums[mid]){mid=mid+1;}
            return mid; //if the target was in the vector 
    }
};


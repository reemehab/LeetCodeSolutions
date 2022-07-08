#include <vector>
class Solution {
public:
    int search(vector<int>& nums, int target) {
    int min = 0;
    int max=nums.size()-1;
    while(min<=max){ 
    int mid =min+(max-min)/2;
    if(target==nums[mid])
         return mid;
        if(target<nums[mid]) //target in the left side
            max=mid-1;
        else //target in the right side
        min=mid+1;
        }
        return -1; //target is not present in the vector
                       }
};
#include <vector>
using std::vector;
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int len = nums.size();
        vector<int> answ;

        for(int c=0;c<len;c++)
            {
                for(int b=1;b<len;b++){
                    if(nums[c]+ nums[b]==target){
                        if(c != b){
                            answ = {c , b};
                        }
                }
            }
    }
    return answ;
    }
};
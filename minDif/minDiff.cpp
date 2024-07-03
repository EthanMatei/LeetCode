#include <climits>
#include <vector>
#include <algorithm>
using std::vector;
using namespace std;
class Solution {
public:
    int minDifference(vector<int>& nums) {
       int len = nums.size();

        if(len<=4)
            return 0;
    
        sort(nums.begin(),nums.end());

        int mindif=INT_MAX;

        for(int a=0,b=len-4; a<4;a++,b++){
            mindif = min(mindif,nums[b]-nums[a]);
        }
        return mindif;
    }
};
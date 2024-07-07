#include <iostream>
#include <vector>
using std::vector;

class Solution {
public:
    int hammingWeight(int n) {
        vector<int> bin;
        while(n>0){
            bin.push_back(n % 2);
            n=n/2;
        }
        int len = bin.size();
        int count = 0;
        for(int t=0;t<len;t++){
            if(bin[t]==1){
                count +=1;
            }
        }
        return count;
    }
};
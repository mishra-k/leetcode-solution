#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int>myMap;
        vector<int>found;
        for(int i = 0; i<nums.size(); ++i){
            if(myMap.find(target-nums[i]) != myMap.end()){
                found.push_back(myMap[target-nums[i]]);
                found.push_back(i);
                break;
            }
            myMap[nums[i]] = i;
        }
        return found;
    }
};
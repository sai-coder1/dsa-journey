#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

// Problem: Maximum Subarray (Kadane's Algorithm)
// Platform: LeetCode
// Difficulty: Medium
// Approach: Kadane's Algorithm (Greedy)
// Time Complexity: O(n)
// Space Complexity: O(1)
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int curSum=0;
        int maxSum=INT_MIN;
        for(int val:nums){
            curSum+=val;
            maxSum=max(curSum,maxSum);
            if(curSum<0){
                curSum=0;
            }
        }
        return maxSum;
    }
};

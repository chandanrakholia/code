/*
 * @lc app=leetcode id=503 lang=cpp
 *
 * [503] Next Greater Element II
 */

// @lc code=start
class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int>ans;
        for(int i=0;i<nums1.size();i++){
            for(int j=0;j<nums2.size();j++){
                if(nums1[i]==nums2[j]){
                    int k;
                    for(k=j+1;k<nums2.size();k++){
                        if(nums2[k]>nums2[j]){
                            ans.push_back(nums2[k]);
                            break;
                        }
                    }
                    if(k==nums2.size()){
                        ans.push_back(-1);
                    }
                }
            }
        }
        return ans;
    }
};
// @lc code=end


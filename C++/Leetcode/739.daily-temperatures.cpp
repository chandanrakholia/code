/*
 * @lc app=leetcode id=739 lang=cpp
 *
 * [739] Daily Temperatures
 */

// @lc code=start
class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        vector<int>v;
        stack<int,int>st;
        for (int i=temperatures.size()-1; i>=0; i++)
        {
            if (st.size()==0)
            {
                // st.push(temperatures[i]);
                v.push_back(0);
            }
            else if (temperatures[i]<st.top().first)
            {
                v.push_back(st.top().second-i);
            }
            else if (temperatures[i]>st.top().first)
            {
                while (temperatures[i]>st.top().first and st.size()>0)
                {
                    st.pop();
                }
                if (st.size()==0)
                {
                    v.push_back(0);
                }
                else{
                    v.push_back(st.top().second-i);
                }
                
            }
            st.push(temperatures[i],i);
        }
        reverse(v.begin(),v.end());
        return v;      
    }
};
// @lc code=end


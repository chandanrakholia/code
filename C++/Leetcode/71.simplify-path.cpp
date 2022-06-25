/*
 * @lc app=leetcode id=71 lang=cpp
 *
 * [71] Simplify Path
 */

// @lc code=start
class Solution {
public:
    string simplifyPath(string path) {
        stack<char>st;
        for (int i = 0; i <path.length(); i++)
        {
            if (st.size()==0 and path[i]=='/')
            {
                st.push(path[i]);
            }
            else if (st.top()=='/' and path[i]=='/')
            {
                st.pop();
            }
            else if (path[i]=='.')
            {
                st.push('0');
                st.pop();
            }
            else if (path[path.length()-1]=='/')
            {
                st.push('0');
                st.pop();
            }
            
            
            
            
        }
        string ans;
        while(st.size()>0){
            ans+=st.top();
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
        
    }
};
// @lc code=end


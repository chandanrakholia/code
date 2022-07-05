/*
 * @lc app=leetcode id=387 lang=cpp
 *
 * [387] First Unique Character in a String
 */

// @lc code=start
class Solution {
public:
    bool fun(queue<char>q,int key){
        int f=1;
        while(q.size()>0){
            if (q.front()==key)
            {
                f=0;
                break;
            }
            
        }
        if (f==0)
        {
            return true;
        }
        else
        {
            return false;
        }
        
        
    }
    int firstUniqChar(string s) {
        queue<char>q;
        for (int i = 0; i < s.length(); i++)
        {
            q.push(s[i]);
        }
        int count=0;
        for (int i = 0; i < s.length(); i++)
        {
            if (q.size()>0 and fun(q,q.front()))
            {
                q.pop();
                count++;
            }
            else if (q.size()>0 and (!fun(q,q.front())))
            {
                return count;
            }
            else
            {
                return -1;
            }
            
            
        }
        
        
    }
};
// @lc code=end


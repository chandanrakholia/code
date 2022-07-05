class Solution {
public:
    int firstUniqChar(string s) {
        int f=0;
        int p=0;
        for(int i=0;i<s.length();i++){
            for(int j=i+1;j<s.length();j++){
                if(s[i]==s[j]){
                    break;
                }
				else{
					
				}
            }
            if(f==1)
                break;
            
        }
            return p;
        }
};
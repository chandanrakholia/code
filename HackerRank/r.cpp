class Solution {
public:
        int MAH(vector<int>v){
    vector<int>v1;
    stack<pair<int,int>>s1;

    //FOR NSL

    for (int i =0; i<v.size(); i++)
    {
        if (s1.size()==0)
        {
            v1.push_back(-1);
        }
        else if (s1.size()>0 && v[i]>s1.top().first)
        {
            v1.push_back(s1.top().second);
        }
        else if (s1.size()>0 && v[i]<=s1.top().first)
        {
            while (s1.size()>0 and s1.top().first>=v[i])
            {
                s1.pop();
            }
            if (s1.size()==0)
            {
                v1.push_back(-1);
            }
            else
            {
                v1.push_back(s1.top().second);
            }
            
        }
        
        s1.push({v[i],i});
        
    }

    //FOR NSR

    vector<int>v2;
    stack<pair<int,int>>s2;
        for (int i =v.size()-1; i>=0; i--)
    {
        if (s2.size()==0)
        {
            v2.push_back(v.size());
        }
        else if (s2.size()>0 && v[i]>s2.top().first)
        {
            v2.push_back(s2.top().second);
        }
        else if (s2.size()>0 && v[i]<=s2.top().first)
        {
            while (s2.size()>0 and s2.top().first>=v[i])
            {
                s2.pop();
            }
            if (s2.size()==0)
            {
                v2.push_back(v.size());
            }
            else
            {
                v2.push_back(s2.top().second);
            }
            
        }
        
        s2.push({v[i],i});
        
    }
    reverse(v2.begin(),v2.end());

    int area[v.size()];
    int width[v.size()];
    for (int i = 0; i < v.size(); i++)
    {
        width[i]=v2[i]-v1[i]-1;
    }
    
    for (int i = 0; i < v.size(); i++)
    {
        area[i]=v[i]*width[i];
    }

    return *max_element(area,area+v.size());

}
    int maximalRectangle(vector<vector<char>>& matrix) {



    int n=4,m=4;
    // int in[n][m]={{0,1,1,0},{1,1,1,1},{1,1,1,1},{1,1,0,0}};
    int a[m];
    vector<int>vf;
    vf.push_back(MAH(matrix[0]));
    for (int i = 1; i < matrix.size(); i++)
    {
        for (int j = 0; j < matrix[0].size(); j++)
        {
            if (matrix[i][j]==0)
            {
                matrix[i][j]=0;
            }
            else{

            matrix[i][j]=matrix[i][j]+matrix[i-1][j];
            }
        }
        vf.push_back(MAH(matrix[i]));
    }
    return *max_element(vf.begin(),vf.end());
    }
};
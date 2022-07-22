class Solution {
public:
    unordered_map<string,bool> mp;
    
    bool helper(string a,string b)
    {
        if(a.compare(b)==0)
            return true;
        if(a.length()<=1)
            return false;
        string key=a;
        key.push_back(' ');
        key.append(b);
        if(mp.find(key)!=mp.end())
            return mp[key];
        
        int n=a.length();
        bool flag=false;
        
        for(int i=1;i<=n-1;i++)
        {
            if((helper(a.substr(0,i),b.substr(n-i,i)) && helper(a.substr(i,n-i),b.substr(0,n-i))) || (helper(a.substr(0,i),b.substr(0,i)) && helper(a.substr(i,n-i),b.substr(i,n-i))))
            {
                flag=true;
                break;
            }
        }
        return mp[key]=flag;
    }
    
    bool isScramble(string s1, string s2) {
        if(s1.length()!=s2.length()) return false;
        
        if(s1.empty() && s2.empty()) return true;
        
        return helper(s1,s2);
        
    }
};
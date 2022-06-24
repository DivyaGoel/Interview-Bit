int Solution::colorful(int A) { 
    string s = to_string(A);
    map<long long, bool> mp;
    
    for(auto i=0; i<s.size(); i++)
    {
        long long mul = 1;
        
        for(auto j=i; j<s.size(); j++)
        {
            mul *= (long long)(s[j]-'0');
        
            if(mp.find(mul) != mp.end())
                return 0;
            
            mp[mul] = true;
        }
    }
    
    return 1;
    
}


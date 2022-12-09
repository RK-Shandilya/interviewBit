// Space Complexity = O(N) , time Complexity = O(N)

vector<int> Solution::solve(string A) {
    vector<int>v(26,0);
    unordered_map<char,int>mp;
    int i=0;
    for(char ch='a';ch<='z';ch++){
        mp[ch]=i;
        i++;
    }
    for(int i=0;i<A.length();i++){
        v[mp[A[i]]]++;
    }
    return v;
}

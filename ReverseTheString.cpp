string Solution::solve(string s) {
   vector<string>v;
        string str="";
        for(int i=0;i<s.length();i++){
            if(s[i]!=' '){
                str+=s[i];
            }
            else if(str!="" && s[i]==' '){
                v.push_back(str);
                str="";
            }
        }
        if(str!=""){
            v.push_back(str);
        }
        str="";
        for(int i=v.size()-1;i>0;i--){
                str+=v[i];
                str+=' ';
        }
        str+=v[0];
        return str;
}

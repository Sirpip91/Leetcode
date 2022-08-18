string reorganizeString(string s) {
    map<char,int>m;
  for(int i=0;i<s.size();i++){
      m[s[i]]++;
  }
    vector<int>v;
    priority_queue<pair<int,char>>q;
    for(auto it:m){
        q.push({it.second,it.first});
        v.push_back(it.second);
    }
    sort(v.begin(),v.end());
    vector<char>l(m.size()*v[v.size()-1],'.');
    for(int i=0;i<v.size()-1;i++){
        v[v.size()-1]-=v[i];
    }
    if(v[v.size()-1]>1){
        return "";
    }
    string k="";
    int i=0;
    while(q.size()!=0){
      int x=q.top().first;
      char c=q.top().second;
        q.pop();
        while(x!=0){
            l[i]=c;
            i+=m.size();
            if(i>=l.size()){
                i=m.size()-q.size();
            }
            x--;
        }
        if(i>=l.size()){
                i=m.size()-q.size();
            }
        
    }
    for(int i=0;i<l.size();i++){
        if(l[i]!='.'){
            k+=l[i];
        }
    }
    
    return k;
}

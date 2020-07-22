class Solution {
   unordered_map<char,int> mp;
public:
   
    string frequencySort(string s) {
       priority_queue<pair<int,char>> p;
        //vector<int> a(26,0);
        for(int i=0;i<s.size();i++){
            mp[s[i]]++;
        }
        for(auto x: mp){
                p.push({x.second,x.first});
            
        }
        string ans;
        while(!p.empty()){
            int x;char c;
            tie(x,c)=p.top();
            p.pop();
            for(int i=0;i<x;i++){
                ans.push_back(c);
            }
        }
       // reverse(ans.begin(), ans.end());
        return ans;
    }
};

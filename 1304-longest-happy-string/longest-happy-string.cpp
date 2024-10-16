class Solution {
public:
    string longestDiverseString(int a, int b, int c) {
        priority_queue<pair<int,char>> pq;

        pq.push({a,'a'});
        pq.push({b,'b'});
        pq.push({c,'c'});

        string ans = "";

        while(pq.top().first){
            pair<int,char> p1 = pq.top();
            pq.pop();

            if(ans.length()>=2 && ans[ans.length()-1] == ans[ans.length()-2] && 
            ans[ans.length()-1]==p1.second){

                if(pq.top().first==0) return ans;
                
                pair<int,char>p2 = pq.top();
                pq.pop();

                ans+=p2.second;
                pq.push({p2.first-1,p2.second});
                pq.push(p1);
                continue;
            }

            ans+=p1.second;
            pq.push({p1.first-1,p1.second});
        }
        return ans;
    }
};
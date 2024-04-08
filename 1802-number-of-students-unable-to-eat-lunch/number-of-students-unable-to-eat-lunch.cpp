class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        int cnt0=0,cnt1=0;
        queue<int>q;
        for(int i=0;i<students.size();i++){
            if(students[i]==0) cnt0++;
            if(students[i]==1) cnt1++;
            q.push(students[i]);
        }

        int num=0;
        
        while(cnt1!=0 || cnt0!=0){
            if(cnt0==0 && sandwiches[num]==0){
                return q.size();
            }
            else if(cnt1==0 && sandwiches[num]==1){
                return q.size();
            }
            if(sandwiches[num]==1 && q.front()==1){
                q.pop();
                num++;
                cnt1--;
            }
            else if(sandwiches[num]==0 && q.front()==0){
                q.pop();
                num++;
                cnt0--;
            }
            else{
                int a = q.front();
                q.pop();
                q.push(a);
            }
            
        }
        return 0;
    }
};
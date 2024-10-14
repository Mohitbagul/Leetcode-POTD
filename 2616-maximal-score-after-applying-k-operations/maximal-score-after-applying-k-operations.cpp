class Solution {
public:
    long long maxKelements(vector<int>& nums, int k) {
        priority_queue<int>pq;

        for(int i=0;i<nums.size();i++){
            pq.push(nums[i]);
        }

        long long score=0;

        for(int i=0;i<k;i++){
            int x = pq.top();
            score+=pq.top();
            pq.pop();
            x = (x/3) + ((x%3) >= 1 ? 1 : 0 );
            pq.push(x);
        }
        return score;
    }
};
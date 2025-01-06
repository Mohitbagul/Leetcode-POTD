class Solution {
public:
    vector<int> minOperations(string boxes) {
        vector<int>left,right;

        int cnt1=0,sum=0;

        for(int i=0;i<boxes.length();i++){
            sum += cnt1;
            if(boxes[i]=='1') cnt1++;
            left.push_back(sum);
        }

            cnt1=0,sum=0;

            for(int i=boxes.length()-1;i>=0;i--){
                sum += cnt1; 
                 if(boxes[i]=='1') cnt1++;
                 right.push_back(sum);
            }

            vector<int>ans;

            for(int i=0;i<boxes.length();i++){
                ans.push_back(left[i]+right[boxes.length()-1-i]);
            }

              return ans;
    }
};
class Solution {
public:

    bool cmp(int a,int b){
        string str1 = to_string(a);
        string str2 = to_string(b); 

        cout<<str1<<" "<<str2<<endl;  

        return str1+str2 > str2+str1;     
    }
    string largestNumber(vector<int>& nums) {

        sort(nums.begin(), nums.end(), [this](int a, int b) {
            return cmp(a, b);
        });

        string ans="";

        for(int i=0;i<nums.size();i++){
            ans+=to_string(nums[i]);
        }

        for(int i=0;i<ans.length();i++){
            if(ans[i]!='0') return ans;
        }

        return "0";
    }
};
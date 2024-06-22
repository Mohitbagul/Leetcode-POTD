class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        
        vector<int>v;

        for(int i=0;i<nums.size();i++){
            if(nums[i]%2){
                v.push_back(i);
            }
        }

        int start=0,end=0,res=0;

        while(end<v.size()){
            if(end-start+1==k){
                if(start==0 && end==v.size()-1){
                    res+=v[start];
                     res+=nums.size()-v[end]-1;
                     res+=((v[start])*(nums.size()-v[end]-1));
                     res++;
                     cout<<11<<endl;
                     cout<<start<<" "<<end<<endl;
                     cout<<res<<endl;
                }
                else if(start==0){
                    res+=v[start];
                    res+=v[end+1]-v[end]-1;

                    res+=((v[start])*(v[end+1]-v[end]-1));
                    res++;
                    cout<<22<<endl;
                    cout<<start<<" "<<end<<endl;
                    cout<<res<<endl;
                }
                else if(end==v.size()-1){
                    res+=v[start]-v[start-1]-1;
                    res+=nums.size()-v[end]-1;

                    res+=((v[start]-v[start-1]-1)*(nums.size()-v[end]-1));
                    cout<<33<<endl;
                    res+=1;
                    cout<<start<<" "<<end<<endl;
                    cout<<res<<endl;
                }
                else{
                    res+=v[start]-v[start-1]-1;
                    res+=v[end+1]-v[end]-1;

                    res+=((v[start]-v[start-1]-1)*(v[end+1]-v[end]-1));
                    cout<<44<<endl;
                    res++;
                    cout<<start<<" "<<end<<endl;
                    cout<<res<<endl;
                }
                start++;
            }
                else 
                    {
                        end++;
                    }
        }

        return res;
    }
};
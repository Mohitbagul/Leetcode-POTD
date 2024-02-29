class Solution {
public:
    bool check(vector<int>& arr) {
        int a=arr.size()-1,flag=0,n=arr.size();
        for(int i=0;i<n-1;i++){
            if(arr[i]>arr[i+1]){
                a=i;
                flag=1;
                break;
            }
        }
        
        for(int i=0;i<n-1;i++){
            if(i!=a && arr[i]>arr[i+1]){
                return false;
            }
        }

        if(arr[n-1]>arr[0] && flag==1){
            return false;
        }
        return true;
    }
};
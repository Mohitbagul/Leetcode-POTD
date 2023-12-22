class Solution {
public:
    int maxScore(string s) {
        int n=s.length();
        int arr1[s.length()],arr2[s.length()];
        for(int i=0;i<n;i++){      
            if(i==0){
                if(s[i]=='0')
                arr1[i]=1;
                else {
                    arr1[i]=0;
                }
            }
            else if(s[i]=='0' && i!=0){
                arr1[i]=arr1[i-1]+1;
            }
            else{
                arr1[i]=arr1[i-1];
            }
        }

        for(int i=n-1;i>=0;i--){      
            if(i==n-1){
                if(s[i]=='1')
                arr2[i]=1;
                else {
                    arr2[i]=0;
                }
            }
            else if(s[i]=='1' && i!=n-1){
                arr2[i]=arr2[i+1]+1;
            }
            else{
                arr2[i]=arr2[i+1];
            }
        }
        cout<<arr2[0]<<endl;
        int max_count=0;

        for(int i=0;i<n-1;i++){
            if(s[i]=='0')
            max_count = max(max_count,arr1[i]+arr2[i]);
            else 
            max_count = max(max_count,arr1[i]+arr2[i]-1);
        }
        return max_count;
    }
};
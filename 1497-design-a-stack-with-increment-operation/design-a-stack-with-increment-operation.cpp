class CustomStack {
public:
    stack<int>st;
    int n;
    CustomStack(int maxSize) {
        n=maxSize;
    }
    
    void push(int x) {
        if(st.size()<n){
            st.push(x);
            // cout<<st.top()<<endl;
        }
    }
    
    int pop() {
        if(st.empty()) return -1;
        int a = st.top();
        st.pop();
        return a;
    }
    
    void increment(int k, int val) {
        cout<<k<<" "<<st.size()<<endl;
        vector<int>v;
        int cnt=0;
        while(st.size()!=0){
            v.push_back(st.top());
            st.pop();
            cnt++;
        }

        cout<<cnt<<endl;
        cout<<k<<endl;

        // cout<<v.size()-k-1<<" "<<1212<<endl;

        for(int i=cnt-1;i>=0;i--){
            if(i > cnt-k-1){
                st.push(v[i]+val);
                cout<<v[i]+val<<" 1"<<endl;
            }
            else{
                st.push(v[i]);
                cout<<v[i]<<" 2"<<endl;
            }
        }
    }
};

/**
 * Your CustomStack object will be instantiated and called as such:
 * CustomStack* obj = new CustomStack(maxSize);
 * obj->push(x);
 * int param_2 = obj->pop();
 * obj->increment(k,val);
 */
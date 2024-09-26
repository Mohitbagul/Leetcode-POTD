class MyCalendar {
public:
        unordered_map<int,int>mp;
    MyCalendar() {
    }
    
    bool book(int start, int end) {
        for(auto it:mp){
            int left = it.first;
            int right = it.second;

            if(((start<=left) && (end>left)) || ((start<right) && (end>right)) || (start>=left && end<=right)){
               return false; 
            }
        }
        mp[start] = end;
        return true;
    }
};

/**
 * Your MyCalendar object will be instantiated and called as such:
 * MyCalendar* obj = new MyCalendar();
 * bool param_1 = obj->book(start,end);
 */
class MyCircularDeque {
public:
    deque<int>dq;
    int n;
    MyCircularDeque(int k) {
        n=k;
    }
    
    bool insertFront(int value) {
        if(dq.size()==n) return false;
        dq.push_front(value);
        return true;
    }
    
    bool insertLast(int value) {
        if(dq.size()==n) return false;
        dq.push_back(value);
        return true;
    }
    
    bool deleteFront() {
        if(dq.size()==0) return false;
        dq.pop_front();
        return true;
    }
    
    bool deleteLast() {
        if(dq.size()==0) return false;
        dq.pop_back();
        return true;
    }
    
    int getFront() {
        if(dq.size()==0) return -1;
        return dq.front();
    }
    
    int getRear() {
        if(dq.size()==0) return -1;
        return dq.back();
    }
    
    bool isEmpty() {
        if(dq.size()==0) return true;
        return false;
    }
    
    bool isFull() {
        if(dq.size()==n){
            return true;
        }
        return false;
    }
};

/**
 * Your MyCircularDeque object will be instantiated and called as such:
 * MyCircularDeque* obj = new MyCircularDeque(k);
 * bool param_1 = obj->insertFront(value);
 * bool param_2 = obj->insertLast(value);
 * bool param_3 = obj->deleteFront();
 * bool param_4 = obj->deleteLast();
 * int param_5 = obj->getFront();
 * int param_6 = obj->getRear();
 * bool param_7 = obj->isEmpty();
 * bool param_8 = obj->isFull();
 */
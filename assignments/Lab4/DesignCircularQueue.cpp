class MyCircularQueue {
public:
    int l=-1;
    queue<int>q;
    int s;
    MyCircularQueue(int k) {
        s=k;
    }
    
    bool enQueue(int value) {
        if(l==s-1){
            return false;
        }
        else{
            l++;
            q.push(value);
            return true;
        }
    }
    
    bool deQueue() {
        if(l>=0){
            l--;
            q.pop();
            return true;
        }
        else{
            return false;
        }
    }
    
    int Front() {
        if(l>=0){
            return q.front();
        }
        return -1;
    }
    
    int Rear() {
        if(l>=0){
            return q.back();
        }
        return -1;
    }
    
    bool isEmpty() {
        if(l>=0){
            return false;
        }
        return true;
    }
    
    bool isFull() {
        if(l==s-1){
            return true;
        }
        return false;
    }
};

/**
 * Your MyCircularQueue object will be instantiated and called as such:
 * MyCircularQueue* obj = new MyCircularQueue(k);
 * bool param_1 = obj->enQueue(value);
 * bool param_2 = obj->deQueue();
 * int param_3 = obj->Front();
 * int param_4 = obj->Rear();
 * bool param_5 = obj->isEmpty();
 * bool param_6 = obj->isFull();
 */
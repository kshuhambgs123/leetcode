class SmallestInfiniteSet {
public:
    vector<int>v;
    SmallestInfiniteSet() {
        v.resize(1001,1);
    }
    
    int popSmallest() {
        for(int i=1;i<1001;i++)
        {
            if(v[i]==1){
                v[i]=0;
                return i;
            }
        }
        return -1;
    }
    
    void addBack(int num) {
        v[num] =1;
    }
};

/**
 * Your SmallestInfiniteSet object will be instantiated and called as such:
 * SmallestInfiniteSet* obj = new SmallestInfiniteSet();
 * int param_1 = obj->popSmallest();
 * obj->addBack(num);
 */
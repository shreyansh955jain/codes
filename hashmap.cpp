//we are implementing this hashmap using doubly linklist.
//leetcode problem
class MyHashMap {
public:
    /*
//hash function implementation.    
// chaning technique...    
11,22,33,0   %11          0 ->(11,val)->(22,val)->(33,val)....

1,12,34,45   %11          1 ->(1,val)->(12,val)->(34,val)....

2,13,35      %11          2 ->(2,val)->(13,val)->(35,val)....
  .           .
  .           .
  .           .
*/
    vector<list<pair<int,int>>> m;
    int siz;
    MyHashMap() {
        siz=1000;
        m.resize(siz);
    }
    int hash(int key){
        return key%siz;
    }
    
    list<pair<int,int>>:: iterator search(int key){
        int i=hash(key);
        //we are not able to find the value using find function 
        //because find function i need to pass 
        //find(m[i].begin(),m[i].end(),{key,value})
        //which we dont know ?????
        list<pair<int,int>>::iterator it=m[i].begin();
        while(it!=m[i].end()){      
            if(it->first==key)return it;
             it++;
        }
        return it;
    }
    void put(int key, int value) {
        int i=hash(key);
        remove(key);  /* if incase key exist so frist delete and then store a new key_value to it.*/
        m[i].push_back({key,value});
    }    
    int get(int key) {
        int i=hash(key);
        list<pair<int,int>>::iterator it=search(key);
        if(it!=m[i].end()) return it->second;
        else return -1;
    }
    void remove(int key) {
        int i =hash(key);
        list<pair<int,int>>::iterator it=search(key);
        if(it!=m[i].end()) m[i].erase(it);      
    }
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */
// c++ stl list we iterator like pointer....
class BrowserHistory {
public:
    list<string> history;
    list<string>:: iterator it;
    BrowserHistory(string homepage) {
    history.push_back(homepage); 
    it=history.begin();
    }
     void visit(string url) {
        auto next=it;
        next++; //delete from the next pointer....
        history.erase(next,history.end());
        history.push_back(url);
        it++;
    }    
    string back(int steps) {
        while(it!=history.begin()&& steps--)
        {
            it--;   //jab tak ki condition false na ho jaye 
        }
        return *it; // this line will return the value al the postion...
                // *it  derefrencing ....
    }
    
    string forward(int steps) {
         // history.end is last ke baad wala element.....so  
        while(it!=(--history.end()) && steps--)
        {
            it++;
        }
        return *it; // this line will return the value al the postion...
    }
};

/**
 * Your BrowserHistory object will be instantiated and called as such:
 * BrowserHistory* obj = new BrowserHistory(homepage);
 * obj->visit(url);
 * string param_2 = obj->back(steps);
 * string param_3 = obj->forward(steps);
 */
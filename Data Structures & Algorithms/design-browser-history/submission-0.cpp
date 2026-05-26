class BrowserHistory {
private:
    stack<string> backhist;
    stack<string> fronthist;
public:
    BrowserHistory(string homepage) {
        backhist.push(homepage);
    }
    
    void visit(string url) {
        backhist.push(url);
        fronthist = stack<string>();
        
    }
    
    string back(int steps) {
        while(steps -- && backhist.size() > 1){
            fronthist.push(backhist.top());
            backhist.pop();
        }
        return backhist.top();
    }
    
    string forward(int steps) {
        while(steps-- && !fronthist.empty()){
            backhist.push(fronthist.top());
            fronthist.pop();
        }
        return backhist.top();
    }
};

/**
 * Your BrowserHistory object will be instantiated and called as such:
 * BrowserHistory* obj = new BrowserHistory(homepage);
 * obj->visit(url);
 * string param_2 = obj->back(steps);
 * string param_3 = obj->forward(steps);
 */
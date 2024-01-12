class Solution
{
    public:
    
    // Function to reverse first k elements of a queue.
    queue<int> modifyQueue(queue<int> q, int k) {
        // add code here.
        queue<int>res;
        stack<int>st;
        while(k--){
            st.push(q.front());
            q.pop();
        }
        while(!st.empty()){
            res.push(st.top());
            st.pop();
        }
        while(!q.empty())
        {
            res.push(q.front());
            q.pop();
        }
        return res;
    }
};
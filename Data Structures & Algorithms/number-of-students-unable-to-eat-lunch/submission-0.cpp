class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        int sz = students.size();
        queue<int>q;
        for(int student : students){
            q.push(student);
        }
        int res = sz;
        for (int sandwich : sandwiches) {
            int cnt = 0;
            while (cnt < sz && q.front() != sandwich) {
                q.push(q.front());
                q.pop();
                cnt++;
            }
            if (q.front() == sandwich) {
                q.pop();
                res--;
            } else {
                break;
            }
        }
        return res;
    }
};
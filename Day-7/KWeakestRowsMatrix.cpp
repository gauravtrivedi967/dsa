class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        priority_queue<int, vector<int>, greater<int>> pq;
        vector<int> ans(k);
        for(int i = 0; i < mat.size(); i++){
            pq.push(accumulate(mat[i].begin(), mat[i].end(), 0) * 100 + 
                   i);
        }
        
        for(int i = 0; i < k; i++){
            ans[i] = pq.top()%100;
            pq.pop();
        } 
        
        return ans;
    }
};
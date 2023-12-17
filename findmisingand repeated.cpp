class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        
        int n = grid.size();
        int sq = n * n;

        vector<int> ans(2, 0);
        vector<int> aux(sq + 1, 0);

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                int curr = grid[i][j];
                aux[curr]++;
                if (aux[curr] == 2) {
                    ans[0] = curr;  // Repeated value
                }
            }
        }

        auto it = find(aux.begin() + 1, aux.end(), 0);
        ans[1] = distance(aux.begin(), it);  // Missing value

        return ans;
        
//         there is one more approach using xor please find that and in this approach only  sum and sum of squaresapproach 
        
    }
};
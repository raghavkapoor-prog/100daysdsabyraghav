class Solution {
public:    
    int findLowestCoins(vector<int> &coins, int cur, int amount) {
        if (cur >= coins.size() || amount <= 0)
            return (amount == 0) ? 0 : INT_MAX - 1;   
        
        int res = -1;
        if (coins[cur] > amount) {
            int doNotTakeCoin = 0 + findLowestCoins(coins, cur + 1, amount - 0);
            res = doNotTakeCoin;
        }
        else {
            int takeCoin = 1 + findLowestCoins(coins, cur + 0, amount - coins[cur]);
            int doNotTakeCoin = 0 + findLowestCoins(coins, cur + 1, amount - 0);
            res = min(takeCoin, doNotTakeCoin);
        }
        return res;
    }
    
    int coinChange(vector<int>& coins, int amount) {
        int res = findLowestCoins(coins, 0, amount);
        return (res == INT_MAX - 1 ) ? -1 : res;
    }
};
DP Memoization
Time: O(n.m)
Space: O(n.m)

In the above recursive case, we were doing repeated work in the form of subproblems. Hence we store the results of those subproblems in a table to reduce the number of recursive calls.

class Solution {
public:    
    int dp[12 + 1][10000 + 1];
    
    int findLowestCoins(vector<int> &coins, int cur, int amount) {
        if (cur == coins.size() || amount <= 0)
            return (amount == 0) ? 0 : INT_MAX - 1;   
        
        if (dp[cur][amount] != -1)
            return dp[cur][amount];
        
        int res = -1;
        if (coins[cur] > amount) {
            int doNotTakeCoin = 0 + findLowestCoins(coins, cur + 1, amount - 0);
            dp[cur][amount] = res = doNotTakeCoin;
        }
        else {
            int takeCoin = 1 + findLowestCoins(coins, cur + 0, amount - coins[cur]);
            int doNotTakeCoin = 0 + findLowestCoins(coins, cur + 1, amount - 0);
            dp[cur][amount] = res = min(takeCoin, doNotTakeCoin);
        }
        return dp[cur][amount] = res;
    }
    
    int coinChange(vector<int>& coins, int amount) {
        memset(dp, -1, sizeof(dp));
        int res = findLowestCoins(coins, 0, amount);
        return (res == INT_MAX - 1 ) ? -1 : res;
    }
};
DP Tabulation
Time: O(n.m)
Space: O(n.m)

We have reached the best conceivable run time for this question but since we have recursive calls in the previous algorithm. It might lead to stackoverflow error in the worst case when recursive calls are a lot. Hence we want to totally emit the notion of recursions. To do that, we simply convert the recursion into iterative code.

The below code is bottom up dynamic programming because we are starting from the first element in the 2D array and filling the DP from this first element till the last element. And eventually, the last cell stores our final result.

class Solution {
public:    
    int dp[12 + 1][10000 + 1];
    
    int findLowestCoins(vector<int> &coins, int arraySize, int amount) {
        for (int i = 0; i < arraySize + 1; i++)
            for (int j = 0; j < amount + 1; j++)
                if (i == 0 || j == 0)
                    dp[i][j] = (j == 0) ? 0 : INT_MAX - 1;
        
        for (int i = 1; i < arraySize + 1; i++) {
            for (int j = 1; j < amount + 1; j++) {
                if (coins[i - 1] > j)
                    dp[i][j] = 0 + dp[i - 1][j];
                else
                    dp[i][j] = min(0 + dp[i - 1][j], 1 + dp[i][j - coins[i - 1]]);
            }
        }
        
        return dp[arraySize][amount];
    }
    
    int coinChange(vector<int>& coins, int amount) {
        int res = findLowestCoins(coins, coins.size(), amount);
        return (res == INT_MAX - 1) ? -1 : res;
    }
};
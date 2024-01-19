 int n = prices.size();
    if (n <= 1) {
        return 0;
        // Not enough days for a transaction
    }

    int minIndex = 0;
    int maxIndex = 0;
    int maxProfit = 0;

    for (int i = 1; i < n; ++i) {
        // Update minimum index if a smaller value is found
        if (prices[i] < prices[minIndex]) {
            minIndex = i;
            maxIndex = i; 
            // Reset maxIndex since we found a new minimum
        }

        // Update maximum index if a larger value is found
        if (prices[i] > prices[maxIndex]) {
            maxIndex = i;
        }

        // Calculate profit and update if it's greater than the current          maxProfit
        maxProfit = max(maxProfit, prices[maxIndex] - prices[minIndex]);
    }

    return maxProfit;
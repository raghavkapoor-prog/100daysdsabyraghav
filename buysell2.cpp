   int n = prices.size();
    int maxProfit = 0;

    for (int i = 1; i < n; ++i) {
        // If the price on the current day is higher than the previous day, buy and sell on the same day
        if (prices[i] > prices[i - 1]) {
            maxProfit += prices[i] - prices[i - 1];
        }
    }

    return maxProfit;
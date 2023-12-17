// class Solution {
// public:
//     long long minimumCost(vector<int>& nums) {
//          int n = nums.size();

//         // Find the minimum and maximum values in the array
//         int minValue = INT_MAX;
//         int maxValue = INT_MIN;
//         for (int num : nums) {
//             minValue = min(minValue, num);
//             maxValue = max(maxValue, num);
//         }

//         long long minCost = LLONG_MAX;

//         // Iterate over all possible values of x
//         for (int x = minValue; x <= maxValue; x++) {
//             long long totalCost = 0;

//             // Calculate the total cost for the current x
//             for (int i = 0; i < n; i++) {
//                 totalCost += abs(nums[i] - x);
//             }

//             // Update the minimum cost
//             minCost = min(minCost, totalCost);
//         }

//         return minCost;
//     }
// };


// Return an integer denoting the minimum possible total cost to make nums equalindromic by performing any number of special moves

// nums = [1,2,3,4,5]
// Output: 6
// Explanation: We can make the array equalindromic by changing all elements to 3 which is a palindromic number. The cost of changing the array to [3,3,3,3,3] using 4 special moves is given by |1 - 3| + |2 - 3| + |4 - 3| + |5 - 3| = 6.
// It can be shown that changing all elements to any palindromic number other than 3 cannot be achieved at a lower cost.
    
    
    
//     1,2,3,4,5
    
//     1-3 =2
//     2-3= 1
//     4-3 =1
//     5-3 =2
    
    
//     Choose an index i in the range [0, n - 1], and a positive integer x.
// Add |nums[i] - x| to the total cost.
// Change the value of nums[i] to x.
    
//     vector<int>totalcost;

//     vector<int>cost;
//     int n =nums.size();
//    for (int i =0 ; i<n;i++){
//        int x =i;
       
//        nums
       
  
    
    
    
    
    



    // watched a video where all test cases where solved for it 
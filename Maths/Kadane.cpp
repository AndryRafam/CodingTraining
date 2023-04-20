/*Kadane Algorithm: Maximum sub array sum

Time complexity: O(N), where N is the size of the array.
*/

#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
    static int kadane(vector<int> &arr){
        int currSum = arr[0];
        int maxSum = arr[0];
        
        for(auto i(1); i < arr.size(); ++i){
            currSum = max(arr[i],currSum+arr[i]);
            maxSum = max(currSum,maxSum);
        }
        return maxSum;
    }
};

int main(){
    ios_base::sync_with_stdio(false);
    vector<int> arr = {-1,2,4,-3,5,2,-5,2};
    cout << Solution::kadane(arr) << endl;
    return 0;
}
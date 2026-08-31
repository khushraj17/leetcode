class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = size(nums);
        int temp[n];
        k = k%n;

        for(int i =n-k ; i < n; i++){
            temp[i-(n-k)] = nums[i];
        }
        //shifting
        for(int i =0 ; i < n-k; i++){
            nums[n-i-1] = nums[n-k-1-i];
        }
        for(int i =0 ; i < k ; i++){
            nums[i] = temp[i];
        }
        
    }
};
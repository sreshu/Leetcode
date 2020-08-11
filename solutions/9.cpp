int maxSubArray(vector& nums) {

int max_so_far = INT_MIN;
int max_ending_here = 0;

for (int i = 0; i < nums.size(); i++) {
max_ending_here += nums[i];

    max_so_far = max(max_so_far, max_ending_here);

    max_ending_here = max(max_ending_here, 0);
}

return max_so_far;

}

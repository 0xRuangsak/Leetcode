function runningSum(nums) {
    for (var i = 1; i < nums.length; i++) {
        nums[i] += nums[i - 1];
    }
    return nums;
}

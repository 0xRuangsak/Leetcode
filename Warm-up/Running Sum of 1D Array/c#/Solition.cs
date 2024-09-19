public class Solution {
    public int[] RunningSum(int[] nums) {
        
        for (int i = 1; i < nums.length; i++) {
            nums[i] += nums[i - 1];
        }

        return nums;
        
    }
}
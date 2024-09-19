class Solution {
    public int[] runningSum(int[] nums) {
        if (nums == null || nums.length == 0) {
            return nums; // Return as is
        }

        for (int i = 1; i < nums.length; i++) {
            nums[i] += nums[i - 1];
        }

        return nums;
    }

    // Main method to test the runningSum method
    public static void main(String[] args) {
        Solution solution = new Solution();

        int[] nums = { 1, 2, 3, 4 };
        int[] result = solution.runningSum(nums);

        // Print the running sum
        System.out.print("Running Sum: ");
        for (int num : result) {
            System.out.print(num + " ");
        }
    }
}

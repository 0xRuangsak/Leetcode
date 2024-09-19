using System;

public class Solution
{
    public int[] RunningSum(int[] nums)
    {
        for (int i = 1; i < nums.Length; i++)
        {
            nums[i] += nums[i - 1];
        }
        return nums;
    }
}

public class Program
{
    public static void Main(string[] args)
    {
        Solution solution = new Solution();
        int[] nums = { 1, 2, 3, 4 }; // Example input
        int[] result = solution.RunningSum(nums);

        Console.WriteLine(string.Join(", ", result)); // Output result
    }
}

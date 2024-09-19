class Solution:
    def runningSum(self, nums: list[int]) -> list[int]:
        if not nums:  # Handle empty list case
            return []
        for i in range(1, len(nums)):
            nums[i] += nums[i - 1]
        return nums

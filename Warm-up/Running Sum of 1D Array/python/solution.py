class Solution:
    def runningSum(self, nums: list[int]) -> list[int]:
        for i, _ in enumerate(nums[1:], start=1):
            nums[i] += nums[i - 1]
        return nums

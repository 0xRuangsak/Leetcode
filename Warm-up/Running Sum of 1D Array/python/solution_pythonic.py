from itertools import accumulate


class Solution:
    def running_sum(self, nums: list[int]) -> list[int]:
        return list(accumulate(nums))

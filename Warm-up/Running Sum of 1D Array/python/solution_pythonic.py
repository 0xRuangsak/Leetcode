from itertools import (
    accumulate,
)  # Import the 'accumulate' function from the itertools module


class Solution:
    def running_sum(self, nums: list[int]) -> list[int]:
        """
        Calculate the running sum of a list of integers.

        Args:
            nums (list[int]): A list of integers for which the running sum is to be calculated.

        Returns:
            list[int]: A list containing the running sum of the input list.
        """
        # The 'accumulate' function returns an iterator that yields the running totals.
        # Converting it to a list gives us the desired running sum as a list.
        return list(accumulate(nums))

from typing import List
class Solution(object):
    def maxSum(self, nums: List[int]) -> int:
        max_sum = nums[0]
        curr_sum = nums[0]

        for i in range(1,len(nums)):
            if curr_sum < 0:
                curr_sum = nums[i]
            else:
                curr_sum += nums[i]

            max_sum = max(max_sum, curr_sum)

        return max_sum


sol = Solution()
nums = [-2, 1, -3, 4, -1, 2, 1, -5, 4]

print(sol.maxSum(nums))

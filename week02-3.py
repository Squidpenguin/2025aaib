#week02-3.py
#Leetcode 1.Two Sum
#有一堆數字 nums 裡面有哪兩個相加,是target
#num[i] + nums[j] == target 找i和j 使得加起來是target
class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        box = {}

        for i ,num in enumerate(nums):
            other = target - num
            if other in box:
                return [box[other],i]
            else:
                box[num] = i

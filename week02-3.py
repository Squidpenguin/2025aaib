#week02-3.py
#Leetcode 1.Two Sum
#���@��Ʀr nums �̭�������Ӭۥ[,�Otarget
#num[i] + nums[j] == target ��i�Mj �ϱo�[�_�ӬOtarget
class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        box = {}

        for i ,num in enumerate(nums):
            other = target - num
            if other in box:
                return [box[other],i]
            else:
                box[num] = i

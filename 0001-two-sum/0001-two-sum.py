class Solution(object):
    def twoSum(self, nums, target):
        for i in range(len(nums)):
            for j in range(len(nums)):
                if j == i:
                    break
                else:
                    nums[i] + nums[j] == target
                    return [i,j]
        
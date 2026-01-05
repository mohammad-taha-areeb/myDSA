from typing import List
def maxSubArray(nums: List[int]) -> int:
        n = len(nums)
        res = -inf
        if n==1:
            return nums[0]
        for i in range(n):
            temp = 0
            for j in range(i,n):
                temp += nums[j]
                res = max(temp,res)
        return res


nums = [-2,1,-3,4,-1,2,1,-5,4]
print(maxSubArray(nums))
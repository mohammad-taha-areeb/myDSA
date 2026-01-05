from typing import List
def maxSubArray(nums: List[int]) -> int:
        n = len(nums)
        res = "-inf"
        sum = 0
        # if n==1:
        #     return nums[0]
        for i in range(n):
            if (sum<0):
                sum=0
            sum += nums[i]
            res = max(res,sum)
        return res


nums = [-2,1,-3,4,-1,2,1,-5,4]
print(maxSubArray(nums))
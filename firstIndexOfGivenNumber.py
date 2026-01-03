#Binary Search
nums = [1,1,2,3,2]

x = 2
n = len(nums)

low = 0
high = n-1

fi = -1

while(low<=high):
    mid = (low+high)//2
    
    if (nums[mid]==x):
        fi = mid
        high = mid-1
    elif (nums[mid]<x):
        low = mid+1
    else:
        high = mid-1

print(fi)
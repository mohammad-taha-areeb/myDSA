arr1 = [1,2,3,4,7,8]
arr2 = [4,5,8,9]

left = 0
right = 0

ans = []

while(left<len(arr1) and right < len(arr2)):
    if arr1[left] <= arr2[right]:
        ans.append(arr1[left])
        left+=1
    else:
        ans.append(arr2[right])
        right+=1
        
while(left < len(arr1)):
    ans.append(arr1[left])
    left+=1
    
while(right < len(arr2)):
    ans.append(arr2[right])
    right+=1
    
print(ans)

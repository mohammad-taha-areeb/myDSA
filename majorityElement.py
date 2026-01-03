lt = [1,1,2,3,1,1,2,2,2,2,2]

n = len(lt)

# for i in range(n):
#     cnt = 0
    
#     for j in range(n):
#         if lt[i] == lt[j]:
#             cnt += 1
            
#     if cnt > n/2:
#         print(lt[i])
#         break

map = dict()
for i in range(n):
    if lt[i] in map:
        map[lt[i]] +=1
    else:
        map[lt[i]] = 1
        
for num,count in map.items():
    if count > n/2:
        print(num)
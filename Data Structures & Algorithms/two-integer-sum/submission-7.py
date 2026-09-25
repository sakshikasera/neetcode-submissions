class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        n = len(nums)
        i=0
        map={}
    
        while i < n:
            if target-nums[i] not in map:
                map[nums[i]]=i
            else:
                return [map[target-nums[i]], i]
            i+=1
        return [-1,-1]

            
            




            
    


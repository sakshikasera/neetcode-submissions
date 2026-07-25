class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        sum = 0 
        remaining = 0
        i=0
        for i in range(len(nums)):
            sum +=nums[i]
            remaining  = target - sum 
            print(remaining)
            if remaining in nums[i+1:]:
                # return [i,  nums[i+1:].index(remaining)+i+1]
                return [i,nums.index(remaining, i + 1)]
            else:
                sum = 0

            i+=1


            
    


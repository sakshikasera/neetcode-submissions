from collections import Counter
class Solution:
    def hasDuplicate(self, nums: List[int]) -> bool:
        i=0
        count = Counter(nums)
        for i in count:
    
            if count[i]>1:                                                                                                                                                                                                                                                                                                                                                                                                                      
                return True
            else:
                i+=1
        return False


class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        arr1 = Counter(s)
        arr2 = Counter(t)
        print(arr1)
        print(arr2)
        if arr1 !=arr2:
            return False
        return True 
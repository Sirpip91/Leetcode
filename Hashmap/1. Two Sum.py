class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        #create hashmap
        hashs = {}
        # i is val n is index enumerate allows this we go through nums
        for i, n in enumerate(nums):
            #store the number we look for
            diff = target - n
            #if in hashset return [index, index]
            if diff in hashs:
                return [hashs[diff], ]
            #else add [index][index]
            hashs[n] = i
        return

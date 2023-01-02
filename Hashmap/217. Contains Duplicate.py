class Solution:
    def containsDuplicate(self, nums: List[int]) -> bool:
        #setup hash
        hashs = set()

        #go through nums add to hash 
        for i in nums:
            #check if number is already there
            if i in hashs:
                return True
            #else add it
            hashs.add(i)
        return False

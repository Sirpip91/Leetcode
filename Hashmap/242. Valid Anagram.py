class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        #check if the lengths are same
        if len(s) != len(t):
            return False

        #setup two hashmap
        hash1 = {}
        hash2 = {}

        #loop through each string with i and count occurences
        for i in range(len(s)):
            hash1[s[i]] = 1 + hash1.get(s[i], 0)
            hash2[t[i]] = 1 + hash2.get(t[i], 0)

        #if they are equal return true else return false
        if hash1 == hash2:
            return True
        return False

        

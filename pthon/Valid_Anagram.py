class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        if len(s) != len(t) :
            return False
        char_count = [0]*256
        
        for x in s :
            char_count[ord(x)] += 1
        for c in t :
            char_count[ord(c)] -= 1
        
        return all(count == 0 for count in char_count)

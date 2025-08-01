class Solution(object):
    def isPalindrome(self, s):
       left,right=0,len(s)-1
       while left< right:
        #Skip the non-alphanumeric char
        if not s[left].isalnum():
            left+=1
        elif not s[right].isalnum():
            right-=1
        #Compare vcharacters
        elif s[left].lower()!=s[right].lower():
            return False
        else:
            left+=1
            right-=1
       return True

        

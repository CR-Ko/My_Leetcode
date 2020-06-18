## Caterpillar method
class Solution(object):
    def lengthOfLongestSubstring(self, s):
        """
        type s: str
        rtype:  int
        """
        length = 0 
        #print(len(s))
        chars = set()
        left,right=0,0
        while left < len(s) and right < len(s):
            #if s[right] in chars:
            #        if s[right] == s[left]:
            #            chars.remove(s[left])
            #        left+=1
            #else:
            #    char.adds([right])
            #
            #right+=1

            if s[right] in chars:
                if s[right]==s[left]:
                    chars.remove(s[left])
                    chars.add(s[right])
                left+=1
            else:    
                chars.add(s[right])
            right+=1
        return len(chars),chars

def main():
    #str = 'babbcaza'
    str = 'abcabcbb'
    str = 'abbb'
    result, chars = Solution().lengthOfLongestSubstring(str)
    print(result)
    print(chars)

main()

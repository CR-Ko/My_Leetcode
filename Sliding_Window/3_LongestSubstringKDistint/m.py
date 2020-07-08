
class Solution(object):
    def findLongestSubstringWithKDistinct(self,k,s):
            length = 0
            r,l= 0,0
            chars = set()
            cnt = 0
            while r<len(s) and l<len(s):
                if s[r]==s[l]:
                   chars.add(s[r])
                   l=l+1 
                else:
                    if(cnt<=k):
                        chars.add(s[r])
                    
                r=r+1
            print(chars)
            return len(chars), chars
def main():
    s = 'araaci'
    
    l= Solution().findLongestSubstringWithKDistinct(1,s)
    print('len: ',l)

main()

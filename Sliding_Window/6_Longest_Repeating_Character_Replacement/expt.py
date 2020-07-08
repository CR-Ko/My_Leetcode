
import collections
class Solution(object):
    def findLongestRepeatingSubstring(self,k,s):
            """
            :type s: str
            :type k: int
            :rtype: int 
            """
            count = collections.Counter()
            print(s)
            res = 0
            start = 0
            for i, char in enumerate(s):
                count[char]+=1 
                print(char)
                print(count[char])
                #maxCnt = count.most_common(1)[0][1]
                #while i - start + 1 - maxCnt > k:
                #    count[s[start]] = count[s[start]] - 1
                #    start += 1
                #res = max(res, i - start +1)
            #return res


if __name__ == '__main__':
    sol = Solution()
    k = 1
    s = 'AABABBA'
    print(sol.findLongestRepeatingSubstring(k,s))

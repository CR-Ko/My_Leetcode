
class Solution:
    def findTotalFruit(self, tree):
        """
        :type tree: List[int]
        :rtypr: int
        """
        j = 0
        m = {}
        for i in range(0, len(tree)):
                if tree[i] in m:
                    m[tree[i]]+=1
                else:
                    m[tree[i]]=1
                print(m)
                while len(m)>2 and j<=i:
                    print(m)
                    m[tree[j]]-=1
                    if m[tree[j]]==0:
                        del m[tree[j]]
                    j+=1    
        return i-j+1



if __name__ == '__main__':
    s = Solution()
    tree = [1,2,3,2,2]
    result = s.findTotalFruit(tree)
    print(result)

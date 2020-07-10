class Solution(object):
    def findLength(self, arr):
        """
        type:  str
        rtype: int
        """
        # Caterpillar
        m = {}
        j = 0
        print(arr)
        for i in range(0,len(arr)):
            print('i:',i)
            if arr[i] in m:
                m[arr[i]]+=1
            else:
                m[arr[i]]=1
            print(m)
            while len(m)>2 and j<=i:
                del m[arr[i]]
                j+=1    
                
            
            print(m)
        print(m)
        print('--end--')
        return i-j+1 # len(m) is wrong, always be 2

if __name__ == '__main__':
    #arr = 'eceba'
    arr = 'ccaabbb'
    sol = Solution()
    print(sol.findLength(arr))


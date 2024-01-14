class Solution:
    def repeatedRows(self, arr, m ,n):
        #code here
        v=[]
        for i in range(0,len(arr)-1):
            for j in range(i+1,len(arr)):
                if(arr[i]==arr[j]):
                    v.append(j)
        f=set(v)
        p=list(f)
        p.sort()
        return p
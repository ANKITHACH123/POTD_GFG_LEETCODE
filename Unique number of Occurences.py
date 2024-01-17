class Solution:
    def uniqueOccurrences(self, arr: List[int]) -> bool:
        c=[]
        arr1=set(arr)
        for i in arr1:
            c.append(arr.count(i))
        if(len(c)==len(set(c))):
            return True
        else:
            return False   

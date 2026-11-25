class Solution(object):
    def isUgly(self, n):
        """
        :type n: int
        :rtype: bool
        """
        if n==0:
            return False
        while True:
            if n%2==0:
                n=n/2
            else:
                break
        while True:
            if n%3==0:
                n=n/3
            else:
                break
        while True:
            if n%5==0:
                n=n/5
            else:
                break
        if n==1:
            return True
        else:
            return False

        
class Solution(object):
    def countNegatives(self, grid):
        """
        :type grid: List[List[int]]
        :rtype: int
        """
        counter=0
        for i in grid:
            for j in i:
                if j<0:
                    counter=counter+1
        return counter
class Solution(object):
    def convertTemperature(self, celsius):
        """
        :type celsius: float
        :rtype: List[float]
        """
        #C2F
        fahrenheit = celsius * 1.80 + 32.00
        #C2K
        kelvin = celsius + 273.15
        arr=[kelvin,fahrenheit]
        return arr
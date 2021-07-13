import ctypes

calculator = ctypes.CDLL("./calculator/libcal.so")

print(calculator.add(12, 13))

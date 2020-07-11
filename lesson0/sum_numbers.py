import math


def sum_numbers_manually(n):
	print("I'm adding all the numbers up to n manually")
	total = 0
	for i in range(n + 1):
		total += i
	return total

def sum_numbers_gauss(n):
	print("I'm adding all the numbers up to n using gauss")
	return math.floor(n*(n+1)/2)

if(sum_numbers_gauss(100) == sum_numbers_manually(100)):
	print("They are equal!")
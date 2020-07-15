
#this is recursive- we'll talk about that later
# it is easy to write and read but inefficient 
def fib(n):
	if n < 2:
		return n
	else:
		print(fib(n -1) + fib(n-2))
		return fib(n -1) + fib(n-2)


# this uses a strategy of logging values that have already been visited. It is more complicated but faster
fib_seen = [1,1]
def fib2(n):
	if n == 0:
		return 0
	elif n <= len(fib_seen):
		return fib_seen[n-1]
	else:
		temp = fib2(n -1) + fib2(n - 2)
		print(temp)
		fib_seen.append(temp)
		return temp



for i in range(0,9):
	print(fib(i), "and ", fib2(i))

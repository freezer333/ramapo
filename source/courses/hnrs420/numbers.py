
num = 0
current_maximum = 0


while num is not -1:
	num = int(input("Please enter a number (-1 to stop)  "))
	if num > current_maximum:
		current_maximum = num

print("Maximum number entered was", current_maximum)
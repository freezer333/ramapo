max_odd = 0

test = 1
while test > 0 :
    test = int(input("Enter and (positive) integer (type -1 to stop):  "))
    if test % 2 != 0 and test > max_odd:
        max_odd = test

if max_odd != 0 :
    print("The largest odd number was", max_odd)
else:
    print("There were no odd numbers!")
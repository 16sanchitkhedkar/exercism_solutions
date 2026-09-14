def is_armstrong_number(number):
    numstring = str(number)
    sum = 0
    for i in numstring:
        sum += int(i) ** len(numstring)
    if sum == number:
        return True
    else:
         return False
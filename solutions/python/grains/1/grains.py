def square(number):
    try:
        if number > 64 or number < 1:
            raise ValueError("square must be between 1 and 64")
        elif number == 1:
            return 1
        else:
            return square(number - 1) * 2
    except ValueError:
        raise


def total():
    total_sum = 0
    for i in range(1, 65):
        total_sum += square(i)
    return total_sum
        

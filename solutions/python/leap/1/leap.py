def leap_year(year):
    leap_status = False
    if year % 4 == 0:
        leap_status = True
    if leap_status and year % 100 == 0:
        if year % 400 == 0:
            leap_status = True
        else:
            leap_status = False
    return leap_status

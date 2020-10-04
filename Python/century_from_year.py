# Given a year, return the century it is in.

# Input , Output Examples ::
# centuryFromYear(1705)  returns (18)
# centuryFromYear(1900)  returns (19)
# centuryFromYear(1601)  returns (17)
# centuryFromYear(2000)  returns (20)

def century(year):
    return (year + 99) // 100

###############################################
### CONVERT TIME FROM SECONDS TO HH:MM:SS   ###
###############################################

time = int(input("Enter seconds: "))

days = time // (24 * 3600)
time = time % (24 * 3600)
hours = time // 3600
time %= 3600
minutes = time // 60
time %= 60
seconds = time

print("DD:HH:MM:SS-> %2d:%2d:%2d:%2d" % (days, hours, minutes, seconds))
# This is contributed by Ashish Kumar.
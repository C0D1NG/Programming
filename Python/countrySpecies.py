country = ['France', 'United States', 'United Kingdom', 'Russia' , 'Germany', 'Japan', 'Italy', 'Autralia', 'Canada', 'South_Africa']
n = int(input("To select a random country, type a number from 0 to 9: "))
species = 0
if n == 0:
    species = 4155
elif n == 1:
    species = 6780
elif n == 2:
    species = 2345
elif n == 3:
    species = 7690
elif n == 4:
    species = 3452
elif n == 5:
    species = 5165
elif n == 6:
    species = 6770
elif n == 7:
    species = 7155
elif n == 8:
    species = 8380
else:
    species = 9155


print(country[n], 'has',species, 'different species.')

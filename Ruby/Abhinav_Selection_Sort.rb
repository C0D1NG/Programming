#Function for Selection_Sort
def Selection_Sort (array)
  for i in (0 .. array.length - 2)
    min_index = i
    for j in (i + 1 .. array.length - 1)
      if (array[j] < array[min_index])
        min_index = j
      end
    end
    if i != min_index     #Swap if required
      temp = array[min_index]
      array[min_index] = array[i]
      array[i] = temp
    end
  end
end

puts("Enter number of elements in an array : ")
n= gets.to_i #length of array
array = []
puts("Enter the elements in an array : ")
while n>0
  num = gets.chomp.to_i
  array.push(num)
  n = n-1
end
puts("Array before sorting: ")
print(array)
puts("\nArray after sorting: ")
Selection_Sort(array)
print(array)

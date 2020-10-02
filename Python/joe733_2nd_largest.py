gvn_list = list(map(int, input("Enter a list of numbers: ").split()))

# Simple straight forward method
srt_list = sorted(gvn_list)
for num in srt_list[::-1]:
    if num < srt_list[-1]:
        print(f"2nd largest: {num}")
        break
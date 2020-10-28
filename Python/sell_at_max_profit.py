# [Q] Buy at a min price and sell it for max profit.

def sell_at_max(arr):
    if(len(arr) >= 0):
        
        global_min = arr[0]
        global_max_profit = 0

        for value in arr:
            if(value < global_min):
                global_min = value

            current_profit = value - global_min

            if(current_profit > global_max_profit):
                global_max_profit = current_profit
        
        print ("buy at min:", global_min)
        print ("sell at max profit:", global_max_profit)


arr = [ 8, 9, 4, 6, 12, 10, 11 ]

sell_at_max(arr)
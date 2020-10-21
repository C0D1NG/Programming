
factorsList :: Int -> [Int]
factorsList a = filter (\x -> mod a x == 0) [3..div a 2]

isPrime :: Int -> Bool
isPrime a | elem a [0, 1]       = False
isPrime a | elem a [2, 3, 5, 7] = True
isPrime a | even a              = False
isPrime a | otherwise           = length (factorsList a) == 0

main = do
    print $ isPrime 1
    print $ isPrime 2


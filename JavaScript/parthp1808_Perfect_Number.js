function isPerfectNumber(num) {
    var sum = 0;
    var limit = num / 2
    for(var i = 1; i <= limit; i++){
        if (num%i == 0){
            sum+=i
        }
    }
    return sum == num && num != 0
}
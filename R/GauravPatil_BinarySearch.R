Rbisect <- function(lst, value){
    low=1
    high=length(lst)
    mid=length(lst)%/%2
    if (lst[low]==value) low
    else if (lst[high]==value) high
    else{
    while (lst[mid] != value) {
      if (value > lst[mid]){
        low = mid+1
      } else if (value < lst[mid]) {
        high = mid - 1
      }
      if(high<low){
         mid=-1;break
      }
      mid=(low+high)%/%2
    }
      mid
}
}

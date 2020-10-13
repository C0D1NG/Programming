<?php  
//function to check if the number is strong number or not
function is_strong_number($num)
{
	$sum = 0;
	$r = 0;
	
	//store the entered number in a temp variable
	$temp=$num;
	
	//split the number and find factorial
	while($num){
		
		$i=1;
		$fact=1;
		
		//get one digit from
		$r=$num%10;
		
		//factorial script
		while($i<=$r){
			$fact=$fact*$i;
			$i++;
		}
		
		//sum the factorial value
		$sum=$sum+$fact;
		//split the next number 
		$num=floor($num/10);
	}
	
	//check the sum value and stored temp value
	//if same then it's a strong number and vice-versa
	if($temp == $sum){
		return true;       //Retrns true if strong number
	}else{
		return false;       //else returns false
	}
}
?>
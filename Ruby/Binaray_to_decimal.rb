class BinaryToDecimal
  
  def convert(number)
    @binary_number = number
    show_decimal
  end

  def show_decimal
    puts @binary_number.to_i(2) 
  end
end

decimal_number = BinaryToDecimal.new
decimal_number.convert("1001")

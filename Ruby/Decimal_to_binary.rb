class DecimalToBinary
  
  def convert(number)
    @decimal_number = number
    show_binary
  end

  def show_binary
    puts @decimal_number.to_s(2) 
  end
end

binary_number = DecimalToBinary.new
binary_number.convert(15)

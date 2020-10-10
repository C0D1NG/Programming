class Binary
  def self.to_decimal(string)
    raise ArgumentError if string.match?(/[^01]/)

    string.reverse.chars.map.with_index do |digit, index|
      digit.to_i * 2**index
    end.sum
  end
end

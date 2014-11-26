class String
  
  def isUnique?
    chars = self.split('').uniq
    return chars.length == self.length ? true : false
  end
end

puts "apple".isUnique?
puts "peach".isUnique?
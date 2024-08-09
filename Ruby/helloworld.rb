system "cls"

# This is comment
puts "Hello, World!".length

# Variable declaration
name = "Satya Ananda"
npm = "22222"

# Input
print "Enter your age: "
# Remove trailing whitespace with chomp method when using gets
# gets actually save data as string
# to convert to number, use method to_i
age = gets.chomp
age = age.to_i # alternatively, use age = gets.to_i
# To convert number to string use --> to_s

puts "Hello #{name}, your false age is #{age = age + 10}! Nice to meet you."

puts "Age after = #{age}. Is this correct? [1 for yes, 2 for no]"
confirm = gets.to_i

if confirm == 1
  puts "Wrong! Your actual age is #{age - 10}, not #{age}"
elsif confirm == 2
  puts "Right! Your actual age is #{age = age - 10}, not #{age + 10}"
end
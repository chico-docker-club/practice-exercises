#!/usr/bin/env ruby
input = ARGV

if input.length < 1
	puts 'Wrong number of args!'
end

for word in input
	print word.gsub(/[aeiouyAEIOUY]/i, 'oodle')
	print " "
end
puts
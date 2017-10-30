#!/usr/bin/env ruby
input = ARGV

if input.length == 1
	puts input[0].gsub(/[aeiouyAEIOUY]/i, 'oodle')
else
	puts 'Wrong number of args!'
end
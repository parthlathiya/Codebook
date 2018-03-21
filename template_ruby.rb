
###################################################### 
# 													 #
#                      author                        #
#                  Parth Lathiya                     #
#      https://www.cse.iitb.ac.in/~parthiitb/        #
# 													 #
###################################################### 


gets.chomp.to_i.times do |vt|
	print "Testcase - #{vt+1}\n"

	gets.chomp.to_i.times do |at|
		u,v=gets.chomp.split.map(&:to_i)
		
		print "u: #{u} v: #{v}\n"

	end
end
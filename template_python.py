
###################################################### 
# 													 #
#                      author                        #
#                  Parth Lathiya                     #
#      https://www.cse.iitb.ac.in/~parthiitb/        #
# 													 #
###################################################### 


vt = int(input().strip())
for vtt in range(vt):
	print("Testcase - "+str(vtt+1))
	at = int(input().strip())
	for att in range(at):
		u,v = list(map(int, input().strip().split()))

		print (u,v)
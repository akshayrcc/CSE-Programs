import os,psutil
p=psutil.Process(os.getpid())
print p.nice
var=input("please enter nice value:\n")
p.nice=var
print p.nice
id1=input("Enter process id")
p1=psutil.Process(id1)
#please download psutil.rpm 
# install it
#run this application in eclipse only

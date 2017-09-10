#This program is an example of while loop

#!/bin/bash


#--------------------------------------------------------------- while-loop statement ----------------------------------------------------------------------
#	value = 1 #initializing the value
#	while [ condition ]
#	do
#		statement
#	loop=$(($loop + 1)) #increments the value
#	done
#-----------------------------------------------------------------------------------------------------------------------------------------------------------

#initializing the value of loop
loop=1

#checking the condition before it gets into the loop
while [ $loop -le 5 ]
do
	echo "value of loop counter is : $loop"

#increment the value of loop by 1 using "expr"
	#loop=$(($loop + 1))
	loop=`expr $loop + 1`
done



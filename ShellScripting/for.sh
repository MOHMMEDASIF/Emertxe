
#This program is an simple example of for loop

#!/bin/bash


#for(( initializing ; condition ; increment statement ))

for(( i=0 ;i<=5 ; i++))
do
#print the value of "i" in the loop statement 
	echo "value of loop counter is: $i"
#value of i gets increment by 1 
#loop gets exectued till the condition becomes false
done


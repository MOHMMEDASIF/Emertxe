#-----------------------------------------------------------------------------------------------------------------------------------------------------------
#-------------------------------------------------------------Expected Solution-----------------------------------------------------------------------------
#-----------------------------------------------------------------------------------------------------------------------------------------------------------
<<ExpectedInput





ExpectedInput

<<ExpectedOutput




ExpectedOutput


#-----------------------------------------------------------------------------------------------------------------------------------------------------------
#------------------------------------------------------------Begining of the Program------------------------------------------------------------------------
#-----------------------------------------------------------------------------------------------------------------------------------------------------------

#!/bin/bash

#import the exit.sh file to perform exit operation
source exit.sh

echo "Enter the value of N"
read n

declare -a array={'0''1'}
declare -a fibo={}
#${array[1]}=0
#${array[2]}=1
	
	for ((i=1;i<n;i++))
	do
		${fibo[i]}=$((${array[i-1]} + ${array[i]}))
	done

echo "${fibo[@]}"





#calling a function from " exit.sh" file
exit_program presentFilename.sh

#-----------------------------------------------------------------------------------------------------------------------------------------------------------
#----------------------------------------------------------End of the Program-------------------------------------------------------------------------------
#-----------------------------------------------------------------------------------------------------------------------------------------------------------





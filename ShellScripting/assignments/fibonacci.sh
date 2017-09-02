#-----------------------------------------------------------------------------------------------------------------------------------------------------------
#-------------------------------------------------------------Expected Solution-----------------------------------------------------------------------------
#-----------------------------------------------------------------------------------------------------------------------------------------------------------
#This Program performes fibonacci operation(i.e, adds last two number to find third number) "if a[0]=0 a[1]=1 then a[2] should have 0+1=1 as content". 


<<ExpectedInput

	Example:	Enter the value of N
			5



ExpectedInput

<<ExpectedOutput

	Example:	fibonacci Series of an Given Number:
			0 1 1 2 3 5


ExpectedOutput


#-----------------------------------------------------------------------------------------------------------------------------------------------------------
#------------------------------------------------------------Begining of the Program------------------------------------------------------------------------
#-----------------------------------------------------------------------------------------------------------------------------------------------------------

#!/bin/bash

#import the exit.sh file to perform exit operation
source exit.sh

#read the number from the user and perform Fibonacci series operation
echo "[INPUT]Enter the value of N[INPUT]"
read n

if [ $n -gt 0 ]
then

	declare -a array=( 0 1 )


	echo "[OUTPUT]Fibonacci Series of Given Number $n is [OUTPUT]"
	echo -ne "${array[0]}\t";
	echo -ne "${array[1]}\t";


	for((i=2;i<=n;i++))
	do
		
		array[i]=$((${array[i-2]}+${array[i-1]}))
		if [ ${array[i]} -lt $n ]
		then
			count=$i
			echo -ne  "${array[i]}\t"
		
		else
			echo -e "\n\n\nlargest of given fibonacci series is:${array[$count]}\n\n"			
			exit_program fibonacci.sh
		fi
	done

else
	echo "[Error]Invalid Input[Error]"
	exit_program fibonacci.sh

fi



#-----------------------------------------------------------------------------------------------------------------------------------------------------------
#----------------------------------------------------------End of the Program-------------------------------------------------------------------------------
#-----------------------------------------------------------------------------------------------------------------------------------------------------------






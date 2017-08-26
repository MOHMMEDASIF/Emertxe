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

#validate the input wheather the input is Number or character
if [ $n -gt 0 ]
then
	declare -a array=( 0 1 )
	for ((i=2;i<=n;i++))
	do
		array[i]=$((${array[i-2]} + ${array[i-1]})) 	#performs the adding operation with last two numbers(Example:a[2]=a[1]+a[0])
	done
	echo "[OUTPUT]Fibonacci series of Given Number is:[OUTPUT]"
	echo "${array[@]}"	#prints the entire values of an array


#calling a function from " exit.sh" file
exit_program fibonacci.sh
else

	echo "[Error]Please Enter a Valid Input to calculate fibonacci of Number[Error]"
	exit_program fibonacci.sh
fi

#-----------------------------------------------------------------------------------------------------------------------------------------------------------
#----------------------------------------------------------End of the Program-------------------------------------------------------------------------------
#-----------------------------------------------------------------------------------------------------------------------------------------------------------






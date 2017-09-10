#-----------------------------------------------------------------------------------------------------------------------------------------------------------
#-------------------------------------------------------------Expected Solution-----------------------------------------------------------------------------
#-----------------------------------------------------------------------------------------------------------------------------------------------------------
#This Program Takes an input[Number] from an user and prints it in reverse order

<<ExpectedInput
	[example] if n is: 12345
	



ExpectedInput

<<ExpectedOutput
	[example] then reverse of n is: 54321



ExpectedOutput


#-----------------------------------------------------------------------------------------------------------------------------------------------------------
#------------------------------------------------------------Begining of the Program------------------------------------------------------------------------
#-----------------------------------------------------------------------------------------------------------------------------------------------------------

#!/bin/bash

#imported file that performes exit operation after the program is executed
source exit.sh 


#prompt the user to get the value and store it in the variable inputNumber
clear
echo -e "\t\t\t**********\tEnter the value that is need to be reversed\t**********"
read  inputNumber

dummyInput=$inputNumber
reverseFinalResult=0


declare -a remainder=()


#validate whether the given input is number else throw an error
if [ $inputNumber -gt 0 ]
then
	#while [ $dummyInput -gt 0 ]
	for((i=0;i<=n;i++))
	do
		remainder[$i]=$((dummyInput%10))
		


		echo "${remainder[@]}"
	
	done



<<comment	do 

		remainder=$(($dummyInput%10))	#captures the remainder of the input for each iteration
		reverseFinalResult=$(($reverseFinalResult*10+$remainder))	#addeds tens value before adding remainder in th Reverseresult
		dummyInput=$(($dummyInput/10))	#removes the last number in  the input value  
			
	done 
comment


 	#echo "[OUTPUT]Reversed value of $inputNumber is : $reverseFinalResult[OUTPUT]"


else
	echo -e "\t\t\t**********\t\tplease give a valid input to perform an operation\t\t**********\t\t\t"


fi

#Calling a function from " exit.sh" file
exit_program reverse.sh 


#-----------------------------------------------------------------------------------------------------------------------------------------------------------
#----------------------------------------------------------End of the Program-------------------------------------------------------------------------------
#-----------------------------------------------------------------------------------------------------------------------------------------------------------






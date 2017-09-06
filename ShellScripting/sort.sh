#!/bin/bash
#-----------------------------------------------------------------------------------------------------------------------------------------------------------
#-------------------------------------------------------------Expected Solution-----------------------------------------------------------------------------
#-----------------------------------------------------------------------------------------------------------------------------------------------------------
#This Program performs both Ascending and Descending sort operation 
<<ExpectedInput

	example:	./sort.sh 5 4 6 2 3 8 9 7 1
			1. Ascending
			2. Descending
			Please select an option: 1




ExpectedInput

<<ExpectedOutput
	example(1):	if option is 1 then
			Sorted array is 1 2 3 4 5 6 7 8 9
	example(2):	if option is 2 then 
			Sorted array is 9 8 7 6 5 4 3 2 1

ExpectedOutput


#-----------------------------------------------------------------------------------------------------------------------------------------------------------
#------------------------------------------------------------Begining of the Program------------------------------------------------------------------------
#-----------------------------------------------------------------------------------------------------------------------------------------------------------


#import the exit.sh file to perform exit operation
source exit.sh

#validates the arguments
if [ $# -gt 2 ] 
then
	declare -a inputValue=("$@")
	echo "inputcount : ${#inputValue[@]}"
	echo "content of inputValue ${inputValue[@]}"
#compares the first value with n-numbers of values till it reaches its proper index
	for((j=0; j<=${#inputValue[@]}; j++))
	do
		for((i=$(($j+1)); i<${#inputValue[@]}; i++))
		do

			if [  ${inputValue[j]} -gt  ${inputValue[i]} ] 
			then
				temp=${inputValue[$j]}
				inputValue[$j]=${inputValue[$i]}
				inputValue[$i]=$temp
			fi 
		done

	done
#prompts the user for user-option
	echo "[Input]Enter your choice[Input]"
	echo -e "1.Ascending \n2.Descending"
	read choice

#validates the user-choices
	if [ $choice -eq 1 ]
	then
		echo "[OUTPUT]Ascending Order [OUTPUT]"
		echo ${inputValue[@]}
		exit_program sort.sh
	elif [ $choice -eq 2 ]
	then 
		declare -a reverse=()
		echo "[OUTPUT]Descending Order[OUTPUT]"
		for((i="${#inputValue[@]}"; i>=0; i--))
		do
			reverse+=(${inputValue[i]})
		done
		 echo ${reverse[@]}
		exit_program sort.sh
	else
		echo "[ERROR]Invalid Choice[ERROR]"
		exit_program sort.sh
	fi


else
	echo "[ERROR]Please pass more than one argument to perform sort operation"
#calling a function from " exit.sh" file
	exit_program sort.sh

fi
#-----------------------------------------------------------------------------------------------------------------------------------------------------------
#----------------------------------------------------------End of the Program-------------------------------------------------------------------------------
#-----------------------------------------------------------------------------------------------------------------------------------------------------------






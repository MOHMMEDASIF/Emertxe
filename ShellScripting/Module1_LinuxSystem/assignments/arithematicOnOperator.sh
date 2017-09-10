#!/bin/bash
#-----------------------------------------------------------------------------------------------------------------------------------------------------------
#-------------------------------------------------------------Expected Solution-----------------------------------------------------------------------------
#-----------------------------------------------------------------------------------------------------------------------------------------------------------
#This program gets value from the user and performes arithematic operation by the given operant 
<<ExpectedInput
	
	example: input_value = 1234+ 



ExpectedInput

<<ExpectedOutput

	example: sum_of_the_value = 10


ExpectedOutput


#-----------------------------------------------------------------------------------------------------------------------------------------------------------
#------------------------------------------------------------Begining of the Program------------------------------------------------------------------------
#-----------------------------------------------------------------------------------------------------------------------------------------------------------



#import the exit.sh file to perform exit operation
source exit.sh

echo "[INPUT]Enter the String[INPUT]"
read inputValue

declare -a inputArray=("$inputValue")
countOfInputArray=${#inputArray[0]}
countOfInputValue=$(($countOfInputArray-1))
value=${inputArray[0] : 0 : $countOfInputValue }
operant=${inputArray[0] : $countOfInputValue : 1 }



#This function captures the complete value and operant . seperates the value and performes the arithematic operant 
function calculate( )
{


#captures the value and operant
declare -a capturedValue=("$1")
getOperant=$2



#validates the * operant or passes the other operant to the capturedOperant to perform the arithematic operation
#validates the operant(if present then perform the next else error saying Operant Missing)
	if [ ${#getOperant} -eq 1 ]
	then
	
		if [ $getOperant == x ]
		then
			capturedOperant=*
		else
			capturedOperant=$getOperant
		fi
	else
		echo "[ERROR]Operant Missing[ERROR]"
	fi
	calculatedValue=${capturedValue[0]:0:1}




#performs the arithematic operation based on the captured operant
	for((i=1;i<${#capturedValue[0]};i++))
	do
		val=${capturedValue[0] : $i: 1 }
		calculatedValue=$(($calculatedValue $capturedOperant $val))
	done
	
	echo  "[OUTPUT]Result after performing \"$capturedOperant\" is  \"$calculatedValue\"[OUTPUT]" 
	

}


#validates the operant and passes the value and the operant to the function calculate() to perform the arithematic operation 
case "$operant" in
	"+") calculate $value $operant	;;
	"-") calculate $value $operant	;;
	"x") calculate $value $operant	;;
	"/") calculate $value $operant	;;
	"%") calculate $value $operant	;;
	  *)	echo "[ERROR]Invalid Operant [ERROR]"
esac



#calling a function from " exit.sh" file
exit_program arithematicOnOperation.sh

#-----------------------------------------------------------------------------------------------------------------------------------------------------------
#----------------------------------------------------------End of the Program-------------------------------------------------------------------------------
#-----------------------------------------------------------------------------------------------------------------------------------------------------------






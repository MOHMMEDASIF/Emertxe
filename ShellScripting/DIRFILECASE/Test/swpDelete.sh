#!/bin/bash
#-----------------------------------------------------------------------------------------------------------------------------------------------------------
#-------------------------------------------------------------Expected Solution-----------------------------------------------------------------------------
#-----------------------------------------------------------------------------------------------------------------------------------------------------------
#This Program deletes the swp file in present directory
<<ExpectedInput

	Example:	bash filename.sh



ExpectedInput

<<ExpectedOutput

	Example:	 ./del_swp.sh
			swp file found :
			/home/user/ConventionalMethod/.pic16F887.as.swp
			swp file found : /home/user/Development/BeagleBoneXm/
			VideoApp/.cmds.swp


ExpectedOutput


#-----------------------------------------------------------------------------------------------------------------------------------------------------------
#------------------------------------------------------------Begining of the Program------------------------------------------------------------------------
#-----------------------------------------------------------------------------------------------------------------------------------------------------------


#import the exit.sh file to perform exit operation
source exit.sh

array=(` find . -name "*.swp" | wc -w`)
echo ${array[0]}

	if [ ${array[0]} -gt 1 ]
	then
		find . -name "*.swp" 
		echo "executes the command"
	elif [ ${array[0]} -eq 0 ]
	then
		echo ".swp files not found"
	fi

#calling a function from " exit.sh" file
exit_program swpDelete.sh

#-----------------------------------------------------------------------------------------------------------------------------------------------------------
#----------------------------------------------------------End of the Program-------------------------------------------------------------------------------
#-----------------------------------------------------------------------------------------------------------------------------------------------------------






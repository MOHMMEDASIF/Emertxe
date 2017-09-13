#!/bin/bash
#-----------------------------------------------------------------------------------------------------------------------------------------------------------
#-------------------------------------------------------------Expected Solution-----------------------------------------------------------------------------
#-----------------------------------------------------------------------------------------------------------------------------------------------------------
#This Program prints an random password which includes symbols&alphaNumeric characters with a width of 8-characters
<<ExpectedInput

	Example:	bash filenaem.sh 



ExpectedInput

<<ExpectedOutput

	Example:	nH@Rh0Pv
			O8ug&HfD
			ro0IUJif
			wx!Kox3U
			i3?BkomA
			S89R%OA3
			#e3v8PzS
			d?F8TEo6
			Lrbqvl9
			T!ilf1C5


ExpectedOutput


#-----------------------------------------------------------------------------------------------------------------------------------------------------------
#------------------------------------------------------------Begining of the Program------------------------------------------------------------------------
#-----------------------------------------------------------------------------------------------------------------------------------------------------------


#import the exit.sh file to perform exit operation
source exit.sh

echo -e "\e[44m[INPUT]\e[0m Enter the Number of Password to Generate \e[44m[INPUT]\e[0m"
read number

#gets an character from urandom and translate into 8 character value
echo -e "\e[41m[OUTPUT]\e[0m Random Generated Password is \e[41m[OUTPUT]\e[0m"
cat /dev/urandom | tr -cd 'a-zA-Z0-9~!@#$%^&*()_+}{":?><' | fold -w 8 | head -n $number


#calling a function from " exit.sh" file
exit_program randPasswd.sh

#-----------------------------------------------------------------------------------------------------------------------------------------------------------
#----------------------------------------------------------End of the Program-------------------------------------------------------------------------------
#-----------------------------------------------------------------------------------------------------------------------------------------------------------





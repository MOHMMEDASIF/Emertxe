#This Program is an simple Example of switch Case Statement

#!/bin/bash

#Enter the value of n 
echo "Enter the value of n"
read n

#---------------------------------------------------------------------Switch case syntax-------------------------------------------------------------------

#	case  "$variable_name"  in
#	
#		pattern1) statement ;;
#		pattern2) statement ;;
#		.
#		.
#		.
#		patternN) statement ;;
#		*) invalid data ;; #used for default values
#	esac


#-----------------------------------------------------------------------------------------------------------------------------------------------------------

#start the case statement with an Keyword "case" with an Input that need to checked

case "$n" in
 1) echo value of x is one ;;
 2) echo value of x is two ;;
 "@sif") echo value of x is @sif ;;
 *) echo value of x is unrecognized ;;

#close the case statement with an keyword "esac"
esac




#!/bin/bash
#-----------------------------------------------------------------------------------------------------------------------------------------------------------
#-------------------------------------------------------------Expected Solution-----------------------------------------------------------------------------
#-----------------------------------------------------------------------------------------------------------------------------------------------------------
#This Program reading the system time and prints the Greeting Message as Good Morning and Good Evening ,etc..
<<ExpectedInput
	Example:	While opening the terminal this program should get involked 




ExpectedInput

<<ExpectedOutput


	Example:	When we start shell
			Good Morning user, Have nice day!
			This is Thursday 08 in June of 2017 (10:44:10 AM)




ExpectedOutput


#-----------------------------------------------------------------------------------------------------------------------------------------------------------
#------------------------------------------------------------Begining of the Program------------------------------------------------------------------------
#-----------------------------------------------------------------------------------------------------------------------------------------------------------


#import the exit.sh file to perform exit operation
#source exit.sh

hour=(`date +%H`)
day=(`date +%A`)
date=(`date +%d`)
month=(`date +%B`)
time=(`date +%T`)

#validates the hour
if [ $hour -ge 5 -a $hour -lt 12 ]
then
	greeting="Good Morning"
elif [ $hour -ge 12 -a $hour -lt 13 ]
then
	greeting="Good Noon"

elif [ $hour -gt 13 -a $hour -lt 17 ]
then
	greeting="Good Afternoon"
elif [ $hour -gt 17 -a $hour -lt 21 ]
then
	greeting="Good Evening"
elif [ $hour -gt 21 -a $hour -lt 5 ]
then
	greeting="Good night"
fi

clear
echo -e  "\t\t\t $greeting  `whoami`,Have a nice day!!"
echo -e  "\t\t\tThis is $day $date in $month ($time) "
echo -e "\n\n\n "

#calling a function from " exit.sh" file
#exit_program sayHello.sh

#-----------------------------------------------------------------------------------------------------------------------------------------------------------
#----------------------------------------------------------End of the Program-------------------------------------------------------------------------------
#-----------------------------------------------------------------------------------------------------------------------------------------------------------






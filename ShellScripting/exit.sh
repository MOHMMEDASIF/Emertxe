#prompt the user to continue or to exit and read the value of the user in a variable
#This program takes an argument after the user prints "Yes"



#!/bin/bash



function exit_program()
{


if [ $# -eq 1 ]
then
	
	echo -e "\n\n\t\t\t\t**********\t\tDo you want to continue?[Y/N]\t\t**********\t\t\t\t"
	read input

	if [ $input = "Y" ]
	then
		filename=$0
		echo -e "\t\t\t**********\t\t[optional]Enter the Arguments to Pass[optional]\t\t**********\t\t\t"
		read arguments
		bash $filename $arguments
	elif [ $input = "N" ]
	then
		clear
		echo -e "\n\n\n\t\t\t**********\tThis program has stopped executing as per your input\t**********\t\t\t"
	
		echo -e "\t\t\t\t**********\tThank you for using Shell Scripting\t**********\t\t\t\n\n\n\n\n"
		exit
		
	else
		clear
		echo -e "\t\t\t\t********************\t[Error]Invalid Input[Error]\t********************\t\t\t"
		echo -e "\t\t\t\t********************\tTry again with [Y/N]\t\t********************\t\t\t\n\n\n\n\n\n\n"
		
		exit_program $0
	fi



else
	clear
	echo -e "\n\n\n\t\t\t**********\tArguments are not passed for exit funtion\t**********\t\t\t\n\n\n "

fi

}

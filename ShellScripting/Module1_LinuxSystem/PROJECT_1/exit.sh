#prompt the user to continue or to exit and read the value of the user in a variable
#This program takes an argument after the user prints "Yes"



#!/bin/bash
source color.sh


function exit_program()
{


if [ $# -eq 1 ]
then
	
	echo -e "\n\n\t\t\t\t   ***************\t\t$yellow Do you want to continue?[Y/N]$normal\t\t***************\t\t\t\t"
	read input

	if [ $input = "Y" ]
	then
		filename=$0
		echo -e "\t\t\t**********\t\t\t$green[optional]$normal $yellow Enter the Arguments to Pass$normal $green[optional]$normal\t\t**********\t\t\t"
		read arguments
		bash $filename $arguments
	elif [ $input = "N" ]
	then
		clear
		echo -e "\n\n\n\t\t\t**********\t$yellow This program has stopped executing as per your input $normal\t**********\t\t\t"
	
		echo -e "\n\t\t\t\t**********\t $yellow Thank you for using Shell Scripting $normal \t**********\t\t\t\n"
		exit
		
	else
		clear
		echo -e "\t\t\t\t****************************\t$red[Error]$normal $yellow Invalid Input$normal $red[Error]$normal\t**************************\t\t\t"
		echo -e "\n\t\t\t\t\t********************\t     $yellow Try again with [Y/N] $normal  \t******************\t\t\t\n\n\n\n"
		
		exit_program $0
	fi



else
	clear
	echo -e "\n\n\n\t\t\t**********\tArguments are not passed for exit funtion\t**********\t\t\t\n\n\n "

fi

}

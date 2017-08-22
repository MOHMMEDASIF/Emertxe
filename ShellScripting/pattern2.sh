#This progarm takes the N-value from the user and prints the pattern as shown below
<<Expectedoutput

if N = 4
	1
	2 3
	4 5 6 
	7 8 9 10

Expectedoutput



#!/bin/bash


#prompt the user to get the value of N and store it in the variable
echo "Enter  the value of N"
read N

count=1

for(( row=1; row<=N; row++ ))
do
for(( col=1; col<=row; col++ ))
do
	echo -n "$count"
	count=$(($count+1))
done
	echo " "
done

#prompt  the user to exit or continue
echo "Do you want to continue [Y/N] ?"
read input 

#validating the user input to exit or continue
if [ "$input" ==  "Y" ]
then
         bash pattern1.sh
elif [ "$input" ==  "N" ]
 then
         exit
else
         echo "invalid input "
         echo "Try with a valid input"
         bash pattern1.sh
fi


#This program compares Three Numbers given by the user and finds the Greatest of them only by using Relational operators (strictly not using Logical operator)


#!/bin/bash


#prompt the user to get the value of A and store it in the variable
echo "Enter the value of A"
read A

#prompt the user to get the value of B and Store it in the Variable
echo "Enter the value of B"
read B

#prompt the user to get the value of C and Store it in the variable
echo "Enetr the value of C"
read C

if [ $A -gt $B ]
then 
if [ $A -gt $C ]
then 
echo "$A is the Greatest"
fi
elif [ $B -gt $C ]
then 
if [ $B -gt $A ]
then 
echo "$B is the Greatest"
fi
elif [ $C -gt $A ]
then 
if [ $C -gt $B ]
then
echo "$C is the Greatest "
fi
 
fi

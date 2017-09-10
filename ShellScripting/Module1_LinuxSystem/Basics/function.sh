#This program is example for simple function

#!/bin/bash


#function definition
function sum()
{

	x=`expr $1 + $2`
#	echo $x
}

<<comment
function sum1()
{
	d=$1
	echo $d

}
comment


calling the function
sum 5 3
#sum1 '3+2'


echo "the sum of 4 and 7  is `sum 4 7`"

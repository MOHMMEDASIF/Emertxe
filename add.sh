#Program takes two number and adds them using 3 different methods
#contains Switch Statement, else if statement to validate the input method to add two numbers of the user 

#!/bin/bash


#prompt the user to enter the value of Number 1
	printf "Enter the value of num1 " #printf doesnt gives the newline space while its is available in echo
#read and  store the value of num1
	read num1

 
#prompt the user to enter the value of Number2
	echo "Enter the value of num2" #echo gives newline space which is not available in printf
#read and store the value of num2
	read num2
#prompt the user to get which method to use to add rwo numbers
	echo "Enter the method to be used in Addition operation "
#read the user input from the promp and store it in the var
	read method 

#add two numbers and store it in a variable using 3 different methods
	#using method 1(expr)
	#sum=`expr $num1 + $num2`


	#using method 2(basic calculator)
	#sum=`echo "$num1 + $num2" | bc `
	#sum=$(bc <<< "$num1+$num2")
		#sum=$((`bc <<< $num1+$num2`))

	#using method 3
	#sum=$(($num1+$num2))



#Display the output
	#echo " $num1 + $num2 = $sum"   



#methods to use in adding two numbers using switch statement
case "$method" in 
	"1") sum=`expr $num1 + $num2` ;;
	"2") sum=$((`bc <<< $num1+$num2`));;
	"3") sum=$(($num1+$num2));;
	 *)  printf "invalid input & " ;;
esac

#validates the method and prints the error if any improprate input
if [[("$method" -gt 0) && ("$method" -le 3)]] 
then
	 echo "$num1+$num2 = $sum"
else
	 echo "use valid method to add two numbers"
fi

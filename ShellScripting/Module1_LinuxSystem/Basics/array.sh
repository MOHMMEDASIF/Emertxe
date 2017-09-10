#this program is an simple example of Array

#!/bin/bash



#declare -a unix=('Debian' 'Redhat' 'ubuntu')


echo "Array value"
read -a unix

echo "print al th earray elements in one shot"
echo ${unix[@]}

echo ${unix[*]}


echo "Content of array are"

for(( i=0 ; i< ${#unix[@]}; i++))
do 
	echo ${unix[i]}
done

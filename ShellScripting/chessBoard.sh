


echo "Enter the valur of N:"
read n


for((i=0;i<n;i++))
do
	for((j=0;j<n;j++))
	do
	
	if [ `expr $j%2` -eq 0  ]
	then
	echo -e -n "\033[40m"]
	else
	echo -e -n "\033[40m"] 
	fi
	done

done 

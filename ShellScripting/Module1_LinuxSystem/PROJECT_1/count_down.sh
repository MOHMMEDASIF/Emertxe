#!/bin/bash

function count()
{



for((i=$1; i>=0; i--))
do
	printf "\r%s Second Remaining " $i
	
	sleep 1
done


}


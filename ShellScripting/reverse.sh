#!/bin/bash



echo "Enter the value of a"
read A

echo "enter the value of b"
read B


sum=$(($A/$B))

echo "answer when we used didvide operant $sum "


sum=$(($A%$B))

echo "answer when we use mod operant $sum"   

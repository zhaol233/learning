#! /bin/bash
echo "start debug"
g++ $1
echo "---------running--------------"
echo ""
./a.out
echo ""
echo "----------end------------------"
rm a.out

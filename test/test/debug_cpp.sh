#! /bin/bash
echo "start debug"
g++ test1.cpp
echo "---------running--------------"
echo ""
./a.out
echo ""
echo "----------end------------------"
rm a.out

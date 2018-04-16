#!/bin/sh

export BOOST_LIB_PATH=/home/work/tools/boost_1_65_1/build/lib
export BOOST_INCLUDE_PATH=/home/work/tools/boost_1_65_1/build/include

if [ ! -d "./build" ]; then
	mkdir -p build
fi

cd build && cmake ../ && make

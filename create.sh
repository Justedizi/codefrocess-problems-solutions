#!/bin/bash
name=$1
touch "$name.cpp" 
cat template.cpp > $"$name.cpp"


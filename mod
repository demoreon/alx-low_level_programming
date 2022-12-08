#! /bin/bash
mv holberton.h main.h
find ./ -type f -exec sed -i -e 's/holberton/main/g' {} \;
find ./ -type f -exec sed -i -e 's/Holberton/ALX/g' {} \;

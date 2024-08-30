#!/bin/bash

# Compile the C program
gcc main.c -o main

# Create output directory if it doesn't exist
mkdir -p outs

# Initialize flag to track test case results
all_tests_passed=true

# Iterate over test cases
for filename in ./testcases/*.in; do
    echo "Running Case $(basename "$filename" .in) ..."
    
    # Run the program and save output
    ./main < "$filename" > "outs/$(basename "$filename" .in).out"
    
    file1="./testcases/$(basename "$filename" .in).out"
    file2="./outs/$(basename "$filename" .in).out"

    # Check if the files exist
    if [ ! -e "$file1" ]; then
        echo "File '$file1' does not exist."
        all_tests_passed=false
        continue
    fi

    if [ ! -e "$file2" ]; then
        echo "File '$file2' does not exist."
        all_tests_passed=false
        continue
    fi

    # Remove carriage returns and compare
    tr -d '\r' < "$file1" > "$file1.tmp"
    tr -d '\r' < "$file2" > "$file2.tmp"
    
    # Use diff to compare the files and ignore whitespace differences
    diff -b --strip-trailing-cr "$file1.tmp" "$file2.tmp" > /dev/null
    
    if [ $? -eq 0 ]; then
        echo "Results: Matched, Good job!"
    else
        echo "Results: NOT Matched, Please check your code!"
        # Use diff to compare the files and colorize the output
        # colordiff -u --strip-trailing-cr "$file1.tmp" "$file2.tmp"
        diff -y --strip-trailing-cr "$file1.tmp" "$file2.tmp"
        all_tests_passed=false
    fi
    echo ""
done

# Exit with a non-zero status if any test case failed
if [ "$all_tests_passed" = false ]; then
    exit 1
fi

exit 0

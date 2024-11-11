#!/bin/bash

# Check if filename is provided as an argument
if [ "$#" -ne 1 ]; then
  echo "Usage: $0 filename.ll"
  exit 1
fi

# Check if pattern file exists
PATTERN_FILE="emptinessPattern.txt"
if [ ! -f "$PATTERN_FILE" ]; then
  echo "Pattern file '$PATTERN_FILE' not found!"
  exit 1
fi

# Use awk to search for the multiline pattern
if awk 'BEGIN { RS=""; FS="\n" }
        { if ($0 ~ file_content) found=1 }
        END { exit !found }' file_content="$(<"$PATTERN_FILE")" "$1"; then
  echo 1
else
  echo 0
fi

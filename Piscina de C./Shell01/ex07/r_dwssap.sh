#!/bin/sh
cat /etc/passwd | grep -v '#' | awk 'NR%2==0' | rev | sed 's/.*\*://'| sort -r | awk -v x="$FT_LINE1" -v y="$FT_LINE2" 'NR==x,NR==y' | awk ' {print}' ORS=', ' | sed 's/, $/./' | tr -d '\n'


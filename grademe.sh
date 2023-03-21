#!/bin/bash

echo -e "\033c\033[1m\t    \tC
\t    \tO
\t    \tM
\t    \tP  T  N
\t    \tI  E  O
\t    \tL  S  R
\t    \tE  T  M"

for d in ./src/*; do
    N=$(basename "$d")
	if [[ "$N" == "d00" ]]; then
		continue
	fi

    echo -e "\033[1;35m$N\033[0m:"
    
    OK=true
    
    for f in "$d"/*; do
        N=$(basename "$f")
        echo -en "\t\033[1;36m$N\033[0m\t"
        
        make -C "$f" re > /dev/null 2>&1
        COMPILE="${PIPESTATUS[0]}"
        
        make -C "$f" test > /dev/null 2>&1
        TEST="${PIPESTATUS[0]}"
        
        norminette "$f" > /dev/null 2>&1
        NORM="${PIPESTATUS[0]}"
        
        if [ "$COMPILE" -eq 0 ] && [ "$TEST" -eq 0 ] && [ "$NORM" -eq 0 ]; then
            echo "⭐ ⭐ ⭐"
        else
            OK=false
            
            if [ "$COMPILE" -ne 0 ]; then
                echo -n "💥 "
            else
                echo -n "✨ "
            fi
            
            if [ "$TEST" -ne 0 ] && [ "$COMPILE" -ne 0 ]; then
                echo -n "💥 "
            elif [ "$TEST" -ne 0 ]; then
                echo -n "🧐 "
            else
                echo -n "🥳 "
            fi
            
            if [ "$NORM" -ne 0 ]; then
                echo "🥔"
            else
                echo "🌈"
            fi
        fi
        
        make -C "$f" fclean > /dev/null 2>&1
    done
    
    if [ "$OK" = true ]; then
        echo "  🏆"
    fi
    
    echo
done

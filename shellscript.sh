#!/bin/bash
RESULT="./Results.csv"
printf "NAME,EMAIL,GIT-URL,CLONE-STATUS,BUILD-STATUS,CPPCHECK,VALGRIND
" > $RESULT_CSV


while IFS=, read -r NAME_P EMAIL_ID REPO_LINK; do
    [[ $NAME_P != 'Name' ]] && printf "$NAME_P," >> $RESULT 
    [[ $EMAIL_ID != 'Email ID' ]] && printf "$EMAIL_ID," >> $RESULT
    if [ "$REPO_LINK" != 'Repo link' ]; then
        printf "$REPO_LINK," >> $RESULT
        
        git clone "$REPO_LINK"
        [[ $? == 0 ]] && printf "Clone Success," >> $RESULT
        [[ $? > 0 ]] && printf "Clone failed," >> $RESULT
        
        REPO=`echo "$REPO_LINK" | cut -d'/' -f5`
        MAKE_PATH=`find "$REPO" -name "Makefile" -exec dirname {} \;`
        make -C "$MAKE_PATH"
        [[ $? == 0 ]] && printf "build Success," >> $RESULT
        [[ $? > 0 ]] && printf "build failed," >> $RESULT
        
        CPP_ERROR=`cppcheck "$MAKE_DIR" | grep 'error' | wc -l`
        printf "$CPP_ERROR," >> $RESULT
        make test -C "$MAKE_PATH"
        
        EXEVALGRIN=`find "$MAKE_PATH" -name "Test*.out"`
        valgrind "./$EXEVALGRIN" 2> valgrin.csv
        VAL=`grep "ERROR SUMMARY" valgrin.csv`
        printf "${VAL:24:1} \n" >> $RESULT
        
    fi
done < Input.csv


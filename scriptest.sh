#!/bin/bash

./bsq ./tests/plateaux_valides/plateau1 > ./tests/plateaux_valides/plateau1-out 2>&1
./bsq ./tests/plateaux_valides/plateau2 > ./tests/plateaux_valides/plateau2-out 2>&1
./bsq ./tests/plateaux_valides/plateau3 > ./tests/plateaux_valides/plateau3-out 2>&1
./bsq ./tests/plateaux_valides/plateau4 > ./tests/plateaux_valides/plateau4-out 2>&1
./bsq ./tests/plateaux_valides/plateau5 > ./tests/plateaux_valides/plateau5-out 2>&1
./bsq ./tests/plateaux_valides/plateau6 > ./tests/plateaux_valides/plateau6-out 2>&1
./bsq ./tests/plateaux_valides/plateau7 > ./tests/plateaux_valides/plateau7-out 2>&1
diff ./tests/plateaux_valides/plateau1-rep ./tests/plateaux_valides/plateau1-out > ./tests/plateaux_valides/plateau1-log
diff ./tests/plateaux_valides/plateau2-rep ./tests/plateaux_valides/plateau2-out > ./tests/plateaux_valides/plateau2-log
diff ./tests/plateaux_valides/plateau3-rep ./tests/plateaux_valides/plateau3-out > ./tests/plateaux_valides/plateau3-log
diff ./tests/plateaux_valides/plateau4-rep ./tests/plateaux_valides/plateau4-out > ./tests/plateaux_valides/plateau4-log
diff ./tests/plateaux_valides/plateau5-rep ./tests/plateaux_valides/plateau5-out > ./tests/plateaux_valides/plateau5-log
diff ./tests/plateaux_valides/plateau6-rep ./tests/plateaux_valides/plateau6-out > ./tests/plateaux_valides/plateau6-log
diff ./tests/plateaux_valides/plateau7-rep ./tests/plateaux_valides/plateau7-out > ./tests/plateaux_valides/plateau7-log
./bsq ./tests/plateaux_faux/plateau1 > ./tests/plateaux_faux/plateau1-out 2>&1
./bsq ./tests/plateaux_faux/plateau2 > ./tests/plateaux_faux/plateau2-out 2>&1
./bsq ./tests/plateaux_faux/plateau3 > ./tests/plateaux_faux/plateau3-out 2>&1
./bsq ./tests/plateaux_faux/plateau4 > ./tests/plateaux_faux/plateau4-out 2>&1
./bsq ./tests/plateaux_faux/plateau5 > ./tests/plateaux_faux/plateau5-out 2>&1
diff ./tests/plateaux_faux/plateau1-rep ./tests/plateaux_faux/plateau1-out > ./tests/plateaux_faux/plateau1-log
diff ./tests/plateaux_faux/plateau2-rep ./tests/plateaux_faux/plateau2-out > ./tests/plateaux_faux/plateau2-log
diff ./tests/plateaux_faux/plateau3-rep ./tests/plateaux_faux/plateau3-out > ./tests/plateaux_faux/plateau3-log
diff ./tests/plateaux_faux/plateau4-rep ./tests/plateaux_faux/plateau4-out > ./tests/plateaux_faux/plateau4-log
diff ./tests/plateaux_faux/plateau5-rep ./tests/plateaux_faux/plateau5-out > ./tests/plateaux_faux/plateau5-log
./bsq ./tests/plateaux_random/plateau1 > ./tests/plateaux_random/plateau1-out 2>&1
diff ./tests/plateaux_random/plateau1-rep ./tests/plateaux_random/plateau1-out > ./tests/plateaux_random/plateau1-log

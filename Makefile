tic_tac_toe:fonction_Nishimwe.c fonction_Nishimwe.h main_Nishimwe.c
	gcc -o tic_tac_toe fonction_Nishimwe.c main_Nishimwe.c -g -O0 -lm -lpthread -fopenmp 

run:tic_tac_toe
	./tic_tac_toe 
run_valgrind:tic_tac_toe
	valgrind  --tool=memcheck --leak-check=yes --leak-resolution=low --show-reachable=yes  ./tic_tac_toe
clean:
	rm  tic_tac_toe

profile:
	gcc -Wall -pg fonction_Nishimwe.c main_Nishimwe.c -lm -lpthread -o tic_tac_toe

# Brief 
## without much `main()` functions
* src

		`main()` in the `util.h` file, `test-1.c` `test-2.c` ... just include `util.h`
* build
		
		gcc -o test-1 test-1.c util.h
		gcc -o test-2 test-2.c util.h
		...

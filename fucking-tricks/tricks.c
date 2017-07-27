#include <stdio.h>
#include <stdlib.h>
#include <inttypes.h>


/*
 *Get the bit value of the `n` bit frome pointer `p`
 *
 */ 
 
static uint8_t get_bit(const uint8_t * p, int n){

	return (p[n/8] & (1 << (7-(n % 8)))) ? 1 : 0;
}

/*
 * mod = N % m
 *
 * if `m == 2^x` ;  x is an integer
 *
 * {N % m} equals {N & (m - 1)}
 *
 * To understand this through the binary of N and m-1
 *
 * m-1 binary is sequential 1, like `111` with m=8
 */
static uint32_t get_mod(uint32_t N, uint32_t m){

	//return N % m;
	return N & (m - 1);
}


int main(int argc, char** argv){

	return 0;
}

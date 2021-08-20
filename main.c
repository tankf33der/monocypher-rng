#include <stdlib.h>
#include <stdio.h>
#include <stdint.h>

#include "monocypher.h"
#include "monocypher-rng.h"


int main(void) {
	crypto_rng_ctx ctx;
	uint8_t seed[32];
	uint8_t out[1024];

	for(size_t i = 0; i < 32; i++) seed[i] = i;
	crypto_rng_init(&ctx, seed);
	for(size_t i = 0; i < 1024; i++)
		crypto_rng_read(&ctx, out, i);
	return 0;
}

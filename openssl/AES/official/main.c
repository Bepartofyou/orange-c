#include "algo_aes.h"  
#include <stdio.h>  
#include <string.h>  

int main(int arc, char *argv[])  
{  
	/* Set up the key and iv. Do I need to say to not hard code these in a 
	 * real application? :-) 
	 * /  

	/* A 256 bit key */  
	unsigned char *key = "01234567890123456789012345678901";  

	/* A 128 bit IV */  
	unsigned char *iv = "0123456789012345";  

	/* Message to be encrypted */  
	unsigned char *plaintext =  
		"This is official demo modified by Bepartofyou!";  

	/* Buffer for ciphertext. Ensure the buffer is long enough for the 
	 * ciphertext which may be longer than the plaintext, dependant on the 
	 * algorithm and mode 
	 */  
	unsigned char ciphertext[64];  

	/* Buffer for the decrypted text */  
	unsigned char decryptedtext[64];  

	int decryptedtext_len, ciphertext_len;  

	/* Initialise the library */  
	/* ERR_load_crypto_strings(); 
	 * OpenSSL_add_all_algorithms(); 
	 * OPENSSL_config(NULL);*/  

	printf("Plaintext is:\n%s~\n", plaintext);  

	/* Encrypt the plaintext */  
	ciphertext_len = encrypt(plaintext, strlen(plaintext), key, iv,  
			ciphertext);  

	/* Do something useful with the ciphertext here */  
	printf("Ciphertext is %d bytes long:\n", ciphertext_len);  
	BIO_dump_fp(stdout, ciphertext, ciphertext_len);  

	/* Decrypt the ciphertext */  
	decryptedtext_len = decrypt(ciphertext, ciphertext_len, key, iv,  
			decryptedtext);  

	/* Add a NULL terminator. We are expecting printable text */  
	decryptedtext[decryptedtext_len] = '\0';  

	/* Show the decrypted text */  
	printf("Decrypted text is:\n");  
	printf("%s~\n", decryptedtext);  

	/* Clean up */  
	EVP_cleanup();  
	ERR_free_strings();  

	return 0;  
}  

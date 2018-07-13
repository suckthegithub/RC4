//  rc4.h
//
//  Created by Smith on 2017/07/31.
//  Copyright © 2017 Smith. All rights reserved.

#ifndef rc4_h
#define rc4_h
#ifdef __cplusplus
extern "C" {
#endif
#define RC4_TABLE_LENGTH 512

void rc4_encrypt(unsigned char* schedule, unsigned char* data, unsigned char* dest, unsigned int length);
void rc4_decrypt(unsigned char* schedule, unsigned char* data, unsigned char* dest, unsigned int length);
void rc4_generate_key(unsigned char* schedule, const unsigned char* key, int key_length);

#ifdef __cplusplus
}
#endif

#endif /* rc4_h */


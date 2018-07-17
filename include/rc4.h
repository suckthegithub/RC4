//  rc4.h


#ifndef rc4_h
#define rc4_h
#ifdef __cplusplus
extern "C" {
#endif
#define RC4_TABLE_LENGTH 256

//gen key
void rc4_init(unsigned char*s, unsigned char*key, unsigned long Len);

//dec or enc
void rc4_crypt(unsigned char*s, unsigned char*Data, unsigned long Len);
#ifdef __cplusplus
}
#endif

#endif /* rc4_h */


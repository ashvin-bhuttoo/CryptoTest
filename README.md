# CryptoTest
A Simple C++ Crypto test with 0-7 Bit Shifting & One Byte XOR key Options

//Features Code to Bit Shift an entire Char* Array by a specified shift amount 1-7 bits
void shift_right(char* buf, int msg_len, int shift)
void shift_left(char* buf, int msg_len, int shift)

//Configuration parameters found in Crypto.cpp
#define BIT_SHIFT 3
#define XOR_KEY 0x3C

//Xor Encryption Key Changes for Each Character using Base Key 'XOR_KEY' and Character Position to add variance

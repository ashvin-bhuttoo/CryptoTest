# CryptoTest
A Simple C++ Crypto test with 0-7 Bit Shifting & One Byte XOR key Options

<b>Features Code to Bit Shift an entire Char* Array by a specified shift amount 1-7 bits </b><br/>
void shift_right(char* buf, int msg_len, int shift)<br/>
void shift_left(char* buf, int msg_len, int shift)<br/>

<b>Configuration parameters found in Crypto.cpp</b><br/>
#define BIT_SHIFT 3<br/>
#define XOR_KEY 0x3C<br/>

<b>Xor Encryption Key Changes for Each Character using Base Key 'XOR_KEY' and Character Position to add variance</b>

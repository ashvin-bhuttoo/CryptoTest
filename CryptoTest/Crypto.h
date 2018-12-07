#pragma once
int get_rs_mask(int shift);
void shift_right(char* buf, int msg_len, int shift);
int get_ls_mask(int shift);
void shift_left(char* buf, int msg_len, int shift);
void crypt(char* buf, int msg_len, bool decrypt = false);

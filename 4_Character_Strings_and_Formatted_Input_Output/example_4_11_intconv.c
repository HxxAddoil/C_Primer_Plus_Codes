/* intconv.c -- some mismatched integer conversions */
//Works on system that a short int is 2 bytes and a char is 1 byte

 #include <stdio.h>
 #define PAGES 336
 #define WORDS 65618
 
 int main(void)
 {
 short num = PAGES;
 short mnum = -PAGES;
 // works fine
 printf("num as short and unsigned short: %hd %hu\n", num, num);

 // computer stores complement code, in signed the highest bit represent symbol 
 printf("-num as short and unsigned short: %hd %hu\n", mnum, mnum);

 // greater than 255, truncated (use lat 1 byte) or say mod 256 
 printf("num as int and char: %d %c\n", num, num);

 // truncated again
 printf("WORDS as int, short, and char: %d %hd %c\n", WORDS, WORDS, WORDS);

 return 0;
 } 


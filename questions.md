# Questions

## What's `stdint.h`?
Ans. 'stdint.h' is a header library in standard library of C99. It is used for creating integers of exact size and different types.

## What's the point of using `uint8_t`, `uint32_t`, `int32_t`, and `uint16_t` in a program?
Ans. 'uint8_t' provides for 1 byte (8 bits) of memory to store an unsigned integer.
'uint32_t' provides for 4 bytes (32 bits) of memory to store an unsigned integer.
'int32_t' provides for 4 bytes (32 bits) of memory to store a signed integer.
'uint16_t' provides for 2 bytes (16 bits) of memory to store an unsigned integer.

## How many bytes is a `BYTE`, a `DWORD`, a `LONG`, and a `WORD`, respectively?
Ans. BYTE is 1 byte (8 bits) of memory.
DWORD is 4 bytes (32 bits) of memory.
LONG is 4 bytes (32 bits) of memory.
WORD is 2 bytes (16 bits) of memory.

## What (in ASCII, decimal, or hexadecimal) must the first two bytes of any BMP file be? Leading bytes used to identify file formats (with high probability) are generally called "magic numbers."
Ans. The first 2 bytes are hexadecimal. The first 2 bytes of the BMP file format are the character "B" and "M" in ASCII or 0x4D42 in hexadecimal.

## What's the difference between `bfSize` and `biSize`?
Ans. The difference between 'bfSize' and 'biSize' is that 'bfSize' is the size of the BITMAPFILEHEADER and 'biSize' is the size of the BITMAPINFOHEADER.

## What does it mean if `biHeight` is negative?
Ans. Pixel height is given with respect to a particular origin. Negative 'biHeight' implies that the said pixel is below the specified origin.

## What field in `BITMAPINFOHEADER` specifies the BMP's color depth (i.e., bits per pixel)?
Ans. The BMP's color depth (i.e., bits per pixel) in 'BITMAPINFOHEADER' is specified by 'biBitCount'.

## Why might `fopen` return `NULL` in `copy.c`?
Ans. If some error occurs then 'fopen' returns a 'NULL' to 'inptr' or 'outptr'.

## Why is the third argument to `fread` always `1` in our code?
Ans. The third argument to 'fread' is always '1' in our code because it reads only 1 struct 'BITMAPFILEHEADER' and 1 struct 'BITMAPINFOHEADER' from the file at a time.

## What value does `copy.c` assign to `padding` if `bi.biWidth` is `3`?
Ans. 3 is assigned.

## What does `fseek` do?
Ans. 'fseek' is used to move file pointer associated with a given file to a specific position.

## What is `SEEK_CUR`?
Ans. ''SEEK_CUR' denotes file pointer’s current position.

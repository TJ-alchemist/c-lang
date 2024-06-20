# Constants

* an integer constant like 1234 is an **int**
* floating point constants contain a decimal like 1234.10
* octal starts with 0
* hexadecimal starts with 0x
* e.g. 31 can be written as 037 in octal and 0x1F in hexadecimal
* a character constant is an integer like 'a' which has the value 97 in the machine character set
* the complete set of escape sequences are
```
\b backspace 
\n newline 
\v vertical tab
\? question mark
\f formfeed 
\' single quote
\" double quote
\t horizontal tab 
\r carriage return 
\ooo octal number (0...7)
\xhh hexadecimal number (0...9, a...f, A...F)
```
* a character constant '\0' represents the character with the value zero, the null character
* a string constant or string literal is an array of characters
* a string has a null character '\0' at the end 
* an enumeration constant is a list of constant integer values like
```
enum boolean { YES, NO };
```
* the first name in an enum has value 0 and next is 1 and goes on unless explicit values are specified
```
enum escapes { BELL = '\a', BACKSPACE = '\b'}
enum months { JAN = 1, FEB, MARCH }
```



//  What is Weighted Code ?

//  In a weighted code, each digit position has a specific weight. The decimal value of a number is found by summing the 
//  products of the digits and their respective weights.


//  What is BCD (Binary-Coded Decimal) ?

// Binary-Coded Decimal (BCD) / 8421 Code
//  BCD represents each decimal digit (0–9) using a 4-bit binary sequence. The most common BCD is 8421, 
//  where the weights are 2^3, 2^2, 2^1, and 2^0. Rule: Only binary patterns from 0000 to 1001 are valid.
//  Example: To represent 35 in BCD: 3 -> 0011, 5 -> 0101. Result: 0011 0101


//  ASCII,Unicode,BCD,84-2-1,ISCII etc
//  What is 84-2-1 Code ?
// 84-2-1 Code
// This is a self-complementing weighted code where the weights are $8, 4, -2,$ and $-1$. It is used in specific arithmetic circuits.
// Example: To represent 5 in 84-2-1:$8(0) + 4(1) - 2(0) - 1(0) = 4$ (No)
// $8(1) + 4(0) - 2(1) - 1(1) = 5$ (Yes)
// Result: 1011

//  What is Non-Weighted Code ?  (Reflected Binary Code / Cyclic Code)
//  Used at : Optical Rotary Encoders,K-map,Error Detection etc.  
//  In these codes, the position of the digit does not carry a specific mathematical weight.


//  Gray Code,Express-3 code
//  What is Gray Code ?

//  Gray Code (Reflected Binary / Cyclic Code)Gray code is a unit-distance code where only one bit changes at a time between 
//  successive values. This minimizes errors in mechanical systems like Optical Rotary Encoders and is used in K-maps to ensure 
//  adjacent cells differ by one bit.

//  Binary to Gray Conversion
//  Keep the Most Significant Bit (MSB) as is.
//  XOR the current binary bit with the next binary bit to get the next Gray bit.
//  Example (Binary 1011 to Gray):
//  MSB: 1 XOR 0 = 1, 0 XOR 1 = 1, 1 XOR 1 = 0 Gray: 1110


//  Binary to Gray Code Conversion
//  Gray Code to Binary Conversion

//  Gray to Binary Conversion
//  Keep the MSB as is.
//  XOR the current Binary bit with the next Gray bit to get the next Binary bit.
//  Example (Gray 1110 to Binary):
//  MSB: 1$1 (\text{binary}) \oplus 1 (\text{gray}) = \mathbf{0}$$0 (\text{binary}) \oplus 1 (\text{gray}) = \mathbf{1}$$1 (\text{binary}) \oplus 0 (\text{gray}) = \mathbf{1}$Binary: 1011

//  What is Express-3 Code ?

//  Excess-3 is a non-weighted, self-complementing code derived by adding 3 (binary 0011) to each BCD digit.


//  Example (Decimal 4 to XS-3):$4 + 3 = 7 \rightarrow \mathbf{0111}$
//  Sum of Digits with XS-3:When adding two XS-3 numbers, if a carry is generated, add 0011 to the result. If no carry is generated, subtract 0011.


//  Express-3 Code to Binary Conversion
//  Sum of decimal digits with the help of Express-3 Code


//  What is Encoding Scheme ?

// Encoding schemes map characters (letters, numbers, punctuation) to binary patterns so computers can process text.
//  ASCII,ISCII,Unicode etc


//  What is ASCII ?

// ASCII (American Standard Code for Information Interchange)
// Standard: Originally 7-bit (128 characters); Extended ASCII is 8-bit (256 characters).
// Use: Standard for English-based text files.
// Example: 'A' is represented as decimal 65 (Binary 01000001).

//  What is ISCII ?

// ISCII (Indian Standard Code for Information Interchange)
// Standard: 8-bit code.
// Use: Developed to support Indian languages (Hindi, Bengali, Tamil, etc.). It retains the first 128 characters
//  of ASCII and uses the remaining 128 for Indian script characters.

//  What is Unicode ?

// Unicode

// Standard: Variable length (UTF-8, UTF-16).
// Use: A universal standard designed to represent every character from every language in the world, including emojis and ancient scripts.
// Advantage: Unlike ASCII, which is limited, Unicode can represent over 1.1 million unique characters.
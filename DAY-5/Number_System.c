// 1. What is Number System ?

// A number system is a method of representing numbers using a set of symbols (digits) and rules.
// Decimal (0-9)
// Binary (0,1)
// Octal (0-7)
// Hexadecimal (0-9, A-F)

// 2. Positional Number System

// A system where the value of a digit depends on its position.
// 👉 Example (Decimal):345=3×10²+4×10¹+5×10⁰
// Position matters → place value changes

// 3. Non-Positional Number System

// A system where position does NOT affect value.
// 👉 Example:Roman numerals:X = 10, XX = 20
// ✔ No base, no positional weight

// 4. Types of Number System
// a. Decimal Number System (Base 10)
// Digits: 0–9
// Base: 10
// b. Binary Number System (Base 2)
// Digits: 0,1
// Used in computers
// c. Octal Number System (Base 8)
// Digits: 0–7
// d. Hexadecimal Number System (Base 16)
// Digits: 0–9, A–F
// A=10, B=11,F=15

//  What is Base ?
//  Number of unique digits in a system
//  👉 Example:
// Binary → Base 2
// Decimal → Base 10


//  What is Bit ?
// Smallest unit of data
// Either 0 or 1

//  What is Nibble ?
//  4 bits
//  1010 → 1 nibble

//  What is Byte ?
//  8 bits
//  10101010 → 1 byte

//  What is MSB ?
//  Most Significant Bit
//  Leftmost bit in a binary number

//  What is LSB ?
//  Least Significant Bit
//  Rightmost bit in a binary number

// 5. Conversion between Number Systems
//    a. Decimal to Binary

   // Method Reminder:
   // Divide by 2 → collect remainders → read bottom to top
   // Example 1: 13
   // 13 ÷ 2 = 6 r1
   // 6 ÷ 2 = 3 r0
   // 3 ÷ 2 = 1 r1
   // 1 ÷ 2 = 0 r1
   // Answer: 1101

   //  b. Binary to Decimal

   // Method:
   // Multiply by powers of 2

   //    Example 1: 1010
   // = 8 + 0 + 2 + 0 = 10

   //  c. Decimal to Octal

   //  Example 2: 83
   //  83 ÷ 8 = 10 r3
   //  10 ÷ 8 = 1 r2
   //  1 ÷ 8 = 0 r1
   //  123


   //  d. Octal to Decimal

   //  Example 1:
   //  Convert 157=1×8² + 5×8¹ + 7×8⁰=64+40+7=111

   //  e. Decimal to Hexadecimal

   //  Method:Divide by 16

   // Example 1:Convert 255

   // 255 ÷ 16 = 15 r15 → F
   // 15 ÷ 16 = 0 r15 → F

   // f. Hexadecimal to Decimal

   // Example 1:Convert A3

   // A = 10 → (10 × 16^1) + (3 × 16^0) = 160 + 3 = 163

   //  g. Binary to Octal

   //  Method:Group bits into 3 (right to left)
   //  Example-1:Convert 101011

      // 101 011
      // = 5   3

      // Answer: 53


//     h. Octal to Binary

//     Method:Convert each digit to 3-bit binary

// Convert 57

// 5 → 101
// 7 → 111

// 👉 Answer: 101111

   //  i. Binary to Hexadecimal

   //  Method:Group bits into 4

   //  Convert 10101111

   //    1010 1111
   //    = A    F

   //    👉 Answer: AF


//     j. Hexadecimal to Binary

      //     Convert A7

      // A → 1010
      // 7 → 0111

      // 👉 Answer: 10100111
 

// 1's and 2's complement of a Binary Number:

// The 1's complement of a binary number is obtained by flipping all its bits. 0 becomes 1, and 1 becomes 0.

// Input: s = "0111"
// Output: 1000
// Explanation: Each bit is flipped, i.e. 0 becomes 1, and 1 becomes 0.

// Input: s= "1100"
// Output: 0011
// Explanation: Each bit is flipped, i.e. 0 becomes 1, and 1 becomes 0.

// The 2's complement of a binary number is obtained by finding the 1's complement 
// (flipping all bits) and then adding 1 to the result. In 2's complement representation, 
// the Most Significant Bit (MSB) represents the sign. A 0 indicates a positive number, 
// while a 1 indicates a negative number. The remaining bits represent the magnitude.

// Input: s = "0111"
// Output: 1001
// Explanation: Find 1's complement -> 1000, then add 1 -> 1000 + 1 = 1001

// Input: "1100"
// Output: 0100
// Explanation: Find 1's complement -> 0011, then add 1 -> 0011 + 1 = 0100



// How to Find Value of a Negative Binary Number in 2's Complement?
// Example:

// 1100 → what is this?

// 👉 Steps:

// Take 2’s complement AGAIN
// Add negative sign
// 1100
// → 1’s complement = 0011
// → +1 = 0100 = 4

// So original number = -4


// 🔹 Subtraction Using 2’s Complement
// 🔸 Case 1: Positive Result
// Example:
// 7 - 3

// Binary:

// 7 = 0111
// 3 = 0011

// 👉 Step 1: 2’s complement of 3

// 0011 → 1100 +1 = 1101

// 👉 Step 2: Add

//   0111
// + 1101
// --------
// 1 0100

// 👉 Ignore carry:

// 0100 = 4 ✅
// 🔸 Case 2: Negative Result
// Example:
// 3 - 7

// Binary:

// 3 = 0011
// 7 = 0111

// 👉 Step 1: 2’s complement of 7

// 0111 → 1000 +1 = 1001

// 👉 Step 2: Add

//   0011
// + 1001
// --------
//   1100

// 👉 No carry → result is negative

// 👉 Find magnitude:

// 1100 → 2’s complement → 0100 = 4

// 👉 Final Answer:

// -4 ✅



// Addition of  14.750 and 12.375 in Binary :

// 🔹 Step 1: Convert to Binary
// ✅ Convert 14.750

// Integer part:

// 14 → 1110

// Fraction part (0.750):

// 0.750 × 2 = 1.500 → 1
// 0.500 × 2 = 1.000 → 1

// 👉 So:

// 14.750 = 1110.11
// ✅ Convert 12.375

// Integer part:

// 12 → 1100

// Fraction part (0.375):

// 0.375 × 2 = 0.750 → 0
// 0.750 × 2 = 1.500 → 1
// 0.500 × 2 = 1.000 → 1

// 👉 So:

// 12.375 = 1100.011

// 🔹 Step 2: Align the Numbers

// Make fractional bits equal:

// 1110.110
// 1100.011
// 🔹 Step 3: Binary Addition
//    1110.110
// +  1100.011
// ------------
// Fractional part:
// .110
// +.011
// ------
//  1.001   (carry 1 to integer part)
// Integer part:
//  1110
// +1100
// +   1 (carry)
// -------
// 11011
// 🔹 Final Answer
// 11011.001


// Verify:

// 🔹 2. Why 11011 = 27

// Write positions:

// 1     1     0     1     1
// 2⁴   2³   2²   2¹   2⁰

// Now multiply and add:

// = 1×16 + 1×8 + 0×4 + 1×2 + 1×1
// = 16 + 8 + 0 + 2 + 1
// = 27 ✅
// 🔹 3. Why .001 = 0.125

// Now fractional side:

// 0     0     1
// 2⁻¹  2⁻²  2⁻³

// 👉 Only the last bit is 1:

// = 1 × (1 / 2³)
// = 1 × (1 / 8)
// = 0.125 ✅
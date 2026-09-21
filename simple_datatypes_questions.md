# Simple Datatypes - Questions

---

## Question: Binary Numbers

**Short Humorous Scenario:**
Martin har fundet en gammel computer fra 1980'erne, der kun kan tælle til 7. Han er forvirret, for han ved, at computeren burde kunne tælle højere. Han har bedt jer om at finde ud af, hvorfor den har denne begrænsning. *"Måske bruger den bare 3 bit? Kan I regne det ud?"*

**What they currently know:**
- Binary number system (base-2)
- Bit representation: 0 and 1
- Decimal number system (base-10)

**The Task:**

1. Calculate: How many unique numbers can be represented with a 3-bit binary number?
2. Calculate: What is the highest number (in base-10) that can be represented with a 3-bit binary number?
3. Show your work

4. **PBL:** Martin asks: *"What would the answers be for a 4-bit binary number?"*

**Hints:**
- Each bit can be either 0 or 1
- With n bits, you have 2^n possible combinations
- For 3 bits: 2^3 = 8 combinations
- The highest number is 2^n - 1
- List all 3-bit combinations to verify

**What you must never do:**
- Count from 0 to 9 (that's decimal, not binary)
- Forget that 000 is also a valid combination
- Confuse bit count with the actual value range

---

## Question: ASCII Characters

**Short Humorous Scenario:**
Martin har modtaget en mystisk besked med hexadecimale tal: 0x55, 0x21, 0x33. Han har ingen anelse om, hvad de betyder. *"Kan I ikke finde ud af, hvilke tegn disse tal repræsenterer?"* han spørger desperat.

**What they currently know:**
- ASCII character encoding
- Hexadecimal notation (0x prefix)
- `printf` function with format specifiers
- Character literals in C

**The Task:**

1. Look up the ASCII characters for these hexadecimal values:
   - 0x55
   - 0x21
   - 0x33
2. Create a program that prints each character using `printf`:
   - Use format: `printf("0x55: %c\n", 0x55);`
3. Run the program and verify the output

4. **PBL:** Martin asks: *"What happens if you print these as integers using %d instead of %c? Try it and explain the difference."*

**Hints:**
- 0x55 = 85 in decimal
- 0x21 = 33 in decimal
- 0x33 = 51 in decimal
- Use an ASCII table to find the characters
- `%c` prints a character, `%d` prints a decimal number

**What you must never do:**
- Use string literals like "U" - use character codes
- Forget to include stdio.h
- Confuse %c and %d format specifiers

---

## Question: ESP32 Unicode

**Short Humorous Scenario:**
Martin har fået en ESP32 til at kommunikere med nogle mystiske tegn. Han har ingen anelse om, hvilket sprog det er. *"Der står noget med 'Size of string' og nogle mærkelige symboler. Kan I ikke hjælpe mig med at finde ud af, hvilket sprog det er?"*

**What they currently know:**
- `sizeof` operator
- Character arrays and strings
- Unicode character encoding
- ESP32 Arduino IDE
- `Serial.print()` / `Serial.println()`

**The Task:**

1. Open and run the program `files/esp32_unicode/esp32_unicode.ino` on your ESP32
2. Observe the output in the Serial Monitor
3. For each string output, use Google Translate to identify:
   a. The language
   b. The translation to Danish
4. Write down the results

5. **PBL:** Martin asks: *"Why do some characters take more bytes than others? What's the difference between ASCII and Unicode?"*

**Hints:**
- Use https://translate.google.com for translations
- Note the byte size printed before each string
- Unicode uses multiple bytes for non-ASCII characters
- ASCII uses 1 byte per character (7 bits + 1 parity bit)

**What you must never do:**
- Guess the language without verification
- Ignore the byte size information
- Forget to actually run the program on ESP32

---

## Question: Patient Data Types

**Short Humorous Scenario:**
Martin skal oprette et patientsystem, men han ved ikke, hvilke datatyper han skal bruge. *"Jeg har alle disse patientoplysninger, men hvordan gemmer jeg dem korrekt? Og hvordan beregner jeg BMI?"* han spørger forvirret.

**What they currently know:**
- Variable declaration: `int`, `char`, `float`, `double`
- Comments in C: `//` and `/* */`
- Arithmetic operators: `/`, `*`
- `printf` with format specifiers: `%d`, `%c`, `%f`, `%s`
- Casting between types

**The Task:**

1. Create a program called `patient.c` that can store variables for a patient with:
   - id (integer)
   - age (integer)
   - gender ('M'/'F')
   - marital_status ('G'/'S') where G = gift, S = single
   - weight (in kg, non-integer)
   - height (in meters, non-integer)
2. Add appropriate comments explaining your datatype choices
3. Print all variable names and their values to the terminal
4. If gender is 'F', print "Kvinde"; if 'M', print "Mand"
5. If marital_status is 'G', print "Gift"; if 'S', print "Single"
6. Calculate and print BMI using: `bmi = weight / (height * height)`

7. **PBL:** Martin asks: *"Can you extend the program to print 'Underweight' if BMI < 18.0, 'Normal weight' if BMI is between 18.0 and 25.0, and 'Overweight' if BMI >= 25.0?"*

**Hints:**
- Use `int` for id, age
- Use `char` for gender and marital_status
- Use `float` or `double` for weight and height (non-integer values)
- Use `if-else if-else` structure for BMI classification
- Remember: height * height means height squared

**What you must never do:**
- Use wrong datatypes (e.g., int for weight)
- Forget to print all variable values
- Forget to include calculation comments
- Hardcode the BMI categories without using variables

---

## Question: Binary to Decimal

**Short Humorous Scenario:**
Martin har set nogle tal skrevet med 0b- og 0x-præfikser, og han forstår dem slet ikke. *"Hvad betyder disse 0b1111 og 0xf? Kan I ikke lave et program, der kan fortælle mig, hvad de egentlig er?"*

**What they currently know:**
- Integer literals: decimal, binary (0b), hexadecimal (0x)
- Variable declaration and initialization
- `printf` with format specifiers
- Type conversion

**The Task:**

1. Create a program that prints the decimal (base-10) representation of:
   - Binary: `0b1111`
   - Hexadecimal: `0xf`
2. Declare an integer `a` and set it to `0b1111`
3. Print `a` to the terminal
4. Run the program and observe the output

5. **PBL:** Martin asks: *"What is the decimal value of 0b10101010? Calculate it manually first, then verify with a program."*

**Hints:**
- Binary 0b1111 = 1*8 + 1*4 + 1*2 + 1*1 = 15
- Hexadecimal 0xf = 15 in decimal
- The compiler automatically converts between bases
- You can declare: `int a = 0b1111;`
- For manual calculation: each bit position is a power of 2

**What you must never do:**
- Print the literal string "0b1111" instead of the value
- Forget that 0b prefix means binary
- Forget that 0x prefix means hexadecimal

---

## Question: Decimal to Binary (Hard)

**Short Humorous Scenario:**
Martin har hørt, at computeren forstår binære tal, men han forstår ikke, hvordan man konverterer fra decimal til binær. *"Jeg har brug for at se, hvordan tallene ser ud i computerens verdens! Kan I lave et program, der kan vise mig det?"*

**What they currently know:**
- Binary number system
- Bitwise operators: `&`, `>>`, `<<`
- Loops (`for`, `while`)
- `printf` function
- `sizeof` operator
- Integer size: `int_sz_bits = sizeof(int) * 8`

**The Task:**

1. **Manual calculation first:** Write the 4-bit binary representation for these numbers (in comments in your program):
   - int: 1
   - int: 2
   - int: 8
2. Create a program called `tal2bin.c`
3. Declare an integer `tal = 10`
4. Create an unsigned integer `mask = 1 << (sizeof(int) * 8 - 1)`
5. For each bit in `tal` (loop with iterator `i`):
   a. Test if `tal & mask` evaluates to true, print "1", else print "0"
   b. Right-shift the mask: `mask = mask >> 1`
6. Loop over integers from -15 to 15 and print their binary representation

7. **PBL:** Martin asks: *"Can you modify the program to also show the hexadecimal representation alongside the binary?"*

**Hints:**
- When does a value evaluate to TRUE vs FALSE in C? (non-zero = TRUE)
- `sizeof(int) * 8` gives the number of bits in an int
- `1 << n` creates a bit mask with 1 at position n
- Right-shifting the mask moves the 1 bit to the right
- Use `%x` format specifier for hexadecimal

**What you must never do:**
- Print the bits in the wrong order (MSB should be first)
- Forget to shift the mask
- Use division instead of bitwise operations
- Assume int is always 32 bits

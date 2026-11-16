# Lab 8: Geometry Calculator

**Course section:** CIS-165-W198  
**Source file:** `geometry.cpp`  
**Language standard:** C++

## Plan

The program will ask for one menu choice and use an integer variable named `choice` to select the operation. I will use `double` variables for the dimensions and the calculated `area`, because dimensions and results can contain decimals. For a circle, I will store `3.14159` in the named constant `PI` and multiply `PI * radius * radius`. For a rectangle, I will multiply `length * width`. For a triangle, I will multiply `base * height * 0.5` so the calculation uses floating-point arithmetic.

Before each calculation, the program will check whether any dimension for that shape is less than zero. A negative dimension will display an error and skip the calculation; zero will be accepted. A `switch` statement will send choices 1, 2, and 3 to the correct calculation, choice 4 to the quit message, and any other numeric choice to an invalid-choice error. The program handles one choice per run, so it does not need arrays or a loop.

> **Before submitting:** Review this plan and restate it in your own words. The assignment asks for a plan in your own words before requesting AI-generated code; that timing cannot be recreated after the fact.

## Compile and run

Open Terminal in the folder containing `geometry.cpp` and compile it with:

```bash
g++ -std=c++17 -Wall -Wextra geometry.cpp -o geometry
```

Run the program with:

```bash
./geometry
```

The program displays five digits after the decimal point for calculated areas. 
Enter one menu choice and then enter the requested dimension or dimensions. 
Start the program again for another test because the assignment requires one choice per run.

## Test records

**Test environment:** The source was compiled and the tests below were run in the assistant's working environment with 
`g++ (Debian 14.2.0-19) 14.2.0`. These are observed program outputs, not claims that I ran the program on my Mac. 
The expected values were calculated before comparing them with the program's output. 
The table shows the final result line; the menu and relevant dimension prompts were also displayed during each run.

| Test / input | Expected result | Actual program output | Match? |
|---|---|---|---|
| Choice 1; radius = 2 | Area = 12.56636 | `Area of circle: 12.56636` | Yes |
| Choice 2; length = 3, width = 4.5 | Area = 13.50000 | `Area of rectangle: 13.50000` | Yes |
| Choice 3; base = 5, height = 3 | Area = 7.50000 | `Area of triangle: 7.50000` | Yes |
| Choice 4 | Quit without dimension prompts or an area calculation | `Goodbye!` | Yes |
| Choice 0 | Invalid-choice error | `Error: Invalid choice. Please enter a number from 1 to 4.` | Yes |
| Choice 5 | Invalid-choice error | `Error: Invalid choice. Please enter a number from 1 to 4.` | Yes |
| Choice 1; radius = -1 | Negative-dimension error; no area | `Error: Dimensions cannot be negative.` | Yes |
| Choice 2; length = -1, width = 4 | Negative-dimension error; no area | `Error: Dimensions cannot be negative.` | Yes |
| Choice 2; length = 3, width = -1 | Negative-dimension error; no area | `Error: Dimensions cannot be negative.` | Yes |
| Choice 3; base = -1, height = 3 | Negative-dimension error; no area | `Error: Dimensions cannot be negative.` | Yes |
| Choice 3; base = 5, height = -1 | Negative-dimension error; no area | `Error: Dimensions cannot be negative.` | Yes |
| Choice 1; radius = 0 | Area = 0.00000 | `Area of circle: 0.00000` | Yes |
| **Additional valid test:** Choice 1; radius = 3 | `3.14159 * 3 * 3 = 28.27431` | `Area of circle: 28.27431` | Yes |

**Additional test purpose:** The radius-3 test checks a second positive circle input and confirms that the program applies the circle formula correctly 
beyond the required radius-2 example.

## Code explanation

**1. How does the selection logic send each choice to the right calculation?**  
The `switch (choice)` statement checks the number entered in the menu. `case 1` runs the circle calculation, `case 2` runs the rectangle calculation, 
`case 3` runs the triangle calculation, and `case 4` displays the quit message. The `default` case handles any other numeric choice. 
Each case ends with `break` so execution does not continue into the next case.

**2. Why is `radius * radius` correct while `radius ^ 2` is not?**  
In C++, `*` is multiplication, so `radius * radius` multiplies the radius by itself.
The `^` symbol is the bitwise XOR operator, not an exponent or power operator.

**3. Why does the triangle calculation use `0.5` rather than integer division `1 / 2`?**  
The value `0.5` is a floating-point number, so multiplying by it takes half of the base-times-height product. 
With integer operands, `1 / 2` would use integer division and produce `0`, which would make the triangle area incorrect.

**4. Where do you check negative dimensions, and how do you handle zero and choice 4?**  
Each menu case checks its dimension or dimensions with an `if` statement before calculating the area. A value below zero displays an error and skips the formula. Zero is not less than zero, so it is allowed and produces an area of zero. Choice 4 displays `Goodbye!` and does not ask for dimensions or calculate an area.

## Final verification before submission

The final `geometry.cpp` was compiled after the test runs using the command above; compilation succeeded with no warnings. The tests each started a separate program run and supplied input; no temporary source-code changes were made, so there were no temporary test edits to restore. Before making the final GitHub commit, compile and run this exact downloaded copy on your Mac as well, then update this section if your local result differs.

## GitHub submission checklist

Create a **public** repository named `cis165-lab8` and upload these three files at the repository's top level:

- `geometry.cpp`
- `README.md`
- `AI_REFLECTION.md`

Do not upload the compiled `geometry` executable. After committing, open the repository and the exact commit URL in a private/incognito browser window while signed out of GitHub to confirm that all three files are readable. In Canvas, submit the repository URL and the URL for that exact commit, not the branch or commit-history page.

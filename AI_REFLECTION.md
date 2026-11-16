# AI Reflection

I used ChatGPT to help interpret the Lab 8 directions, draft the `geometry.cpp` program, organize the README, 
and identify the required test cases. 
I treated the generated code as a draft that needed to be checked, rather than assuming an AI answer proved that the program worked.

One design decision in the program is using a `switch` statement for the menu. It sends choices 1, 2, and 3 to their matching calculations, 
choice 4 to the quit message, and other numeric choices to the default error case. 
Since the assignment processes only one choice per run, a repeating loop is not needed. 
Each calculation checks for negative dimensions before using its formula, and the triangle formula uses `0.5` to keep the calculation in floating-point arithmetic.

One specific check used choice 3, base 5, and height 3. 
The expected calculation was `5 * 3 * 0.5 = 7.5`, and the program printed `Area of triangle: 7.50000`. 
The source was compiled and the listed tests were run with g++ in the assistant's working environment; 
I still need to compile and run this exact copy on my Mac before committing it.

From this example, **I can now [write one idea or task you can explain yourself, such as tracing how the `switch` cases work].** 
I still need to practice **[name one skill you personally need to strengthen, such as writing input checks without help].**
 I am starting to learn what coding is and how it can help us in our daily life because all those variations of calculating are truly fascinating.
But testing I found a mathematical error when I ran 2 and than 0 to find the area of rectangle it gave me 0 but that should not be true because such a rectangle with width of 0 should not exits so negative and 0 should not be allow it should've given me an error when I would have run the code.

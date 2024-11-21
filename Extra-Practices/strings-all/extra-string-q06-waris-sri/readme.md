## String Extra Practice: Q6 (Highest order String)

Create a C program that receives multiple strings until the word `quit` is entered. Once `quit` is entered, the program will determine the word with the highest order in alphabetical order and display it.

* Assume that **at least one word** must be entered.

Word with the highest order means the word that comes last when arranged in ascending order based on the ASCII value of the characters. Considering the words: `Three`, `Two` and `one`. The word `one` comes last and has the highest order.

* `Two` comes after `Three` because the first different character -> w has higher ASCII value than h.
* `one` comes after `Two` because the first different character -> o has higher ASCII value than T.

**Instructions:**

Create a while loop to continually prompt the user for strings until the word "quit" is entered. Suppose the maximum length of a word is 50 characters `(not including '\0')`.

Identify the word with highest order by utilizing **string comparison functions** (e.g., strcmp). Compare each entered string to determine which comes last in alphabetical order, and store the word with the highest order seen so far in `maxWord` variable.

After `quit` is entered, display the `maxWord`.

**Notes:**

* There should be no space inside each word. For example, if user enter `at least one` as an input string, this string is considered as three words: `at`, `least`, and `one`
* You are **NOT** allowed to modify the other parts of the code, except the provided sections. Otherwise, you will get a **ZERO** score.
<hr>

**Case 1** 

**Sample input:**
```
apple
banana
orange
quit
```
**Sample output:**
```
Word with the highest order is: orange
```
<hr>

**Case 2**

**Sample input:**
```
Quiz_is_easy
Hello_world
you_can_make_it
quit
```
**Sample output:**
```
Word with the highest order is: you_can_make_it
```
<hr>

**Case 3**

**Sample input:**
```
at least one
quit
```
**Sample output:**
```
Word with the highest order is: one
```
<hr>

**Case 4** 

**Sample input:**
```
quit
again
quit
```
**Sample output:**
```
Word with the highest order is: quit
```
<hr>

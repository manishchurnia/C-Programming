/* 1. Decision Control Instructions

These allow the program to take decisions and execute code based on certain conditions.
a) if Statement

Executes a block of code if a condition is true.

if (condition) {
    // Code to execute if condition is true
}

Example:

if (a > b) {
    printf("a is greater than b\n");
}

b) if-else Statement

Executes one block of code if the condition is true and another if it is false.

if (condition) {
    // Code if condition is true
} else {
    // Code if condition is false
}

Example:

if (a % 2 == 0) {
    printf("a is even\n");
} else {
    printf("a is odd\n");
}

c) else if Ladder

Used for multiple conditions.

if (condition1) {
    // Code for condition1
} else if (condition2) {
    // Code for condition2
} else {
    // Default code
}

Example:

if (marks >= 90) {
    printf("Grade A\n");
} else if (marks >= 75) {
    printf("Grade B\n");
} else {
    printf("Grade C\n");
}

d) switch Statement

Used to execute one block of code among many based on the value of a variable.

switch (expression) {
    case value1:
        // Code for case 1
        break;
    case value2:
        // Code for case 2
        break;
    default:
        // Default code
}

Example:

switch (day) {
    case 1:
        printf("Monday\n");
        break;
    case 2:
        printf("Tuesday\n");
        break;
    default:
        printf("Invalid day\n");
}

2. Loop Control Instructions

These allow executing a block of code repeatedly.
a) for Loop

Executes a block of code a fixed number of times.

for (initialization; condition; increment/decrement) {
    // Code to execute
}

Example:

for (int i = 0; i < 5; i++) {
    printf("%d\n", i);
}

b) while Loop

Executes a block of code as long as a condition is true.

while (condition) {
    // Code to execute
}

Example:

int i = 0;
while (i < 5) {
    printf("%d\n", i);
    i++;
}

c) do-while Loop

Executes a block of code at least once, then repeats while the condition is true.

do {
    // Code to execute
} while (condition);

Example:

int i = 0;
do {
    printf("%d\n", i);
    i++;
} while (i < 5);

3. Jump Control Instructions

These are used to alter the normal sequence of execution.
a) break

Exits the nearest enclosing loop or switch statement.

for (int i = 0; i < 10; i++) {
    if (i == 5) {
        break;
    }
    printf("%d\n", i);
}

b) continue

Skips the current iteration of a loop and moves to the next iteration.

for (int i = 0; i < 10; i++) {
    if (i % 2 == 0) {
        continue;
    }
    printf("%d\n", i);
}

c) goto

Jumps to a labeled section of code.

goto label;
// Code skipped
label:
    printf("This is a label.\n");

4. Function Control Instructions

These manage the flow between different functions in the program.
a) return

Exits from a function and optionally returns a value.

int add(int a, int b) {
    return a + b;
}

Summary Table of Control Instructions:
Type	Control Instruction
Decision Control	if, if-else, else if, switch
Loop Control	for, while, do-while
Jump Control	break, continue, goto
Function Control	return

Let me know if you'd like examples or clarification on any specific instruction! */ 
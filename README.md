# Expression-Calculator
Concept : Convert and evaluate math expressions. 

📌 Project Overview

This project demonstrates:

Conversion of Infix expressions to Postfix expressions
(using the Infix-to-Postfix algorithm with operator precedence).

Evaluation of Postfix expressions
(using a stack-based evaluation method).

👉 Infix Expression: Operators are between operands (e.g., A+B*C)
👉 Postfix Expression: Operators are placed after operands (e.g., ABC*+)
👉 The project allows users to convert and evaluate mathematical expressions.

📌 Features

✅ Infix to Postfix Conversion (e.g., A+B*C → ABC*+)

✅ Postfix Expression Evaluation (e.g., 23*54*+9- → evaluates to a number)

✅ Stack-based implementation for efficiency

✅ Handles parentheses & operator precedence

✅ Two separate programs for modularity:


- Infix-to-Postfix.cpp → Converts

- Postfix Evaluation.cpp → Evaluates



📌 File 1: Infix-to-Postfix.cpp

Key Points:

- Uses stack<char> to handle operators and parentheses.

- precedence() function defines priority (* and / > + and -).

- Builds a postfix string step by step.



Sample Run:

* Enter Infix Expression: A+B*C

* Postfix Expression: ABC*+



📌 File 2: Postfix Evaluation.cpp

Key Points:

- Uses stack<int> to evaluate postfix.

- Reads each character:

- If it’s a number → push to stack.

- If it’s an operator → pop two values, apply operator, push result.

- Returns final result.


Sample Run:

* Input: 23*54*+9-

* Output: 17


(Explanation: (2*3) + (5*4) - 9 = 6 + 20 - 9 = 17)


📌 How to Run the Project
1. Compile
g++ Infix-to-Postfix.cpp -o infix

2. Postfix
g++ Postfix\ Evaluation.cpp -o postfix_eval


3. Run Conversion
./infix



2. Postfix

Example Input:
Enter Infix Expression: (2+3)*4


Output:
Postfix Expression: 23+4*

3. Run Evaluation
./postfix_eval


- Example Input: 23+4*

- Output: 20


📸 Sample Outputs

Infix to Postfix :

- Enter Infix Expression: A*(B+C)

- Postfix Expression: ABC+*


Postfix Evaluation :

- Input: 23+4*

- Output: 20

# Introduction

## Software
* OS:manager;provide GUI
* editor
* Compiler:translate source code to object code
  * High-level languages
  * Low-level languages:assembly language
```
 ADD X Y Z
```
  * machine language(0&1)
* **IDE**

## A Simple C++ Program
```
//This is a simple C++ program//comment,readable
#include<iostream>//include directives,pre-written library
using namespace std;

//main function
int main(){
//statement,building blocks.executed sequntially  **semicolon**
    cout<<"Hello World!"<<endl;//output statement;<<:insertion operator;"":string;endl:a newline
	return 0;//return statement
}
```
## Testing & Debugging
Three kinds of program errors
* Syntax errors: violation of syntax; can be caught by the compiler
* Run-time errors: during the excution; E.g.division by 0
* Logic errors: incorrect logic flow

## How to write program
+ Understand the problem
+ Design the algorithm
+ Implement
+ Analysis of the program
- testing/prove mathematically
- time coplexity
+ Improving the algorithm/program
---

# C++ Basics

## Variables
used to store data, referred to by its identifier, change data by the assignment operator

### Variables declaration
declare before use

avoid uninitialized variables
```
int width = 5;
char c = 'Y';
double length = 1.5e3;
//variable_type identifier = initial value;
```

#### Variable types
Name|Description|Range
:------:|:-----------------------------:|:------:|
char|character or small integer|
bool|true/false|
int|integers|
double|double precision floating number|
#### Variable name
* start with letters or _
* rest:letters, digits,_
* case-sensitive
* cannot be keyword in C++

#### Constant variable initializtion
```
const double Pi = 3.1416;//variable read-only
```

```
const int a = 10;
a = 20;
//error message
```

### Assignment statement
expressions: 
```
2+width*length
```
operands(data); 
#### operators(instructions)
1. Arithmetic operators: + - * / %
```
x=10 % 3;//give 1; can only be applied to int
a=10%(-3);//give 1
b=(-10)%3;//give -1
```
**warning: / on both integers will give type int**
2. Relational operators: > >= < <= == !=
give 1(True), 0(False)
```
a=10
cout<<a==3;//give 0
cout<<a=3;//give 3
```
3. Logical operators: &&(AND) ||(OR) !(NOT)
4. Increment and decrement operators: ++ --
```
int c=0;
cout<<c++;//give 0(before the increment)
int d=0;
cout<<++d;//give 1(after the increment)
```

**precedence**
### Type conversion
When an operator has operands of different types, they are converted to a common type according to a small number of rules.

In general, the only automatic conversions are those that convert a “narrower” operand into a “wider” one without losing information. E.g., from an int value to a double value will not lose information.

### Char type
[ASCII](https://www.ascii-code.com/)
```
char a = 65;
cout<<a;//give A
a++;
cout<<a;//give B
```

## Basic I/O
### Standard Output
<< insertion operator

\n newline character

[Escape Sequences](http://en.cppreference.com/w/cpp/language/escape)
### Standard Input
">>" extraction operator

process only after the RETURN key has been pressed
```
int v;
char c;
cin>>v>>c;//input 100l
//v=100, c='l'
```
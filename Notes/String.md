# String

```
#include <string>

string msg = "hello";
```
---
concatenate
```
string msg1 = "I love ";
string msg2 = "cats";
string msg3 = msg1 + msg2;
string msg4 = "I hate " + msg2;
//msg3 is "I love cats"
//msg4 is "I hate cats"
```
*overload the meaning of operators*

*object oriented*
---
**invalid** expression
```
string msg = "I love " + "lions";
```
the constant expressions are char array

## String Comparison

by **dictionary order** (literally) 

'A' < 'B' <...<'Z' < 'a' <...< 'z' *(ASCII)*

## IO with String Objects

*whitespace*

cin will **ignore** initial whitespace until it hits a non-whitespace character

### Reading a line from input

getline(): read in a line from the current position until a newline character
```
string s;
cout << "Please input a sentence: " << endl;
getline(cin, s);
```
---
menber function get() of cin: read in a single character
```
char c;
cout << "Please input a sentence: " << endl;
//enter "I love dogs"
c = cin.get();
cout << c;
//c = 'I'
c = cin.get();
cout << c;
//c = ' '
```

## Access the characters in string

access by index like an array

---

## Member Functions

Member Function|Description
:--------------:|:-----------------------------------
length()|return the number of characters
empty()|return true if the string is empty
substr()|return a substring
find()|return the position of the first occurrence of *a pattern*

*empty string*: ""

#### substr()

substr(pos, n): return the substring starts from pos with n characters
```
string s = "";
cout << s.substr()
```

substr(pos): return the substring starts from pos to the end

#### find()

find(t)
```
string s = "This is a string";
s.find("is"); //return 2
```

find(t,p): at or after p
```
string s = "This is a string";
s.find("is",3); //return 5
```

If cannot find, return string::npos
*string::npos: largest possible value of size_t (-1)*

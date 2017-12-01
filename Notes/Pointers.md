# Pointers

## Memory Address

**address-of** operator &: value is the address of the variable

stack: bottom-up

*Addresses have types*

### Variables that store addresses

```
int x, *adr_var;
adr_var = &x;
```

this is wrong
```
int *a;
double y;
a = &y;
```

this is also wrong
```
int p = &a;
```
### Dereference operator

this is a memory cell
```
*(/* address */)
```

```
int x = 1, *adr_var;

adr_var = &x;
cout << *adr_var << endl;
// print x

*adr_var = 12 * 2;
// x is changed
cout << x << endl;
```
*\* is overloaded*

```
(*struct_adr).member;
```
note precedence

the above is equivalent to 
```
struct_adr -> member;
```

## Dynamic Varaibles

```
int *a;
string *b;

a = new int;
b = new string;

*a = 1;
*b = "hhhhh";
```
*or use constructor new int ()*

## Dynamic Array

```
// create
int *a = new int[size];
for(int i = 0; i < size; i++)
    cin >> p[i];

//delete
delete []a;
```
*p[i] is equivalent to *(p+i)*

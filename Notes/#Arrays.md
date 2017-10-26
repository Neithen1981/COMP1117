# Arrays

## Declaration
array_type array_name[size];
**index starts from 0**
## Initialization
```
int a[4] = {0, -20, 4, 6};
```
*If not enough values are specified, the rest will be **initialized to 0***
```
double a[10000] = {0.0};
```
*If all values are specified, size is not necessary*
```
int check[] = {1, 2, 3};
```

## Indexed Variables as Arguments
### Pass the whole array
```
void print_array(int x[], int size);
//defaut: call by reference
```

## 2D Array
first index: row; second index: column
```
int socre_2D[3][4] = {{1,2,3,4}, {5,6,7,8},{9,10,11,12}}
```
the first dimension can be left blank when passing, while the second dimention have to be specified

## Array Index Out of Range
compiler asks OS to allocate memory for variables  **stack**
```
int i = 0;
char a[] = {'a', 'b'};

cout << i << endl;
a[2] = 'c'; a[3] = 'd';
cout << i <<endl;
```
In stack: bottom to up

In one chunk: up to bottom
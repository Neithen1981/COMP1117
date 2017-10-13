# Flow of Control

## The if-else statement
if (expr) Statement_1; else Statement_2;
*C++ ignore "extra spaces" i.e. space, tab, etc.*
### compound statement 
{statement_1;statement_2;...;statement_k}
**"empty" compound statement**
```
else
	{}//do nothing
cout <<""<<endl;//will not be treated as else statement
```
### The dangling else problem
```
if () if () cout<<"";else cout<<"";
```
The above can be interpreted as
```
if ()
	{if () cout<<"";else cout<<"";}
```
or
```
if ()
	{if () cout<<"";}
else cout<<"";
```
*In C++, else is associated with the nearest if, i.e. the first interpretation*
"else if" statement is actually an application of this

## Loop
### The while statement
while (expression) body_statement;
### The for statement
for (initialization; continuation condition; updating)
	loop_body_statement;
### The break statement
```
break;
```
immediately end the loop
### The continue statement
```
continue;
```
stop the current iteration, and the loop starts the next iteration
```
for (int x=1; x<=10; x++){
	if (x==5)
		continue;
	cout<<x<<endl;
//print 1 2 3 4 6 7 8 9 10
}
```
### The do-while statement
do body_statement; while (expression);

## Switch Statement
```
char grade; cin>>garde;
switch(grade){ //type int, char or bool
	case 'A':
		cout<<"Excellent!"<<endl; break;
	case 'B':
		cout<<"very good!"<<endl; break;
	case 'c':
		cout<<"Passing."<<endl; break;
	case 'F':
		cout<<"Fail."<<endl; break;
	default:
		cout<<"It is not a possible grade."<<endl;
}
```
*If missing a "break", will keep executing until meet the next "break"*

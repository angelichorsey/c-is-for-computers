## Exercise 1-6.
Verify that the expression `getchar() != EOF` is 0 or 1.

## Output
```
$ echo "hello\nworld" | ./a.out
getchar() != EOF is: 1
hgetchar() != EOF is: 1
egetchar() != EOF is: 1
lgetchar() != EOF is: 1
lgetchar() != EOF is: 1
ogetchar() != EOF is: 1

getchar() != EOF is: 1
wgetchar() != EOF is: 1
ogetchar() != EOF is: 1
rgetchar() != EOF is: 1
lgetchar() != EOF is: 1
dgetchar() != EOF is: 1

getchar() != EOF is: 0
```

## Comments
Silly output, but it verifies.

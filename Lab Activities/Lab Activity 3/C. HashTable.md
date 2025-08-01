# C. Linear Probing Implementation [HASHING]
Fill in the missing spaces of the program provided (See ```hashing_code.cpp```). This program demonstrates the implementation of a basic hash table using linear probing for collision resolution. The hash table stores integer keys and places them into an array using a simple hash function: key % table_size. If a slot is already taken, it checks the next slot (and continues) until an empty one is found. Finally, it displays the contents of the hash table.

Use the pseudocode below for reference:
```
START
SET TABLE_SIZE = 10
CREATE array 'table' of size TABLE_SIZE, initialize all values to -1
FUNCTION hashFunction(key)
    RETURN key MODULO TABLE_SIZE

FUNCTION insert(key)
    index = hashFunction(key)

    WHILE table[index] is not empty (-1)
        index = (index + 1) MODULO TABLE_SIZE

    table[index] = key
    DISPLAY "Inserted key at index"

FUNCTION display()
    FOR each index in table
        IF table[index] == -1
            DISPLAY "{empty}"
        ELSE
            DISPLAY table[index]


MAIN
    CREATE HashTable object 'ht'
    CALL ht.insert(88);
    CALL ht.insert(44);
    CALL ht.insert(37);
    CALL ht.insert(98);
    CALL ht.insert(100);
    CALL ht.insert(85);
    CALL ht.insert(54);
    CALL ht.display();

END
```
NOTE: DO NOT MODIFY THE MAIN METHOD.

## Sample Output
```
Inserted 88 at index 8
Inserted 44 at index 4
Inserted 37 at index 7
Inserted 98 at index 9
Inserted 100 at index 0
Inserted 85 at index 5
Inserted 54 at index 6

----- HASH TABLE -----
[0]: 100
[1]: {empty}
[2]: {empty}
[3]: {empty}
[4]: 44
[5]: 85
[6]: 54
[7]: 37
[8]: 88
[9]: 98
```
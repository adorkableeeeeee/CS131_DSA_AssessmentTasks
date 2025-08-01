# Laboratory Activity 2
Complete each checkpoint by writing and running it in C++. Check off each item as you complete it. The goal of this activity is to build a working linked list menu system with full insertion, deletion, and printing functionalities.

1. Create a ```Node``` structure that contains a string data and a pointer to the next node ```(Node* next)```.
2. Declare all five function prototypes: ```insertAtBeginning```, ```insertAtEnd```, ```insertAfterPosition```, ```deleteNodeByPosition```, and ```printList```.
3. In ```main()```, declare a ```head``` pointer and initialize it to ```nullptr```.
4. Display a menu in a loop with the six operations (insert at beginning/end/after position, delete, print, exit).
5. Accept the user's menu choice and handle input cleanup using ```cin.ignore()```.
6. Implement the logic to insert a value at the beginning of the list when option 1 is selected.
7. Implement the logic to insert a value at the end of the list when option 2 is selected.
8. Implement the logic to insert a value after a specific position (index-based) when option 3 is selected.
9. Convert the input string to an integer safely using ```stoi()``` and handle invalid inputs with a try-catch block.
10. Implement the logic to delete a node at a given position when option 4 is selected.
11. Use the ```delete``` keyword to free memory of the node that was removed.
12. Implement the ```insertAtBeginning``` function definition (creates a new node and sets it as the new head).
13. Implement the ```insertAtEnd``` function (creates a new node and appends it to the last node).
14. Implement the ```insertAfterPosition``` function (locates the given index and inserts a new node after it).
15. Implement the ```printList``` function to display all nodes in the list with their index and value.

## Sample Outputs 
### Sample Output 1
```
Menu:
1. Insert at the beginning
2. Insert at the end
3. Insert after a position
4. Delete a node by position
5. Print the list
6. Exit
Enter your choice: 1
Enter value to insert at the beginning (or 'x' to cancel): Shinichi Kudo

Menu:
1. Insert at the beginning
2. Insert at the end
3. Insert after a position
4. Delete a node by position
5. Print the list
6. Exit
Enter your choice: 3
Enter new value to insert (or 'x' to cancel): Ran Mouri
Insert after which position? (index starts at 0, or 'x' to cancel): 0
Inserted 'Ran Mouri' after position 0.

Menu:
1. Insert at the beginning
2. Insert at the end
3. Insert after a position
4. Delete a node by position
5. Print the list
6. Exit
Enter your choice: 1
Enter value to insert at the beginning (or 'x' to cancel): Kazuha Toyama

Menu:
1. Insert at the beginning
2. Insert at the end
3. Insert after a position
4. Delete a node by position
5. Print the list
6. Exit
Enter your choice: 3
Enter new value to insert (or 'x' to cancel): Heiji Hattori
Insert after which position? (index starts at 0, or 'x' to cancel): 0
Inserted 'Heiji Hattori' after position 0.

Menu:
1. Insert at the beginning
2. Insert at the end
3. Insert after a position
4. Delete a node by position
5. Print the list
6. Exit
Enter your choice: 5

Current List:
[0]: Kazuha Toyama
[1]: Heiji Hattori
[2]: Shinichi Kudo
[3]: Ran Mouri

Menu:
1. Insert at the beginning
2. Insert at the end
3. Insert after a position
4. Delete a node by position
5. Print the list
6. Exit
Enter your choice: 2
Enter value to insert at the end (or 'x' to cancel): Sonoko Suzuki

Menu:
1. Insert at the beginning
2. Insert at the end
3. Insert after a position
4. Delete a node by position
5. Print the list
6. Exit
Enter your choice: 4
Enter position to delete (index starts at 0, or 'x' to cancel): 4
Deleted node at position 4.

Menu:
1. Insert at the beginning
2. Insert at the end
3. Insert after a position
4. Delete a node by position
5. Print the list
6. Exit
Enter your choice: 5

Current List:
[0]: Kazuha Toyama
[1]: Heiji Hattori
[2]: Shinichi Kudo
[3]: Ran Mouri

Menu:
1. Insert at the beginning
2. Insert at the end
3. Insert after a position
4. Delete a node by position
5. Print the list
6. Exit
Enter your choice: 6
Exiting program.
```
## Sample Output 2
```
Menu:
1. Insert at the beginning
2. Insert at the end
3. Insert after a position
4. Delete a node by position
5. Print the list
6. Exit
Enter your choice: 1
Enter value to insert at the beginning (or 'x' to cancel): x

Menu:
1. Insert at the beginning
2. Insert at the end
3. Insert after a position
4. Delete a node by position
5. Print the list
6. Exit
Enter your choice: 2
Enter value to insert at the end (or 'x' to cancel): Hello world!

Menu:
1. Insert at the beginning
2. Insert at the end
3. Insert after a position
4. Delete a node by position
5. Print the list
6. Exit
Enter your choice: 5

Current List:
[0]: Hello world!

Menu:
1. Insert at the beginning
2. Insert at the end
3. Insert after a position
4. Delete a node by position
5. Print the list
6. Exit
Enter your choice: 6
Exiting program.
```

## Sample Output 3
```
Menu:
1. Insert at the beginning
2. Insert at the end
3. Insert after a position
4. Delete a node by position
5. Print the list
6. Exit
Enter your choice: 7
Invalid choice. Try again.

Menu:
1. Insert at the beginning
2. Insert at the end
3. Insert after a position
4. Delete a node by position
5. Print the list
6. Exit
Enter your choice: 4
Enter position to delete (index starts at 0, or 'x' to cancel): 0
List is empty.

Menu:
1. Insert at the beginning
2. Insert at the end
3. Insert after a position
4. Delete a node by position
5. Print the list
6. Exit
Enter your choice: 3
Enter new value to insert (or 'x' to cancel): Hello world again!
Insert after which position? (index starts at 0, or 'x' to cancel): 1
List is empty. Cannot insert at that position.

Menu:
1. Insert at the beginning
2. Insert at the end
3. Insert after a position
4. Delete a node by position
5. Print the list
6. Exit
Enter your choice: 1
Enter value to insert at the beginning (or 'x' to cancel): Test 1

Menu:
1. Insert at the beginning
2. Insert at the end
3. Insert after a position
4. Delete a node by position
5. Print the list
6. Exit
Enter your choice: 2
Enter value to insert at the end (or 'x' to cancel): Test 2

Menu:
1. Insert at the beginning
2. Insert at the end
3. Insert after a position
4. Delete a node by position
5. Print the list
6. Exit
Enter your choice: 3
Enter new value to insert (or 'x' to cancel): Inserted Element
Insert after which position? (index starts at 0, or 'x' to cancel): 2
Position index out of bounds.

Menu:
1. Insert at the beginning
2. Insert at the end
3. Insert after a position
4. Delete a node by position
5. Print the list
6. Exit
Enter your choice: 5

Current List:
[0]: Test 1
[1]: Test 2

Menu:
1. Insert at the beginning
2. Insert at the end
3. Insert after a position
4. Delete a node by position
5. Print the list
6. Exit
Enter your choice: 3
Enter new value to insert (or 'x' to cancel): Test 3
Insert after which position? (index starts at 0, or 'x' to cancel): 0
Inserted 'Test 3' after position 0.

Menu:
1. Insert at the beginning
2. Insert at the end
3. Insert after a position
4. Delete a node by position
5. Print the list
6. Exit
Enter your choice: 5

Current List:
[0]: Test 1
[1]: Test 3
[2]: Test 2

Menu:
1. Insert at the beginning
2. Insert at the end
3. Insert after a position
4. Delete a node by position
5. Print the list
6. Exit
Enter your choice: 6
Exiting program.
```
# Experiment 17: Linked Lists in C++
---

## Aim
To study and implement linked list data structures in C++ by performing:
- Basic node creation and understanding syntax.
- Linking multiple nodes together and traversing the list.
- Insertion of nodes at the head of the list.

---

## Objectives
- Understand the concept of linear data structures.
- Learn the structure of a node in a linked list.
- Explore different types of linked lists (Singly, Doubly, Circular).
- Study the differences between arrays and linked lists.
- Analyze advantages and disadvantages of linked lists.
- Understand real-life applications of linked lists in computer systems.
- Implement linked list operations in C++.

---

## Tools Used
- **VS Code** (for coding, compiling, and execution)
- **C++ Compiler** (g++, clang++, or MSVC)

---

## Theory

### Linear Data Structures
- Store elements sequentially.
- Traversal in a single logical sequence.
- Examples: **Arrays, Stacks, Queues, Linked Lists**.
- Operations like insertion, deletion, and traversal are performed sequentially.
- Widely used in memory management, compilers, and system design.

---

### Linked Lists
- A **dynamic linear data structure** consisting of nodes.
- Each node contains:
  - **Data** – the value stored.
  - **Pointer (next)** – address of the next node.
- The **first node** is called the *head*.
- The **last node** points to *NULL* (in non-circular lists).
- Stored in **non-contiguous memory**, connected via pointers.

---

### Block Representation of a Node
# Experiment 17: Linked Lists in C++
---

## Aim
To study and implement linked list data structures in C++ by performing:
- Basic node creation and understanding syntax.
- Linking multiple nodes together and traversing the list.
- Insertion of nodes at the head of the list.

---

## Objectives
- Understand the concept of linear data structures.
- Learn the structure of a node in a linked list.
- Explore different types of linked lists (Singly, Doubly, Circular).
- Study the differences between arrays and linked lists.
- Analyze advantages and disadvantages of linked lists.
- Understand real-life applications of linked lists in computer systems.
- Implement linked list operations in C++.

---

## Tools Used
- **VS Code** (for coding, compiling, and execution)
- **C++ Compiler** (g++, clang++, or MSVC)

---

## Theory

### Linear Data Structures
- Store elements sequentially.
- Traversal in a single logical sequence.
- Examples: **Arrays, Stacks, Queues, Linked Lists**.
- Operations like insertion, deletion, and traversal are performed sequentially.
- Widely used in memory management, compilers, and system design.

---

### Linked Lists
- A **dynamic linear data structure** consisting of nodes.
- Each node contains:
  - **Data** – the value stored.
  - **Pointer (next)** – address of the next node.
- The **first node** is called the *head*.
- The **last node** points to *NULL* (in non-circular lists).
- Stored in **non-contiguous memory**, connected via pointers.

---

### Block Representation of a Node
---

+-----------+-----------+
| Data | Next |
+-----------+-----------+

makefile
Copy code

**Example**:
Head → [11 | next] → [4 | next] → [6 | NULL]

yaml
Copy code

---

### Types of Linked Lists

#### 1. Singly Linked List
- Each node contains **data** and **pointer to next node**.
- Traversal is **forward only**.
- Last node points to NULL.
[Head] -> [Data | Next] -> [Data | Next] -> NULL

markdown
Copy code

#### 2. Doubly Linked List
- Each node contains **data, next pointer, and previous pointer**.
- Traversal is **forward and backward**.
- Requires more memory per node.
NULL <- [Prev | Data | Next] <-> [Prev | Data | Next] -> NULL

markdown
Copy code

#### 3. Circular Linked List
- Last node points back to the first node.
- Traversal is **continuous** (no NULL).
- Useful for scheduling and cyclic buffers.


---

### Difference Between Types of Linked Lists

| Feature                    | Singly Linked List            | Doubly Linked List                     | Circular Linked List                       |
|----------------------------|-------------------------------|----------------------------------------|--------------------------------------------|
| Direction of Traversal     | Forward only                  | Forward and backward                   | Forward only (Singly) or both (Doubly)     |
| Number of Pointers per Node| 1 (Next)                      | 2 (Prev and Next)                      | 1 or 2 (depending on singly/doubly)        |
| End of List                | NULL                          | NULL                                   | Last node points to Head                   |
| Insertion Complexity       | Easy at head, moderate at tail| Easy at head/tail, moderate in middle  | Easy at head, moderate at tail/middle      |
| Deletion Complexity        | Moderate                      | Easy if pointer to node is known       | Moderate, need to adjust circular link     |
| Memory Requirement         | Low (1 pointer per node)      | Higher (2 pointers per node)           | Slightly higher than singly, depends       |
| Traversal Cost             | Linear                        | Linear                                 | Linear, but can loop infinitely            |
| Use Case                   | Simple lists, stacks          | Undo/Redo, Browser history             | Round-robin, circular queues               |
| Head Pointer               | Required                      | Required                               | Required                                   |
| Tail Pointer               | Optional                      | Optional                               | Useful to keep for circular navigation     |

---

### Memory Storage
- Nodes are dynamically allocated in the **heap**.
- Non-contiguous storage allows **flexible size**.
- Each node stores the **address of the next node**.
- Extra memory is required for pointers compared to arrays.

---

### Advantages of Linked Lists Over Arrays
- **Dynamic size**: Can grow/shrink at runtime.
- **Efficient insertion/deletion**: Especially at head/middle.
- **No memory wastage**: Memory allocated as needed.
- **Flexibility**: Rearrangement by updating pointers.
- **Foundation for advanced DS**: Queues, stacks, graphs.

---

### Disadvantages of Linked Lists Over Arrays
- **Extra memory** required for pointers.
- **Sequential access only** (O(n) vs O(1) in arrays).
- **Poor cache performance** (non-contiguous).
- **Pointer complexity**: prone to leaks/errors.
- **Searching is slower**: Linear traversal.

---

### Difference Between Array, Stack, Queue, and Linked List

| Aspect              | Array                          | Stack                           | Queue                           | Linked List                          |
|---------------------|--------------------------------|---------------------------------|---------------------------------|--------------------------------------|
| Structure           | Contiguous memory              | LIFO (Last In First Out)        | FIFO (First In First Out)       | Nodes connected via pointers         |
| Access              | O(1) by index                  | O(n) search                     | O(n) search                     | O(n) traversal                       |
| Insertion           | Costly (shifting needed)       | O(1) push/pop at top            | O(1) enqueue/dequeue at ends    | O(1) at head/tail                    |
| Deletion            | Costly (shifting needed)       | O(1) at top                     | O(1) at front                   | O(1) with pointer update             |
| Size                | Fixed                          | Dynamic (if LL-based)           | Dynamic (if LL-based)           | Dynamic, flexible size               |
| Memory              | Only data stored               | Structure overhead if dynamic   | Structure overhead if dynamic   | Extra pointer per node               |
| Traversal           | Forward/backward via index     | Forward only                    | Forward only                    | Forward/backward if doubly           |
| Applications        | Tables, matrices               | Function calls, undo stack      | Scheduling, buffering           | Dynamic memory, graphs, file systems |

---

## Concepts Used
- **Pointers** (to connect nodes dynamically).
- **Dynamic Memory Allocation** (using `new` in C++).
- **Structures/Classes** (to define node type).
- **Traversal Logic** (iterating through nodes).
- **Insertion Operation** (adding nodes at head).
- **Linked Data Representation** (non-contiguous storage).

---

## Industrial Applications
- **Memory Management Systems** – free lists, heap management.
- **File Systems** – FAT, inode tables.
- **Operating Systems** – process scheduling.
- **Networking** – packet buffers.
- **Databases** – indexing, rollback.
- **Compilers** – syntax trees, symbol tables.
- **Gaming/Graphics** – scene graphs, animation states.
- **Telecom Systems** – call/message queues.

---

## Conclusion
- Linked lists are a **dynamic data structure** that solve the limitations of arrays.  
- They allow **efficient insertion and deletion**, especially at the head or middle.  
- While they require extra memory for pointers and lack direct indexing, they are widely used in **real-time systems, OS design, file systems, compilers, and networking**.  
- They form the **backbone of advanced structures** like stacks, queues, graphs, and hash tables.  

---

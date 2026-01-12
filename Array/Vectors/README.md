### ✅ What is Vector? (C++ STL)

A **vector** is a **dynamic array** provided by the **Standard Template Library (STL)** in C++.
It can **grow or shrink in size automatically** at runtime.

---

## 🔹 Why Vector?

Normal arrays have **fixed size**, but vector:

* Size can change dynamically
* Easy insertion & deletion
* Built-in useful functions

---

## 🔹 Syntax

```cpp
vector<data_type> vector_name;
```

### Example:

```cpp
vector<int> v;
```

---

## 🔹 Example Program

```cpp
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v;

    v.push_back(10);
    v.push_back(20);
    v.push_back(30);

    for(int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }

    return 0;
}
```

### Output:

```
10 20 30
```

---

## 🔹 Common Vector Functions

| Function       | Use                   |
| -------------- | --------------------- |
| `push_back(x)` | Add element at end    |
| `pop_back()`   | Remove last element   |
| `size()`       | Number of elements    |
| `capacity()`   | Total allocated space |
| `clear()`      | Remove all elements   |
| `at(i)`        | Access element safely |
| `front()`      | First element         |
| `back()`       | Last element          |

---

## 🔹 Vector vs Array

| Array             | Vector          |
| ----------------- | --------------- |
| Fixed size        | Dynamic size    |
| Less flexible     | More flexible   |
| Faster (slightly) | Slight overhead |

---

## 🔹 When to Use Vector?

✔ When size is unknown
✔ When frequent insert/delete needed
✔ In competitive programming & interviews

---

## 🔹 One-Line Definition (Exam Ready)

> **Vector is a dynamic array in C++ STL that automatically resizes itself and provides built-in functions for easy data manipulation.**

---

ठीक आहे 👍
खाली **C++ Vector चे Common Functions** **simple explanation + example** सह दिले आहेत (DSA / Placement ready).

---

## 🔹 What is Vector? (1 line recap)

**Vector is a dynamic array in C++ STL that can grow or shrink at runtime.**

---

## 🔹 Header File

```cpp
#include <vector>
```

---

## 🔹 Common Vector Functions (With Examples)

### 1️⃣ `push_back()`

➡️ शेवटी element add करतो

```cpp
vector<int> v;
v.push_back(10);
v.push_back(20);
```

👉 `v = {10, 20}`

---

### 2️⃣ `pop_back()`

➡️ शेवटचा element remove करतो

```cpp
v.pop_back();
```

👉 `v = {10}`

---

### 3️⃣ `size()`

➡️ Number of elements

```cpp
cout << v.size();
```

---

### 4️⃣ `capacity()`

➡️ किती memory allocate झाली आहे

```cpp
cout << v.capacity();
```

📌 **Note:** capacity ≥ size

---

### 5️⃣ `at(index)`

➡️ Safe way to access element

```cpp
cout << v.at(0);
```

⚠️ Out of range असल्यास error देतो

---

### 6️⃣ `front()`

➡️ First element

```cpp
cout << v.front();
```

---

### 7️⃣ `back()`

➡️ Last element

```cpp
cout << v.back();
```

---

### 8️⃣ `clear()`

➡️ सर्व elements remove करतो

```cpp
v.clear();
```

👉 size = 0

---

### 9️⃣ `empty()`

➡️ Vector empty आहे का?

```cpp
if(v.empty())
    cout << "Vector is empty";
```

---

### 🔟 `insert()`

➡️ Specific position ला element add करतो

```cpp
v.insert(v.begin() + 1, 50);
```

---

### 1️⃣1️⃣ `erase()`

➡️ Element remove करतो (index वापरून)

```cpp
v.erase(v.begin() + 1);
```

---

### 1️⃣2️⃣ `resize()`

➡️ Size change करतो

```cpp
v.resize(5);
```

---

## 🔹 Complete Example Program

```cpp
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v;

    v.push_back(10);
    v.push_back(20);
    v.push_back(30);

    cout << "Size: " << v.size() << endl;
    cout << "Front: " << v.front() << endl;
    cout << "Back: " << v.back() << endl;

    v.pop_back();

    for(int i : v) {
        cout << i << " ";
    }

    return 0;
}
```

---

## 🔹 Vector Functions – Quick Table (Exam)

| Function      | Use                |
| ------------- | ------------------ |
| `push_back()` | Add element        |
| `pop_back()`  | Remove last        |
| `size()`      | Number of elements |
| `capacity()`  | Memory allocated   |
| `at()`        | Safe access        |
| `front()`     | First element      |
| `back()`      | Last element       |
| `clear()`     | Remove all         |
| `empty()`     | Check empty        |
| `insert()`    | Insert at index    |
| `erase()`     | Delete element     |

---

## 🔹 Interview Tip ⭐

> **Vector is preferred over array when size is dynamic and frequent insert/delete operations are required.**

---


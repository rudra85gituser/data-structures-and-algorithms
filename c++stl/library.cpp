//basics about libraries


//this library includes all library in c++
#include<bits/stdc++.h>
//or
#include<iostream>//library for basic c++ code
#include<math.h>//library for math class functions
#include<string.h>//library for string class functions

// suppose we want to write a long code which requires many library then we should go with #include<bits/stdc++.h> this library as this includes all code


using namespace std;
/*
In C++, the statement using namespace std; is used to simplify the code by allowing you to use standard library components without needing to prefix them with std::. Let's break this down into simpler terms.

What is a Namespace?
A namespace is like a container that holds a set of identifiers (names) for types, functions, variables, etc. It helps to organize code and prevent name conflicts. Think of it as a family name that groups related items together.

The std Namespace
The C++ Standard Library, which provides a collection of classes and functions, is contained within the std namespace. This includes commonly used items like cout, cin, vector, and many more.

Without using namespace std;
If you don't use the using namespace std; statement, you must prefix standard library components with std:: to tell the compiler that you are referring to something in the std namespace.


With using namespace std;
By adding using namespace std; at the beginning of your code, you tell the compiler that you are going to use the std namespace for everything, so you don't need to prefix items with std:: anymore.

Pros and Cons

Pros:
-Simplicity: Makes the code shorter and easier to write because you don't need to repeatedly type std::.
-Readability: Can make the code more readable by reducing clutter.

Cons:
-Namespace Pollution: Imports everything from the std namespace, which can lead to name conflicts if there are other libraries or parts of your code with the same names.
-Ambiguity: In larger projects, it can create confusion and bugs due to name conflicts.

Best Practices
-Limit Scope: Use using namespace std; in a limited scope, like inside a function, to avoid polluting the global namespace.
-Specific Imports: Instead of importing everything, import only what you need using specific using declarations, such as using std::cout; and using std::vector;.
*/
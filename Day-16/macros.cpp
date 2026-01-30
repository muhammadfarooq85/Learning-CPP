// Macros in cpp:

// Macros are a way to define constants or functions that can be reused throughout the code. They are defined using the #define directive.

// Macro Standards:

// 1. Macros are defined using the #define directive.
// 2. Macros do not have a data type.
// 3. Macros are replaced by the preprocessor before compilation.
// 4. Macros can be used to define constants or functions.
// 5. Macros should be named in uppercase to distinguish them from variables.

#include "iostream"
#define console_log(x) cout << x << endl;
using namespace std;

int main()
{
    int hello = 786;
    console_log(hello);
    return 0;
}
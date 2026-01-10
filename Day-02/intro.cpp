// Versioning in CPP:

// Here are some common versioning macros in C++:

// Name <---> // Year <---> // Version // <---> // Features
// __cplusplus <---> // 1997 <---> // C++98 // <---> // First standardized version of C++
// __cplusplus <---> // 2003 <---> // C++03 // <---> // Minor revisions and bug fixes
// __cplusplus <---> // 2011 <---> // C++11 // <---> // Major update with new features like auto, lambda expressions, nullptr, etc.
// __cplusplus <---> // 2014 <---> // C++14 // <---> // Small improvements and bug fixes over C++11
// __cplusplus <---> // 2017 <---> // C++17 // <---> // New features like std::optional, std::variant, structured bindings, etc.
// __cplusplus <---> // 2020 <---> // C++20 // <---> // Major update with concepts, ranges, coroutines, etc.

// Few common symbols used in C++:

// () => Parentheses
// {} => Curly Braces / Braces
// [] => Square Brackets / Brackets
// ;  => Semicolon
// :: => Scope Resolution Operator
// .  => Dot Operator / Member Access Operator
// -> => Arrow Operator / Member Access through Pointer
// ,  => Comma
// +  => Plus Operator
// -  => Minus Operator
// *  => Asterisk / Multiplication Operator / Pointer Dereference Operator
// /  => Division Operator
// %  => Modulus Operator
// =  => Assignment Operator
// == => Equality Operator
// != => Not Equal Operator
// <  => Less Than Operator
// >  => Greater Than Operator
// <= => Less Than or Equal To Operator
// >= => Greater Than or Equal To Operator
// && => Logical AND Operator
// || => Logical OR Operator
// !  => Logical NOT Operator
// ++ => Increment Operator
// -- => Decrement Operator
// &  => Address-of Operator / Bitwise AND Operator
// |  => Bitwise OR Operator
// ^  => Bitwise XOR Operator
// ~  => Bitwise NOT Operator
// << => Left Shift Operator / Stream Insertion Operator
// >> => Right Shift Operator / Stream Extraction Operator
// ?  => Ternary Conditional Operator

// Some keywords in C++:

// alignas => specifies alignment requirement
// alignof => returns alignment of a type
// and => logical AND operator alternative
// and_eq => AND assignment operator alternative
// asm => inline assembly code
// auto => automatic type deduction

// bitand => bitwise AND alternative
// bitor => bitwise OR alternative
// bool => boolean data type
// break => exit loop or switch

// case => branch in switch statement
// catch => handles exceptions
// char => character data type
// char8_t => UTF-8 character type
// char16_t => UTF-16 character type
// char32_t => UTF-32 character type
// class => defines a class
// compl => bitwise complement alternative
// concept => defines template constraints
// const => makes variable immutable
// consteval => compile-time evaluation only
// constexpr => compile-time constant expression
// constinit => ensures constant initialization
// const_cast => removes const qualifier
// continue => skip current loop iteration
// co_await => suspend coroutine
// co_return => return from coroutine
// co_yield => yield value from coroutine

// decltype => gets type of expression
// default => default case or default function
// delete => deallocates memory
// do => do-while loop
// double => double precision floating point
// dynamic_cast => safe runtime type casting

// else => alternative condition branch
// enum => defines enumeration
// explicit => prevents implicit conversions
// export => exports templates/modules
// extern => declares external linkage

// false => boolean false value
// float => floating point data type
// for => loop statement
// friend => grants access to private members

// goto => jump to label

// if => conditional statement
// inline => suggests inline expansion
// int => integer data type

// long => long integer type

// mutable => allows modification in const object
// module => defines a module

// namespace => defines scope
// new => allocates memory
// noexcept => specifies no exception thrown
// not => logical NOT alternative
// not_eq => NOT equal alternative
// nullptr => null pointer literal

// operator => overloads operators
// or => logical OR alternative
// or_eq => OR assignment alternative

// private => class access specifier
// protected => class access specifier
// public => class access specifier

// register => suggests register storage (deprecated)
// reinterpret_cast => low-level type casting
// requires => template requirement constraints
// return => returns value from function

// short => short integer type
// signed => signed integer type
// sizeof => returns size in bytes
// static => static storage duration
// static_assert => compile-time assertion
// static_cast => compile-time type casting
// struct => defines structure
// switch => multi-branch selection
// synchronized => thread synchronization (C++23)

// template => generic programming
// this => pointer to current object
// thread_local => thread-specific storage
// throw => throws exception
// true => boolean true value
// try => exception handling block
// typedef => creates type alias
// typeid => runtime type information
// typename => specifies type in templates

// union => shared memory data structure
// unsigned => unsigned integer type
// using => type alias or namespace usage

// virtual => enables dynamic dispatch
// void => means not returning anything
// volatile => prevents optimization
// wchar_t => wide character type
// while => loop statement

// xor => bitwise XOR alternative
// xor_eq => XOR assignment alternative

#include "iostream"
using namespace std;

// What is std namespacing in C++?
// In C++, std is a namespace that contains all standard library features.

// What is namespace?
// A namespace is a container that groups related names (functions, variables, classes) to avoid name conflicts.

int main()
{
    // std::cout << "Hello! I am Muhammad Farooq" << std::endl;
    cout << "Hello! I am Muhammad Farooq." << endl;
    return 0;
}
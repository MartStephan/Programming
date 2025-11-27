// mover.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//

/// MStephan
/// 27-Nov-2025
/// Move Semantics
/// 

/// We like to Move it 

#include <iostream>
#include <string>
#include <vector>
#include <cstring>

/// example class that explicitely declares special member functions for copy and move
class Foo {
public:
   Foo() noexcept = default;                     // Default constructor
   Foo(const Foo& other) {
      // Copy constructor for lvalues
   }

   Foo(Foo&& other) noexcept {
      // Move constructor for rvalues - moves content from 'other' to 'this'
   }

   Foo& operator=(const Foo& other) {
      // Copy assignment operator for lvalues
      return *this;
   }

   Foo& operator=(Foo&& other) noexcept {
      // Move assignment operator for rvalues - moves content from 'other' to 'this'
      return *this;
   }

   virtual ~Foo() noexcept {
      // Destructor
   }
};

/// <summary>
///  The Matter with Those lvalues and rvalues
/// </summary>
/// <returns></returns>
/// 
/// All below are lvalues 
/// Type var1;
/// Type* pointer; 
/// Type& reference;
/// Type function();
/// Type* pointerToVar1 = &var1;

int theAnswerToAllQuestions = 42;   // left operand is lvalue; right operand '42' is rvalue
//Foo foo = Foo();
int& function() {
   return theAnswerToAllQuestions; 
}


void rvaluereferences() {
   int number = 23; /// Works, because 'number' is an lvalue
   //42 = number;  // Left operand must be an lvalue 

   //function() = 23; // nonsense, or?

   /// <summary>
   ///  rvalue References
   /// </summary>
   /// <returns></returns>
   int&& rvalueReference = 25 + 17;
   int* pointerToRvalueReference = &rvalueReference;
   *pointerToRvalueReference = 23;
}

void builder() {
   Foo anObject; 
   Foo anotherObject1(anObject);
   Foo anotherObject2(std::move(anObject));
   anObject = anotherObject1; 
   anotherObject2 = std::move(anObject);
}

using StringVector = std::vector<std::string>;

StringVector createVectorOfString() {
   StringVector result; 

   // mach etwas

   return std::move(result);  // BAD and unnecessary, just write "return result;"
}

/// <summary>
///  Rule of Zero
/// </summary>
/// <returns></returns>

class MyString {
public:
   explicit MyString(const std::size_t size) : data{
      new char[size] } {}

   MyString(const char* const charArray, const std::size_t size) {
      data = new char[size + 1];
      strcpy_s(data, sizeof(data), charArray);
   }

   virtual ~MyString() { delete[] data; };

   char& operator[](const std::size_t index) {
      return data[index];
   }

   const char& operator[](const std::size_t index) const {
      return data[index];
   }

private:
   char* data;
};


int main() {
   
   std::cout << "Hello, World\n"; 

   rvaluereferences();

   builder();

   MyString aString("Test", 4);
   MyString anotherString{ aString }; /// Uhhhhh

   return 0;
}


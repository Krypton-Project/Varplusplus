/**
Copyright (C) 2012, Edward Chernysh
All rights reserved.

This project is part of Zenon Scripting.
Creating Var support for C++.

Redistribution and use in source and binary forms, with or without
modification, are permitted provided that the following conditions are met:
    * Redistributions of source code must retain the above copyright
      notice, this list of conditions and the following disclaimer.
    * Redistributions in binary form must reproduce the above copyright
      notice, this list of conditions and the following disclaimer in the
      documentation and/or other materials provided with the distribution.
    * Neither the name of the author nor the
      names of its contributors may be used to endorse or promote products
      derived from this software without specific prior written permission.

THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
DISCLAIMED. IN NO EVENT SHALL <EDWARD CHERNYSH> BE LIABLE FOR ANY
DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
(INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
(INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

**/

#ifndef VARIABLE_DECLARATION_HEADER
#define VARIABLE_DECLARATION_HEADER

#ifdef MISSING_NO_HEADER
#define NO_HEADER (-2)
#endif

#include <iostream>
#include <cstdlib>
#include <algorithm>
#include <string>

using namespace std;

namespace VARIABLE {

#ifndef VAR_STRING_NULL
#define VAR_STRING_NULL ""
#endif

#ifndef VAR_INT_NULL
#define VAR_INT_NULL 0
#endif

#ifndef VAR_CHAR_NULL
#define VAR_CHAR_NULL '\0'
#endif

#ifndef VAR_FLOAT_NULL
#define VAR_FLOAT_NULL 0.0
#endif

#ifndef UID
#define UID (-1)
#endif

/// <usage>
/// Define a namespace to be used to declare a variable class.
/// To delcare a variable: <var var;> (for example)
/// This class contains 4 different data types: (string, int, char and floating point)
/// They can all be empty or full. This area does not restrict usage in any way.
/// ------------------------------------------------------------------------------
/// To access a data type (int for example):
//  var.value = 107; // this will set var.integer = 107
/// </usage>

#ifndef UPCASE
#define UPCASE "upcase"
#endif

#ifndef LOWCASE
#define LOWCASE "lowcase"
#endif;

class var
{    
       public:
              typedef bool boolean;
              typedef unsigned long unslong;
              /**
              *
              * Define public variables to be used:
                       * (string text, int integer, char character, float floating...)
              *
              * # Please note the names of the variables. They are constant.
              **/
              
              string text;
              int value;     
              char character;     
              float floating;              
              
              /* These functions are not necessary; but may seem simple? */
              
              void integer_init(int);    // yeah
              void character_init(char); // yeah
              void float_init(float); // ...
              void textStringInit(string);
              
              /* functions that access 'integer' data types
              inside the variable class. */
              
              void integer_increment(int);         
              void integer_clear() { value = 0; }; 
              int* addressOfInt();   
              string ToString(int);
              bool intCompare(int);
              char ToChar();
              void intEquals(int);
              
              /* functions that access 'char' data types
              inside the variable class. */
              
              bool chck(char,char);
              void charcpy(char*, char[]);
              char charAddress();
              int charToInt(); 
              bool charCompare(char);
              void charEquals(char);
              
              /* functions that access 'integer' data types
              inside the variable class. */
              
              void float_increment(float);
              void float_clear() { floating = 0.0; };
              float* addressOfFloat();
              bool floatCompare(float);
              void floatEquals(float);
              
             /* functions that access 'string' data types
              inside the variable class. */
              
              // MOST COMPLEX!
              
              bool stringCompare(string);
              void Clone(string);
              
              // concatenation
              void stringConcat(string);
              void stringConcat(string, string);
              void stringConcat(string, string, string);
              void stringConcat(string, string, string, string);              
              void CopyTo(string);
              int Count();
              unsigned long LongCount();
              
              bool Contains(char);
              bool Contains(string);
              
              bool stringContains(string);
              void stringEquals(string);
              int indexOf(string);
              void stringJoin(string);
              int Length();
              string stringReverse();
              string removeNullSpaces();
              char FirstChar();
              char LastChar();
              void ToArray(string _destination[]);         // does not return, only set's
              void ToCharacterArray(char _result[] , unsigned const int);
              string ToUpper();
              string ToLower();
              bool isEmpty();      
              
};

};
#endif

# Printf

This is a reconstitution of the printf function with some of it's known formats.

## Description

The **_printf** function prints output of a specified format, it can be a character, a string, integer, etc...<br>
It only supports the format you can see below, if you use an unknown format it will not print. In order to do that, the **_printf** calls specific functions depending of the format. See informations below to know more about the supported formats, the prototype of the function and how it works.

## Prototype

'''
_printf(const char *format, ...);
'''

## Supported formats

+ %c: Prints a character.
+ %s: Prints a string of characters.
+ %i: Prints integers.
+ %d: Prints decimals.
+ %r: Prints a string in reverse.
+ %R: Prints a Rot13 translation of a string.

## Usage exmaple

'''
_printf("String to be printed.");
//Output : String to be printed.

char c = 'A';
_printf("Character:[%c].", c);
//Output : Character:[A].

char *str = "String to be printed";
_printf("String:[%s].", str);
//Output : String:[String to be printed].

int nb = 4;
_printf("Integer:[%i].", nb);
//Output : Integer:[4].
'''

## How does it work ?

<p>The **_printf** function will call the **get_format** function that will point on the needed function depending of the format, for example, when you call %c, the **get_format** function will call the **print_char** function in order to print a single character. You can find the specified functions in the format_flags files, the get_format as it's own source file as well as the _printf.<p>

<p>To know more about the **_printf** function, you can read the manual page that we wrote called **man_3_printf**.<p>

## Authors

[LAPEYRE Nathan](https://github.com/Sarolus)<br>
[BRARD Simon](https://github.com/SimonBr017)
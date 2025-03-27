# ft_printf
Understanding vardiac arguments and its role in creating functions like ft_print

VARDIAC FUNCTIONS - how we can have multiple, flexible parameters for functions

va_arg is used to retrieve the next argument from a variable argument list. It works in conjunction with:

va_list: A type that holds the information about the variable arguments.
va_start: Initializes the va_list to point to the first variable argument.
va_end: Cleans up the va_list when you’re done.

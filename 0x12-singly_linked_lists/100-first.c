#include <stdio.h>
void my_startup_fun(void) __attribute__((constructor));
/**
  * my_startup_fun - print a message before the main
  */
void my_startup_fun(void)
{
printf(
"You're beat! and yet, you must allow,\\nI bore my house upon my back!\\n"
);
}

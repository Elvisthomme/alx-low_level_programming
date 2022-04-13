/**
  * print_name - print call the fonction @f with @name
  * @name: a string value
  * @f: a function
  */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}

echo "Enter a: \n";
read a;
echo "\nEnter b: \n";
read b;
echo $(($a + $b));
# All shell variables are string variables, hence to carry out arithmetic operations use expr command which evaluates arithmetic expressions.
# Before and at the end of expr keyword use ` (back quote)
# More than one assignment can be done in a single statement.
# The ‘*” symbol must be preceded by a \ ,otherwise the shell treats it as a wildcard character for all files in the current directory.

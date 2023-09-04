echo "enter n"
read n
a=0
b=1
echo "The fib series is: "
echo $a
echo $b
for((i=0;i<n;i++)); do
	c=$(($a + $b))
	echo "$c"
	a=$b
	b=$c
done


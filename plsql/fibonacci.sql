declare
fi number;
x number;
function fib(a in number) return number is
begin 
if(a=0) then
    return 0;
elsif(a=1) then 
    return 1;
else
	x:= fib(a-1) + fib(a-2);
	return x;
end if;
end;
begin
-- fi:=5;
x := fib(53);
dbms_output.put_line(x);
end;

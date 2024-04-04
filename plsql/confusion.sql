

-- pl sql
declare
s number;
temp number;
procedure f1(a in number) return number is
begin 
select sal into s from emp where id=a;
-- if(s<100) then
    s:=s+500;
	update emp set sal = s where id = a;
-- end if;
end;
begin 
select id into temp from emp where sal<1000;
f1()

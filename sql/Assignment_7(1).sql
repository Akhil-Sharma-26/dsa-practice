CREATE TABLE SalesPeople(
    Snum number constraint S_pk primary key ,
    Sname varchar(20) unique ,
    City varchar(20),
    Comm number
);

CREATE TABLE  Customers(
    Cnum number primary key ,
    Cname varchar(20) unique,
    City varchar(20),
    Snum number references SalesPeople(Snum)
);

CREATE TABLE Orders(
    Onum number primary key ,
    Amt number,
    Odate date,
    Cnum number references Customers(Cnum),
    Snum number references SalesPeople(Snum)
);

insert into SalesPeople values(1001,'Peel','London',0.12);
insert into SalesPeople values(1002,'Serres','Sanjose',0.13);
insert into SalesPeople values(1004,'Motika','London',0.11);
insert into SalesPeople values(1007,'Ritfkin','Barcelona',0.15);
insert into SalesPeople values(1003,'Axelrod','New York',0.10);

insert into Customers values(2001,'Hoffman','London',1001);
insert into Customers values(2002,'Givonni','Rome',1003);
insert into Customers values(2003,'Liu','Barcelona',1002);
insert into Customers values(2004,'Grass','Paris',1002);
insert into Customers values(2006,'Clemens','London',1001);
insert into Customers values(2008,'Cisneros','Sanjose',1007);
insert into Customers values(2007,'Pereira','Paris',1004);

insert into Orders values(3001,18.69,'3-OCT-1990',2008,1007);
insert into Orders values(3003,767.19,'3-OCT-1990',2001,1001);
insert into Orders values(3002,1900.1,'3-OCT-1990',2007,1004);
insert into Orders values(3005,5160.45,'3-OCT-1990',2003,1002);
insert into Orders values(3006,1098.16,'3-OCT-1990',2008,1007);
insert into Orders values(3009,1713.23,'4-OCT-1990',2002,1003);
insert into Orders values(3007,75.75,'4-OCT-1990',2004,1002);
insert into Orders values(3008,4273,'5-OCT-1990',2006,1001);
insert into Orders values(3010,1309.95,'6-OCT-1990',2004,1002);
insert into Orders values(3011,9891.88,'6-OCT-1990',2006,1001);

-- Q2
select Snum,Sname from SalesPeople where Snum in (select Snum from Orders group by Snum having sum(Amt)>2000);
-- Q3
select Snum,count(Snum) from Customers group by Snum having count(Snum)>=2;
-- Q4
select Sname from SalesPeople where Snum in (select Snum from Customers group by Snum having count(Snum)>=2);
-- Q5
select City,count(*) as Number_Of_SalesPeople_Living from SalesPeople group by City having City in ('Barcelona','London');
-- Q6
select Cname from Customers where City in(select City from SalesPeople group by City having City in ('Barcelona','London'));
-- Q7
select Cnum,sum(Amt) from Orders group by Cnum having sum(Amt)>=1200;
-- Q8
select Cname from Customers,SalesPeople where SalesPeople.City=Customers.City and SalesPeople.Snum = Customers.Snum;
-- BOTH ARE KINDA SAME. LEARN ABOUT EXIST MORE
select Cname from Customers,SalesPeople where exists (select * from SalesPeople where SalesPeople.City=Customers.City and SalesPeople.Snum = Customers.Snum);
-- Q9
select 
select * from SalesPeople;
select * from Customers;
select * from Orders;

drop table SalesPeople;
drop table Customers;
drop table Orders;
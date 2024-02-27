-- @block
create table department(
    Did INT primary key,
    Dname varchar(40)
)

-- @block
CREATE TABLE if not EXISTS emp2(
    id INT primary key,
    name varchar(40),
    Did INT references department(Did),
    Job varchar(40) ,
    Salary int
)

-- Q1
-- @block
insert into department values
    (1,'CSE'),(2,'ECE'),(3,'MECH'),(4,'CIVIL'),(5,'CHEMICAL')


-- @block
insert into emp2 values
    (11,'Akhil',1,'Manager',50000),
    (12,'Abc',1,'Clerk',50000),
    (13,'Xyz',1,'Clerk',14200),
    (14,'Pqr',NULL,'Sales',14253),
    (15,'Lmn',3,'Sales',15999),
    (16,'Opq',null,'Clerk',14200),
    (17,'Rst',3,'Sales',15999),
    (18,'Uvw',3,'Clerk',40000),
    (19,'Def',4,'Sales',15999),
    (20,'Ghi',2,'Clerk',25455)

-- Q2
-- @block
select count(*) as count from emp2

-- Q3
-- @block
select count(*) as count from department

-- Q4
-- @block
-- Inner Join
select id,name,department.Dname from emp2 INNER JOIN department on emp2.Did = department.Did

-- @block
-- Left join
select id,name,department.Dname from emp2 LEFT JOIN department on emp2.Did = department.Did

-- @block
-- Right join
select id,name,department.Dname from emp2 RIGHT JOIN department on emp2.Did = department.Did

-- @block
-- Full join
select id,name,department.Dname from emp2 JOIN department on emp2.Did = department.Did

-- Q5
-- @block
select sum(Salary) as total_salary, max(Salary) as max_salary, min(Salary) as min_salary, avg(Salary) as avg_salary from emp2 where Did = 1

-- Q6

-- Q7
-- @block
select emp2.Did,sum(Salary) as total_salary from emp2 group by emp2.Did




-- @block
drop table emp2

-- @block
drop table department
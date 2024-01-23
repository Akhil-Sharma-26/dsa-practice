

-- @block
CREATE TABLE IF NOT EXISTS student (
  id INT PRIMARY KEY AUTO_INCREMENT,
  name VARCHAR(255),
  roll_no INT unique,
  branch VARCHAR(255) NOT NULL,
  email VARCHAR(255) NOT NULL,
  cgpa DECIMAL(3, 2)
);
-- @block
-- creating table with foreign key
create table if not EXISTS teacher(
    id int primary key auto_increment,
    name varchar(255),
    subject varchar(255),
    student_id int,
    foreign key(student_id) references student(id)
    );

-- @block
-- inserting data into table
INSERT INTO teacher (name, subject, student_id)
VALUES
    ('John Smith', 'Mathematics', (SELECT id FROM student ORDER BY RAND() LIMIT 1)),
    ('Jane Johnson', 'Physics', (SELECT id FROM student ORDER BY RAND() LIMIT 1)),
    ('Mike Davis', 'Chemistry', (SELECT id FROM student ORDER BY RAND() LIMIT 1)),
    ('Sarah Wilson', 'Biology', (SELECT id FROM student ORDER BY RAND() LIMIT 1)),
    ('David Brown', 'Computer Science', (SELECT id FROM student ORDER BY RAND() LIMIT 1));


-- @block
drop table if exists teacher;

-- @block
select * from teacher;

-- @block
select * from student;

-- @block
INSERT INTO student (name, roll_no, branch, email, cgpa)
VALUES
    ('John Doe', 1, 'Computer Science', 'john.doe@example.com', 3.5),
    ('Jane Smith', 2, 'Electrical Engineering', 'jane.smith@example.com', 3.8),
    ('Mike Johnson', 3, 'Mechanical Engineering', 'mike.johnson@example.com', 3.2),
    ('Sarah Williams', 4, 'Civil Engineering', 'sarah.williams@example.com', 3.6),
    ('David Brown', 5, 'Chemical Engineering', 'david.brown@example.com', 3.4),
    ('Emily Davis', 6, 'Computer Science', 'emily.davis@example.com', 3.9),
    ('Michael Wilson', 7, 'Electrical Engineering', 'michael.wilson@example.com', 3.1),
    ('Jessica Taylor', 8, 'Mechanical Engineering', 'jessica.taylor@example.com', 3.7),
    ('Andrew Anderson', 9, 'Civil Engineering', 'andrew.anderson@example.com', 3.3),
    ('Olivia Martinez', 10, 'Chemical Engineering', 'olivia.martinez@example.com', 3.5);

-- @block
select email, cgpa from student
-- where id > 4 and id < 9 
where student.id > 1 and student.id < 9
AND
-- email like '%@example.com' and cgpa > 3.5
email like 'E%'
ORDER BY cgpa DESC LIMIT 10;

-- @block
-- creating index on email column
CREATE INDEX email_index ON student (email);
--  now the query will be faster for email search


-- @block
-- making relationships
-- Left Join: Get all students and their corresponding teacher (if any)
SELECT student.name AS student_name, teacher.name AS teacher_name
FROM student
LEFT JOIN teacher ON student.id = teacher.student_id;


-- @block
-- Right Join: Get all teachers and their corresponding student (if any)
SELECT student.name AS student_name, teacher.name AS teacher_name
FROM student
RIGHT JOIN teacher ON student.id = teacher.student_id;



-- @block
-- Inner Join: Get all students and their corresponding teacher (if any)
SELECT student.name AS student_name, teacher.name AS teacher_name
FROM student
INNER JOIN teacher ON student.id = teacher.student_id;


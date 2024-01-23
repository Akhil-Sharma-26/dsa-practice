
-- @block
CREATE TABLE IF NOT EXISTS studentNew(
    -- student_id INT PRIMARY KEY AUTO_INCREMENT,
    student_id INT AUTO_INCREMENT,
    name VARCHAR(20),
    major VARCHAR(30),
    PRIMARY KEY(student_id)
);

-- @block
INSERT INTO studentNew (name,major)
VALUES(
    ('John Doe', 'Computer Science'),
    ('Jane Smith', 'Mathematics'),
    ('Michael Johnson', 'Physics'),
    ('Emily Davis', 'Biology'),
    ('David Wilson', 'Chemistry'),
    ('Sarah Thompson', 'English'),
    ('Daniel Anderson', 'History'),
    ('Olivia Martinez', 'Psychology'),
    ('James Taylor', 'Sociology'),
    ('Sophia Hernandez', 'Art')
);
-- @block
DROP TABLE studentNew;

-- @block
DESCRIBE TABLE studentNew;

-- @block
ALTER TABLE studentNew ADD gpa DECIMAL(4,2)


-- @block
SELECT * FROM studentNew
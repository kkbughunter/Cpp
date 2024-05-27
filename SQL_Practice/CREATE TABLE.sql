CREATE TABLE tblPersons(
    person_id INT PRIMARY KEY, 
    name VARCHAR2(255) NOT NULL,
    age INT,
    country VARCHAR(64),
    state VARCHAR(64),
    city VARCHAR(64),
    gender ENUM('male', 'female'),
    dob DATE,
    phone_num BIGINT UNIQUE
);
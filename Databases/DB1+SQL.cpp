//DBMS
//By Aryan Grover(@aryang23)
//Database: - It is the collection of interrelated data.
//DBMS: - It is a record keeping system which handles a database and its operations

//3 Level Architecture
//User Level/View Level
//Conceptual or Logical Level: - Processing or Manipulation of Data
//Physical Level: - Where Database is stored

//Data Independence: - It signifies that we can make changes to the data of any level without affecting any other level.

//2 Types: - 
//Physical Independence and Logical Independence 
//1 pe changes kiye doosre pe affect nhi hoga


//Relation: -
//Collection of Data in form of Rows and Columns
//Terminologies: -
// Row is Tuple
//Columns is Attribute
//Cardinality: - Number of Rows
//Degree: - Number of Columns

//Types of Keys in Relations: -
//Primary Key: - Attribute or set of attribute that can uniquely identify the tupes of a relation
//Candidate Key: - Attribute or a Set of Attribute that can serve as a primary key
//Alternate Key: - Candidate Key that is not the primary key
//Best Explained with the Example in the Video

//Foriegn Key: - Attribute or Set of Attribute of that relation which serves as primary key of another relation
 
 
//Normalization: - Method using which we can remove the redundant(Duplicate) data of a relation
//3 Types: - 1NF, 2NF, 3NF at cetera


//RELATION ALGEBRA VVI
//Algebra performed on relations
//Based on Set Theory

//Operators: -
//1. Selection: -
//Symbol: - Sigma
//Can be used to select tuples(row) of relation

//2. Protection: -
//Symbol: - PI
//Can be used to select attributes (column) of relation

//3. Cartesian Products: -
//Symbol: - X
//Set of All the Possible Combinations of 2 Relations
//Best Explained in Video
//AXB!=BXA
//Although Data is Same but still they are not equal

//A: - n rows and m cols
//B : - p rows and q cols

//AXB= n*p=Number of Rows and m+q=Number of Cols

//UNION: -

//We can apply Union on 2 Relations only if: -
//Both have same number of columns
//Every Attribute of the relations are same that is Type of The Col should be same

//SET Difference: -
//Jo Common Rows hain htaado
//We can apply only if: -
//Degree that is number of columns should be same
//Every Attribute of the relations are same that is Type of the Col should be same

//Set Intersection: - 
//Same Conditions
//Intersection means jo common hain wo btaado



//SQL

//SQL is not a Case Sensitive Language

//SQL is Structured Query Language
//2 Languages are there: - 
//DDL(Data Definition Language)
//DML(Data Manipulation Langage)

//Queries: -
//CREATE TABLE QUERY

//SYNTAX: -
CREATE TABLE table_name(
	column_name datatype[size],
	column_name datatype[size],
	column_name datatype [size]
);

CREATE TABLE student(
	Roll No. int,
	Name char(30),
	schoolName char(20),
	marks int
);

//Table Constraints

//Constraints are the conditions which are applied on an attribute or set of attributes of a relation
//Different types: -
//Column Constraints: - Applies on Single Attribute(Column)
//Table Constraints: - Applies on Multiple Attributes(Columns)


//Unique Constraint: -
//It makes a particular attribute UNIQUE

CREATE TABLE student(
	Roll No. int UNIQUE,
	Name char(30),
	schoolName char(20),
	marks int
);

//NOT NULL/NULL Constraints
//It can't be Null
CREATE TABLE student(
	Roll No. int UNIQUE NOT NULL,
	Name char(30) NULL,
	schoolName char(20),
	marks int
);

//By Default NULL hi hota hain so wo apne aap NULL le leta hain

//Primary Key Constraint: -
//Attribute jo Row ko uniquely identify kre
////This constraint makes sure that there should not be any repeated value
//Yes It is same as Unique Constraint

CREATE TABLE student(
	Roll No. int PRIMARY KEY NOT NULL,
	Name char(30),
	schoolName char(20),
	marks int
);

//DEFAULT Constraint: -
//It gives Default Value to the Attribute

CREATE TABLE student(
	Roll No. int,
	Name char(30),
	schoolName char(20) DEFAULT 'Coding Blocks',
	marks int
);
//Agar user enter na kre ton wo apne aap Coding Blocks lelega

//CHECK Constraints: -
//To put constraint on the value inserted by the user

CREATE TABLE student(
	Roll No. int,
	Name char(30),
	schoolName char(20),
	marks int CHECK(marks>0)
);

//Keywords with Check Constraints: -
//IN,BETWEEN,LIKE

//IN KEYWORD
CREATE TABLE student(
	Roll No. int,
	Name char(30),
	schoolName char(20) CHECK(schoolName IN ('Coding','Blocks')),
	marks int
);
//We can either insert Coding or Blocks none else
//It could either be Coding or the Blocks
//No Value apart from these 2

//BETWEEN KEYWORD
CREATE TABLE student(
	Roll No. int,
	Name char(30),
	schoolName char(20),
	marks int CHECK(marks BETWEEN 33 and 100)
);

//LIKE KEYWORD
CREATE TABLE student(
	Roll No. char(4) CHECK(Roll No. LIKE 'CB__'),
	Name char(30),
	schoolName char(20),
	marks int
);

//We can even have CHECK Condition at last
CREATE TABLE student(
	Roll No. int,
	Name char(30),
	schoolName char(20),
	marks int,
	CHECK(Roll No. LIKE ......)
);

Examples: -
CREATE TABLE student(
	Roll No. int,
	Name char(30),
	schoolName char(20),
	marks int,
	CHECK(
	(School 'CodingBlocks' AND marks>90) OR
	(School 'VidyaMandir' AND Marks>85)
)
);

//Insert IN RELATION: -
// Keyword is: - INSERT INTO 

//INSERT INTO student
//values(1,'Aryan','CN',90)

//INSERT INTO student(RollNo, name, School, marks)
//values(1,'Kartik','CNN',90)

//We can change the order of the elements too



//Data Fetching
//SYNTAX: -
SELECT column_name_1,column_name_2,.........
FROM table_name;


//SELECT name,marks
//FROM student

//Query to select Roll Number, Name, Marks of allStudents
Ans: - SELECT Roll No., name, marks
FROM student;


//Qrite a Query to select all info of all students
//One Method is Previous One
//Second is 
SELECT *
FROM student;


//ALL/Distinct Keyword: -

SELECT ALL school
FROM student;
OR The below will also gonna work
SELECT school
FROM student;

//If we want all the schools only once
SELECT DISTINCT school
FROM student;
//It will remove the Duplicates


//KEYWORDS: -
//WHERE keyword: -

SYNTAX: -
SELECT 
FROM
WHERE school='CodingBlocks';

//Operators are of 2 Types: -
//Relational and Logical
//Relational are: - =,>=,<=,>,<,<>
//<> means Not Equals to

//Logical Operators are: -
//OR,AND and NOT


//Query: -
//Select Name and Roll Number of students who are from school VMC

SELECT RollNo, name
FROM student
WHERE school='VMC';

//Now name and Roll Number of those who are not from VMC
SELECT Roll No. , name
FROM student
WHERE school <> 'VMC';
OR
WHERE(NOT school='VMC')

//Query show that if student from VMC and marks>90
//and also if School is Coding Blocks and marks>80

SELECT *
FROM student
WHERE (
	(school='VMC' and marks>90)OR
	(school=='CodingBlocks' and marks>80)
);

//Between Keyword: -
//Query to show marks between 81 and 90
SELECT*
FROM student
WHERE marks BETWEEN 81 and 90

//IN/NOT IN Keywords
//Details of students who are from BBT and VMC

SELECT*
FROM student
WHERE school IN ('BBT' or 'VMC');

SELECT*
FROM student
WHERE school NOT IN('BBT' or 'VMC')


//LIKE/NOT LIKE KEYWORDS
//Pattern or Substrings
//We use 2 Special Characters
//% and _
//_ is used to compare a string char by char
//% compares Multiple Characters


//%Cod% means Starting mein kuch bhi ho and in ending too but beech mein Cod jruri hain
//Best Explained in the Video

SELECT *
FROM student
WHERE schoolName LIKE '%Cod%';


//Query: - Show students having 6 characters in their names
SELECT *
FROM student
WHERE name LIKE '______';

//Query: - 6 Char in School Name which starts with C and ends with g
SELECT *
FROM student
WHERE schoolName LIKE 'C____g';

//ESCAPE Char
//Symbol Backslash(\)
//it will ignore after the \

//Query: - Name and marks who have _h at their end
SELECT name,marks
FROM students
WHERE name LIKE '%\_h';

//It will ignore the char _ so _ can be anything

//It simply ignores the other char jo uske baad aane waala hain

//NULL and NOT NULL

//Query: - Select marks who have their marks as NULL

SELECT *
FROM students
WHERE marks is NULL;






//***************AGGREGATE FUNCTIONS****************
SQL have following functions: -
min(): - To get the minimum value of an Attribute
max(): - TO get max value
avg()
std.dev(): - Standard Deviation
variance()
count(): - kitni values null nhi hain
count(*): - It will return rows above
sum()


//Q1: - Sum of All Marks
SELECT sum(marks)
FROM student;

//Q2: - Q1+School =Coding Blocks
SELECT sum(marks)
FROM student
WHERE school='Coding Blocks';

//Q.3: - Highest Marks of students of VMC
SELECT max(marks)
FROM student
WHERE school='VMC';

//Q.4: - Second Highest Marks of all Students
SELECT max(marks)
FROM student
WHERE Marks <> (
	SELECT max(marks)
	FROM student;
);


//Q. 5 : - Second Minimum Marks who are from Coding Blocks
SELECT min(marks)
FROM student
WHERE marks<>(
	SELECT min(Marks)
	FROM student
	WHERE school='Coding Blocks'
)


//ORDER BY Clause: -
//We can arrange in ASC and DESCending by DESC

//Q. 6: - Print Name and Marks in Ascending Order of their marks

SELECT name,marks
FROM student
ORDER BY marks ASC;

//IN Desc Order
SELECT name,marks
FROM student
ORDER BY marks DESC;


//GROUP BY CLAUSE: -
//Used to divide the table into smaller table

//To apply the conditions the subset of the relation we use HAVING clause

//Q. 7: - Sum of Marks According to the Schools

SELECT sum(marks),school
FROM student
GROUP BY school;

//Q.8: - Count number of students in each and every school
SELECT count(*),school
FROM student
GROUP BY school;

//Q.9: -
//Sum of marks of those schools where students are more than or equal to 2
SELECT count(*), school,sum(marks)
FROM student
GROUP BY school
HAVING count(*)>=2

//Q.10: - Numbr of students in each school with marks>=90
SELECT count(*),school
FROM student
GROUP BY school
HAVING marks>=90



//UPDATE Query
//We can update an Attribute of the Relation
//Keyword: - SET
UPDATE table_name
SET (changes of Attribute)
WHERE school='CodingBlocks'
//Q.11: - Students from Coding Blocks unke marks +10 krdo
UPDATE student
SET marks=marks+10
WHERE school='Coding Blocks';

//Q.12 Update the school of students jinka school COding hain
UPDATE student
SET school='Coding Blocks'
WHERE school='CODING';


//DELETE 
//It will delete the content of relation
//Table ka structure delete nhi hoga sirf Data delete hoga

DELETE
FROM student;
//Yeh Saara Data delete krdega


//Q.13: - Delete Content of those students who are from coding
DELETE
FROM student
WHERE school='Coding'

//DROP TABLE
//Table hi memory se delete hojaaye
//It will drop the table along with content
DROP TABLE student;

//ALTER TABLE: -
//ADD: - To insert a new attribute
//Modify: - To update the size or type of the attribute

ALTER TABLE student
ADD Class char(10);

Ex: - 2: -
ALTER TABLE student
MODIFY name char(30);

//SUITABLE FRORM Existing Table
CREATE TABLE sub_table_name AS(
	SELECT column1,collumn2
	FROM table_name
);

CREATE student1 AS(
	SELECT name,marks
	FROM student
);


//INSERTING Text in Query
//Very Good One

SELECT name,'Percentage :',Marks,'%'
FROM student;


SELECT name,'CGPA :', marks/10
FROM student; CGPA:
	
	
	
//DBMS
//Database Design and SQL Queries
//By Rajesh Sir

//What is a Database?
//It is a collection of related Data.

//What is DBMS?
//A DBMS is a collection of programs that enables user to create and maintain a database


//What is a Table?
//A Collection of Data in Rows and Column format
//It has specified number of columns called Fields and can have any number of rows(called Records)


//Primary Key: -
//It is column or combination of columns that is designated to uniquely identify all table records
//Main Features are: -
//Must Contain a unique value for each row of data
//It cannot contain null values

//Difference between Primary Key and Unique Key
//PK cannot contain a NULL value but a Unique Key can


//Why do we need a primary key?
//TO access a particular cell
//To refer a cell we need to identify each record by something unique and that is main reason we need primary key


//WHAT is a FORIEGN KEY?
//A foriegn ket is a field in a table whose value is required to match the value of the primary key for a second table

//A foriegn key ensures referential Integrity by not allowing adding any data in foriegn key field


//What is Database Normalization?
//A way to design your database
//Normalization is a database design technique which organizes tables in a manner that reduces redundancy and dependency of data
//It divides larger table to smaller tables and links them using relationships

//First Normal FORM(1NF)
If and only if all domains contains atomic values only

//Each table should have unique records


//SECOND NF(2NF)
//A relation is in 2NF if and only if it is in 1NF and every non-key attribute is fully dependent on the primary key


//Third Normal Form
//A relation is in 3NF if and only if it is in 2NF and the non key attrributes are mutually independent






//Various Types of Databases: -
RDBMS/SQL
=========
MySQL
MariaDB
PostgreSQL
Oracle DB
DB2
-------
File Based Databases
SQLite
H2


NoSQL / Document Store / Key Value Store
===========
MongoDB
Cassandra
Firebase
DynamoDB
Redis




///2 TYpes of Databases
ACID
	-atomicity( BEST Explained in Video)
	-consistency
	-isolation(Operations will not interfere)
	-durability(Hard to Corrupt)
	
	50-60 years old
	Chooses C and P
BASE
	-Basically Available
	-Soft State
	-Eventually Consistent
	
	
	Chooses Availability
	A nd P
	

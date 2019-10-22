CREATE TABLE Student(snum INT PRIMARY KEY,sname VARCHAR(50),major VARCHAR(30),slevel VARCHAR(30),age INT);
CREATE TABLE faculty(fid INT PRIMARY KEY, fname varchar2(20),deptid INT);
CREATE TABLE class(cname varchar2(20),meet_at varchar2(10),room varchar2(10),fid number(5) REFERENCES faculty(fid));
CREATE TABLE enrolled(snum NUMBER(5) REFERENCES Student(snum),cname varchar2(20));
 
 
INSERT ALL
INTO Student VALUES (1,'jhon','CS','Sr',19)
INTO Student VALUES (2,'smith','CS','Jr',20)
INTO Student VALUES (3,'jacob','CV','Sr',20)
INTO Student VALUES (4,'tom','CS','Jr',20)
SELECT * FROM dual;
 
 
 
 
INSERT ALL
INTO faculty VALUES (11,'Harshith',1000)
INTO faculty VALUES (12,'Mohan',1000)
INTO faculty VALUES (13,'Kumar',1001)
INTO faculty VALUES (14,'Shobha',1002)
INTO faculty VALUES (15,'Shan',1000)
SELECT * FROM dual;
 
INSERT ALL
INTO class VALUES ('C','2PM','room1',14)
INTO class VALUES('CPP','10AM','room128',14)
INTO class VALUES('JAVA','11AM','room2',12)
INTO class VALUES('.NET','9AM','room3',11)
INTO class VALUES('PHP','3PM','room4',14)
INTO class VALUES('ML','8PM','room3',15)
INTO class VALUES('DS','8AM','room2',14)
INTO class VALUES('CO','9AM','room3',14)
SELECT * FROM dual;
 
 
 
INSERT ALL
INTO  enrolled VALUES (1,'C')
INTO  enrolled VALUES (2,'C')
INTO  enrolled VALUES (3,'CPP')
INTO  enrolled VALUES (4,'CO')
INTO  enrolled VALUES (3,'CPP')
INTO  enrolled VALUES (3,'JAVA')
INTO  enrolled VALUES (1,'PHP')
INTO  enrolled VALUES (2,'.NET')
INTO  enrolled VALUES (3,'PHP')
INTO  enrolled VALUES (4,'.NET')
INTO  enrolled VALUES (3,'PHP')
INTO  enrolled VALUES (1,'DS')
SELECT * FROM dual;
 
 
--Find the names OF ALL juniors (level=Jr) who are enrolled FOR class taught BY professor Harshith.
SELECT sname FROM Student s,faculty f,class c,enrolled e WHERE s.slevel='Jr' AND e.snum=s.snum AND e.cname=c.cname AND c.fid=f.fid AND f.fname='Harshith';
 
 
--Find the names OF ALL classes that either meet IN room128 OR have 5 OR more students enrolled.
SELECT cname FROM class WHERE room='room128' OR cname IN (SELECT cname FROM enrolled GROUP BY cname HAVING COUNT(cname) > 2);
 
-- Find the names of faculty members who teach in every room in which some class is taught.
SELECT f.fname,f.fid FROM faculty f WHERE f.fid in ( SELECT fid FROM class GROUP BY fid HAVING COUNT(*)=(SELECT COUNT(DISTINCT room) FROM class));   
                                                                                                         
--Find the names OF faculty members FOR whom the combined enrolment OF the courses that they teach IS less than five
SELECT f.fname FROM faculty f WHERE f.fid IN (SELECT c.fid FROM class c,enrolled e WHERE c.cname=e.ename GROUP BY c.fid HAVING COUNT(f.fid)<5);
 
--Find the names OF faculty members who teach IN every room IN which SOME class IS taught.
SELECT f.fname,f.fid FROM faculty f WHERE f.fid IN ( SELECT fid FROM class GROUP BY fid HAVING COUNT(*)=(SELECT COUNT(DISTINCT room) FROM class) );

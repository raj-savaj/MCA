CREATE TABLE STUDENT(regno VARCHAR(50) primary key,name VARCHAR(255), major VARCHAR(255), bdate DATE);
CREATE TABLE COURSE (course_no int PRIMARY KEY,cname VARCHAR(50), dept VARCHAR(50));
CREATE TABLE ENROLL(regno VARCHAR(50) REFERENCES STUDENT(regno), course int REFERENCES COURSE(course_no), sem int, marks int);
CREATE TABLE TEXTBOOK(book_isbn number(10) primary key,book_title VARCHAR(255),publisher VARCHAR(255),author VARCHAR(255));
CREATE TABLE BOOK_ADOPTION(course_no int  references COURSE(course_no),sem number(3),book_isbn number(10) references TEXTBOOK(book_isbn));

INSERT ALL
INTO STUDENT VALUES ('1NZ18MCA35','RAJ','COMPUTER','06/20/1998')
INTO STUDENT VALUES ('1NZ18MCA38','SAGAR','COMPUTER','06/20/1997')
INTO STUDENT VALUES ('1NZ18MCA27','PART','COMPUTER','04/28/1998')
INTO STUDENT VALUES ('1NZ18MCA42','DARSHAK','COMPUTER','10/20/1998')
INTO STUDENT VALUES ('1NZ18MBA42','RAKESH','MANANAGEMENT','11/20/1998')
SELECT * FROM dual;

INSERT ALL
INTO COURSE VALUES (1,'MCA','CSE')
INTO COURSE VALUES(2,'BCA','CSE')
INTO COURSE VALUES(3,'BSC','CSE')
INTO COURSE VALUES(4,'MBA','MANAGEMENT')
INTO COURSE VALUES(5,'SS','ISE')
SELECT * FROM dual;

INSERT ALL
INTO ENROLL VALUES ('1NZ18MBA42',5,3,100)
INTO ENROLL VALUES ('1NZ18MCA35',4,5,100)
INTO ENROLL VALUES ('1NZ18MCA27',3,5,100)
INTO ENROLL VALUES ('1NZ18MCA42',1,5,100)
INTO ENROLL VALUES ('1NZ18MCA38',2,3,100)
SELECT * FROM dual;
                                             
INSERT ALL
INTO TEXTBOOK VALUES (1001,'DATABASE SYSTEMS','PEARSON','SCHIELD')
INTO TEXTBOOK VALUES (1002,'OPERATING SYS','PEARSON','LELAND')
INTO TEXTBOOK VALUES (1003,'CIRCUITS','HALL INDIA','BOB')
INTO TEXTBOOK VALUES (1004,'SYSTEM SOFTWARE','PETERSON','JACOB')
INTO TEXTBOOK VALUES (1005,'SCHEDULING','PEARSON','PATIL')
INTO TEXTBOOK VALUES (1006,'DATABASE SYSTEMS','PEARSON','JACOB')
INTO TEXTBOOK VALUES (1007,'DATABASE MANAGER','PEARSON','BOB')
INTO TEXTBOOK VALUES (1008,'SIGNALS','HALL INDIA','SUMIT')
SELECT * FROM dual;

INSERT ALL
INTO BOOK_ADOPTION VALUES (1,5,1001)
INTO BOOK_ADOPTION VALUES (1,5,1001)
INTO BOOK_ADOPTION VALUES (2,5,1002)
INTO BOOK_ADOPTION VALUES (2,3,1003)
INTO BOOK_ADOPTION VALUES (3,3,1005)
INTO BOOK_ADOPTION VALUES (4,5,1001)
INTO BOOK_ADOPTION VALUES (1,5,1007)
INTO BOOK_ADOPTION VALUES (5,3,1008)
SELECT * FROM dual;
                                                                                                                              
                                                                                                                              
--Produce a list of text books (include Course #, Book-ISBN, Book-title) in the alphabetical order for courses offered by the ‘CS’ department that use more than two books
select  c.course_no,cname,t.book_isbn,book_title  from  COURSE C,BOOK_ADOPTION BA,TEXTBOOK T  where C.course_no=BA.course_no and  T.book_isbn=BA.book_isbn and  C.dept='CSE'  and c.course_no  in (select course_no from BOOK_ADOPTION group by course_no having count(*) >=2) order by T.book_title;

--List any department that has all its adopted books published by a specific publisher.
SELECT DISTINCT DEPT FROM COURSE C,BOOK_ADOPTION B,TEXTBOOK T WHERE C.COURSE_NO=B.COURSE_NO AND T.BOOK_ISBN=B.BOOK_ISBN AND T.PUBLISHER='PEARSON';

--Generate suitable reports.
select  c.course_no,c.cname,c.dept,t.book_isbn,t.book_title  from  COURSE c,BOOK_ADOPTION b,TEXTBOOK t where c.course_no=b.course_no and t.book_isbn=t.book_isbn;

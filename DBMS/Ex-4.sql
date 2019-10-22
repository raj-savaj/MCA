CREATE TABLE AUTHOR (author_id int primary key, name varchar(255), city varchar(255), country varchar(255)); 
CREATE TABLE PUBLISHER (publisher_id int primary key, name varchar(255), city varchar(255), country varchar(255));
CREATE TABLE CATEGORY (category_id int primary key, description varchar(255));
CREATE TABLE CATALOG (book_id int primary key, title varchar(255), author_id int references AUTHOR(author_id), publisher_id int references PUBLISHER(publisher_id), category_id int references CATEGORY(category_id), year int,price number(6,2));
CREATE TABLE ORDER_DETAILS (order_no int primary key, book_id int references CATALOG(book_id), quantity int);

INSERT ALL
INTO AUTHOR VALUES (1, 'NAVATHE', 'ARLINGTON', 'USA')
INTO AUTHOR VALUES (2, 'RAGHU RAMAKRISHNAN', 'CALIFORNIA', 'USA')
INTO AUTHOR VALUES (3, 'DHAMDHERE', 'MUMBAI', 'INDIA')
INTO AUTHOR VALUES (4, 'BJARNE', 'NEW JERSY', 'USA')
INTO AUTHOR VALUES (5, 'TANENBAUM', 'AMSTERDAM','NETHERLAND')
SELECT * FROM DUAL;

INSERT ALL
INTO Publisher VALUES (1, 'JOHN WILEY', 'NEW YORK', 'USA')
INTO Publisher VALUES (2, 'PEARSON', 'BANGALORE', 'INDIA')
INTO Publisher VALUES (3, 'O REILLY', 'NEW JERSY', 'USA')
INTO Publisher VALUES (4, 'TMH', 'CALCUTTA', 'INDIA')
INTO Publisher VALUES (5, 'JOHN WILEY', 'NEW DELHI', 'INDIA')
SELECT * FROM DUAL;

INSERT ALL
INTO CATEGORY VALUES (1, 'DATABASE MANAGEMENT')
INTO CATEGORY VALUES (2, 'OPERATING SYSTEMS')
INTO CATEGORY VALUES (3, 'C++')
INTO CATEGORY VALUES (4, 'COMPUTER NETWORKS')
INTO CATEGORY VALUES (5, 'C')
SELECT * FROM DUAL;

INSERT ALL
INTO CATALOG VALUES (1, 'FUNDAMENTALS OF DBMS', 1, 2, 1, 2004, 500)
INTO CATALOG VALUES (2, 'PRINCIPLES OF DBMS', 2, 1, 1, 2004, 400)
INTO CATALOG VALUES (3, 'OPERATING SYSTEMS', 3, 4, 2, 2004, 200)
INTO CATALOG VALUES (4, 'C++ BIBLE', 4, 5, 3, 2003, 500)
INTO CATALOG VALUES (5, 'COMPUTER NETWORKS', 5, 3, 4, 2002, 250)
INTO CATALOG VALUES (6, 'FUNDAMENTALS OF C', 1, 2, 5, 2004, 700)
INTO CATALOG VALUES (7, 'OPERATING SYSTEMS 2', 3, 2, 2, 2001, 600)
SELECT * FROM DUAL;

INSERT ALL
INTO ORDER_DETAILS VALUES (1, 1, 1)
INTO ORDER_DETAILS VALUES (2, 2, 1)
INTO ORDER_DETAILS VALUES (3, 3, 1)
INTO ORDER_DETAILS VALUES (4, 4, 1)
INTO ORDER_DETAILS VALUES (5, 5, 1)
INTO ORDER_DETAILS VALUES (6, 6, 7)
INTO ORDER_DETAILS VALUES (7, 7, 9)
SELECT * FROM DUAL;

--Give the details of the authors who have 2 or more books in the catalog and the price of the books is greater than the average price of the books in the catalog and the year of publication is after 2000.
select name  from AUTHOR where author_id in( select author_id from CATALOG where  year > 2000 AND price > ( SELECT AVG(price) FROM Catalog) group by author_id having (author_id) > 2 );

--Find the author of the book which has maximum sales.
select name from AUTHOR where author_id in (select author_id from CATALOG where book_id in((select book_id from ORDER_DETAILS group by book_id having sum(quantity)=(select  max(sum(quantity)) from ORDER_DETAILS group by book_id))));

--Demonstrate how you increase the price of books published by a specific publisher by 10%.
update CATALOG set price=price+(price*0.10) where publisher_id=1;

--Generate suitable reports.
select a.author_id,a.name,p.publisher_id,p.name,c.book_id,c.title from author a,publisher p,CATALOG c,ORDER_DETAILS o  where  a.author_id=c.author_id  and  p.publisher_id=c.publisher_id  and c.book_id=o.book_id;

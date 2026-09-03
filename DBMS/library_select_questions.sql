-- ============================================================
-- LIBRARY_SELECT_QUESTIONS.SQL
-- Practice Questions: SELECT statements only
--   * SELECT, WHERE, ORDER BY, DISTINCT, aggregate functions,
--     GROUP BY, HAVING, date functions, string functions,
--     numeric functions and CASE may be used where appropriate.
-- ============================================================

-- 1. Display the member ID, full name, member type and city of all ACTIVE
--    members, arranged first by member type and then alphabetically by name.


     select MEMBER_ID,FULL_NAME,MEMBER_TYPE,CITY from member where status='ACTIVE' order by MEMBER_TYPE, FULL_NAME;


      MEMBER_ID FULL_NAME                                                                                            MEMBER_TYPE          CITY
---------- ---------------------------------------------------------------------------------------------------- -------------------- ------------------------------------------------------------
      1003 Meera Thomas                                                                                         FACULTY              Kakkanad
      1013 Neha Varma                                                                                           FACULTY              Kakkanad
      1007 Sara Mathew                                                                                          FACULTY              Kochi
      1004 Rohan Joseph                                                                                         PUBLIC               Kochi
      1010 Adil Khan                                                                                            RESEARCHER           Kakkanad
      1005 Ananya Pillai                                                                                        RESEARCHER           Thrippunithura
      1015 Fathima Noor                                                                                         RESEARCHER           Aluva
      1001 Aarav Menon                                                                                          STUDENT              Kochi
      1002 Diya Nair                                                                                            STUDENT              Aluva
      1009 Ishita Rao                                                                                           STUDENT              Kochi
      1011 Liya George                                                                                          STUDENT              Thrippunithura


-- 2. List the members whose outstanding amount is between 50 and 300,
--    inclusive. Show member ID, name, outstanding amount and status in
--    descending order of outstanding amount.

 select MEMBER_ID,FULL_NAME,OUTSTANDING_AMT,STATUS from member where OUTSTANDING_AMT BETWEEN 50 and 300 order by OUTSTANDING_AMT desc;



 MEMBER_ID FULL_NAME                                                                                         OUTSTANDING_AMT STATUS
---------- ---------------------------------------------------------------------------------------------------- --------------- ---------------
      1010 Adil Khan                                                                                             250 ACTIVE
      1004 Rohan Joseph                                                                                          120 ACTIVE
      1006 Nikhil Raj                                                                                             75 EXPIRED
      1014 Joel Antony                                                                                            60 EXPIRED



-- 3. Display all members who are either STUDENT or RESEARCHER and whose
--    maximum borrowing limit is at least 4 books. Sort by max_books descending.

 select * from member where member_type in('STUDENT','RESEARCHER') AND max_books >= 4 order by max_books DESC;



 MEMBER_ID FULL_NAME                                                                                            MEMBER_TYPE       G DATE_OF_B JOIN_DATE EXPIRY_DA EMAIL                                                                                          PHONE                 CITY                                                         STATUS           MAX_BOOKS OUTSTANDING_AMT  BRANCH_ID
---------- ---------------------------------------------------------------------------------------------------- -------------------- - --------- --------- --------- ------------------------------------------------------------------------------------------------------------------------ -------------------- ------------------------------------------------------------ --------------- ---------- --------------- ----------
      1015 Fathima Noor                                                                                         RESEARCHER        F 01-DEC-96 18-APR-24 17-APR-27 fathima.n@example.com                                                                          9000001015    Aluva                                                        ACTIVE                  10              20     102
      1005 Ananya Pillai                                                                                        RESEARCHER        F 09-MAR-97 20-AUG-21 19-AUG-27 ananya.p@example.com                                                                           9000001005    Thrippunithura                                               ACTIVE                  10               0     104
      1010 Adil Khan                                                                                            RESEARCHER        M 15-JAN-94 01-OCT-19 30-SEP-27 adil.k@example.com                                                                             9000001010    Kakkanad                                                     ACTIVE                  10             250     103
      1011 Liya George                                                                                          STUDENT           F 26-JUN-05 12-JUN-25 11-JUN-28 liya.g@example.com                                                                             9000001011    Thrippunithura                                               ACTIVE                   4               0     104
      1014 Joel Antony                                                                                          STUDENT           M 08-AUG-02 15-JUN-22 14-JUN-26 joel.a@example.com                                                                             9000001014    Kochi                                                        EXPIRED                  4              60     101
      1006 Nikhil Raj                                                                                           STUDENT           M 30-DEC-03 05-JUN-23 04-JUN-26 nikhil.r@example.com                                                                           9000001006    Aluva                                                        EXPIRED                  4              75     102
      1002 Diya Nair                                                                                            STUDENT           F 02-FEB-05 01-JUL-24 30-JUN-27 diya.n@example.com                                                                             9000001002    Aluva                                                        ACTIVE                   4              35     102
      1001 Aarav Menon                                                                                          STUDENT           M 14-AUG-04 10-JUN-24 09-JUN-27 aarav.m@example.com                                                                            9000001001    Kochi                                                        ACTIVE                   4               0     101
      1009 Ishita Rao                                                                                           STUDENT           F 12-APR-04 10-JUN-24 09-JUN-27 ishita.r@example.com                                                                           9000001009    Kochi                                                        ACTIVE                   4              10     101



-- 4. Display member name, join date and the number of complete years they have
--    been members as of SYSDATE. Show the longest-standing members first.
--    Hint: MONTHS_BETWEEN can be useful.

select full_name,join_date,TRUNC(MONTHS_BETWEEN(SYSDATE, join_date) / 12) As complete_years FROM MEMBER ORDER BY complete_years DESC;


FULL_NAME                                                                                            JOIN_DATE COMPLETE_YEARS
---------------------------------------------------------------------------------------------------- --------- --------------
Adil Khan                                                                                            01-OCT-19      6
Sara Mathew                                                                                          10-FEB-20      6
Ananya Pillai                                                                                        20-AUG-21      5
Meera Thomas                                                                                         15-JAN-22      4
Joel Antony                                                                                          15-JUN-22      4
Harish Kumar                                                                                         20-NOV-22      3
Neha Varma                                                                                           03-MAR-23      3
Nikhil Raj                                                                                           05-JUN-23      3
Ishita Rao                                                                                           10-JUN-24      2
Rohan Joseph                                                                                         11-SEP-23      2
Fathima Noor                                                                                         18-APR-24      2

FULL_NAME                                                                                            JOIN_DATE COMPLETE_YEARS
---------------------------------------------------------------------------------------------------- --------- --------------
Aarav Menon                                                                                          10-JUN-24      2
Diya Nair                                                                                            01-JUL-24      2
Vivek Krishnan                                                                                       05-JAN-25      1
Liya George                                                                                          12-JUN-25      1


-- 5. Display the names and email addresses of members whose name contains the
--    letter 'a' anywhere, ignoring case, and whose account is ACTIVE.

 select full_name,email from member where LOWER(full_name) like '%a%' and STATUS = 'ACTIVE';


FULL_NAME                                                                                 EMAIL
---------------------------------------------------------------------------------------------------- ------------------------------------------------------------------------------------------------------------------------
Aarav Menon                                                                               aarav.m@example.com
Diya Nair                                                                                 diya.n@example.com
Meera Thomas                                                                              meera.t@example.com
Rohan Joseph                                                                              rohan.j@example.com
Ananya Pillai                                                                             ananya.p@example.com
Sara Mathew                                                                               sara.m@example.com
Ishita Rao                                                                                ishita.r@example.com
Adil Khan                                                                                 adil.k@example.com
Liya George                                                                               liya.g@example.com
Neha Varma                                                                                neha.v@example.com
Fathima Noor                                                                              fathima.n@example.com


-- 6. Produce a member-status summary showing each status, the number of members
--    in that status and the average outstanding amount for that status.
--    Round the average to two decimal places.

 select status,count(status) as no,round(avg(outstanding_amt),2) as avg_o_amt from member group by status;


STATUS                  NO  AVG_O_AMT
--------------- ---------- ----------
ACTIVE                  11      39.55
EXPIRED                  3         45
SUSPENDED                1        480


-- 7. Display cities having at least 2 registered members. Show the city,
--    number of members and total outstanding amount for that city.
--    Arrange by number of members descending.


-- 8. Display staff name, role, shift and salary for staff earning from
--    32,000 to 56,000 inclusive, excluding GENERAL shift staff.
--    Sort from highest to lowest salary.


-- 9. For each shift in the STAFF table, display the number of employees,
--    minimum salary, maximum salary and average salary.
--    Round average salary to two decimal places.


-- 10. Display staff members hired before 1 January 2020 whose salary is above
--     50,000. Show staff ID, name, hire date and salary.


-- 11. Display each publisher's name, country and age in years in 2026
--     (2026 - established_year). Show the oldest publishers first.


-- 12. Display countries that have at least two publishers in the database.
--     Show country and number of publishers.


-- 13. Display authors born before 1960 who have received at least 2 awards.
--     Show author name, nationality, birth year and awards count, ordered by
--     awards count descending and then birth year ascending.


-- 14. For each nationality in AUTHOR, display the number of authors and the
--     total number of awards received. Include only nationalities whose total
--     awards count is at least 5.


-- 15. Display book ID, title, category, publication year and price for books
--     published from 2014 onward with price above 700. Sort by price descending.


-- 16. Display books whose title contains either the word 'Data' or the word
--     'Learning', ignoring case. Show title, category, year, pages and rating.


-- 17. Display books with more than 500 pages and a rating of at least 4.5.
--     Add a computed column named PRICE_PER_100_PAGES showing the approximate
--     price per 100 pages, rounded to two decimals.


-- 18. Display the category-wise number of books, average price and average
--     rating. Show only categories containing at least 2 books.
--     Round averages to two decimals.


-- 19. Display publication years in which at least 2 books in the BOOK table
--     were published. Show the year, number of books and average price.


-- 20. Categorise every book using a CASE expression:
--       price < 400             -> 'BUDGET'
--       price between 400-799   -> 'STANDARD'
--       price >= 800            -> 'PREMIUM'
--     Display book title, price and the computed price category.
--     Sort by price descending.


-- 21. Display all physical copies purchased during 2024 or 2025.
--     Show copy ID, accession number, purchase date, purchase price,
--     condition and availability status.


-- 22. Display the number of book copies in each availability status.
--     Show only statuses having at least 2 copies, ordered by count descending.


-- 23. Display each condition status from BOOK_COPY together with the number of
--     copies and average purchase price. Round the average price to two decimals.


-- 24. Display currently unreturned loans (return_date IS NULL) that were issued
--     before 20 August 2026. Show loan ID, member ID, issue date, due date,
--     renewal count and loan status.


-- 25. For every loan, display loan ID, issue date, due date, return date and a
--     calculated column DAYS_ALLOWED equal to due_date - issue_date.
--     Sort by DAYS_ALLOWED descending and then loan ID.


-- 26. Display a summary of loans by loan_status showing the number of loans,
--     average renewal count and earliest issue date for each status.


-- 27. Display returned loans where the book was returned after the due date.
--     Show loan ID, member ID, due date, return date and the number of days late
--     calculated as return_date - due_date.


-- 28. Display reservations made during August 2026 that are still WAITING.
--     Show reservation ID, member ID, book ID, reservation date, expiry date
--     and priority number. Arrange by priority number and then reservation date.


-- 29. Display reservation-status counts, but include only statuses occurring
--     at least 2 times. Sort from most frequent to least frequent.


-- 30. Display fines that are not fully settled, i.e. payment_status is UNPAID
--     or PARTIAL. Show fine ID, member ID, reason, amount, amount paid and a
--     computed BALANCE_AMOUNT = amount - amount_paid. Sort by balance descending.



-- 31. From FINE, produce a reason-wise summary containing:
--     reason, number of fines, total amount charged, total amount paid and
--     total balance outstanding. Show reasons with total charged >= 100.


-- 32. Display the top-level borrowing pattern in LOAN by month of issue.
--     Show month as YYYY-MM, number of loans and average renewal count,
--     ordered chronologically.
--     Hint: TO_CHAR(issue_date, 'YYYY-MM').


-- 33. From MEMBER, display ACTIVE members whose membership expires within the
--     next 365 days from SYSDATE. Show name, member type, expiry date and the
--     approximate number of days remaining.


-- ============================================================
-- END OF QUESTION SET
-- ============================================================

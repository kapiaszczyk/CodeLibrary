-- SQL CHEATSHEET --

-- szukamy użytkownika po ID

SELECT * FROM employees WHERE employee_id = 201;



-- oczwywiście warunków może być kilka. Wykorzystujemy tutaj OR i AND

SELECT * FROM employees WHERE employee_id = 201 AND employee_id = 202;

SELECT * FROM employees WHERE employee_id = 201 OR employee_id = 202;



-- szukamy pracownika po nazwisku

SELECT * FROM employees WHERE Last_Name = 'Harstein';



-- szukamy po części ciagu znaków

SELECT * FROM employees WHERE phone_number like '590%';



-- Data zatrudnienia wieksza od pewnej daty

SELECT * FROM employees WHERE hire_date > DATE '1998-06-12';



-- szukamy pracowników, którzy zarabiaja ponad 5000

SELECT * FROM employees WHERE salary > 5000;



-- szukamy pracowników, którzy zarabiaja mniej niż 4000

SELECT * FROM employees WHERE salary < 4000;



-- szukamy pracowników, którzy zarabiaja dokladnie 4200

SELECT * FROM employees WHERE salary = 4200;



-- szukamy pracowników, którzy NIE zarabiaja dokladnie 4200

SELECT * FROM employees WHERE salary <> 4200;



-- sotrowanie pracowników po zarobkach (rosnaco)

SELECT * FROM employees ORDER BY salary;



-- sotrowanie pracowników po zarobkach (malejaco)

SELECT * FROM employees ORDER BY salary DESC;



-- sotrowanie najpierw po nazwisku, a później po imieniu

SELECT * FROM employees ORDER BY last_name, first_name;

SELECT * FROM employees ORDER BY 2, 1; -- wykorzystanie pozycji kolumny



-- prośba o wprowadzenie wartości

SELECT * FROM employees WHERE first_name = '&supplier_name';


CREATE TABLE dept(id NUMBER(7)CONSTRAINT department_id_pk PRIMARY KEY, name VARCHAR2(25));

DESCRIBE dept;

------------------------------------------------------------------------------------


-- wyświetlanie aktualnej daty

SELECT sysdate FROM DUAL;



-- Podniesienie pensji o 30% i zaokraglenie wartosci do jednego miejsca po przecinku

SELECT ROUND(salary * 1.30, 0) FROM employees;



-- Dodanie/odjecie pensji od pensji pracownika

SELECT salary + salary FROM employees;

SELECT salary - salary FROM employees;



-- Funkcja wyświetlająca pierwszą literę dużą (reszta małe)

SELECT INITCAP(last_name) FROM employees;



-- Funkcja wyświetlająca długość ciągu znaków

SELECT LENGTH(first_name) FROM employees;



-- Funkcja podnosząca wszystkie małe litery do dużych liter

SELECT UPPER(first_name) FROM employees;



-- Funkcja wyświetlająca ile mineło miesięcy pomiędzy datą zatrudnienia, a dziś

SELECT MONTHS_BETWEEN(SYSDATE, hire_date) FROM employees;



-- Funkcja "left-padded"

SELECT LPAD(first_name, 5) FROM employees;

SELECT LPAD(first_name, 10) FROM employees;

SELECT LPAD(first_name, 10, '&') FROM employees;



-- Funkcja "right-padded"

SELECT RPAD(first_name, 10, '$') FROM employees;



-- Funkcja "trunc" usuwająca wartości po 2 miejscu po przecinku

SELECT trunc(MONTHS_BETWEEN(SYSDATE, hire_date), 2) FROM employees;



-- Wyświetlanie dnia tygodnia w którym pracownik został zatrudniony

SELECT TO_CHAR(hire_date, 'DAY') FROM employees;



-- Wyświetlanie innej wartości w przypadku NULL

SELECT last_name, NVL(TO_CHAR(commission_pct), 'brak wartości') FROM employees;
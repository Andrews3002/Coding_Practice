SELECT A.name, B.bonus FROM Employee A
LEFT JOIN Bonus B
ON A.empId = B.empId
WHERE B.bonus = NULL
OR B.bonus < 1000; 
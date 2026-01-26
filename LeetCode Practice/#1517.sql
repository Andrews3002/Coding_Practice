SELECT * FROM Users
WHERE 
    mail ~ '^[A-Za-z]+[A-Za-z0-9_.-]'
    AND 
    mail LIKE '%@leetcode.com'
UPDATE Salary
IF sex = 'm' THEN 
    SET sex = 'f' 
ELSE 
    SET sex = 'm'
END IF;

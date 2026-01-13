UPDATE Salary
SET sex = CASE 
    WHERE sex = 'f' THEN sex = 'm'
    WHERE sex = 'm' THEN sex = 'f'
END;
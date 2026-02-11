CREATE OR REPLACE FUNCTION NthHighestSalary(N INT) RETURNS TABLE (Salary INT) AS $$
BEGIN
  IF N <= 0 THEN
    RETURN QUERY(
        SELECT NULL::INT
    );
  ELSE
  RETURN QUERY (
    -- Write your PostgreSQL query statement below.
    SELECT
        E.salary AS "salary"
    FROM Employee E
    GROUP BY E.salary
    ORDER BY E.salary DESC
    LIMIT 1
    OFFSET N-1
  );
END;
$$ LANGUAGE plpgsql;
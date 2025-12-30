SELECT a.email AS Email FROM Person a
GROUP BY a.email
HAVING COUNT(*) > 1;
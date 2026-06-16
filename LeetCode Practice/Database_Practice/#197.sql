SELECT A.id AS id FROM Weather A
JOIN Weather B
ON A.recordDate = B.recordDate+1
WHERE A.temperature > B.temperature
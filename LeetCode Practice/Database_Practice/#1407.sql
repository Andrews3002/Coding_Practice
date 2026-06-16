SELECT
    A.name,
    COALESCE(B.distance, 0) AS travelled_distance
FROM Users A
LEFT JOIN (
    SELECT 
        user_id, 
        SUM(distance) AS distance
    FROM Rides
    GROUP BY (user_id)
) AS B
ON A.id = B.user_id
ORDER BY travelled_distance DESC, A.name ASC
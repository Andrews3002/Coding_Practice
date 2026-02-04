SELECT A.x,A.y,A.z,
CASE
    WHEN A.x+A.y>A.z AND A.y+A.z>A.x AND A.z+A.x>A.y THEN 'Yes'
    ELSE 'No'
END AS triangle
FROM Triangle A
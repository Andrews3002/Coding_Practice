SELECT
    A.id,
    SUM(CASE WHEN A.month = 'Jan' THEN A.revenue END) AS Jan_Revenue,
    SUM(CASE WHEN A.month = 'Feb' THEN A.revenue END) AS Feb_Revenue,
    SUM(CASE WHEN A.month = 'Mar' THEN A.revenue END) AS Mar_Revenue,
    SUM(CASE WHEN A.month = 'Apr' THEN A.revenue END) AS Apr_Revenue,
    SUM(CASE WHEN A.month = 'May' THEN A.revenue END) AS May_Revenue,
    SUM(CASE WHEN A.month = 'Jun' THEN A.revenue END) AS Jun_Revenue,
    SUM(CASE WHEN A.month = 'Jul' THEN A.revenue END) AS Jul_Revenue,
    SUM(CASE WHEN A.month = 'Aug' THEN A.revenue END) AS Aug_Revenue,
    SUM(CASE WHEN A.month = 'Sep' THEN A.revenue END) AS Sep_Revenue,
    SUM(CASE WHEN A.month = 'Oct' THEN A.revenue END) AS Oct_Revenue,
    SUM(CASE WHEN A.month = 'Nov' THEN A.revenue END) AS Nov_Revenue,
    SUM(CASE WHEN A.month = 'Dec' THEN A.revenue END) AS Dec_Revenue
FROM Department A
GROUP BY (A.id);
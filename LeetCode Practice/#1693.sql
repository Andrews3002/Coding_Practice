SELECT
    date_id,
    make_name,
    COUNT(DISTINCT lead_id) AS lead_id,
    COUNT(DISTINCT partner_id) AS partner_id
FROM DailySales
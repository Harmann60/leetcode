select p.product_id,Coalesce(Round(Sum(units * price)/Sum(units),2),0) as average_price from Prices P
  left join UnitsSold u on p.product_id=u.product_id AND u.purchase_date between p.start_date and p.end_date group by 1;

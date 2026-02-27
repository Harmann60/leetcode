Select Round(Avg(order_date=customer_pref_delivery_date)*100,2) as immediate_percentage from Delivery
where (customer_id,order_date) in (Select customer_id,Min(order_date) as order_date from delivery Group  by customer_id);

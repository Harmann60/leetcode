# 1 March 2026
# 1070. Product Sales Analysis III

select product_id,year as first_year, quantity, price from Sales
where(product_id, year) in (select  product_id, min(year) from Sales group by product_id)

#It was day well spend with friends great pizza,chaap then cherry on the top ice cream

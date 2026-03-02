Select Max(num) as num from MyNumbers
where num in (Select num from MyNumbers group by num having Count(*)=1);

Select Distinct a.Num as ConsecutiveNums from logs a join logs b on a.Id=b.Id+1 and a.Num=b.Num
join logs c on a.id=c.id+2 and a.Num=c.Num;

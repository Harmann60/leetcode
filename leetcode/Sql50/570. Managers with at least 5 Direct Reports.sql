select name from Employee where id in (Select managerId from employee group by managerId having (count(Distinct id))>=5);

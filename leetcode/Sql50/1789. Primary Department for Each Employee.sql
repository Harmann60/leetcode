Select Employee_id,department_id from Employee where primary_flag='Y' union
Select employee_id,department_id from Employee group by 1 having Count(*)=1;

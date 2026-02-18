# 1075. Project Employee1
# 19 Feburary 2026

Select p.project_id,Round(Avg(e.experience_years),2) as average_years from Project p,Employee e where p.employee_id=e.employee_id group by 1;

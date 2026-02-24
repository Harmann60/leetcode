Select  s.user_id as user_id,Coalesce(Round(Avg(c.action='confirmed'),2),0) as confirmation_rate from Signups s left join Confirmations c on s.user_id=c.user_id group by 1;

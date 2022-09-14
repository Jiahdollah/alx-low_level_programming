        int num, mult, prod;                                                                                                    
                                                                                                                                
        for (num = 0; num <= 9; num++)                                                                                          
        {                                                                                                                       
                _putchar('0');                                                                                                  
                                                                                                                                
                for (mult = 1; mult <= 9; mult++)                                                                               
                {                                                                                                               
                        _putchar(',');                                                                                          
                        _putchar(' ');                                                                                          
                                                                                                                                
                        prod = num * mult;                                                                                      
                                                                                                                                
                        if (prod <= 9)                                                                                          
                                _putchar(' ');                                                                                  
                        else                                                                                                    
                                _putchar((prod / 10) + '0');                                                                    
                                                                                                                                
                        _putchar((prod % 10) + '0');                                                                            
                }                                                                                                               
                _putchar('\n');                                                                                                 
        }                                                                                                                       
}                                                                                                                               
^C                                                                                                                              
root@74d29a48ee8a:/alx-low_level_programming/0x02-functions_nested_loops# git add .                                             
root@74d29a48ee8a:/alx-low_level_programming/0x02-functions_nested_loops# git commit -m 'Write a function that prints the 9 time
s table, starting with 0'                                                                                                       
[master ba9d850] Write a function that prints the 9 times table, starting with 0                                                
 1 file changed, 30 insertions(+)                                                                                               
 create mode 100644 0x02-functions_nested_loops/9-times_table.c                                                                 
root@74d29a48ee8a:/alx-low_level_programming/0x02-functions_nested_loops# git push                                              
Enumerating objects: 6, done.                                                                                                   
Counting objects: 100% (6/6), done.                                                                                             
Delta compression using up to 2 threads                                                                                         
Compressing objects: 100% (4/4), done.                                                                                          
Writing objects: 100% (4/4), 599 bytes | 599.00 KiB/s, done.                                                                    
Total 4 (delta 2), reused 0 (delta 0)                                                                                           
remote: Resolving deltas: 100% (2/2), completed with 2 local objects.                                                           

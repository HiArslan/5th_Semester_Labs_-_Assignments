u(n) = 1 n ? 0 
0 n ? 0  
if ((n0 < n1) | (n0 > n2) | (n1 > n2)) 
error('arguments must satisfy n1 <= n0 <= n2') 
end 
n = [n1:n2]; 	 
x = [zeros(1,(n0-n1)),ones(1,(n2-n0+1))]; 
x = [(n-n0) >= 0];
stem (n,x);

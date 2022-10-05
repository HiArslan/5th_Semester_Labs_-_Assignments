n = [0:4];
x = [1 1 2 -1 0]; 
subplot (2,1,1); 
stem (n,x); 
grid on; 
axis ([0 14 -1 2]); 
xlabel ('n'); 
ylabel ('x(n)'); 
title ('Figure 2.4(a)'); 
xtilde = [x,x,x]; 
length_xtilde = length (xtilde); 	 
n_new = [0:length_xtilde-1]; 
subplot (2,1,2); 
stem (n_new,xtilde,'r'); 
grid on; 
xlabel ('n'); 
ylabel ('perodic x(n)');  
title('Periodic Signal'); 

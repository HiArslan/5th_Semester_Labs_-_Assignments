t=[ -5:0.01:5];
x=2*sin((2*pi*t)-(pi/2)); 
plot(t,x)  
grid on; 
axis([-6 6 -3 3])
clear xlabel
clear ylabel
ylabel('x(t)');
xlabel('Time(sec)'); 
title(' Analog Signal ');

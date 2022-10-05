x_3 = [0:0.1:10];
y_2 = sin(x_3);
z = cos(x_3);
% m=3 means 3 grid rows n=1 means grid cols and p=1 means grid position
subplot(3 , 1 ,1);
plot(x_3,y_2);
grid on ;
subplot(3 , 1 , 2);
plot(x_3 , z);
grid on ;
hold on;
subplot(3 , 1 , 3);
stem(x_3 , z);
grid on;
hold on;
subplot(3 , 1 , 3);
stem(x_3 , y_2 , 'r');
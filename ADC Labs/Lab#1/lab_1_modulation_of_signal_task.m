% Carrier signal frequency always must be greater than message signal
% frequency
t = 0:0.001:1;
fm = input('Frequency of the message signal = '); % e.g 10
fc = input('Frequency of the carrier signal = '); % e.g 100
m = input('Modulation index = '); % e.g 1 for critical modulation
Am = 5;
Ac = 5;

Ms = Am*sin(2*pi*fm*t);
subplot(4 , 1 , 1)
plot(t , Ms , 'k')
title('Message Signal');
grid on;
hold on;

Cs = Ac*sin(2*pi*fc*t);
subplot(4 , 1 , 2)
plot(t , Cs , 'k')
title('Carrier Signal');
grid on;
hold on;

Modulation = Ms.*Cs;
subplot(4 , 1 , 3)
plot(t , Modulation , 'k')
title('Modulation');
grid on;
hold on;

X = fft(Modulation)
subplot(4, 1 , 4);
plot(t , abs(X) , 'k')
title('Frequency Domain Plot');
grid on;
hold on;

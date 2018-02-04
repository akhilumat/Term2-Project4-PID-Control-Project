# Reflection
Tuning of PID parameters

---

## Effect of PID terms

### P term
P term gives output which is proportional to the error term. The value of this term is equal to constant multiplied by error. 

P term = Kp*error

High value of Kp tries to reduce the error faster. But too high value will make the system unstable. Very low value of Kp makes the system response slow. This term doesnot make the steady state error zero. 

### I term
Integral term is proportional to magnitude and duration of error. It is addition of instantaneous errors over time. 

I term = Ki*integral(error*dt)

Integral term also makes movement towards setpoint faster and makes the steady state error zero. But too high value of integral makes the system to oscillate. Along with the P term, this also causes the system to overshoot. 

### D term
Derivative term is calculated by multiplying a constant with differential of error. 

D term = Kd*dE/dt

D term improves the stability of the system and also reduces settling time. It also reduces overshoot and makes system to approach setpoint smoothly. Too high D term makes the response of system slow. 


## Parameter Tuning 
I did manual tuning of the Kp, Ki and Kd values. Firstly I increased Kp values to see where the response of the vehicle is acceptable. Too low values of Kp made vehicle to turn very less. Final value of Kp was fixed at 0.15. There was still slight overshoot in the system after Kp value was set. 
After that I varied Ki values. Any value of Ki made the vehicle to oscillate due to error accumulation. So I Kept Ki value equal to 0. Even very low values of Ki made the system unstable. 
Then I tuned Kd values. Differntial term was used to reduce overshoot and make the system approach setpoint smoothly. I kept on increasing Kd values until the oscillitions of the vehicle became very less. Too high values of Kd made vehicle response slow and it crossed the side lines. Final value of Kd used was 4.2.


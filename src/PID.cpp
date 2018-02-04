#include "PID.h"

using namespace std;

/*
* TODO: Complete the PID class.
*/

PID::PID() {}

PID::~PID() {}

void PID::Init(double Kp_, double Ki_, double Kd_) {
  Kp = Kp_;
  Ki = Ki_;
  Kd = Kd_;
  previous = 0.0;
  sum = 0.0;

}

void PID::UpdateError(double cte) {
sum += cte;
p_error = - Kp * cte;
i_error = - Ki * sum;
d_error = - Kd * (cte - previous);
previous = cte;
}

double PID::TotalError() {
   return p_error + i_error + d_error;
}

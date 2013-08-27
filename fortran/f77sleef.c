#include "../purec/sleef.h"
double f_xsin(double * x) { return xsin(*x); }
double f_xcos(double * x) { return xcos(*x); }
double f_xtan(double * x) { return xtan(*x); }
double f_xasin(double * x) { return xasin(*x); }
double f_xacos(double * x) { return xacos(*x); }
double f_xatan(double * x) { return xatan(*x); }
double f_xlog(double * x) { return xlog(*x); }
double f_xexp(double * x) { return xexp(*x); }
double f_xsinh(double * x) { return xsinh(*x); }
double f_xcosh(double * x) { return xcosh(*x); }
double f_xtanh(double * x) { return xtanh(*x); }
double f_xasinh(double * x) { return xasinh(*x); }
double f_xacosh(double * x) { return xacosh(*x); }
double f_xatanh(double * x) { return xatanh(*x); }
double f_xsqrt(double * x) { return xsqrt(*x); }
double f_xcbrt(double * x) { return xcbrt(*x); }
double f_xexp2(double * x) { return xexp2(*x); }
double f_xexp10(double * x) { return xexp10(*x); }
double f_xexpm1(double * x) { return xexpm1(*x); }
double f_xlog10(double * x) { return xlog10(*x); }
double f_xlog1p(double * x) { return xlog1p(*x); }
double f_xsin_u1(double * x) { return xsin_u1(*x); }
double f_xcos_u1(double * x) { return xcos_u1(*x); }
double f_xtan_u1(double * x) { return xtan_u1(*x); }
double f_xasin_u1(double * x) { return xasin_u1(*x); }
double f_xacos_u1(double * x) { return xacos_u1(*x); }
double f_xatan_u1(double * x) { return xatan_u1(*x); }
double f_xlog_u1(double * x) { return xlog_u1(*x); }
double f_xexp_u1(double * x) { return xexp_u1(*x); }
double f_xsinh_u1(double * x) { return xsinh_u1(*x); }
double f_xcosh_u1(double * x) { return xcosh_u1(*x); }
double f_xtanh_u1(double * x) { return xtanh_u1(*x); }
double f_xasinh_u1(double * x) { return xasinh_u1(*x); }
double f_xacosh_u1(double * x) { return xacosh_u1(*x); }
double f_xatanh_u1(double * x) { return xatanh_u1(*x); }
double f_xexp2_u1(double * x) { return xexp2_u1(*x); }
double f_xexp10_u1(double * x) { return xexp10_u1(*x); }
double f_xexpm1_u1(double * x) { return xexpm1_u1(*x); }
double f_xlog10_u1(double * x) { return xlog10_u1(*x); }
double f_xlog1p_u1(double * x) { return xlog1p_u1(*x); }
double f_xcbrt_u1(double * x) { return xcbrt_u1(*x); }
double f_xpow(double * x, double * y) { return xpow(*x,*y); }
double f_xpow_u1(double * x, double * y) { return xpow_u1(*x,*y); }
double f_xatan2(double * x, double * y) { return xatan2(*x,*y); }
double f_xatan2_u1(double * x, double * y) { return xatan2_u1(*x,*y); }
double f_xldexp(double * x, double * y) { return xldexp(*x,*y); }
double f_xfma(double * x, double * y, double *z) { return xfma(*x,*y,*z); }
void f_xsincos(double * in, double * xout, double * yout) { double2 temp = xsincos(*in); *xout = temp.x; *yout = temp.y; return; }
void f_xsincos_u1(double * in, double * xout, double * yout) { double2 temp = xsincos_u1(*in); *xout = temp.x; *yout = temp.y; return; }
int f_xilogb(double * x) { return xilogb(*x); }

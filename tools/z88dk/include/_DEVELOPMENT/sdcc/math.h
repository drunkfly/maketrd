
// automatically generated by m4 from headers in proto subdir


#ifndef __MATH_H__
#define __MATH_H__

// THE SELECTED FLOATING POINT PACKAGE MAY NOT SUPPORT ALL LISTED FUNCTIONS

#ifndef _FLOAT_T_DEFINED
#define _FLOAT_T_DEFINED

   #ifdef __CLANG
   typedef float float_t;
   #endif

   #ifdef __SDCC
   typedef float float_t;
   #endif
   
   #ifdef __SCCZ80
   typedef double float_t;
   #endif
   
#endif

#ifndef _DOUBLE_T_DEFINED
#define _DOUBLE_T_DEFINED

   #ifdef __CLANG
   typedef float double_t;
   #endif

   #ifdef __SDCC
   typedef float double_t;
   #endif
   
   #ifdef __SCCZ80
   typedef double double_t;
   #endif
   
#endif

#ifndef _FLOAT16_T_DEFINED
#define _FLOAT16_T_DEFINED

   #ifndef __SCCZ80
   typedef short _Float16;      /* IEEE-754 half float type */  
   #endif

typedef _Float16 half_t;

#endif

// XSI EXTENSION
// temporary : math lib should supply these via func call

#define M_E                    2.718281828459
#define M_INVLN2               1.442695040889   /* 1 / log(2) */
#define M_LOG2E                1.442695040889
#define M_IVLN10               0.434294481903  /* 1 / log(10) */
#define M_LOG10E               0.434294481903
#define M_LOG2_E               0.693147180560
#define M_LN2                  0.693147180560
#define M_LN10                 2.302585092994
#define M_PI                   3.141592653590
#define M_TWOPI                6.283185307180
#define M_PI_2                 1.570796326795
#define M_PI_4                 0.7853981633974
#define M_3PI_4                2.3561944901923
#define M_SQRTPI               1.7724538509055
#define M_1_PI                 0.3183098861838
#define M_2_PI                 0.6366197723676
#define M_4_PI                 1.2732395447352
#define M_1_SQRTPI             0.5641895835478
#define M_2_SQRTPI             1.1283791670955
#define M_SQRT2                1.4142135623731
#define M_SQRT3                1.7320508075689
#define M_SQRT1_2              0.7071067811865

//

#define FLT_EVAL_METHOD        1
#define MATH_ERRNO             1
#define MATH_ERREXCEPT         2
#define math_errhandling       1

#ifdef __CLANG

#define HUGE_VAL               (1.7014117331E+38)
#define HUGE_VALF              (1.7014117331E+38)
#define INFINITY               (1.7014117331E+38)

#endif

#ifdef __SDCC

#define HUGE_VAL               (1.7014117331E+38)
#define HUGE_VALF              (1.7014117331E+38)
#define INFINITY               (1.7014117331E+38)

#endif

#ifdef __SCCZ80

#define HUGE_VAL               (1.7014118346E+38)
#define HUGE_VALF              (1.7014118346E+38)
#define INFINITY               (1.7014118346E+38)

#endif

#ifdef __MATH_AM9511

#define HUGE_POS_F32            (+9.2e+18)
#define TINY_POS_F32            (+2.7e-20)
#define HUGE_NEG_F32            (-9.2e+18)
#define TINY_NEG_F32            (-2.7e-20)

#define MAXL2_F32               (+63.0)
#define MINL2_F32               (-64.0)
#define MAXLOG_F32              (+43.6657)
#define MINLOG_F32              (−45.0)
#define MAXL10_F32              (+18.9638)
#define MINL10_F32              (−19.5686)

#define HUGE_VAL_F32           (0x7F800000)
#define INFINITY_POS_F32       (0x7F800000)
#define INFINITY_NEG_F32       (0xFF800000)

#endif

#ifdef __MATH_MATH32

#define HUGE_POS_F32           (+3.4028234664E+38)
#define TINY_POS_F32           (+1.1754943508E−38)
#define HUGE_NEG_F32           (-1.7014118346E+38)
#define TINY_NEG_F32           (-1.1754943508E-38)

#define MAXL2_F32              (+127.999999914)
#define MINL2_F32              (-126.0)
#define MAXLOG_F32             (+88.722839052)
#define MINLOG_F32             (−87.336544751)
#define MAXL10_F32             (+38.230809449)
#define MINL10_F32             (−37.929779454)

#define HUGE_VAL_F32           (0x7F800000)
#define INFINITY_POS_F32       (0x7F800000)
#define INFINITY_NEG_F32       (0xFF800000)

#endif

#ifdef __MATH_MATH16

#define HUGE_POS_F16            (+6.5504E+4)        /* 0x7BFF */
#define TINY_POS_F16            (+6.10352E-5)       /* 0x0400 */
#define HUGE_NEG_F16            (-6.5504E+4)        /* 0xFBFF */
#define TINY_NEG_F16            (-6.10352E-5)       /* 0x8400 */

#define MAXL2_F16               (+15.999)           /* 0x4BFF */
#define MINL2_F16               (-14.00)            /* 0xCB00 */
#define MAXLOG_F16              (+11.086)           /* 0x498B */
#define MINLOG_F16              (-9.700)            /* 0xC8DA */      
#define MAXL10_F16              (+4.816)            /* 0x44D1 */
#define MINL10_F16              (-4.215)            /* 0xC437 */

#define HUGE_VAL_F16            (0x7C00)
#define INFINITY_POS_F16        (0x7C00)
#define INFINITY_NEG_F16        (0xFC00)

#endif

extern double_t acos(double_t x);
extern double_t acos_fastcall(double_t x) __z88dk_fastcall;
#define acos(a) acos_fastcall(a)


extern double_t asin(double_t x);
extern double_t asin_fastcall(double_t x) __z88dk_fastcall;
#define asin(a) asin_fastcall(a)


extern double_t atan(double_t x);
extern double_t atan_fastcall(double_t x) __z88dk_fastcall;
#define atan(a) atan_fastcall(a)


extern double_t atan2(double_t y,double_t x);
extern double_t atan2_callee(double_t y,double_t x) __z88dk_callee;
#define atan2(a,b) atan2_callee(a,b)



extern double_t cos(double_t x);
extern double_t cos_fastcall(double_t x) __z88dk_fastcall;
#define cos(a) cos_fastcall(a)


extern double_t sin(double_t x);
extern double_t sin_fastcall(double_t x) __z88dk_fastcall;
#define sin(a) sin_fastcall(a)


extern double_t tan(double_t x);
extern double_t tan_fastcall(double_t x) __z88dk_fastcall;
#define tan(a) tan_fastcall(a)



extern double_t acosh(double_t x);
extern double_t acosh_fastcall(double_t x) __z88dk_fastcall;
#define acosh(a) acosh_fastcall(a)


extern double_t asinh(double_t x);
extern double_t asinh_fastcall(double_t x) __z88dk_fastcall;
#define asinh(a) asinh_fastcall(a)


extern double_t atanh(double_t x);
extern double_t atanh_fastcall(double_t x) __z88dk_fastcall;
#define atanh(a) atanh_fastcall(a)



extern double_t cosh(double_t x);
extern double_t cosh_fastcall(double_t x) __z88dk_fastcall;
#define cosh(a) cosh_fastcall(a)


extern double_t sinh(double_t x);
extern double_t sinh_fastcall(double_t x) __z88dk_fastcall;
#define sinh(a) sinh_fastcall(a)


extern double_t tanh(double_t x);
extern double_t tanh_fastcall(double_t x) __z88dk_fastcall;
#define tanh(a) tanh_fastcall(a)



extern double_t exp(double_t x);
extern double_t exp_fastcall(double_t x) __z88dk_fastcall;
#define exp(a) exp_fastcall(a)


extern double_t exp2(double_t x);
extern double_t exp2_fastcall(double_t x) __z88dk_fastcall;
#define exp2(a) exp2_fastcall(a)


extern double_t expm1(double_t x);
extern double_t expm1_fastcall(double_t x) __z88dk_fastcall;
#define expm1(a) expm1_fastcall(a)


extern double_t frexp(double_t value,int *exp);
extern double_t frexp_callee(double_t value,int *exp) __z88dk_callee;
#define frexp(a,b) frexp_callee(a,b)


extern int ilogb(double_t x);
extern int ilogb_fastcall(double_t x) __z88dk_fastcall;
#define ilogb(a) ilogb_fastcall(a)


extern double_t ldexp(double_t x,int exp);
extern double_t ldexp_callee(double_t x,int exp) __z88dk_callee;
#define ldexp(a,b) ldexp_callee(a,b)


extern double_t scalbn(double_t x,int n);
extern double_t scalbn_callee(double_t x,int n) __z88dk_callee;
#define scalbn(a,b) scalbn_callee(a,b)

	
extern double_t scalbln(double_t x,int n);
extern double_t scalbln_callee(double_t x,int n) __z88dk_callee;
#define scalbln(a,b) scalbln_callee(a,b)



extern double_t log(double_t x);
extern double_t log_fastcall(double_t x) __z88dk_fastcall;
#define log(a) log_fastcall(a)


extern double_t log10(double_t x);
extern double_t log10_fastcall(double_t x) __z88dk_fastcall;
#define log10(a) log10_fastcall(a)


extern double_t log1p(double_t x);
extern double_t log1p_fastcall(double_t x) __z88dk_fastcall;
#define log1p(a) log1p_fastcall(a)


extern double_t log2(double_t x);
extern double_t log2_fastcall(double_t x) __z88dk_fastcall;
#define log2(a) log2_fastcall(a)


extern double_t logb(double_t x);
extern double_t logb_fastcall(double_t x) __z88dk_fastcall;
#define logb(a) logb_fastcall(a)



extern double_t fabs(double_t x);
extern double_t fabs_fastcall(double_t x) __z88dk_fastcall;
#define fabs(a) fabs_fastcall(a)


extern double_t hypot(double_t x,double_t y);
extern double_t hypot_callee(double_t x,double_t y) __z88dk_callee;
#define hypot(a,b) hypot_callee(a,b)



extern double_t pow(double_t x,double_t y);
extern double_t pow_callee(double_t x,double_t y) __z88dk_callee;
#define pow(a,b) pow_callee(a,b)


extern double_t sqrt(double_t x);
extern double_t sqrt_fastcall(double_t x) __z88dk_fastcall;
#define sqrt(a) sqrt_fastcall(a)


extern double_t cbrt(double_t x);
extern double_t cbrt_fastcall(double_t x) __z88dk_fastcall;
#define cbrt(a) cbrt_fastcall(a)



extern double_t erf(double_t x);
extern double_t erf_fastcall(double_t x) __z88dk_fastcall;
#define erf(a) erf_fastcall(a)


extern double_t erfc(double_t x);
extern double_t erfc_fastcall(double_t x) __z88dk_fastcall;
#define erfc(a) erfc_fastcall(a)


extern double_t lgamma(double_t x);
extern double_t lgamma_fastcall(double_t x) __z88dk_fastcall;
#define lgamma(a) lgamma_fastcall(a)


extern double_t tgamma(double_t x);
extern double_t tgamma_fastcall(double_t x) __z88dk_fastcall;
#define tgamma(a) tgamma_fastcall(a)



extern double_t ceil(double_t x);
extern double_t ceil_fastcall(double_t x) __z88dk_fastcall;
#define ceil(a) ceil_fastcall(a)


extern double_t floor(double_t x);
extern double_t floor_fastcall(double_t x) __z88dk_fastcall;
#define floor(a) floor_fastcall(a)


extern double_t nearbyint(double_t x);
extern double_t nearbyint_fastcall(double_t x) __z88dk_fastcall;
#define nearbyint(a) nearbyint_fastcall(a)


extern double_t rint(double_t x);
extern double_t rint_fastcall(double_t x) __z88dk_fastcall;
#define rint(a) rint_fastcall(a)


extern long lrint(double_t x);
extern long lrint_fastcall(double_t x) __z88dk_fastcall;
#define lrint(a) lrint_fastcall(a)


extern double_t round(double_t x);
extern double_t round_fastcall(double_t x) __z88dk_fastcall;
#define round(a) round_fastcall(a)


extern long lround(double_t x);
extern long lround_fastcall(double_t x) __z88dk_fastcall;
#define lround(a) lround_fastcall(a)


extern double_t trunc(double_t x);
extern double_t trunc_fastcall(double_t x) __z88dk_fastcall;
#define trunc(a) trunc_fastcall(a)



extern double_t modf(double_t value,double_t *iptr);
extern double_t modf_callee(double_t value,double_t *iptr) __z88dk_callee;
#define modf(a,b) modf_callee(a,b)


extern double_t fmod(double_t x,double_t y);
extern double_t fmod_callee(double_t x,double_t y) __z88dk_callee;
#define fmod(a,b) fmod_callee(a,b)


extern double_t remainder(double_t x,double_t y);
extern double_t remainder_callee(double_t x,double_t y) __z88dk_callee;
#define remainder(a,b) remainder_callee(a,b)


extern double_t remquo(double_t x,double_t y,int *quo);
extern double_t remquo_callee(double_t x,double_t y,int *quo) __z88dk_callee;
#define remquo(a,b,c) remquo_callee(a,b,c)



extern double_t copysign(double_t x,double_t y);
extern double_t copysign_callee(double_t x,double_t y) __z88dk_callee;
#define copysign(a,b) copysign_callee(a,b)


extern double_t nan(const char *tagp);
extern double_t nan_fastcall(const char *tagp) __z88dk_fastcall;
#define nan(a) nan_fastcall(a)



extern double_t nextafter(double_t x,double_t y);
extern double_t nextafter_callee(double_t x,double_t y) __z88dk_callee;
#define nextafter(a,b) nextafter_callee(a,b)


extern double_t nexttoward(double_t x,double_t y);
extern double_t nexttoward_callee(double_t x,double_t y) __z88dk_callee;
#define nexttoward(a,b) nexttoward_callee(a,b)



extern double_t fdim(double_t x,double_t y);
extern double_t fdim_callee(double_t x,double_t y) __z88dk_callee;
#define fdim(a,b) fdim_callee(a,b)



extern double_t fmax(double_t x,double_t y);
extern double_t fmax_callee(double_t x,double_t y) __z88dk_callee;
#define fmax(a,b) fmax_callee(a,b)


extern double_t fmin(double_t x,double_t y);
extern double_t fmin_callee(double_t x,double_t y) __z88dk_callee;
#define fmin(a,b) fmin_callee(a,b)



extern double_t fma(double_t x,double_t y,double_t z);
extern double_t fma_callee(double_t x,double_t y,double_t z) __z88dk_callee;
#define fma(a,b,c) fma_callee(a,b,c)



extern int isgreater(double_t x,double_t y);
extern int isgreater_callee(double_t x,double_t y) __z88dk_callee;
#define isgreater(a,b) isgreater_callee(a,b)


extern int isgreaterequal(double_t x,double_t y);
extern int isgreaterequal_callee(double_t x,double_t y) __z88dk_callee;
#define isgreaterequal(a,b) isgreaterequal_callee(a,b)


extern int isless(double_t x,double_t y);
extern int isless_callee(double_t x,double_t y) __z88dk_callee;
#define isless(a,b) isless_callee(a,b)


extern int islessequal(double_t x,double_t y);
extern int islessequal_callee(double_t x,double_t y) __z88dk_callee;
#define islessequal(a,b) islessequal_callee(a,b)


extern int islessgreater(double_t x,double_t y);
extern int islessgreater_callee(double_t x,double_t y) __z88dk_callee;
#define islessgreater(a,b) islessgreater_callee(a,b)


extern int isunordered(double_t x,double_t y);
extern int isunordered_callee(double_t x,double_t y) __z88dk_callee;
#define isunordered(a,b) isunordered_callee(a,b)



#ifdef __MATH_MATH32

extern double_t sqr(double_t x);
extern double_t sqr_fastcall(double_t x) __z88dk_fastcall;
#define sqr(a) sqr_fastcall(a)


extern double_t inv(double_t x);
extern double_t inv_fastcall(double_t x) __z88dk_fastcall;
#define inv(a) inv_fastcall(a)


extern double_t invsqrt(double_t x);
extern double_t invsqrt_fastcall(double_t x) __z88dk_fastcall;
#define invsqrt(a) invsqrt_fastcall(a)


extern double_t div2(double_t x);
extern double_t div2_fastcall(double_t x) __z88dk_fastcall;
#define div2(a) div2_fastcall(a)


extern double_t mul2(double_t x);
extern double_t mul2_fastcall(double_t x) __z88dk_fastcall;
#define mul2(a) mul2_fastcall(a)


extern double_t mul10u(double_t x);
extern double_t mul10u_fastcall(double_t x) __z88dk_fastcall;
#define mul10u(a) mul10u_fastcall(a)


extern double_t exp10(double_t x);
extern double_t exp10_fastcall(double_t x) __z88dk_fastcall;
#define exp10(a) exp10_fastcall(a)


extern double_t poly(const float x,const float d[],unsigned int n);
extern double_t poly_callee(const float x,const float d[],unsigned int n) __z88dk_callee;
#define poly(a,b,c) poly_callee(a,b,c)



#endif

#ifdef __MATH_AM9511

extern double_t f32_fam9511(double_t x);
extern double_t f32_fam9511_fastcall(double_t x) __z88dk_fastcall;
#define f32_fam9511(a) f32_fam9511_fastcall(a)


extern double_t fam9511_f32(double_t x);
extern double_t fam9511_f32_fastcall(double_t x) __z88dk_fastcall;
#define fam9511_f32(a) fam9511_f32_fastcall(a)


extern double_t sqr(double_t x);
extern double_t sqr_fastcall(double_t x) __z88dk_fastcall;
#define sqr(a) sqr_fastcall(a)


extern double_t div2(double_t x);
extern double_t div2_fastcall(double_t x) __z88dk_fastcall;
#define div2(a) div2_fastcall(a)


extern double_t mul2(double_t x);
extern double_t mul2_fastcall(double_t x) __z88dk_fastcall;
#define mul2(a) mul2_fastcall(a)


extern double_t mul10u(double_t x);
extern double_t mul10u_fastcall(double_t x) __z88dk_fastcall;
#define mul10u(a) mul10u_fastcall(a)


extern double_t exp10(double_t x);
extern double_t exp10_fastcall(double_t x) __z88dk_fastcall;
#define exp10(a) exp10_fastcall(a)



#endif

#ifdef __MATH_MATH16

extern half_t f16_f48(double_t x);
extern half_t f16_f48_fastcall(double_t x) __z88dk_fastcall;
#define f16_f48(a) f16_f48_fastcall(a)


extern double_t f48_f16(half_t x);
extern double_t f48_f16_fastcall(half_t x) __z88dk_fastcall;
#define f48_f16(a) f48_f16_fastcall(a)



extern half_t f16_f32(float_t x);
extern half_t f16_f32_fastcall(float_t x) __z88dk_fastcall;
#define f16_f32(a) f16_f32_fastcall(a)


extern float_t f32_f16(half_t x);
extern float_t f32_f16_fastcall(half_t x) __z88dk_fastcall;
#define f32_f16(a) f32_f16_fastcall(a)



extern int16_t i16_f16(half_t x);
extern int16_t i16_f16_fastcall(half_t x) __z88dk_fastcall;
#define i16_f16(a) i16_f16_fastcall(a)


extern uint16_t u16_f16(half_t x);
extern uint16_t u16_f16_fastcall(half_t x) __z88dk_fastcall;
#define u16_f16(a) u16_f16_fastcall(a)


extern int32_t i32_f16(half_t x);
extern int32_t i32_f16_fastcall(half_t x) __z88dk_fastcall;
#define i32_f16(a) i32_f16_fastcall(a)


extern uint32_t u32_f16(half_t x);
extern uint32_t u32_f16_fastcall(half_t x) __z88dk_fastcall;
#define u32_f16(a) u32_f16_fastcall(a)



extern half_t f16_i8(int8_t x);
extern half_t f16_i8_fastcall(int8_t x) __z88dk_fastcall;
#define f16_i8(a) f16_i8_fastcall(a)


extern half_t f16_i16(int16_t x);
extern half_t f16_i16_fastcall(int16_t x) __z88dk_fastcall;
#define f16_i16(a) f16_i16_fastcall(a)


extern half_t f16_i32(int32_t x);
extern half_t f16_i32_fastcall(int32_t x) __z88dk_fastcall;
#define f16_i32(a) f16_i32_fastcall(a)


extern half_t f16_u8(uint8_t x);
extern half_t f16_u8_fastcall(uint8_t x) __z88dk_fastcall;
#define f16_u8(a) f16_u8_fastcall(a)


extern half_t f16_u16(uint16_t x);
extern half_t f16_u16_fastcall(uint16_t x) __z88dk_fastcall;
#define f16_u16(a) f16_u16_fastcall(a)


extern half_t f16_u32(uint32_t x);
extern half_t f16_u32_fastcall(uint32_t x) __z88dk_fastcall;
#define f16_u32(a) f16_u32_fastcall(a)



extern half_t addf16(half_t x,half_t y);
extern half_t addf16_callee(half_t x,half_t y) __z88dk_callee;
#define addf16(a,b) addf16_callee(a,b)


extern half_t subf16(half_t x,half_t y);
extern half_t subf16_callee(half_t x,half_t y) __z88dk_callee;
#define subf16(a,b) subf16_callee(a,b)


extern half_t mulf16(half_t x,half_t y);
extern half_t mulf16_callee(half_t x,half_t y) __z88dk_callee;
#define mulf16(a,b) mulf16_callee(a,b)


extern half_t divf16(half_t x,half_t y);
extern half_t divf16_callee(half_t x,half_t y) __z88dk_callee;
#define divf16(a,b) divf16_callee(a,b)



extern half_t fmaf16(half_t x,half_t y,half_t z);
extern half_t fmaf16_callee(half_t x,half_t y,half_t z) __z88dk_callee;
#define fmaf16(a,b,c) fmaf16_callee(a,b,c)


extern half_t polyf16(half_t x,float_t d[],uint16_t n);
extern half_t polyf16_callee(half_t x,float_t d[],uint16_t n) __z88dk_callee;
#define polyf16(a,b,c) polyf16_callee(a,b,c)


extern half_t hypotf16(half_t x,half_t y);
extern half_t hypotf16_callee(half_t x,half_t y) __z88dk_callee;
#define hypotf16(a,b) hypotf16_callee(a,b)



extern half_t invf16(half_t x);
extern half_t invf16_fastcall(half_t x) __z88dk_fastcall;
#define invf16(a) invf16_fastcall(a)


extern half_t invsqrtf16(half_t x);
extern half_t invsqrtf16_fastcall(half_t x) __z88dk_fastcall;
#define invsqrtf16(a) invsqrtf16_fastcall(a)



extern half_t sqrtf16(half_t x);
extern half_t sqrtf16_fastcall(half_t x) __z88dk_fastcall;
#define sqrtf16(a) sqrtf16_fastcall(a)



extern half_t div2f16(half_t x);
extern half_t div2f16_fastcall(half_t x) __z88dk_fastcall;
#define div2f16(a) div2f16_fastcall(a)


extern half_t mul2f16(half_t x);
extern half_t mul2f16_fastcall(half_t x) __z88dk_fastcall;
#define mul2f16(a) mul2f16_fastcall(a)


extern half_t mul10f16(half_t x);
extern half_t mul10f16_fastcall(half_t x) __z88dk_fastcall;
#define mul10f16(a) mul10f16_fastcall(a)


extern half_t frexpf16(half_t x,int8_t *pw2);
extern half_t frexpf16_callee(half_t x,int8_t *pw2) __z88dk_callee;
#define frexpf16(a,b) frexpf16_callee(a,b)


extern half_t ldexpf16(half_t x,int16_t pw2);
extern half_t ldexpf16_callee(half_t x,int16_t pw2) __z88dk_callee;
#define ldexpf16(a,b) ldexpf16_callee(a,b)



extern half_t acosf16(half_t x);
extern half_t acosf16_fastcall(half_t x) __z88dk_fastcall;
#define acosf16(a) acosf16_fastcall(a)


extern half_t asinf16(half_t x);
extern half_t asinf16_fastcall(half_t x) __z88dk_fastcall;
#define asinf16(a) asinf16_fastcall(a)


extern half_t atanf16(half_t x);
extern half_t atanf16_fastcall(half_t x) __z88dk_fastcall;
#define atanf16(a) atanf16_fastcall(a)



extern half_t cosf16(half_t x);
extern half_t cosf16_fastcall(half_t x) __z88dk_fastcall;
#define cosf16(a) cosf16_fastcall(a)


extern half_t sinf16(half_t x);
extern half_t sinf16_fastcall(half_t x) __z88dk_fastcall;
#define sinf16(a) sinf16_fastcall(a)


extern half_t tanf16(half_t x);
extern half_t tanf16_fastcall(half_t x) __z88dk_fastcall;
#define tanf16(a) tanf16_fastcall(a)



extern half_t expf16(half_t x);
extern half_t expf16_fastcall(half_t x) __z88dk_fastcall;
#define expf16(a) expf16_fastcall(a)


extern half_t exp2f16(half_t x);
extern half_t exp2f16_fastcall(half_t x) __z88dk_fastcall;
#define exp2f16(a) exp2f16_fastcall(a)


extern half_t exp10f16(half_t x);
extern half_t exp10f16_fastcall(half_t x) __z88dk_fastcall;
#define exp10f16(a) exp10f16_fastcall(a)


extern half_t logf16(half_t x);
extern half_t logf16_fastcall(half_t x) __z88dk_fastcall;
#define logf16(a) logf16_fastcall(a)


extern half_t log2f16(half_t x);
extern half_t log2f16_fastcall(half_t x) __z88dk_fastcall;
#define log2f16(a) log2f16_fastcall(a)


extern half_t log10f16(half_t x);
extern half_t log10f16_fastcall(half_t x) __z88dk_fastcall;
#define log10f16(a) log10f16_fastcall(a)


extern half_t powf16(half_t x,half_t y);
extern half_t powf16_callee(half_t x,half_t y) __z88dk_callee;
#define powf16(a,b) powf16_callee(a,b)



extern half_t fabsf16(half_t x);
extern half_t fabsf16_fastcall(half_t x) __z88dk_fastcall;
#define fabsf16(a) fabsf16_fastcall(a)


extern half_t negf16(half_t x);
extern half_t negf16_fastcall(half_t x) __z88dk_fastcall;
#define negf16(a) negf16_fastcall(a)


extern half_t ceilf16(half_t x);
extern half_t ceilf16_fastcall(half_t x) __z88dk_fastcall;
#define ceilf16(a) ceilf16_fastcall(a)


extern half_t floorf16(half_t x);
extern half_t floorf16_fastcall(half_t x) __z88dk_fastcall;
#define floorf16(a) floorf16_fastcall(a)



extern int isgreaterf16(half_t x,half_t y);
extern int isgreaterf16_callee(half_t x,half_t y) __z88dk_callee;
#define isgreaterf16(a,b) isgreaterf16_callee(a,b)


extern int isgreaterequalf16(half_t x,half_t y);
extern int isgreaterequalf16_callee(half_t x,half_t y) __z88dk_callee;
#define isgreaterequalf16(a,b) isgreaterequalf16_callee(a,b)


extern int islessf16(half_t x,half_t y);
extern int islessf16_callee(half_t x,half_t y) __z88dk_callee;
#define islessf16(a,b) islessf16_callee(a,b)


extern int islessequalf16(half_t x,half_t y);
extern int islessequalf16_callee(half_t x,half_t y) __z88dk_callee;
#define islessequalf16(a,b) islessequalf16_callee(a,b)


extern int islessgreaterf16(half_t x,half_t y);
extern int islessgreaterf16_callee(half_t x,half_t y) __z88dk_callee;
#define islessgreaterf16(a,b) islessgreaterf16_callee(a,b)


extern int isnotequalf16(half_t x,half_t y);
extern int isnotequalf16_callee(half_t x,half_t y) __z88dk_callee;
#define isnotequalf16(a,b) isnotequalf16_callee(a,b)


extern int isunorderedf16(half_t x,half_t y);
extern int isunorderedf16_callee(half_t x,half_t y) __z88dk_callee;
#define isunorderedf16(a,b) isunorderedf16_callee(a,b)



#define scalbnf16(x,pw2) ldexpf16(x,pw2)

#define truncf16(a) (a>0.?floorf16(a):ceilf16(a))
#define roundf16(a) (a>0.?floorf16(a+0.5):ceilf16(a-0.5))
#define rintf16(a) ceilf16(a)

#endif

// NO DISTINCTION BETWEEN FLOAT AND DOUBLE

#define acosf        acos
#define asinf        asin
#define atanf        atan
#define atan2f       atan2

#define cosf         cos
#define sinf         sin
#define tanf         tan

#define acoshf       acosh
#define asinhf       asinh
#define atanhf       atanh

#define coshf        cosh
#define sinhf        sinh
#define tanhf        tanh

#define expf         exp
#define exp2f        exp2
#define exp10f       exp10
#define expm1f       expm1
#define frexpf       frexp
#define ilogbf       ilogb
#define ldexpf       ldexp

#define logf         log
#define log2f        log2
#define log10f       log10
#define log1pf       log1p
#define logbf        logb

#define scalbnf      scalbn
#define scalblnf     scalbln

#define fabsf        fabs
#define hypotf       hypot

#define powf         pow
#define sqrtf        sqrt
#define cbrtf        cbrt

#define erff         erf
#define erfcf        erfc
#define lgammaf      lgamma
#define tgammaf      tgamma

#define ceilf        ceil
#define floorf       floor
#define nearbyintf   nearbyint
#define rintf        rint
#define lrintf       lrint
#define llrintf      llrint
#define roundf       round
#define lroundf      lround
#define llroundf     llround
#define truncf       trunc

#define modff        modf
#define fmodf        fmod
#define remainderf   remainder
#define remquof      remquo

#define copysignf    copysign
#define nanf         nan

#define nextafterf   nextafter
#define nexttowardf  nexttoward

#define fdimf        fdim

#define fmaxf        fmax
#define fminf        fmin

#define fmaf         fma

#ifdef __MATH_MATH32

#define sqrf         sqr
#define invf         inv
#define invsqrtf     insqrt
#define div2f        div2
#define mul2f        mul2
#define mul10uf      mul10u
#define exp10f       exp10
#define polyf        poly

#endif

#ifdef __MATH_AM9511

#define sqrf         sqr
#define div2f        div2
#define mul2f        mul2
#define mul10uf      mul10u
#define exp10f       exp10

#endif

#endif
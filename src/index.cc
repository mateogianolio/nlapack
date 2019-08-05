#include <node.h>
#include "routines.h"

void Init(v8::Local<v8::Object> exports) {
  // LAPACK Linear Equation Computational Routines
  // LAPACK Matrix Factorization Routines
  NODE_SET_METHOD(exports, "dgetrf", dgetrf);
  NODE_SET_METHOD(exports, "sgetrf", sgetrf);
  // NODE_SET_METHOD(exports, "dgetrf2", dgetrf2);
  // NODE_SET_METHOD(exports, "sgetrf2", sgetrf2);
  NODE_SET_METHOD(exports, "dgbtrf", dgbtrf);
  NODE_SET_METHOD(exports, "sgbtrf", sgbtrf);
  NODE_SET_METHOD(exports, "dgttrf", dgttrf);
  NODE_SET_METHOD(exports, "sgttrf", sgttrf);
  // NODE_SET_METHOD(exports, "ddttrfb", ddttrfb);
  // NODE_SET_METHOD(exports, "sdttrfb", sdttrfb);
  NODE_SET_METHOD(exports, "dpotrf", dpotrf);
  NODE_SET_METHOD(exports, "spotrf", spotrf);
  // NODE_SET_METHOD(exports, "dpotrf2", dpotrf2);
  // NODE_SET_METHOD(exports, "spotrf2", spotrf2);
  NODE_SET_METHOD(exports, "dpstrf", dpstrf);
  NODE_SET_METHOD(exports, "spstrf", spstrf);
  NODE_SET_METHOD(exports, "dpftrf", dpftrf);
  NODE_SET_METHOD(exports, "spftrf", spftrf);
  NODE_SET_METHOD(exports, "dpptrf", dpptrf);
  NODE_SET_METHOD(exports, "spptrf", spptrf);
  NODE_SET_METHOD(exports, "dpbtrf", dpbtrf);
  NODE_SET_METHOD(exports, "spbtrf", spbtrf);
  NODE_SET_METHOD(exports, "dpttrf", dpttrf);
  NODE_SET_METHOD(exports, "spttrf", spttrf);
  NODE_SET_METHOD(exports, "dsytrf", dsytrf);
  NODE_SET_METHOD(exports, "ssytrf", ssytrf);
  // NODE_SET_METHOD(exports, "dsytrf_aa", dsytrf_aa);
  // NODE_SET_METHOD(exports, "ssytrf_aa", ssytrf_aa);
  // NODE_SET_METHOD(exports, "dsytrf_rook", dsytrf_rook);
  // NODE_SET_METHOD(exports, "ssytrf_rook", ssytrf_rook);
  // NODE_SET_METHOD(exports, "dhetrf", dhetrf);
  // NODE_SET_METHOD(exports, "shetrf", shetrf);
  // NODE_SET_METHOD(exports, "dhetrf_aa", dhetrf_aa);
  // NODE_SET_METHOD(exports, "shetrf_aa", shetrf_aa);
  // NODE_SET_METHOD(exports, "dhetrf_rook", dhetrf_rook);
  // NODE_SET_METHOD(exports, "shetrf_rook", shetrf_rook);
  NODE_SET_METHOD(exports, "dsptrf", dsptrf);
  NODE_SET_METHOD(exports, "ssptrf", ssptrf);
  // NODE_SET_METHOD(exports, "dhptrf", dhptrf);
  // NODE_SET_METHOD(exports, "shptrf", shptrf);

  // LAPACK Routines for Solving Systems of Linear Equations
  NODE_SET_METHOD(exports, "dgetrs", dgetrs);
  NODE_SET_METHOD(exports, "sgetrs", sgetrs);
  NODE_SET_METHOD(exports, "dgbtrs", dgbtrs);
  NODE_SET_METHOD(exports, "sgbtrs", sgbtrs);
  NODE_SET_METHOD(exports, "dgttrs", dgttrs);
  NODE_SET_METHOD(exports, "sgttrs", sgttrs);
  // NODE_SET_METHOD(exports, "ddttrsb", ddttrsb);
  // NODE_SET_METHOD(exports, "sdttrsb", sdttrsb);
  NODE_SET_METHOD(exports, "dpotrs", dpotrs);
  NODE_SET_METHOD(exports, "spotrs", spotrs);
  NODE_SET_METHOD(exports, "dpftrs", dpftrs);
  NODE_SET_METHOD(exports, "spftrs", spftrs);
  NODE_SET_METHOD(exports, "dpptrs", dpptrs);
  NODE_SET_METHOD(exports, "spptrs", spptrs);
  NODE_SET_METHOD(exports, "dpbtrs", dpbtrs);
  NODE_SET_METHOD(exports, "spbtrs", spbtrs);
  NODE_SET_METHOD(exports, "dpttrs", dpttrs);
  NODE_SET_METHOD(exports, "spttrs", spttrs);
  NODE_SET_METHOD(exports, "dsytrs", dsytrs);
  NODE_SET_METHOD(exports, "ssytrs", ssytrs);
  // NODE_SET_METHOD(exports, "dsytrs_aa", dsytrs_aa);
  // NODE_SET_METHOD(exports, "ssytrs_aa", ssytrs_aa);
  // NODE_SET_METHOD(exports, "dsytrs_rook", dsytrs_rook);
  // NODE_SET_METHOD(exports, "ssytrs_rook", ssytrs_rook);
  // NODE_SET_METHOD(exports, "dhetrs", dhetrs);
  // NODE_SET_METHOD(exports, "shetrs", shetrs);
  // NODE_SET_METHOD(exports, "dhetrs_aa", dhetrs_aa);
  // NODE_SET_METHOD(exports, "shetrs_aa", shetrs_aa);
  // NODE_SET_METHOD(exports, "dhetrs_rook", dhetrs_rook);
  // NODE_SET_METHOD(exports, "shetrs_rook", shetrs_rook);
  // NODE_SET_METHOD(exports, "dsytrs2", dsytrs2);
  // NODE_SET_METHOD(exports, "ssytrs2", ssytrs2);
  // NODE_SET_METHOD(exports, "dhetrs2", dhetrs2);
  // NODE_SET_METHOD(exports, "shetrs2", shetrs2);
  NODE_SET_METHOD(exports, "dsptrs", dsptrs);
  NODE_SET_METHOD(exports, "ssptrs", ssptrs);
  // NODE_SET_METHOD(exports, "dhptrs", dhptrs);
  // NODE_SET_METHOD(exports, "shptrs", shptrs);
  NODE_SET_METHOD(exports, "dtrtrs", dtrtrs);
  NODE_SET_METHOD(exports, "strtrs", strtrs);
  NODE_SET_METHOD(exports, "dtptrs", dtptrs);
  NODE_SET_METHOD(exports, "stptrs", stptrs);
  NODE_SET_METHOD(exports, "dtbtrs", dtbtrs);
  NODE_SET_METHOD(exports, "stbtrs", stbtrs);

  // LAPACK Routines for Estimating the Condition Number
  NODE_SET_METHOD(exports, "dgecon", dgecon);
  NODE_SET_METHOD(exports, "sgecon", sgecon);
  NODE_SET_METHOD(exports, "dgbcon", dgbcon);
  NODE_SET_METHOD(exports, "sgbcon", sgbcon);
  NODE_SET_METHOD(exports, "dgtcon", dgtcon);
  NODE_SET_METHOD(exports, "sgtcon", sgtcon);
  NODE_SET_METHOD(exports, "dpocon", dpocon);
  NODE_SET_METHOD(exports, "spocon", spocon);
  NODE_SET_METHOD(exports, "dppcon", dppcon);
  NODE_SET_METHOD(exports, "sppcon", sppcon);
  NODE_SET_METHOD(exports, "dpbcon", dpbcon);
  NODE_SET_METHOD(exports, "spbcon", spbcon);
  NODE_SET_METHOD(exports, "dptcon", dptcon);
  NODE_SET_METHOD(exports, "sptcon", sptcon);
  NODE_SET_METHOD(exports, "dsycon", dsycon);
  NODE_SET_METHOD(exports, "ssycon", ssycon);
  // NODE_SET_METHOD(exports, "dsycon_rook", dsycon_rook);
  // NODE_SET_METHOD(exports, "ssycon_rook", ssycon_rook);
  // NODE_SET_METHOD(exports, "dhecon", dhecon);
  // NODE_SET_METHOD(exports, "shecon", shecon);
  // NODE_SET_METHOD(exports, "dhecon_rook", dhecon_rook);
  // NODE_SET_METHOD(exports, "shecon_rook", shecon_rook);
  NODE_SET_METHOD(exports, "dspcon", dspcon);
  NODE_SET_METHOD(exports, "sspcon", sspcon);
  NODE_SET_METHOD(exports, "dtrcon", dtrcon);
  NODE_SET_METHOD(exports, "strcon", strcon);
  NODE_SET_METHOD(exports, "dtpcon", dtpcon);
  NODE_SET_METHOD(exports, "stpcon", stpcon);
  NODE_SET_METHOD(exports, "dtbcon", dtbcon);
  NODE_SET_METHOD(exports, "stbcon", stbcon);

  // LAPACK Routines for Refining the Solution and Estimating Its Error
  NODE_SET_METHOD(exports, "dgerfs", dgerfs);
  NODE_SET_METHOD(exports, "sgerfs", sgerfs);
  NODE_SET_METHOD(exports, "dgerfsx", dgerfsx);
  NODE_SET_METHOD(exports, "sgerfsx", sgerfsx);
  NODE_SET_METHOD(exports, "dgbrfs", dgbrfs);
  NODE_SET_METHOD(exports, "sgbrfs", sgbrfs);
  NODE_SET_METHOD(exports, "dgbrfsx", dgbrfsx);
  NODE_SET_METHOD(exports, "sgbrfsx", sgbrfsx);
  NODE_SET_METHOD(exports, "dgtrfs", dgtrfs);
  NODE_SET_METHOD(exports, "sgtrfs", sgtrfs);
  NODE_SET_METHOD(exports, "dporfs", dporfs);
  NODE_SET_METHOD(exports, "sporfs", sporfs);
  NODE_SET_METHOD(exports, "dporfsx", dporfsx);
  NODE_SET_METHOD(exports, "sporfsx", sporfsx);
  NODE_SET_METHOD(exports, "dpprfs", dpprfs);
  NODE_SET_METHOD(exports, "spprfs", spprfs);
  NODE_SET_METHOD(exports, "dpbrfs", dpbrfs);
  NODE_SET_METHOD(exports, "spbrfs", spbrfs);
  NODE_SET_METHOD(exports, "dptrfs", dptrfs);
  NODE_SET_METHOD(exports, "sptrfs", sptrfs);
  NODE_SET_METHOD(exports, "dsyrfs", dsyrfs);
  NODE_SET_METHOD(exports, "ssyrfs", ssyrfs);
  NODE_SET_METHOD(exports, "dsyrfsx", dsyrfsx);
  NODE_SET_METHOD(exports, "ssyrfsx", ssyrfsx);
  // NODE_SET_METHOD(exports, "dherfs", dherfs);
  // NODE_SET_METHOD(exports, "sherfs", sherfs);
  // NODE_SET_METHOD(exports, "dherfsx", dherfsx);
  // NODE_SET_METHOD(exports, "sherfsx", sherfsx);
  NODE_SET_METHOD(exports, "dsprfs", dsprfs);
  NODE_SET_METHOD(exports, "ssprfs", ssprfs);
  // NODE_SET_METHOD(exports, "dhprfs", dhprfs);
  // NODE_SET_METHOD(exports, "shprfs", shprfs);
  NODE_SET_METHOD(exports, "dtrrfs", dtrrfs);
  NODE_SET_METHOD(exports, "strrfs", strrfs);
  NODE_SET_METHOD(exports, "dtprfs", dtprfs);
  NODE_SET_METHOD(exports, "stprfs", stprfs);
  NODE_SET_METHOD(exports, "dtbrfs", dtbrfs);
  NODE_SET_METHOD(exports, "stbrfs", stbrfs);

  // LAPACK Routines for Matrix Inversion
  NODE_SET_METHOD(exports, "dgetri", dgetri);
  NODE_SET_METHOD(exports, "sgetri", sgetri);
  NODE_SET_METHOD(exports, "dpotri", dpotri);
  NODE_SET_METHOD(exports, "spotri", spotri);
  NODE_SET_METHOD(exports, "dpftri", dpftri);
  NODE_SET_METHOD(exports, "spftri", spftri);
  NODE_SET_METHOD(exports, "dpptri", dpptri);
  NODE_SET_METHOD(exports, "spptri", spptri);
  NODE_SET_METHOD(exports, "dsytri", dsytri);
  NODE_SET_METHOD(exports, "ssytri", ssytri);
  // NODE_SET_METHOD(exports, "dsytri_rook", dsytri_rook);
  // NODE_SET_METHOD(exports, "ssytri_rook", ssytri_rook);
  // NODE_SET_METHOD(exports, "dhetri", dhetri);
  // NODE_SET_METHOD(exports, "shetri", shetri);
  // NODE_SET_METHOD(exports, "dhetri_rook", dhetri_rook);
  // NODE_SET_METHOD(exports, "shetri_rook", shetri_rook);
  // NODE_SET_METHOD(exports, "dsytri2", dsytri2);
  // NODE_SET_METHOD(exports, "ssytri2", ssytri2);
  // NODE_SET_METHOD(exports, "dhetri2", dhetri2);
  // NODE_SET_METHOD(exports, "shetri2", shetri2);
  // NODE_SET_METHOD(exports, "dsytri2x", dsytri2x);
  // NODE_SET_METHOD(exports, "ssytri2x", ssytri2x);
  // NODE_SET_METHOD(exports, "dhetri2x", dhetri2x);
  // NODE_SET_METHOD(exports, "shetri2x", shetri2x);
  NODE_SET_METHOD(exports, "dsptri", dsptri);
  NODE_SET_METHOD(exports, "ssptri", ssptri);
  // NODE_SET_METHOD(exports, "dhptri", dhptri);
  // NODE_SET_METHOD(exports, "shptri", shptri);
  NODE_SET_METHOD(exports, "dtrtri", dtrtri);
  NODE_SET_METHOD(exports, "strtri", strtri);
  NODE_SET_METHOD(exports, "dtftri", dtftri);
  NODE_SET_METHOD(exports, "stftri", stftri);
  NODE_SET_METHOD(exports, "dtptri", dtptri);
  NODE_SET_METHOD(exports, "stptri", stptri);

  // LAPACK Routines for Matrix Equilibration
  NODE_SET_METHOD(exports, "dgeequ", dgeequ);
  NODE_SET_METHOD(exports, "sgeequ", sgeequ);
  NODE_SET_METHOD(exports, "dgeequb", dgeequb);
  NODE_SET_METHOD(exports, "sgeequb", sgeequb);
  NODE_SET_METHOD(exports, "dgbequ", dgbequ);
  NODE_SET_METHOD(exports, "sgbequ", sgbequ);
  NODE_SET_METHOD(exports, "dgbequb", dgbequb);
  NODE_SET_METHOD(exports, "sgbequb", sgbequb);
  NODE_SET_METHOD(exports, "dpoequ", dpoequ);
  NODE_SET_METHOD(exports, "spoequ", spoequ);
  NODE_SET_METHOD(exports, "dpoequb", dpoequb);
  NODE_SET_METHOD(exports, "spoequb", spoequb);
  NODE_SET_METHOD(exports, "dppequ", dppequ);
  NODE_SET_METHOD(exports, "sppequ", sppequ);
  NODE_SET_METHOD(exports, "dpbequ", dpbequ);
  NODE_SET_METHOD(exports, "spbequ", spbequ);
  NODE_SET_METHOD(exports, "dsyequb", dsyequb);
  NODE_SET_METHOD(exports, "ssyequb", ssyequb);
  // NODE_SET_METHOD(exports, "dheequb", dheequb);
  // NODE_SET_METHOD(exports, "sheequb", sheequb);
  // LAPACK Linear Equation Driver Routines
  NODE_SET_METHOD(exports, "dgesv", dgesv);
  NODE_SET_METHOD(exports, "sgesv", sgesv);

  // LAPACK Least Squares and Eigenvalue Problem Driver Routines
  NODE_SET_METHOD(exports, "dgeev", dgeev);
  NODE_SET_METHOD(exports, "sgeev", sgeev);

  // LAPACK Utility Functions and Routines
  NODE_SET_METHOD(exports, "ilaver", ilaver);
  NODE_SET_METHOD(exports, "dlamch", dlamch);
  NODE_SET_METHOD(exports, "slamch", slamch);

  // LAPACK Test Functions and Routines
  NODE_SET_METHOD(exports, "dlatms", dlatms);
  NODE_SET_METHOD(exports, "slatms", slatms);
}

NODE_MODULE(addon, Init)

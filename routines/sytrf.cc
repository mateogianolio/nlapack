#include "routines.h"

void dsytrf(const v8::FunctionCallbackInfo<v8::Value>& info) {
	int uplo = info[0]->Uint32Value();
	int n = info[1]->Uint32Value();
	double *a = reinterpret_cast<double*>(info[2].As<v8::Float64Array>()->Buffer()->GetContents().Data());
	int lda = info[3]->Uint32Value();
	int *ipiv = reinterpret_cast<int*>(info[4].As<v8::Int32Array>()->Buffer()->GetContents().Data());
	double *work = reinterpret_cast<double*>(info[5].As<v8::Float64Array>()->Buffer()->GetContents().Data());
	int lwork = info[6]->Uint32Value();
	int i;
	FORTRAN_DOUBLE_ORDER(lda, n, a);
	IPIV_FORTRAN(lda, ipiv);
	dsytrf_(&uplo, &n, a, &lda, ipiv, work, &lwork, &i);
	IPIV_C(lda, ipiv);
	FORTRAN_DOUBLE_ORDER(lda, n, a);
	info.GetReturnValue().Set(
		v8::Number::New(info.GetIsolate(), i)
	);
}

void ssytrf(const v8::FunctionCallbackInfo<v8::Value>& info) {
	int uplo = info[0]->Uint32Value();
	int n = info[1]->Uint32Value();
	float *a = reinterpret_cast<float*>(info[2].As<v8::Float64Array>()->Buffer()->GetContents().Data());
	int lda = info[3]->Uint32Value();
	int *ipiv = reinterpret_cast<int*>(info[4].As<v8::Int32Array>()->Buffer()->GetContents().Data());
	float *work = reinterpret_cast<float*>(info[5].As<v8::Float64Array>()->Buffer()->GetContents().Data());
	int lwork = info[6]->Uint32Value();
	int i;
	FORTRAN_SINGLE_ORDER(lda, n, a);
	IPIV_FORTRAN(lda, ipiv);
	ssytrf_(&uplo, &n, a, &lda, ipiv, work, &lwork, &i);
	IPIV_C(lda, ipiv);
	FORTRAN_SINGLE_ORDER(lda, n, a);
	info.GetReturnValue().Set(
		v8::Number::New(info.GetIsolate(), i)
	);
}

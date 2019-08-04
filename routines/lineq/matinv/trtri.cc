#include "routines.h"

void dtrtri(const v8::FunctionCallbackInfo<v8::Value>& info) {
 	char uplo = info[0].As<v8::Integer>()->Value();
 	char diag = info[1].As<v8::Integer>()->Value();
 	lapack_int n = info[2].As<v8::Integer>()->Value();
	double *a = reinterpret_cast<double*>(GET_CONTENTS(info[3].As<v8::Float64Array>()));
	lapack_int lda = info[4].As<v8::Integer>()->Value();

	lapack_int i = LAPACKE_dtrtri(LAPACK_ROW_MAJOR, uplo, diag, n, a, lda);

	info.GetReturnValue().Set(
		v8::Number::New(info.GetIsolate(), i)
	);
}

void strtri(const v8::FunctionCallbackInfo<v8::Value>& info) {
	char uplo = info[0].As<v8::Integer>()->Value();
	char diag = info[1].As<v8::Integer>()->Value();
	lapack_int n = info[2].As<v8::Integer>()->Value();
	float *a = reinterpret_cast<float*>(GET_CONTENTS(info[3].As<v8::Float32Array>()));
	lapack_int lda = info[4].As<v8::Integer>()->Value();

	lapack_int i = LAPACKE_strtri(LAPACK_ROW_MAJOR, uplo, diag, n, a, lda);

	info.GetReturnValue().Set(
		v8::Number::New(info.GetIsolate(), i)
	);
}

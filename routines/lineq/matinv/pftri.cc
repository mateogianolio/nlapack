#include "routines.h"

void dpftri(const v8::FunctionCallbackInfo<v8::Value>& info) {
 	char transr = info[0].As<v8::Integer>()->Value();
 	char uplo = info[1].As<v8::Integer>()->Value();
 	lapack_int n = info[2].As<v8::Integer>()->Value();
	double *a = reinterpret_cast<double*>(GET_CONTENTS(info[3].As<v8::Float64Array>()));

	lapack_int i = LAPACKE_dpftri(LAPACK_ROW_MAJOR, transr, uplo, n, a);

	info.GetReturnValue().Set(
		v8::Number::New(info.GetIsolate(), i)
	);
}

void spftri(const v8::FunctionCallbackInfo<v8::Value>& info) {
	char transr = info[0].As<v8::Integer>()->Value();
	char uplo = info[1].As<v8::Integer>()->Value();
	lapack_int n = info[2].As<v8::Integer>()->Value();
	float *a = reinterpret_cast<float*>(GET_CONTENTS(info[3].As<v8::Float32Array>()));

	lapack_int i = LAPACKE_spftri(LAPACK_ROW_MAJOR, transr, uplo, n, a);

	info.GetReturnValue().Set(
		v8::Number::New(info.GetIsolate(), i)
	);
}

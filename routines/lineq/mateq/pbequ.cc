#include "routines.h"

void dpbequ(const v8::FunctionCallbackInfo<v8::Value>& info) {
 	char uplo = info[0].As<v8::Integer>()->Value();
	lapack_int n = info[1].As<v8::Integer>()->Value();
	lapack_int kd = info[2].As<v8::Integer>()->Value();
	double *ab = reinterpret_cast<double*>(GET_CONTENTS(info[3].As<v8::Float64Array>()));
	lapack_int ldab = info[4].As<v8::Integer>()->Value();
	double *s = reinterpret_cast<double*>(GET_CONTENTS(info[5].As<v8::Float64Array>()));
	double *scond = reinterpret_cast<double*>(GET_CONTENTS(info[6].As<v8::Float64Array>()));
	double *amax = reinterpret_cast<double*>(GET_CONTENTS(info[7].As<v8::Float64Array>()));

	lapack_int i = LAPACKE_dpbequ(LAPACK_ROW_MAJOR, uplo, n, kd, ab, ldab, s, scond, amax);

	info.GetReturnValue().Set(
		v8::Number::New(info.GetIsolate(), i)
	);
}

void spbequ(const v8::FunctionCallbackInfo<v8::Value>& info) {
	char uplo = info[0].As<v8::Integer>()->Value();
	lapack_int n = info[1].As<v8::Integer>()->Value();
	lapack_int kd = info[2].As<v8::Integer>()->Value();
	float *ab = reinterpret_cast<float*>(GET_CONTENTS(info[3].As<v8::Float32Array>()));
	lapack_int ldab = info[4].As<v8::Integer>()->Value();
	float *s = reinterpret_cast<float*>(GET_CONTENTS(info[5].As<v8::Float32Array>()));
	float *scond = reinterpret_cast<float*>(GET_CONTENTS(info[6].As<v8::Float32Array>()));
	float *amax = reinterpret_cast<float*>(GET_CONTENTS(info[7].As<v8::Float32Array>()));

	lapack_int i = LAPACKE_spbequ(LAPACK_ROW_MAJOR, uplo, n, kd, ab, ldab, s, scond, amax);

	info.GetReturnValue().Set(
		v8::Number::New(info.GetIsolate(), i)
	);
}

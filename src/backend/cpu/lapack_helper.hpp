/*******************************************************
 * Copyright (c) 2014, ArrayFire
 * All rights reserved.
 *
 * This file is distributed under 3-clause BSD license.
 * The complete license agreement can be obtained at:
 * http://arrayfire.com/licenses/BSD-3-Clause
 ********************************************************/

#ifndef AFCPU_LAPACK
#define AFCPU_LAPACK

#define lapack_complex_float std::complex<float>
#define lapack_complex_double std::complex<double>
#define LAPACK_PREFIX LAPACKE_
#define ORDER_TYPE int
#define AF_LAPACK_COL_MAJOR LAPACK_COL_MAJOR
#define LAPACK_NAME(fn) LAPACKE_##fn
#include<lapacke.h>

#endif

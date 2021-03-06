/*
 *    This file is part of ACADO Toolkit.
 *
 *    ACADO Toolkit -- A Toolkit for Automatic Control and Dynamic Optimization.
 *    Copyright (C) 2008-2014 by Boris Houska, Hans Joachim Ferreau,
 *    Milan Vukov, Rien Quirynen, KU Leuven.
 *    Developed within the Optimization in Engineering Center (OPTEC)
 *    under supervision of Moritz Diehl. All rights reserved.
 *
 *    ACADO Toolkit is free software; you can redistribute it and/or
 *    modify it under the terms of the GNU Lesser General Public
 *    License as published by the Free Software Foundation; either
 *    version 3 of the License, or (at your option) any later version.
 *
 *    ACADO Toolkit is distributed in the hope that it will be useful,
 *    but WITHOUT ANY WARRANTY; without even the implied warranty of
 *    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 *    Lesser General Public License for more details.
 *
 *    You should have received a copy of the GNU Lesser General Public
 *    License along with ACADO Toolkit; if not, write to the Free Software
 *    Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301  USA
 *
 */



 /**
 *    \file examples/matrix_vector/householder_tutorial.cpp
 *    \author Boris Houska, Hans Joachim Ferreau
 *    \date 2010
 *
 *    This tutorial example explains how to compute
 *    QR factorizations with the ACADO
 *    DMatrix class.
 */

#include <acado/matrix_vector/matrix_vector.hpp>

using namespace std;

USING_NAMESPACE_ACADO

/* >>> start tutorial code >>> */
int main( ){

    // DEFINE A MATRIX:
    // ----------------
    DMatrix A(2,2);

    A(0,0) = 3.0;  A(0,1) = 0.5;
    A(1,0) = 1.0;  A(1,1) = 3.0;

    DVector b(2);
    b(0) = 1.0;
    b(1) = 0.0;

    DVector x = A.fullPivHouseholderQr().solve( b );

    cout << "A = " << endl << A << endl << endl;
    cout << "b = " << endl << b << endl << endl;
    cout << "x = " << endl << x << endl << endl;

    return 0;
}
/* <<< end tutorial code <<< */



!** Copyright (c) 2004, NVIDIA CORPORATION.  All rights reserved.
!**
!** Licensed under the Apache License, Version 2.0 (the "License");
!** you may not use this file except in compliance with the License.
!** You may obtain a copy of the License at
!**
!**     http://www.apache.org/licenses/LICENSE-2.0
!**
!** Unless required by applicable law or agreed to in writing, software
!** distributed under the License is distributed on an "AS IS" BASIS,
!** WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
!** See the License for the specific language governing permissions and
!** limitations under the License.
!
!* Loop Redundant Expression Elimination
!*


!!  ensure bounds checking is not performed -- last loop violates
!!  the bounds of a and c
cpgi$G -y 70 2
	subroutine s1(m,n)
	real res,a,b,c,d,e,f
	common/c/ res(34,10), a(30), b(30), c(30), d(30), e(30), f(30)
	integer m,n

	do i = 2,9
	 res( 1,i) = 9
	 res( 2,i) = a(i)*a(i)
	 res( 3,i) = a(i)*a(i)
	 res( 4,i) = a(i-1)*a(i-1)
	 res( 5,i) = a(i-1)*a(i-1)
	enddo

	do i = 2,9
	 res( 6,i) = a(i)*(a(i)+e(i))
	 res( 7,i) = d(i)*c(i-1)
	 res( 8,i) = a(i-1)*(a(i-1)+e(i-1))
	 res( 9,i) = d(i)*c(i)
	 res(10,i) = d(i)*f(i)
	 res(11,i) = e(i)*f(i-1)
	enddo

	do i = 3,9,2
	 res(12,i) = 9
	 res(13,i) = a(i)*a(i)
	 res(14,i) = a(i)*a(i)
	 res(15,i) = a(i-2)*a(i-2)
	 res(16,i) = a(i-2)*a(i-2)
	enddo

	do i = 2,5
	 res(17,i) = 9
	 res(18,i) = a(2*i)*a(2*i)
	 res(19,i) = a(2*i)*a(2*i)
	 res(20,i) = a(2*i-1)*a(2*i-1)
	 res(21,i) = a(2*i-1)*a(2*i-1)
	enddo

	do i = 2,5
	 res(22,i) = 9
	 res(23,i) = a(2*i)*a(2*i)
	 res(24,i) = a(2*i)*a(2*i)
	 res(25,i) = a(2*i-2)*a(2*i-2)
	 res(26,i) = a(2*i-2)*a(2*i-2)
	enddo

	do i = 2,9
	 res(27,i) = 9
	 res(28,i) = b(i)*b(i)
	 b(i) = b(i)*b(i)
	 res(29,i) = b(i-1)*b(i-1)+(b(i)*b(i))
	 res(30,i) = b(i-1)*b(i-1)
	enddo

	do i = m,n
	 res(31,i) = a(i*3) + c(i*3)
	 res(32,i) = a(i*3+1) + c(i*3+1)
	 res(33,i) = a(i*3+2) + c(i*3+2)
	 res(34,i) = a(i*3+3) + c(i*3+3)
	enddo
	end

	program lre
	common/c/ res(34,10), a(30), b(30), c(30), d(30), e(30), f(30)
	real res,a,b,c,d,e,f
	real exp(34,10)
	data exp/
     x     0.,     0.,     0.,     0.,     0.,
     x     0.,     0.,     0.,     0.,     0.,
     x     0.,     0.,     0.,     0.,     0.,
     x     0.,     0.,     0.,     0.,     0.,
     x     0.,     0.,     0.,     0.,     0.,
     x     0.,     0.,     0.,     0.,     0.,
     x     0.,     0.,     0.,     0.,     9.,
     x     4.,     4.,     1.,     1.,    88.,
     x   672.,    42.,   704.,  1664.,  2142.,
     x     0.,     0.,     0.,     0.,     0.,
     x     9.,    16.,    16.,     9.,     9.,
     x     9.,    16.,    16.,     4.,     4.,
     x     9.,   144., 20857.,   121.,    32.,
     x    34.,    36.,    38.,     9.,     9.,
     x     9.,     4.,     4.,   138.,   726.,
     x    88.,   759.,  1749.,  2236.,     9.,
     x     9.,     9.,     1.,     1.,     9.,
     x    36.,    36.,    25.,    25.,     9.,
     x    36.,    36.,    16.,    16.,     9.,
     x   169., 49297., 20736.,    38.,    40.,
     x    42.,    44.,     9.,    16.,    16.,
     x     9.,     9.,   192.,   782.,   138.,
     x   816.,  1836.,  2332.,     0.,     0.,
     x     0.,     0.,     0.,     9.,    64.,
     x    64.,    49.,    49.,     9.,    64.,
     x    64.,    36.,    36.,     9.,   196.,
     x 66977., 28561.,    44.,    46.,    48.,
     x    50.,     9.,    25.,    25.,    16.,
     x    16.,   250.,   840.,   192.,   875.,
     x  1925.,  2430.,     9.,    25.,    25.,
     x     9.,     9.,     9.,   100.,   100.,
     x    81.,    81.,     9.,   100.,   100.,
     x    64.,    64.,     9.,   225., 89041.,
     x 38416.,    50.,    52.,    54.,    56.,
     x     9.,    36.,    36.,    25.,    25.,
     x   312.,   900.,   250.,   936.,  2016.,
     x  2530.,     0.,     0.,     0.,     0.,
     x     0.,     0.,     0.,     0.,     0.,
     x     0.,     0.,     0.,     0.,     0.,
     x     0.,     9.,   256.,116161., 50625.,
     x    56.,    58.,    60.,    62.,     9.,
     x    49.,    49.,    36.,    36.,   378.,
     x   962.,   312.,   999.,  2109.,  2632.,
     x     9.,    49.,    49.,    25.,    25.,
     x     0.,     0.,     0.,     0.,     0.,
     x     0.,     0.,     0.,     0.,     0.,
     x     9.,   289.,149057., 65536.,    62.,
     x    64.,    66.,    68.,     9.,    64.,
     x    64.,    49.,    49.,   448.,  1026.,
     x   378.,  1064.,  2204.,  2736.,     0.,
     x     0.,     0.,     0.,     0.,     0.,
     x     0.,     0.,     0.,     0.,     0.,
     x     0.,     0.,     0.,     0.,     9.,
     x   324.,188497., 83521.,    68.,    70.,
     x    72.,    74.,     9.,    81.,    81.,
     x    64.,    64.,   522.,  1092.,   448.,
     x  1131.,  2301.,  2842.,     9.,    81.,
     x    81.,    49.,    49.,     0.,     0.,
     x     0.,     0.,     0.,     0.,     0.,
     x     0.,     0.,     0.,     9.,   361.,
     x235297.,104976.,    74.,    76.,    78.,
     x    80.,     0.,     0.,     0.,     0.,
     x     0.,     0.,     0.,     0.,     0.,
     x     0.,     0.,     0.,     0.,     0.,
     x     0.,     0.,     0.,     0.,     0.,
     x     0.,     0.,     0.,     0.,     0.,
     x     0.,     0.,     0.,     0.,     0.,
     x     0.,     0.,     0.,     0.,     0./
	do j = 1,10
	 do i = 1,34
	  res(i,j) = 0
	 enddo
	enddo

	do i = 1,30
	 a(i) = i
	 b(i) = i+10.
	 c(i) = i+20.
	 d(i) = i+30.
	 e(i) = i+40.
	 f(i) = i+50.
	enddo

	call s1(2,9)

!	write(6,10) ((res(i,j),i=1,34),j=1,10)
!10	format( (5x, 'x', 5(f7.0,',')))

	call check(res,exp,340)
	end

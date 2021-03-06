/*
 * Copyright (c) 2017-2018, NVIDIA CORPORATION.  All rights reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 */

MTHINTRIN(acos , ss   , em64t      , __mth_i_acos          , __mth_i_acos          , __mth_i_acos          ,__math_dispatch_error)
MTHINTRIN(acos , ds   , em64t      , __mth_i_dacos         , __mth_i_dacos         , __mth_i_dacos         ,__math_dispatch_error)
MTHINTRIN(acos , sv4  , em64t      , __fvsacos             , __fvsacos             , __gs_acos_4_p         ,__math_dispatch_error)
MTHINTRIN(acos , dv2  , em64t      , __fvdacos             , __fvdacos             , __gd_acos_2_p         ,__math_dispatch_error)
MTHINTRIN(acos , sv4m , em64t      , __fs_acos_4_mn        , __rs_acos_4_mn        , __ps_acos_4_mn        ,__math_dispatch_error)
MTHINTRIN(acos , dv2m , em64t      , __fd_acos_2_mn        , __rd_acos_2_mn        , __pd_acos_2_mn        ,__math_dispatch_error)

MTHINTRIN(acos , ss   , sse4       , __mth_i_acos          , __mth_i_acos          , __mth_i_acos          ,__math_dispatch_error)
MTHINTRIN(acos , ds   , sse4       , __mth_i_dacos         , __mth_i_dacos         , __mth_i_dacos         ,__math_dispatch_error)
MTHINTRIN(acos , sv4  , sse4       , __fvsacos             , __fvsacos             , __gs_acos_4_p         ,__math_dispatch_error)
MTHINTRIN(acos , dv2  , sse4       , __fvdacos             , __fvdacos             , __gd_acos_2_p         ,__math_dispatch_error)
MTHINTRIN(acos , sv4m , sse4       , __fs_acos_4_mn        , __rs_acos_4_mn        , __ps_acos_4_mn        ,__math_dispatch_error)
MTHINTRIN(acos , dv2m , sse4       , __fd_acos_2_mn        , __rd_acos_2_mn        , __pd_acos_2_mn        ,__math_dispatch_error)

MTHINTRIN(acos , ss   , avx        , __mth_i_acos          , __mth_i_acos          , __mth_i_acos          ,__math_dispatch_error)
MTHINTRIN(acos , ds   , avx        , __mth_i_dacos         , __mth_i_dacos         , __mth_i_dacos         ,__math_dispatch_error)
MTHINTRIN(acos , sv4  , avx        , __fvs_acos            , __fvs_acos            , __gs_acos_4_p         ,__math_dispatch_error)
MTHINTRIN(acos , dv2  , avx        , __fvd_acos            , __fvd_acos            , __gd_acos_2_p         ,__math_dispatch_error)
MTHINTRIN(acos , sv8  , avx        , __fvs_acos_256        , __fvs_acos_256        , __gs_acos_8_p         ,__math_dispatch_error)
MTHINTRIN(acos , dv4  , avx        , __fvd_acos_256        , __fvd_acos_256        , __gd_acos_4_p         ,__math_dispatch_error)
MTHINTRIN(acos , sv4m , avx        , __fs_acos_4_mn        , __rs_acos_4_mn        , __ps_acos_4_mn        ,__math_dispatch_error)
MTHINTRIN(acos , dv2m , avx        , __fd_acos_2_mn        , __rd_acos_2_mn        , __pd_acos_2_mn        ,__math_dispatch_error)
MTHINTRIN(acos , sv8m , avx        , __fs_acos_8_mn        , __rs_acos_8_mn        , __ps_acos_8_mn        ,__math_dispatch_error)
MTHINTRIN(acos , dv4m , avx        , __fd_acos_4_mn        , __rd_acos_4_mn        , __pd_acos_4_mn        ,__math_dispatch_error)

MTHINTRIN(acos , ss   , avxfma4    , __mth_i_acos          , __mth_i_acos          , __mth_i_acos          ,__math_dispatch_error)
MTHINTRIN(acos , ds   , avxfma4    , __mth_i_dacos         , __mth_i_dacos         , __mth_i_dacos         ,__math_dispatch_error)
MTHINTRIN(acos , sv4  , avxfma4    , __fvs_acos            , __fvs_acos            , __gs_acos_4_p         ,__math_dispatch_error)
MTHINTRIN(acos , dv2  , avxfma4    , __fvd_acos            , __fvd_acos            , __gd_acos_2_p         ,__math_dispatch_error)
MTHINTRIN(acos , sv8  , avxfma4    , __fvs_acos_256        , __fvs_acos_256        , __gs_acos_8_p         ,__math_dispatch_error)
MTHINTRIN(acos , dv4  , avxfma4    , __fvd_acos_256        , __fvd_acos_256        , __gd_acos_4_p         ,__math_dispatch_error)
MTHINTRIN(acos , sv4m , avxfma4    , __fs_acos_4_mn        , __rs_acos_4_mn        , __ps_acos_4_mn        ,__math_dispatch_error)
MTHINTRIN(acos , dv2m , avxfma4    , __fd_acos_2_mn        , __rd_acos_2_mn        , __pd_acos_2_mn        ,__math_dispatch_error)
MTHINTRIN(acos , sv8m , avxfma4    , __fs_acos_8_mn        , __rs_acos_8_mn        , __ps_acos_8_mn        ,__math_dispatch_error)
MTHINTRIN(acos , dv4m , avxfma4    , __fd_acos_4_mn        , __rd_acos_4_mn        , __pd_acos_4_mn        ,__math_dispatch_error)

MTHINTRIN(acos , ss   , avx2       , __fss_acos_fma3       , __fss_acos_fma3       , __mth_i_acos          ,__math_dispatch_error)
MTHINTRIN(acos , ds   , avx2       , __fsd_acos_fma3       , __fsd_acos_fma3       , __mth_i_dacos         ,__math_dispatch_error)
MTHINTRIN(acos , sv4  , avx2       , __fvs_acos_fma3       , __fvs_acos_fma3       , __gs_acos_4_p         ,__math_dispatch_error)
MTHINTRIN(acos , dv2  , avx2       , __fvd_acos_fma3       , __fvd_acos_fma3       , __gd_acos_2_p         ,__math_dispatch_error)
MTHINTRIN(acos , sv8  , avx2       , __fvs_acos_fma3_256   , __fvs_acos_fma3_256   , __gs_acos_8_p         ,__math_dispatch_error)
MTHINTRIN(acos , dv4  , avx2       , __fvd_acos_fma3_256   , __fvd_acos_fma3_256   , __gd_acos_4_p         ,__math_dispatch_error)
MTHINTRIN(acos , sv4m , avx2       , __fs_acos_4_mn        , __rs_acos_4_mn        , __ps_acos_4_mn        ,__math_dispatch_error)
MTHINTRIN(acos , dv2m , avx2       , __fd_acos_2_mn        , __rd_acos_2_mn        , __pd_acos_2_mn        ,__math_dispatch_error)
MTHINTRIN(acos , sv8m , avx2       , __fs_acos_8_mn        , __rs_acos_8_mn        , __ps_acos_8_mn        ,__math_dispatch_error)
MTHINTRIN(acos , dv4m , avx2       , __fd_acos_4_mn        , __rd_acos_4_mn        , __pd_acos_4_mn        ,__math_dispatch_error)

MTHINTRIN(acos , ss   , avx512knl  , __fss_acos_fma3       , __fss_acos_fma3       , __mth_i_acos          ,__math_dispatch_error)
MTHINTRIN(acos , ds   , avx512knl  , __fsd_acos_fma3       , __fsd_acos_fma3       , __mth_i_dacos         ,__math_dispatch_error)
MTHINTRIN(acos , sv4  , avx512knl  , __fvs_acos_fma3       , __fvs_acos_fma3       , __gs_acos_4_p         ,__math_dispatch_error)
MTHINTRIN(acos , dv2  , avx512knl  , __fvd_acos_fma3       , __fvd_acos_fma3       , __gd_acos_2_p         ,__math_dispatch_error)
MTHINTRIN(acos , sv8  , avx512knl  , __fvs_acos_fma3_256   , __fvs_acos_fma3_256   , __gs_acos_8_p         ,__math_dispatch_error)
MTHINTRIN(acos , dv4  , avx512knl  , __fvd_acos_fma3_256   , __fvd_acos_fma3_256   , __gd_acos_4_p         ,__math_dispatch_error)
MTHINTRIN(acos , sv16 , avx512knl  , __fvs_acos_fma3_knl   , __fvs_acos_fma3_knl   , __gs_acos_16_p        ,__math_dispatch_error)
MTHINTRIN(acos , dv8  , avx512knl  , __fvd_acos_fma3_knl   , __fvd_acos_fma3_knl   , __gd_acos_8_p         ,__math_dispatch_error)
MTHINTRIN(acos , sv4m , avx512knl  , __fs_acos_4_mn        , __rs_acos_4_mn        , __ps_acos_4_mn        ,__math_dispatch_error)
MTHINTRIN(acos , dv2m , avx512knl  , __fd_acos_2_mn        , __rd_acos_2_mn        , __pd_acos_2_mn        ,__math_dispatch_error)
MTHINTRIN(acos , sv8m , avx512knl  , __fs_acos_8_mn        , __rs_acos_8_mn        , __ps_acos_8_mn        ,__math_dispatch_error)
MTHINTRIN(acos , dv4m , avx512knl  , __fd_acos_4_mn        , __rd_acos_4_mn        , __pd_acos_4_mn        ,__math_dispatch_error)
MTHINTRIN(acos , sv16m, avx512knl  , __fs_acos_16_mn       , __rs_acos_16_mn       , __ps_acos_16_mn       ,__math_dispatch_error)
MTHINTRIN(acos , dv8m , avx512knl  , __fd_acos_8_mn        , __rd_acos_8_mn        , __pd_acos_8_mn        ,__math_dispatch_error)

MTHINTRIN(acos , ss   , avx512     , __fss_acos_fma3       , __fss_acos_fma3       , __mth_i_acos          ,__math_dispatch_error)
MTHINTRIN(acos , ds   , avx512     , __fsd_acos_fma3       , __fsd_acos_fma3       , __mth_i_dacos         ,__math_dispatch_error)
MTHINTRIN(acos , sv4  , avx512     , __fvs_acos_fma3       , __fvs_acos_fma3       , __gs_acos_4_p         ,__math_dispatch_error)
MTHINTRIN(acos , dv2  , avx512     , __fvd_acos_fma3       , __fvd_acos_fma3       , __gd_acos_2_p         ,__math_dispatch_error)
MTHINTRIN(acos , sv8  , avx512     , __fvs_acos_fma3_256   , __fvs_acos_fma3_256   , __gs_acos_8_p         ,__math_dispatch_error)
MTHINTRIN(acos , dv4  , avx512     , __fvd_acos_fma3_256   , __fvd_acos_fma3_256   , __gd_acos_4_p         ,__math_dispatch_error)
MTHINTRIN(acos , sv16 , avx512     , __fvs_acos_fma3_512   , __fvs_acos_fma3_512   , __gs_acos_16_p        ,__math_dispatch_error)
MTHINTRIN(acos , dv8  , avx512     , __fvd_acos_fma3_512   , __fvd_acos_fma3_512   , __gd_acos_8_p         ,__math_dispatch_error)
MTHINTRIN(acos , sv4m , avx512     , __fs_acos_4_mn        , __rs_acos_4_mn        , __ps_acos_4_mn        ,__math_dispatch_error)
MTHINTRIN(acos , dv2m , avx512     , __fd_acos_2_mn        , __rd_acos_2_mn        , __pd_acos_2_mn        ,__math_dispatch_error)
MTHINTRIN(acos , sv8m , avx512     , __fs_acos_8_mn        , __rs_acos_8_mn        , __ps_acos_8_mn        ,__math_dispatch_error)
MTHINTRIN(acos , dv4m , avx512     , __fd_acos_4_mn        , __rd_acos_4_mn        , __pd_acos_4_mn        ,__math_dispatch_error)
MTHINTRIN(acos , sv16m, avx512     , __fs_acos_16_mn       , __rs_acos_16_mn       , __ps_acos_16_mn       ,__math_dispatch_error)
MTHINTRIN(acos , dv8m , avx512     , __fd_acos_8_mn        , __rd_acos_8_mn        , __pd_acos_8_mn        ,__math_dispatch_error)


MTHINTRIN(acos , cs   , em64t      , cacosf                , cacosf                , cacosf                ,__math_dispatch_error)
MTHINTRIN(acos , zs   , em64t      , cacos                 , cacos                 , cacos                 ,__math_dispatch_error)
MTHINTRIN(acos , zv1  , em64t      , __gz_acos_1v_f        , __gz_acos_1v_r        , __gz_acos_1v_p        ,__math_dispatch_error)
MTHINTRIN(acos , cv2  , em64t      , __gc_acos_2_f         , __gc_acos_2_r         , __gc_acos_2_p         ,__math_dispatch_error)

MTHINTRIN(acos , cs   , sse4       , cacosf                , cacosf                , cacosf                ,__math_dispatch_error)
MTHINTRIN(acos , zs   , sse4       , cacos                 , cacos                 , cacos                 ,__math_dispatch_error)
MTHINTRIN(acos , zv1  , sse4       , __gz_acos_1v_f        , __gz_acos_1v_r        , __gz_acos_1v_p        ,__math_dispatch_error)
MTHINTRIN(acos , cv2  , sse4       , __gc_acos_2_f         , __gc_acos_2_r         , __gc_acos_2_p         ,__math_dispatch_error)

MTHINTRIN(acos , cs   , avx        , cacosf                , cacosf                , cacosf                ,__math_dispatch_error)
MTHINTRIN(acos , zs   , avx        , cacos                 , cacos                 , cacos                 ,__math_dispatch_error)
MTHINTRIN(acos , zv1  , avx        , __gz_acos_1v_f        , __gz_acos_1v_r        , __gz_acos_1v_p        ,__math_dispatch_error)
MTHINTRIN(acos , cv2  , avx        , __gc_acos_2_f         , __gc_acos_2_r         , __gc_acos_2_p         ,__math_dispatch_error)
MTHINTRIN(acos , cv4  , avx        , __gc_acos_4_f         , __gc_acos_4_r         , __gc_acos_4_p         ,__math_dispatch_error)
MTHINTRIN(acos , zv2  , avx        , __gz_acos_2_f         , __gz_acos_2_r         , __gz_acos_2_p         ,__math_dispatch_error)

MTHINTRIN(acos , cs   , avxfma4    , cacosf                , cacosf                , cacosf                ,__math_dispatch_error)
MTHINTRIN(acos , zs   , avxfma4    , cacos                 , cacos                 , cacos                 ,__math_dispatch_error)
MTHINTRIN(acos , zv1  , avxfma4    , __gz_acos_1v_f        , __gz_acos_1v_r        , __gz_acos_1v_p        ,__math_dispatch_error)
MTHINTRIN(acos , cv2  , avxfma4    , __gc_acos_2_f         , __gc_acos_2_r         , __gc_acos_2_p         ,__math_dispatch_error)
MTHINTRIN(acos , cv4  , avxfma4    , __gc_acos_4_f         , __gc_acos_4_r         , __gc_acos_4_p         ,__math_dispatch_error)
MTHINTRIN(acos , zv2  , avxfma4    , __gz_acos_2_f         , __gz_acos_2_r         , __gz_acos_2_p         ,__math_dispatch_error)

MTHINTRIN(acos , cs   , avx2       , cacosf                , cacosf                , cacosf                ,__math_dispatch_error)
MTHINTRIN(acos , zs   , avx2       , cacos                 , cacos                 , cacos                 ,__math_dispatch_error)
MTHINTRIN(acos , zv1  , avx2       , __gz_acos_1v_f        , __gz_acos_1v_r        , __gz_acos_1v_p        ,__math_dispatch_error)
MTHINTRIN(acos , cv2  , avx2       , __gc_acos_2_f         , __gc_acos_2_r         , __gc_acos_2_p         ,__math_dispatch_error)
MTHINTRIN(acos , cv4  , avx2       , __gc_acos_4_f         , __gc_acos_4_r         , __gc_acos_4_p         ,__math_dispatch_error)
MTHINTRIN(acos , zv2  , avx2       , __gz_acos_2_f         , __gz_acos_2_r         , __gz_acos_2_p         ,__math_dispatch_error)

MTHINTRIN(acos , cs   , avx512knl  , cacosf                , cacosf                , cacosf                ,__math_dispatch_error)
MTHINTRIN(acos , zs   , avx512knl  , cacos                 , cacos                 , cacos                 ,__math_dispatch_error)
MTHINTRIN(acos , zv1  , avx512knl  , __gz_acos_1v_f        , __gz_acos_1v_r        , __gz_acos_1v_p        ,__math_dispatch_error)
MTHINTRIN(acos , cv2  , avx512knl  , __gc_acos_2_f         , __gc_acos_2_r         , __gc_acos_2_p         ,__math_dispatch_error)
MTHINTRIN(acos , cv4  , avx512knl  , __gc_acos_4_f         , __gc_acos_4_r         , __gc_acos_4_p         ,__math_dispatch_error)
MTHINTRIN(acos , cv8  , avx512knl  , __gc_acos_8_f         , __gc_acos_8_r         , __gc_acos_8_p         ,__math_dispatch_error)
MTHINTRIN(acos , zv2  , avx512knl  , __gz_acos_2_f         , __gz_acos_2_r         , __gz_acos_2_p         ,__math_dispatch_error)
MTHINTRIN(acos , zv4  , avx512knl  , __gz_acos_4_f         , __gz_acos_4_r         , __gz_acos_4_p         ,__math_dispatch_error)

MTHINTRIN(acos , cs   , avx512     , cacosf                , cacosf                , cacosf                ,__math_dispatch_error)
MTHINTRIN(acos , zs   , avx512     , cacos                 , cacos                 , cacos                 ,__math_dispatch_error)
MTHINTRIN(acos , zv1  , avx512     , __gz_acos_1v_f        , __gz_acos_1v_r        , __gz_acos_1v_p        ,__math_dispatch_error)
MTHINTRIN(acos , cv2  , avx512     , __gc_acos_2_f         , __gc_acos_2_r         , __gc_acos_2_p         ,__math_dispatch_error)
MTHINTRIN(acos , cv4  , avx512     , __gc_acos_4_f         , __gc_acos_4_r         , __gc_acos_4_p         ,__math_dispatch_error)
MTHINTRIN(acos , cv8  , avx512     , __gc_acos_8_f         , __gc_acos_8_r         , __gc_acos_8_p         ,__math_dispatch_error)
MTHINTRIN(acos , zv2  , avx512     , __gz_acos_2_f         , __gz_acos_2_r         , __gz_acos_2_p         ,__math_dispatch_error)
MTHINTRIN(acos , zv4  , avx512     , __gz_acos_4_f         , __gz_acos_4_r         , __gz_acos_4_p         ,__math_dispatch_error)

/* DO NOT EDIT - This file generated automatically by gl_table.py (from Mesa) script */

/*
 * (C) Copyright IBM Corporation 2005
 * All Rights Reserved.
 *
 * Permission is hereby granted, free of charge, to any person obtaining a
 * copy of this software and associated documentation files (the "Software"),
 * to deal in the Software without restriction, including without limitation
 * the rights to use, copy, modify, merge, publish, distribute, sub license,
 * and/or sell copies of the Software, and to permit persons to whom the
 * Software is furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice (including the next
 * paragraph) shall be included in all copies or substantial portions of the
 * Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NON-INFRINGEMENT.  IN NO EVENT SHALL
 * IBM,
 * AND/OR THEIR SUPPLIERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY,
 * WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF
 * OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 */

#if !defined( _DISPATCH_H_ )
#  define _DISPATCH_H_


/**
 * \file main/dispatch.h
 * Macros for handling GL dispatch tables.
 *
 * For each known GL function, there are 3 macros in this file.  The first
 * macro is named CALL_FuncName and is used to call that GL function using
 * the specified dispatch table.  The other 2 macros, called GET_FuncName
 * can SET_FuncName, are used to get and set the dispatch pointer for the
 * named function in the specified dispatch table.
 */

#include "main/glheader.h"

#include "main/glheader.h"
#define CALL_by_offset(disp, cast, offset, parameters) \
    (*(cast (GET_by_offset(disp, offset)))) parameters
#define GET_by_offset(disp, offset) \
    (offset >= 0) ? (((_glapi_proc *)(disp))[offset]) : NULL
#define SET_by_offset(disp, offset, fn) \
    do { \
        if ( (offset) < 0 ) { \
            /* fprintf( stderr, "[%s:%u] SET_by_offset(%p, %d, %s)!\n", */ \
            /*         __func__, __LINE__, disp, offset, # fn); */ \
            /* abort(); */ \
        } \
        else { \
            ( (_glapi_proc *) (disp) )[offset] = (_glapi_proc) fn; \
        } \
    } while(0)

/* total number of offsets below */
#define _gloffset_COUNT 1660

#define _gloffset_NewList 0
#define _gloffset_EndList 1
#define _gloffset_CallList 2
#define _gloffset_CallLists 3
#define _gloffset_DeleteLists 4
#define _gloffset_GenLists 5
#define _gloffset_ListBase 6
#define _gloffset_Begin 7
#define _gloffset_Bitmap 8
#define _gloffset_Color3b 9
#define _gloffset_Color3bv 10
#define _gloffset_Color3d 11
#define _gloffset_Color3dv 12
#define _gloffset_Color3f 13
#define _gloffset_Color3fv 14
#define _gloffset_Color3i 15
#define _gloffset_Color3iv 16
#define _gloffset_Color3s 17
#define _gloffset_Color3sv 18
#define _gloffset_Color3ub 19
#define _gloffset_Color3ubv 20
#define _gloffset_Color3ui 21
#define _gloffset_Color3uiv 22
#define _gloffset_Color3us 23
#define _gloffset_Color3usv 24
#define _gloffset_Color4b 25
#define _gloffset_Color4bv 26
#define _gloffset_Color4d 27
#define _gloffset_Color4dv 28
#define _gloffset_Color4f 29
#define _gloffset_Color4fv 30
#define _gloffset_Color4i 31
#define _gloffset_Color4iv 32
#define _gloffset_Color4s 33
#define _gloffset_Color4sv 34
#define _gloffset_Color4ub 35
#define _gloffset_Color4ubv 36
#define _gloffset_Color4ui 37
#define _gloffset_Color4uiv 38
#define _gloffset_Color4us 39
#define _gloffset_Color4usv 40
#define _gloffset_EdgeFlag 41
#define _gloffset_EdgeFlagv 42
#define _gloffset_End 43
#define _gloffset_Indexd 44
#define _gloffset_Indexdv 45
#define _gloffset_Indexf 46
#define _gloffset_Indexfv 47
#define _gloffset_Indexi 48
#define _gloffset_Indexiv 49
#define _gloffset_Indexs 50
#define _gloffset_Indexsv 51
#define _gloffset_Normal3b 52
#define _gloffset_Normal3bv 53
#define _gloffset_Normal3d 54
#define _gloffset_Normal3dv 55
#define _gloffset_Normal3f 56
#define _gloffset_Normal3fv 57
#define _gloffset_Normal3i 58
#define _gloffset_Normal3iv 59
#define _gloffset_Normal3s 60
#define _gloffset_Normal3sv 61
#define _gloffset_RasterPos2d 62
#define _gloffset_RasterPos2dv 63
#define _gloffset_RasterPos2f 64
#define _gloffset_RasterPos2fv 65
#define _gloffset_RasterPos2i 66
#define _gloffset_RasterPos2iv 67
#define _gloffset_RasterPos2s 68
#define _gloffset_RasterPos2sv 69
#define _gloffset_RasterPos3d 70
#define _gloffset_RasterPos3dv 71
#define _gloffset_RasterPos3f 72
#define _gloffset_RasterPos3fv 73
#define _gloffset_RasterPos3i 74
#define _gloffset_RasterPos3iv 75
#define _gloffset_RasterPos3s 76
#define _gloffset_RasterPos3sv 77
#define _gloffset_RasterPos4d 78
#define _gloffset_RasterPos4dv 79
#define _gloffset_RasterPos4f 80
#define _gloffset_RasterPos4fv 81
#define _gloffset_RasterPos4i 82
#define _gloffset_RasterPos4iv 83
#define _gloffset_RasterPos4s 84
#define _gloffset_RasterPos4sv 85
#define _gloffset_Rectd 86
#define _gloffset_Rectdv 87
#define _gloffset_Rectf 88
#define _gloffset_Rectfv 89
#define _gloffset_Recti 90
#define _gloffset_Rectiv 91
#define _gloffset_Rects 92
#define _gloffset_Rectsv 93
#define _gloffset_TexCoord1d 94
#define _gloffset_TexCoord1dv 95
#define _gloffset_TexCoord1f 96
#define _gloffset_TexCoord1fv 97
#define _gloffset_TexCoord1i 98
#define _gloffset_TexCoord1iv 99
#define _gloffset_TexCoord1s 100
#define _gloffset_TexCoord1sv 101
#define _gloffset_TexCoord2d 102
#define _gloffset_TexCoord2dv 103
#define _gloffset_TexCoord2f 104
#define _gloffset_TexCoord2fv 105
#define _gloffset_TexCoord2i 106
#define _gloffset_TexCoord2iv 107
#define _gloffset_TexCoord2s 108
#define _gloffset_TexCoord2sv 109
#define _gloffset_TexCoord3d 110
#define _gloffset_TexCoord3dv 111
#define _gloffset_TexCoord3f 112
#define _gloffset_TexCoord3fv 113
#define _gloffset_TexCoord3i 114
#define _gloffset_TexCoord3iv 115
#define _gloffset_TexCoord3s 116
#define _gloffset_TexCoord3sv 117
#define _gloffset_TexCoord4d 118
#define _gloffset_TexCoord4dv 119
#define _gloffset_TexCoord4f 120
#define _gloffset_TexCoord4fv 121
#define _gloffset_TexCoord4i 122
#define _gloffset_TexCoord4iv 123
#define _gloffset_TexCoord4s 124
#define _gloffset_TexCoord4sv 125
#define _gloffset_Vertex2d 126
#define _gloffset_Vertex2dv 127
#define _gloffset_Vertex2f 128
#define _gloffset_Vertex2fv 129
#define _gloffset_Vertex2i 130
#define _gloffset_Vertex2iv 131
#define _gloffset_Vertex2s 132
#define _gloffset_Vertex2sv 133
#define _gloffset_Vertex3d 134
#define _gloffset_Vertex3dv 135
#define _gloffset_Vertex3f 136
#define _gloffset_Vertex3fv 137
#define _gloffset_Vertex3i 138
#define _gloffset_Vertex3iv 139
#define _gloffset_Vertex3s 140
#define _gloffset_Vertex3sv 141
#define _gloffset_Vertex4d 142
#define _gloffset_Vertex4dv 143
#define _gloffset_Vertex4f 144
#define _gloffset_Vertex4fv 145
#define _gloffset_Vertex4i 146
#define _gloffset_Vertex4iv 147
#define _gloffset_Vertex4s 148
#define _gloffset_Vertex4sv 149
#define _gloffset_ClipPlane 150
#define _gloffset_ColorMaterial 151
#define _gloffset_CullFace 152
#define _gloffset_Fogf 153
#define _gloffset_Fogfv 154
#define _gloffset_Fogi 155
#define _gloffset_Fogiv 156
#define _gloffset_FrontFace 157
#define _gloffset_Hint 158
#define _gloffset_Lightf 159
#define _gloffset_Lightfv 160
#define _gloffset_Lighti 161
#define _gloffset_Lightiv 162
#define _gloffset_LightModelf 163
#define _gloffset_LightModelfv 164
#define _gloffset_LightModeli 165
#define _gloffset_LightModeliv 166
#define _gloffset_LineStipple 167
#define _gloffset_LineWidth 168
#define _gloffset_Materialf 169
#define _gloffset_Materialfv 170
#define _gloffset_Materiali 171
#define _gloffset_Materialiv 172
#define _gloffset_PointSize 173
#define _gloffset_PolygonMode 174
#define _gloffset_PolygonStipple 175
#define _gloffset_Scissor 176
#define _gloffset_ShadeModel 177
#define _gloffset_TexParameterf 178
#define _gloffset_TexParameterfv 179
#define _gloffset_TexParameteri 180
#define _gloffset_TexParameteriv 181
#define _gloffset_TexImage1D 182
#define _gloffset_TexImage2D 183
#define _gloffset_TexEnvf 184
#define _gloffset_TexEnvfv 185
#define _gloffset_TexEnvi 186
#define _gloffset_TexEnviv 187
#define _gloffset_TexGend 188
#define _gloffset_TexGendv 189
#define _gloffset_TexGenf 190
#define _gloffset_TexGenfv 191
#define _gloffset_TexGeni 192
#define _gloffset_TexGeniv 193
#define _gloffset_FeedbackBuffer 194
#define _gloffset_SelectBuffer 195
#define _gloffset_RenderMode 196
#define _gloffset_InitNames 197
#define _gloffset_LoadName 198
#define _gloffset_PassThrough 199
#define _gloffset_PopName 200
#define _gloffset_PushName 201
#define _gloffset_DrawBuffer 202
#define _gloffset_Clear 203
#define _gloffset_ClearAccum 204
#define _gloffset_ClearIndex 205
#define _gloffset_ClearColor 206
#define _gloffset_ClearStencil 207
#define _gloffset_ClearDepth 208
#define _gloffset_StencilMask 209
#define _gloffset_ColorMask 210
#define _gloffset_DepthMask 211
#define _gloffset_IndexMask 212
#define _gloffset_Accum 213
#define _gloffset_Disable 214
#define _gloffset_Enable 215
#define _gloffset_Finish 216
#define _gloffset_Flush 217
#define _gloffset_PopAttrib 218
#define _gloffset_PushAttrib 219
#define _gloffset_Map1d 220
#define _gloffset_Map1f 221
#define _gloffset_Map2d 222
#define _gloffset_Map2f 223
#define _gloffset_MapGrid1d 224
#define _gloffset_MapGrid1f 225
#define _gloffset_MapGrid2d 226
#define _gloffset_MapGrid2f 227
#define _gloffset_EvalCoord1d 228
#define _gloffset_EvalCoord1dv 229
#define _gloffset_EvalCoord1f 230
#define _gloffset_EvalCoord1fv 231
#define _gloffset_EvalCoord2d 232
#define _gloffset_EvalCoord2dv 233
#define _gloffset_EvalCoord2f 234
#define _gloffset_EvalCoord2fv 235
#define _gloffset_EvalMesh1 236
#define _gloffset_EvalPoint1 237
#define _gloffset_EvalMesh2 238
#define _gloffset_EvalPoint2 239
#define _gloffset_AlphaFunc 240
#define _gloffset_BlendFunc 241
#define _gloffset_LogicOp 242
#define _gloffset_StencilFunc 243
#define _gloffset_StencilOp 244
#define _gloffset_DepthFunc 245
#define _gloffset_PixelZoom 246
#define _gloffset_PixelTransferf 247
#define _gloffset_PixelTransferi 248
#define _gloffset_PixelStoref 249
#define _gloffset_PixelStorei 250
#define _gloffset_PixelMapfv 251
#define _gloffset_PixelMapuiv 252
#define _gloffset_PixelMapusv 253
#define _gloffset_ReadBuffer 254
#define _gloffset_CopyPixels 255
#define _gloffset_ReadPixels 256
#define _gloffset_DrawPixels 257
#define _gloffset_GetBooleanv 258
#define _gloffset_GetClipPlane 259
#define _gloffset_GetDoublev 260
#define _gloffset_GetError 261
#define _gloffset_GetFloatv 262
#define _gloffset_GetIntegerv 263
#define _gloffset_GetLightfv 264
#define _gloffset_GetLightiv 265
#define _gloffset_GetMapdv 266
#define _gloffset_GetMapfv 267
#define _gloffset_GetMapiv 268
#define _gloffset_GetMaterialfv 269
#define _gloffset_GetMaterialiv 270
#define _gloffset_GetPixelMapfv 271
#define _gloffset_GetPixelMapuiv 272
#define _gloffset_GetPixelMapusv 273
#define _gloffset_GetPolygonStipple 274
#define _gloffset_GetString 275
#define _gloffset_GetTexEnvfv 276
#define _gloffset_GetTexEnviv 277
#define _gloffset_GetTexGendv 278
#define _gloffset_GetTexGenfv 279
#define _gloffset_GetTexGeniv 280
#define _gloffset_GetTexImage 281
#define _gloffset_GetTexParameterfv 282
#define _gloffset_GetTexParameteriv 283
#define _gloffset_GetTexLevelParameterfv 284
#define _gloffset_GetTexLevelParameteriv 285
#define _gloffset_IsEnabled 286
#define _gloffset_IsList 287
#define _gloffset_DepthRange 288
#define _gloffset_Frustum 289
#define _gloffset_LoadIdentity 290
#define _gloffset_LoadMatrixf 291
#define _gloffset_LoadMatrixd 292
#define _gloffset_MatrixMode 293
#define _gloffset_MultMatrixf 294
#define _gloffset_MultMatrixd 295
#define _gloffset_Ortho 296
#define _gloffset_PopMatrix 297
#define _gloffset_PushMatrix 298
#define _gloffset_Rotated 299
#define _gloffset_Rotatef 300
#define _gloffset_Scaled 301
#define _gloffset_Scalef 302
#define _gloffset_Translated 303
#define _gloffset_Translatef 304
#define _gloffset_Viewport 305
#define _gloffset_ArrayElement 306
#define _gloffset_BindTexture 307
#define _gloffset_ColorPointer 308
#define _gloffset_DisableClientState 309
#define _gloffset_DrawArrays 310
#define _gloffset_DrawElements 311
#define _gloffset_EdgeFlagPointer 312
#define _gloffset_EnableClientState 313
#define _gloffset_IndexPointer 314
#define _gloffset_Indexub 315
#define _gloffset_Indexubv 316
#define _gloffset_InterleavedArrays 317
#define _gloffset_NormalPointer 318
#define _gloffset_PolygonOffset 319
#define _gloffset_TexCoordPointer 320
#define _gloffset_VertexPointer 321
#define _gloffset_AreTexturesResident 322
#define _gloffset_CopyTexImage1D 323
#define _gloffset_CopyTexImage2D 324
#define _gloffset_CopyTexSubImage1D 325
#define _gloffset_CopyTexSubImage2D 326
#define _gloffset_DeleteTextures 327
#define _gloffset_GenTextures 328
#define _gloffset_GetPointerv 329
#define _gloffset_IsTexture 330
#define _gloffset_PrioritizeTextures 331
#define _gloffset_TexSubImage1D 332
#define _gloffset_TexSubImage2D 333
#define _gloffset_PopClientAttrib 334
#define _gloffset_PushClientAttrib 335
#define _gloffset_BlendColor 336
#define _gloffset_BlendEquation 337
#define _gloffset_DrawRangeElements 338
#define _gloffset_ColorTable 339
#define _gloffset_ColorTableParameterfv 340
#define _gloffset_ColorTableParameteriv 341
#define _gloffset_CopyColorTable 342
#define _gloffset_GetColorTable 343
#define _gloffset_GetColorTableParameterfv 344
#define _gloffset_GetColorTableParameteriv 345
#define _gloffset_ColorSubTable 346
#define _gloffset_CopyColorSubTable 347
#define _gloffset_ConvolutionFilter1D 348
#define _gloffset_ConvolutionFilter2D 349
#define _gloffset_ConvolutionParameterf 350
#define _gloffset_ConvolutionParameterfv 351
#define _gloffset_ConvolutionParameteri 352
#define _gloffset_ConvolutionParameteriv 353
#define _gloffset_CopyConvolutionFilter1D 354
#define _gloffset_CopyConvolutionFilter2D 355
#define _gloffset_GetConvolutionFilter 356
#define _gloffset_GetConvolutionParameterfv 357
#define _gloffset_GetConvolutionParameteriv 358
#define _gloffset_GetSeparableFilter 359
#define _gloffset_SeparableFilter2D 360
#define _gloffset_GetHistogram 361
#define _gloffset_GetHistogramParameterfv 362
#define _gloffset_GetHistogramParameteriv 363
#define _gloffset_GetMinmax 364
#define _gloffset_GetMinmaxParameterfv 365
#define _gloffset_GetMinmaxParameteriv 366
#define _gloffset_Histogram 367
#define _gloffset_Minmax 368
#define _gloffset_ResetHistogram 369
#define _gloffset_ResetMinmax 370
#define _gloffset_TexImage3D 371
#define _gloffset_TexSubImage3D 372
#define _gloffset_CopyTexSubImage3D 373
#define _gloffset_ActiveTexture 374
#define _gloffset_ClientActiveTexture 375
#define _gloffset_MultiTexCoord1d 376
#define _gloffset_MultiTexCoord1dv 377
#define _gloffset_MultiTexCoord1fARB 378
#define _gloffset_MultiTexCoord1fvARB 379
#define _gloffset_MultiTexCoord1i 380
#define _gloffset_MultiTexCoord1iv 381
#define _gloffset_MultiTexCoord1s 382
#define _gloffset_MultiTexCoord1sv 383
#define _gloffset_MultiTexCoord2d 384
#define _gloffset_MultiTexCoord2dv 385
#define _gloffset_MultiTexCoord2fARB 386
#define _gloffset_MultiTexCoord2fvARB 387
#define _gloffset_MultiTexCoord2i 388
#define _gloffset_MultiTexCoord2iv 389
#define _gloffset_MultiTexCoord2s 390
#define _gloffset_MultiTexCoord2sv 391
#define _gloffset_MultiTexCoord3d 392
#define _gloffset_MultiTexCoord3dv 393
#define _gloffset_MultiTexCoord3fARB 394
#define _gloffset_MultiTexCoord3fvARB 395
#define _gloffset_MultiTexCoord3i 396
#define _gloffset_MultiTexCoord3iv 397
#define _gloffset_MultiTexCoord3s 398
#define _gloffset_MultiTexCoord3sv 399
#define _gloffset_MultiTexCoord4d 400
#define _gloffset_MultiTexCoord4dv 401
#define _gloffset_MultiTexCoord4fARB 402
#define _gloffset_MultiTexCoord4fvARB 403
#define _gloffset_MultiTexCoord4i 404
#define _gloffset_MultiTexCoord4iv 405
#define _gloffset_MultiTexCoord4s 406
#define _gloffset_MultiTexCoord4sv 407
#define driDispatchRemapTable_size 1252
extern int driDispatchRemapTable[ driDispatchRemapTable_size ];

#define CompressedTexImage1D_remap_index 0
#define CompressedTexImage2D_remap_index 1
#define CompressedTexImage3D_remap_index 2
#define CompressedTexSubImage1D_remap_index 3
#define CompressedTexSubImage2D_remap_index 4
#define CompressedTexSubImage3D_remap_index 5
#define GetCompressedTexImage_remap_index 6
#define LoadTransposeMatrixd_remap_index 7
#define LoadTransposeMatrixf_remap_index 8
#define MultTransposeMatrixd_remap_index 9
#define MultTransposeMatrixf_remap_index 10
#define SampleCoverage_remap_index 11
#define BlendFuncSeparate_remap_index 12
#define FogCoordPointer_remap_index 13
#define FogCoordd_remap_index 14
#define FogCoorddv_remap_index 15
#define MultiDrawArrays_remap_index 16
#define PointParameterf_remap_index 17
#define PointParameterfv_remap_index 18
#define PointParameteri_remap_index 19
#define PointParameteriv_remap_index 20
#define SecondaryColor3b_remap_index 21
#define SecondaryColor3bv_remap_index 22
#define SecondaryColor3d_remap_index 23
#define SecondaryColor3dv_remap_index 24
#define SecondaryColor3i_remap_index 25
#define SecondaryColor3iv_remap_index 26
#define SecondaryColor3s_remap_index 27
#define SecondaryColor3sv_remap_index 28
#define SecondaryColor3ub_remap_index 29
#define SecondaryColor3ubv_remap_index 30
#define SecondaryColor3ui_remap_index 31
#define SecondaryColor3uiv_remap_index 32
#define SecondaryColor3us_remap_index 33
#define SecondaryColor3usv_remap_index 34
#define SecondaryColorPointer_remap_index 35
#define WindowPos2d_remap_index 36
#define WindowPos2dv_remap_index 37
#define WindowPos2f_remap_index 38
#define WindowPos2fv_remap_index 39
#define WindowPos2i_remap_index 40
#define WindowPos2iv_remap_index 41
#define WindowPos2s_remap_index 42
#define WindowPos2sv_remap_index 43
#define WindowPos3d_remap_index 44
#define WindowPos3dv_remap_index 45
#define WindowPos3f_remap_index 46
#define WindowPos3fv_remap_index 47
#define WindowPos3i_remap_index 48
#define WindowPos3iv_remap_index 49
#define WindowPos3s_remap_index 50
#define WindowPos3sv_remap_index 51
#define BeginQuery_remap_index 52
#define BindBuffer_remap_index 53
#define BufferData_remap_index 54
#define BufferSubData_remap_index 55
#define DeleteBuffers_remap_index 56
#define DeleteQueries_remap_index 57
#define EndQuery_remap_index 58
#define GenBuffers_remap_index 59
#define GenQueries_remap_index 60
#define GetBufferParameteriv_remap_index 61
#define GetBufferPointerv_remap_index 62
#define GetBufferSubData_remap_index 63
#define GetQueryObjectiv_remap_index 64
#define GetQueryObjectuiv_remap_index 65
#define GetQueryiv_remap_index 66
#define IsBuffer_remap_index 67
#define IsQuery_remap_index 68
#define MapBuffer_remap_index 69
#define UnmapBuffer_remap_index 70
#define AttachShader_remap_index 71
#define BindAttribLocation_remap_index 72
#define BlendEquationSeparate_remap_index 73
#define CompileShader_remap_index 74
#define CreateProgram_remap_index 75
#define CreateShader_remap_index 76
#define DeleteProgram_remap_index 77
#define DeleteShader_remap_index 78
#define DetachShader_remap_index 79
#define DisableVertexAttribArray_remap_index 80
#define DrawBuffers_remap_index 81
#define EnableVertexAttribArray_remap_index 82
#define GetActiveAttrib_remap_index 83
#define GetActiveUniform_remap_index 84
#define GetAttachedShaders_remap_index 85
#define GetAttribLocation_remap_index 86
#define GetProgramInfoLog_remap_index 87
#define GetProgramiv_remap_index 88
#define GetShaderInfoLog_remap_index 89
#define GetShaderSource_remap_index 90
#define GetShaderiv_remap_index 91
#define GetUniformLocation_remap_index 92
#define GetUniformfv_remap_index 93
#define GetUniformiv_remap_index 94
#define GetVertexAttribPointerv_remap_index 95
#define GetVertexAttribdv_remap_index 96
#define GetVertexAttribfv_remap_index 97
#define GetVertexAttribiv_remap_index 98
#define IsProgram_remap_index 99
#define IsShader_remap_index 100
#define LinkProgram_remap_index 101
#define ShaderSource_remap_index 102
#define StencilFuncSeparate_remap_index 103
#define StencilMaskSeparate_remap_index 104
#define StencilOpSeparate_remap_index 105
#define Uniform1f_remap_index 106
#define Uniform1fv_remap_index 107
#define Uniform1i_remap_index 108
#define Uniform1iv_remap_index 109
#define Uniform2f_remap_index 110
#define Uniform2fv_remap_index 111
#define Uniform2i_remap_index 112
#define Uniform2iv_remap_index 113
#define Uniform3f_remap_index 114
#define Uniform3fv_remap_index 115
#define Uniform3i_remap_index 116
#define Uniform3iv_remap_index 117
#define Uniform4f_remap_index 118
#define Uniform4fv_remap_index 119
#define Uniform4i_remap_index 120
#define Uniform4iv_remap_index 121
#define UniformMatrix2fv_remap_index 122
#define UniformMatrix3fv_remap_index 123
#define UniformMatrix4fv_remap_index 124
#define UseProgram_remap_index 125
#define ValidateProgram_remap_index 126
#define VertexAttrib1d_remap_index 127
#define VertexAttrib1dv_remap_index 128
#define VertexAttrib1s_remap_index 129
#define VertexAttrib1sv_remap_index 130
#define VertexAttrib2d_remap_index 131
#define VertexAttrib2dv_remap_index 132
#define VertexAttrib2s_remap_index 133
#define VertexAttrib2sv_remap_index 134
#define VertexAttrib3d_remap_index 135
#define VertexAttrib3dv_remap_index 136
#define VertexAttrib3s_remap_index 137
#define VertexAttrib3sv_remap_index 138
#define VertexAttrib4Nbv_remap_index 139
#define VertexAttrib4Niv_remap_index 140
#define VertexAttrib4Nsv_remap_index 141
#define VertexAttrib4Nub_remap_index 142
#define VertexAttrib4Nubv_remap_index 143
#define VertexAttrib4Nuiv_remap_index 144
#define VertexAttrib4Nusv_remap_index 145
#define VertexAttrib4bv_remap_index 146
#define VertexAttrib4d_remap_index 147
#define VertexAttrib4dv_remap_index 148
#define VertexAttrib4iv_remap_index 149
#define VertexAttrib4s_remap_index 150
#define VertexAttrib4sv_remap_index 151
#define VertexAttrib4ubv_remap_index 152
#define VertexAttrib4uiv_remap_index 153
#define VertexAttrib4usv_remap_index 154
#define VertexAttribPointer_remap_index 155
#define UniformMatrix2x3fv_remap_index 156
#define UniformMatrix2x4fv_remap_index 157
#define UniformMatrix3x2fv_remap_index 158
#define UniformMatrix3x4fv_remap_index 159
#define UniformMatrix4x2fv_remap_index 160
#define UniformMatrix4x3fv_remap_index 161
#define BeginConditionalRender_remap_index 162
#define BeginTransformFeedback_remap_index 163
#define BindBufferBase_remap_index 164
#define BindBufferRange_remap_index 165
#define BindFragDataLocation_remap_index 166
#define ClampColor_remap_index 167
#define ClearBufferfi_remap_index 168
#define ClearBufferfv_remap_index 169
#define ClearBufferiv_remap_index 170
#define ClearBufferuiv_remap_index 171
#define ColorMaski_remap_index 172
#define Disablei_remap_index 173
#define Enablei_remap_index 174
#define EndConditionalRender_remap_index 175
#define EndTransformFeedback_remap_index 176
#define GetBooleani_v_remap_index 177
#define GetFragDataLocation_remap_index 178
#define GetIntegeri_v_remap_index 179
#define GetStringi_remap_index 180
#define GetTexParameterIiv_remap_index 181
#define GetTexParameterIuiv_remap_index 182
#define GetTransformFeedbackVarying_remap_index 183
#define GetUniformuiv_remap_index 184
#define GetVertexAttribIiv_remap_index 185
#define GetVertexAttribIuiv_remap_index 186
#define IsEnabledi_remap_index 187
#define TexParameterIiv_remap_index 188
#define TexParameterIuiv_remap_index 189
#define TransformFeedbackVaryings_remap_index 190
#define Uniform1ui_remap_index 191
#define Uniform1uiv_remap_index 192
#define Uniform2ui_remap_index 193
#define Uniform2uiv_remap_index 194
#define Uniform3ui_remap_index 195
#define Uniform3uiv_remap_index 196
#define Uniform4ui_remap_index 197
#define Uniform4uiv_remap_index 198
#define VertexAttribI1iv_remap_index 199
#define VertexAttribI1uiv_remap_index 200
#define VertexAttribI4bv_remap_index 201
#define VertexAttribI4sv_remap_index 202
#define VertexAttribI4ubv_remap_index 203
#define VertexAttribI4usv_remap_index 204
#define VertexAttribIPointer_remap_index 205
#define PrimitiveRestartIndex_remap_index 206
#define TexBuffer_remap_index 207
#define FramebufferTexture_remap_index 208
#define GetBufferParameteri64v_remap_index 209
#define GetInteger64i_v_remap_index 210
#define VertexAttribDivisor_remap_index 211
#define MinSampleShading_remap_index 212
#define MemoryBarrierByRegion_remap_index 213
#define BindProgramARB_remap_index 214
#define DeleteProgramsARB_remap_index 215
#define GenProgramsARB_remap_index 216
#define GetProgramEnvParameterdvARB_remap_index 217
#define GetProgramEnvParameterfvARB_remap_index 218
#define GetProgramLocalParameterdvARB_remap_index 219
#define GetProgramLocalParameterfvARB_remap_index 220
#define GetProgramStringARB_remap_index 221
#define GetProgramivARB_remap_index 222
#define IsProgramARB_remap_index 223
#define ProgramEnvParameter4dARB_remap_index 224
#define ProgramEnvParameter4dvARB_remap_index 225
#define ProgramEnvParameter4fARB_remap_index 226
#define ProgramEnvParameter4fvARB_remap_index 227
#define ProgramLocalParameter4dARB_remap_index 228
#define ProgramLocalParameter4dvARB_remap_index 229
#define ProgramLocalParameter4fARB_remap_index 230
#define ProgramLocalParameter4fvARB_remap_index 231
#define ProgramStringARB_remap_index 232
#define VertexAttrib1fARB_remap_index 233
#define VertexAttrib1fvARB_remap_index 234
#define VertexAttrib2fARB_remap_index 235
#define VertexAttrib2fvARB_remap_index 236
#define VertexAttrib3fARB_remap_index 237
#define VertexAttrib3fvARB_remap_index 238
#define VertexAttrib4fARB_remap_index 239
#define VertexAttrib4fvARB_remap_index 240
#define AttachObjectARB_remap_index 241
#define CreateProgramObjectARB_remap_index 242
#define CreateShaderObjectARB_remap_index 243
#define DeleteObjectARB_remap_index 244
#define DetachObjectARB_remap_index 245
#define GetAttachedObjectsARB_remap_index 246
#define GetHandleARB_remap_index 247
#define GetInfoLogARB_remap_index 248
#define GetObjectParameterfvARB_remap_index 249
#define GetObjectParameterivARB_remap_index 250
#define DrawArraysInstancedARB_remap_index 251
#define DrawElementsInstancedARB_remap_index 252
#define BindFramebuffer_remap_index 253
#define BindRenderbuffer_remap_index 254
#define BlitFramebuffer_remap_index 255
#define CheckFramebufferStatus_remap_index 256
#define DeleteFramebuffers_remap_index 257
#define DeleteRenderbuffers_remap_index 258
#define FramebufferRenderbuffer_remap_index 259
#define FramebufferTexture1D_remap_index 260
#define FramebufferTexture2D_remap_index 261
#define FramebufferTexture3D_remap_index 262
#define FramebufferTextureLayer_remap_index 263
#define GenFramebuffers_remap_index 264
#define GenRenderbuffers_remap_index 265
#define GenerateMipmap_remap_index 266
#define GetFramebufferAttachmentParameteriv_remap_index 267
#define GetRenderbufferParameteriv_remap_index 268
#define IsFramebuffer_remap_index 269
#define IsRenderbuffer_remap_index 270
#define RenderbufferStorage_remap_index 271
#define RenderbufferStorageMultisample_remap_index 272
#define FlushMappedBufferRange_remap_index 273
#define MapBufferRange_remap_index 274
#define BindVertexArray_remap_index 275
#define DeleteVertexArrays_remap_index 276
#define GenVertexArrays_remap_index 277
#define IsVertexArray_remap_index 278
#define GetActiveUniformBlockName_remap_index 279
#define GetActiveUniformBlockiv_remap_index 280
#define GetActiveUniformName_remap_index 281
#define GetActiveUniformsiv_remap_index 282
#define GetUniformBlockIndex_remap_index 283
#define GetUniformIndices_remap_index 284
#define UniformBlockBinding_remap_index 285
#define CopyBufferSubData_remap_index 286
#define ClientWaitSync_remap_index 287
#define DeleteSync_remap_index 288
#define FenceSync_remap_index 289
#define GetInteger64v_remap_index 290
#define GetSynciv_remap_index 291
#define IsSync_remap_index 292
#define WaitSync_remap_index 293
#define DrawElementsBaseVertex_remap_index 294
#define DrawElementsInstancedBaseVertex_remap_index 295
#define DrawRangeElementsBaseVertex_remap_index 296
#define MultiDrawElementsBaseVertex_remap_index 297
#define ProvokingVertex_remap_index 298
#define GetMultisamplefv_remap_index 299
#define SampleMaski_remap_index 300
#define TexImage2DMultisample_remap_index 301
#define TexImage3DMultisample_remap_index 302
#define BlendEquationSeparateiARB_remap_index 303
#define BlendEquationiARB_remap_index 304
#define BlendFuncSeparateiARB_remap_index 305
#define BlendFunciARB_remap_index 306
#define BindFragDataLocationIndexed_remap_index 307
#define GetFragDataIndex_remap_index 308
#define BindSampler_remap_index 309
#define DeleteSamplers_remap_index 310
#define GenSamplers_remap_index 311
#define GetSamplerParameterIiv_remap_index 312
#define GetSamplerParameterIuiv_remap_index 313
#define GetSamplerParameterfv_remap_index 314
#define GetSamplerParameteriv_remap_index 315
#define IsSampler_remap_index 316
#define SamplerParameterIiv_remap_index 317
#define SamplerParameterIuiv_remap_index 318
#define SamplerParameterf_remap_index 319
#define SamplerParameterfv_remap_index 320
#define SamplerParameteri_remap_index 321
#define SamplerParameteriv_remap_index 322
#define GetQueryObjecti64v_remap_index 323
#define GetQueryObjectui64v_remap_index 324
#define QueryCounter_remap_index 325
#define ColorP3ui_remap_index 326
#define ColorP3uiv_remap_index 327
#define ColorP4ui_remap_index 328
#define ColorP4uiv_remap_index 329
#define MultiTexCoordP1ui_remap_index 330
#define MultiTexCoordP1uiv_remap_index 331
#define MultiTexCoordP2ui_remap_index 332
#define MultiTexCoordP2uiv_remap_index 333
#define MultiTexCoordP3ui_remap_index 334
#define MultiTexCoordP3uiv_remap_index 335
#define MultiTexCoordP4ui_remap_index 336
#define MultiTexCoordP4uiv_remap_index 337
#define NormalP3ui_remap_index 338
#define NormalP3uiv_remap_index 339
#define SecondaryColorP3ui_remap_index 340
#define SecondaryColorP3uiv_remap_index 341
#define TexCoordP1ui_remap_index 342
#define TexCoordP1uiv_remap_index 343
#define TexCoordP2ui_remap_index 344
#define TexCoordP2uiv_remap_index 345
#define TexCoordP3ui_remap_index 346
#define TexCoordP3uiv_remap_index 347
#define TexCoordP4ui_remap_index 348
#define TexCoordP4uiv_remap_index 349
#define VertexAttribP1ui_remap_index 350
#define VertexAttribP1uiv_remap_index 351
#define VertexAttribP2ui_remap_index 352
#define VertexAttribP2uiv_remap_index 353
#define VertexAttribP3ui_remap_index 354
#define VertexAttribP3uiv_remap_index 355
#define VertexAttribP4ui_remap_index 356
#define VertexAttribP4uiv_remap_index 357
#define VertexP2ui_remap_index 358
#define VertexP2uiv_remap_index 359
#define VertexP3ui_remap_index 360
#define VertexP3uiv_remap_index 361
#define VertexP4ui_remap_index 362
#define VertexP4uiv_remap_index 363
#define DrawArraysIndirect_remap_index 364
#define DrawElementsIndirect_remap_index 365
#define GetUniformdv_remap_index 366
#define Uniform1d_remap_index 367
#define Uniform1dv_remap_index 368
#define Uniform2d_remap_index 369
#define Uniform2dv_remap_index 370
#define Uniform3d_remap_index 371
#define Uniform3dv_remap_index 372
#define Uniform4d_remap_index 373
#define Uniform4dv_remap_index 374
#define UniformMatrix2dv_remap_index 375
#define UniformMatrix2x3dv_remap_index 376
#define UniformMatrix2x4dv_remap_index 377
#define UniformMatrix3dv_remap_index 378
#define UniformMatrix3x2dv_remap_index 379
#define UniformMatrix3x4dv_remap_index 380
#define UniformMatrix4dv_remap_index 381
#define UniformMatrix4x2dv_remap_index 382
#define UniformMatrix4x3dv_remap_index 383
#define GetActiveSubroutineName_remap_index 384
#define GetActiveSubroutineUniformName_remap_index 385
#define GetActiveSubroutineUniformiv_remap_index 386
#define GetProgramStageiv_remap_index 387
#define GetSubroutineIndex_remap_index 388
#define GetSubroutineUniformLocation_remap_index 389
#define GetUniformSubroutineuiv_remap_index 390
#define UniformSubroutinesuiv_remap_index 391
#define PatchParameterfv_remap_index 392
#define PatchParameteri_remap_index 393
#define BindTransformFeedback_remap_index 394
#define DeleteTransformFeedbacks_remap_index 395
#define DrawTransformFeedback_remap_index 396
#define GenTransformFeedbacks_remap_index 397
#define IsTransformFeedback_remap_index 398
#define PauseTransformFeedback_remap_index 399
#define ResumeTransformFeedback_remap_index 400
#define BeginQueryIndexed_remap_index 401
#define DrawTransformFeedbackStream_remap_index 402
#define EndQueryIndexed_remap_index 403
#define GetQueryIndexediv_remap_index 404
#define ClearDepthf_remap_index 405
#define DepthRangef_remap_index 406
#define GetShaderPrecisionFormat_remap_index 407
#define ReleaseShaderCompiler_remap_index 408
#define ShaderBinary_remap_index 409
#define GetProgramBinary_remap_index 410
#define ProgramBinary_remap_index 411
#define ProgramParameteri_remap_index 412
#define GetVertexAttribLdv_remap_index 413
#define VertexAttribL1d_remap_index 414
#define VertexAttribL1dv_remap_index 415
#define VertexAttribL2d_remap_index 416
#define VertexAttribL2dv_remap_index 417
#define VertexAttribL3d_remap_index 418
#define VertexAttribL3dv_remap_index 419
#define VertexAttribL4d_remap_index 420
#define VertexAttribL4dv_remap_index 421
#define VertexAttribLPointer_remap_index 422
#define DepthRangeArrayv_remap_index 423
#define DepthRangeIndexed_remap_index 424
#define GetDoublei_v_remap_index 425
#define GetFloati_v_remap_index 426
#define ScissorArrayv_remap_index 427
#define ScissorIndexed_remap_index 428
#define ScissorIndexedv_remap_index 429
#define ViewportArrayv_remap_index 430
#define ViewportIndexedf_remap_index 431
#define ViewportIndexedfv_remap_index 432
#define GetGraphicsResetStatusARB_remap_index 433
#define GetnColorTableARB_remap_index 434
#define GetnCompressedTexImageARB_remap_index 435
#define GetnConvolutionFilterARB_remap_index 436
#define GetnHistogramARB_remap_index 437
#define GetnMapdvARB_remap_index 438
#define GetnMapfvARB_remap_index 439
#define GetnMapivARB_remap_index 440
#define GetnMinmaxARB_remap_index 441
#define GetnPixelMapfvARB_remap_index 442
#define GetnPixelMapuivARB_remap_index 443
#define GetnPixelMapusvARB_remap_index 444
#define GetnPolygonStippleARB_remap_index 445
#define GetnSeparableFilterARB_remap_index 446
#define GetnTexImageARB_remap_index 447
#define GetnUniformdvARB_remap_index 448
#define GetnUniformfvARB_remap_index 449
#define GetnUniformivARB_remap_index 450
#define GetnUniformuivARB_remap_index 451
#define ReadnPixelsARB_remap_index 452
#define DrawArraysInstancedBaseInstance_remap_index 453
#define DrawElementsInstancedBaseInstance_remap_index 454
#define DrawElementsInstancedBaseVertexBaseInstance_remap_index 455
#define DrawTransformFeedbackInstanced_remap_index 456
#define DrawTransformFeedbackStreamInstanced_remap_index 457
#define GetInternalformativ_remap_index 458
#define GetActiveAtomicCounterBufferiv_remap_index 459
#define BindImageTexture_remap_index 460
#define MemoryBarrier_remap_index 461
#define TexStorage1D_remap_index 462
#define TexStorage2D_remap_index 463
#define TexStorage3D_remap_index 464
#define TextureStorage1DEXT_remap_index 465
#define TextureStorage2DEXT_remap_index 466
#define TextureStorage3DEXT_remap_index 467
#define ClearBufferData_remap_index 468
#define ClearBufferSubData_remap_index 469
#define DispatchCompute_remap_index 470
#define DispatchComputeIndirect_remap_index 471
#define CopyImageSubData_remap_index 472
#define TextureView_remap_index 473
#define BindVertexBuffer_remap_index 474
#define VertexAttribBinding_remap_index 475
#define VertexAttribFormat_remap_index 476
#define VertexAttribIFormat_remap_index 477
#define VertexAttribLFormat_remap_index 478
#define VertexBindingDivisor_remap_index 479
#define FramebufferParameteri_remap_index 480
#define GetFramebufferParameteriv_remap_index 481
#define GetInternalformati64v_remap_index 482
#define MultiDrawArraysIndirect_remap_index 483
#define MultiDrawElementsIndirect_remap_index 484
#define GetProgramInterfaceiv_remap_index 485
#define GetProgramResourceIndex_remap_index 486
#define GetProgramResourceLocation_remap_index 487
#define GetProgramResourceLocationIndex_remap_index 488
#define GetProgramResourceName_remap_index 489
#define GetProgramResourceiv_remap_index 490
#define ShaderStorageBlockBinding_remap_index 491
#define TexBufferRange_remap_index 492
#define TexStorage2DMultisample_remap_index 493
#define TexStorage3DMultisample_remap_index 494
#define BufferStorage_remap_index 495
#define ClearTexImage_remap_index 496
#define ClearTexSubImage_remap_index 497
#define BindBuffersBase_remap_index 498
#define BindBuffersRange_remap_index 499
#define BindImageTextures_remap_index 500
#define BindSamplers_remap_index 501
#define BindTextures_remap_index 502
#define BindVertexBuffers_remap_index 503
#define GetImageHandleARB_remap_index 504
#define GetTextureHandleARB_remap_index 505
#define GetTextureSamplerHandleARB_remap_index 506
#define GetVertexAttribLui64vARB_remap_index 507
#define IsImageHandleResidentARB_remap_index 508
#define IsTextureHandleResidentARB_remap_index 509
#define MakeImageHandleNonResidentARB_remap_index 510
#define MakeImageHandleResidentARB_remap_index 511
#define MakeTextureHandleNonResidentARB_remap_index 512
#define MakeTextureHandleResidentARB_remap_index 513
#define ProgramUniformHandleui64ARB_remap_index 514
#define ProgramUniformHandleui64vARB_remap_index 515
#define UniformHandleui64ARB_remap_index 516
#define UniformHandleui64vARB_remap_index 517
#define VertexAttribL1ui64ARB_remap_index 518
#define VertexAttribL1ui64vARB_remap_index 519
#define DispatchComputeGroupSizeARB_remap_index 520
#define MultiDrawArraysIndirectCountARB_remap_index 521
#define MultiDrawElementsIndirectCountARB_remap_index 522
#define ClipControl_remap_index 523
#define BindTextureUnit_remap_index 524
#define BlitNamedFramebuffer_remap_index 525
#define CheckNamedFramebufferStatus_remap_index 526
#define ClearNamedBufferData_remap_index 527
#define ClearNamedBufferSubData_remap_index 528
#define ClearNamedFramebufferfi_remap_index 529
#define ClearNamedFramebufferfv_remap_index 530
#define ClearNamedFramebufferiv_remap_index 531
#define ClearNamedFramebufferuiv_remap_index 532
#define CompressedTextureSubImage1D_remap_index 533
#define CompressedTextureSubImage2D_remap_index 534
#define CompressedTextureSubImage3D_remap_index 535
#define CopyNamedBufferSubData_remap_index 536
#define CopyTextureSubImage1D_remap_index 537
#define CopyTextureSubImage2D_remap_index 538
#define CopyTextureSubImage3D_remap_index 539
#define CreateBuffers_remap_index 540
#define CreateFramebuffers_remap_index 541
#define CreateProgramPipelines_remap_index 542
#define CreateQueries_remap_index 543
#define CreateRenderbuffers_remap_index 544
#define CreateSamplers_remap_index 545
#define CreateTextures_remap_index 546
#define CreateTransformFeedbacks_remap_index 547
#define CreateVertexArrays_remap_index 548
#define DisableVertexArrayAttrib_remap_index 549
#define EnableVertexArrayAttrib_remap_index 550
#define FlushMappedNamedBufferRange_remap_index 551
#define GenerateTextureMipmap_remap_index 552
#define GetCompressedTextureImage_remap_index 553
#define GetNamedBufferParameteri64v_remap_index 554
#define GetNamedBufferParameteriv_remap_index 555
#define GetNamedBufferPointerv_remap_index 556
#define GetNamedBufferSubData_remap_index 557
#define GetNamedFramebufferAttachmentParameteriv_remap_index 558
#define GetNamedFramebufferParameteriv_remap_index 559
#define GetNamedRenderbufferParameteriv_remap_index 560
#define GetQueryBufferObjecti64v_remap_index 561
#define GetQueryBufferObjectiv_remap_index 562
#define GetQueryBufferObjectui64v_remap_index 563
#define GetQueryBufferObjectuiv_remap_index 564
#define GetTextureImage_remap_index 565
#define GetTextureLevelParameterfv_remap_index 566
#define GetTextureLevelParameteriv_remap_index 567
#define GetTextureParameterIiv_remap_index 568
#define GetTextureParameterIuiv_remap_index 569
#define GetTextureParameterfv_remap_index 570
#define GetTextureParameteriv_remap_index 571
#define GetTransformFeedbacki64_v_remap_index 572
#define GetTransformFeedbacki_v_remap_index 573
#define GetTransformFeedbackiv_remap_index 574
#define GetVertexArrayIndexed64iv_remap_index 575
#define GetVertexArrayIndexediv_remap_index 576
#define GetVertexArrayiv_remap_index 577
#define InvalidateNamedFramebufferData_remap_index 578
#define InvalidateNamedFramebufferSubData_remap_index 579
#define MapNamedBuffer_remap_index 580
#define MapNamedBufferRange_remap_index 581
#define NamedBufferData_remap_index 582
#define NamedBufferStorage_remap_index 583
#define NamedBufferSubData_remap_index 584
#define NamedFramebufferDrawBuffer_remap_index 585
#define NamedFramebufferDrawBuffers_remap_index 586
#define NamedFramebufferParameteri_remap_index 587
#define NamedFramebufferReadBuffer_remap_index 588
#define NamedFramebufferRenderbuffer_remap_index 589
#define NamedFramebufferTexture_remap_index 590
#define NamedFramebufferTextureLayer_remap_index 591
#define NamedRenderbufferStorage_remap_index 592
#define NamedRenderbufferStorageMultisample_remap_index 593
#define TextureBuffer_remap_index 594
#define TextureBufferRange_remap_index 595
#define TextureParameterIiv_remap_index 596
#define TextureParameterIuiv_remap_index 597
#define TextureParameterf_remap_index 598
#define TextureParameterfv_remap_index 599
#define TextureParameteri_remap_index 600
#define TextureParameteriv_remap_index 601
#define TextureStorage1D_remap_index 602
#define TextureStorage2D_remap_index 603
#define TextureStorage2DMultisample_remap_index 604
#define TextureStorage3D_remap_index 605
#define TextureStorage3DMultisample_remap_index 606
#define TextureSubImage1D_remap_index 607
#define TextureSubImage2D_remap_index 608
#define TextureSubImage3D_remap_index 609
#define TransformFeedbackBufferBase_remap_index 610
#define TransformFeedbackBufferRange_remap_index 611
#define UnmapNamedBufferEXT_remap_index 612
#define VertexArrayAttribBinding_remap_index 613
#define VertexArrayAttribFormat_remap_index 614
#define VertexArrayAttribIFormat_remap_index 615
#define VertexArrayAttribLFormat_remap_index 616
#define VertexArrayBindingDivisor_remap_index 617
#define VertexArrayElementBuffer_remap_index 618
#define VertexArrayVertexBuffer_remap_index 619
#define VertexArrayVertexBuffers_remap_index 620
#define GetCompressedTextureSubImage_remap_index 621
#define GetTextureSubImage_remap_index 622
#define BufferPageCommitmentARB_remap_index 623
#define NamedBufferPageCommitmentARB_remap_index 624
#define GetUniformi64vARB_remap_index 625
#define GetUniformui64vARB_remap_index 626
#define GetnUniformi64vARB_remap_index 627
#define GetnUniformui64vARB_remap_index 628
#define ProgramUniform1i64ARB_remap_index 629
#define ProgramUniform1i64vARB_remap_index 630
#define ProgramUniform1ui64ARB_remap_index 631
#define ProgramUniform1ui64vARB_remap_index 632
#define ProgramUniform2i64ARB_remap_index 633
#define ProgramUniform2i64vARB_remap_index 634
#define ProgramUniform2ui64ARB_remap_index 635
#define ProgramUniform2ui64vARB_remap_index 636
#define ProgramUniform3i64ARB_remap_index 637
#define ProgramUniform3i64vARB_remap_index 638
#define ProgramUniform3ui64ARB_remap_index 639
#define ProgramUniform3ui64vARB_remap_index 640
#define ProgramUniform4i64ARB_remap_index 641
#define ProgramUniform4i64vARB_remap_index 642
#define ProgramUniform4ui64ARB_remap_index 643
#define ProgramUniform4ui64vARB_remap_index 644
#define Uniform1i64ARB_remap_index 645
#define Uniform1i64vARB_remap_index 646
#define Uniform1ui64ARB_remap_index 647
#define Uniform1ui64vARB_remap_index 648
#define Uniform2i64ARB_remap_index 649
#define Uniform2i64vARB_remap_index 650
#define Uniform2ui64ARB_remap_index 651
#define Uniform2ui64vARB_remap_index 652
#define Uniform3i64ARB_remap_index 653
#define Uniform3i64vARB_remap_index 654
#define Uniform3ui64ARB_remap_index 655
#define Uniform3ui64vARB_remap_index 656
#define Uniform4i64ARB_remap_index 657
#define Uniform4i64vARB_remap_index 658
#define Uniform4ui64ARB_remap_index 659
#define Uniform4ui64vARB_remap_index 660
#define EvaluateDepthValuesARB_remap_index 661
#define FramebufferSampleLocationsfvARB_remap_index 662
#define NamedFramebufferSampleLocationsfvARB_remap_index 663
#define SpecializeShaderARB_remap_index 664
#define InvalidateBufferData_remap_index 665
#define InvalidateBufferSubData_remap_index 666
#define InvalidateFramebuffer_remap_index 667
#define InvalidateSubFramebuffer_remap_index 668
#define InvalidateTexImage_remap_index 669
#define InvalidateTexSubImage_remap_index 670
#define DrawTexfOES_remap_index 671
#define DrawTexfvOES_remap_index 672
#define DrawTexiOES_remap_index 673
#define DrawTexivOES_remap_index 674
#define DrawTexsOES_remap_index 675
#define DrawTexsvOES_remap_index 676
#define DrawTexxOES_remap_index 677
#define DrawTexxvOES_remap_index 678
#define PointSizePointerOES_remap_index 679
#define QueryMatrixxOES_remap_index 680
#define SampleMaskSGIS_remap_index 681
#define SamplePatternSGIS_remap_index 682
#define ColorPointerEXT_remap_index 683
#define EdgeFlagPointerEXT_remap_index 684
#define IndexPointerEXT_remap_index 685
#define NormalPointerEXT_remap_index 686
#define TexCoordPointerEXT_remap_index 687
#define VertexPointerEXT_remap_index 688
#define DiscardFramebufferEXT_remap_index 689
#define ActiveShaderProgram_remap_index 690
#define BindProgramPipeline_remap_index 691
#define CreateShaderProgramv_remap_index 692
#define DeleteProgramPipelines_remap_index 693
#define GenProgramPipelines_remap_index 694
#define GetProgramPipelineInfoLog_remap_index 695
#define GetProgramPipelineiv_remap_index 696
#define IsProgramPipeline_remap_index 697
#define LockArraysEXT_remap_index 698
#define ProgramUniform1d_remap_index 699
#define ProgramUniform1dv_remap_index 700
#define ProgramUniform1f_remap_index 701
#define ProgramUniform1fv_remap_index 702
#define ProgramUniform1i_remap_index 703
#define ProgramUniform1iv_remap_index 704
#define ProgramUniform1ui_remap_index 705
#define ProgramUniform1uiv_remap_index 706
#define ProgramUniform2d_remap_index 707
#define ProgramUniform2dv_remap_index 708
#define ProgramUniform2f_remap_index 709
#define ProgramUniform2fv_remap_index 710
#define ProgramUniform2i_remap_index 711
#define ProgramUniform2iv_remap_index 712
#define ProgramUniform2ui_remap_index 713
#define ProgramUniform2uiv_remap_index 714
#define ProgramUniform3d_remap_index 715
#define ProgramUniform3dv_remap_index 716
#define ProgramUniform3f_remap_index 717
#define ProgramUniform3fv_remap_index 718
#define ProgramUniform3i_remap_index 719
#define ProgramUniform3iv_remap_index 720
#define ProgramUniform3ui_remap_index 721
#define ProgramUniform3uiv_remap_index 722
#define ProgramUniform4d_remap_index 723
#define ProgramUniform4dv_remap_index 724
#define ProgramUniform4f_remap_index 725
#define ProgramUniform4fv_remap_index 726
#define ProgramUniform4i_remap_index 727
#define ProgramUniform4iv_remap_index 728
#define ProgramUniform4ui_remap_index 729
#define ProgramUniform4uiv_remap_index 730
#define ProgramUniformMatrix2dv_remap_index 731
#define ProgramUniformMatrix2fv_remap_index 732
#define ProgramUniformMatrix2x3dv_remap_index 733
#define ProgramUniformMatrix2x3fv_remap_index 734
#define ProgramUniformMatrix2x4dv_remap_index 735
#define ProgramUniformMatrix2x4fv_remap_index 736
#define ProgramUniformMatrix3dv_remap_index 737
#define ProgramUniformMatrix3fv_remap_index 738
#define ProgramUniformMatrix3x2dv_remap_index 739
#define ProgramUniformMatrix3x2fv_remap_index 740
#define ProgramUniformMatrix3x4dv_remap_index 741
#define ProgramUniformMatrix3x4fv_remap_index 742
#define ProgramUniformMatrix4dv_remap_index 743
#define ProgramUniformMatrix4fv_remap_index 744
#define ProgramUniformMatrix4x2dv_remap_index 745
#define ProgramUniformMatrix4x2fv_remap_index 746
#define ProgramUniformMatrix4x3dv_remap_index 747
#define ProgramUniformMatrix4x3fv_remap_index 748
#define UnlockArraysEXT_remap_index 749
#define UseProgramStages_remap_index 750
#define ValidateProgramPipeline_remap_index 751
#define FramebufferTexture2DMultisampleEXT_remap_index 752
#define DebugMessageCallback_remap_index 753
#define DebugMessageControl_remap_index 754
#define DebugMessageInsert_remap_index 755
#define GetDebugMessageLog_remap_index 756
#define GetObjectLabel_remap_index 757
#define GetObjectPtrLabel_remap_index 758
#define ObjectLabel_remap_index 759
#define ObjectPtrLabel_remap_index 760
#define PopDebugGroup_remap_index 761
#define PushDebugGroup_remap_index 762
#define SecondaryColor3fEXT_remap_index 763
#define SecondaryColor3fvEXT_remap_index 764
#define MultiDrawElementsEXT_remap_index 765
#define FogCoordfEXT_remap_index 766
#define FogCoordfvEXT_remap_index 767
#define ResizeBuffersMESA_remap_index 768
#define WindowPos4dMESA_remap_index 769
#define WindowPos4dvMESA_remap_index 770
#define WindowPos4fMESA_remap_index 771
#define WindowPos4fvMESA_remap_index 772
#define WindowPos4iMESA_remap_index 773
#define WindowPos4ivMESA_remap_index 774
#define WindowPos4sMESA_remap_index 775
#define WindowPos4svMESA_remap_index 776
#define MultiModeDrawArraysIBM_remap_index 777
#define MultiModeDrawElementsIBM_remap_index 778
#define AreProgramsResidentNV_remap_index 779
#define ExecuteProgramNV_remap_index 780
#define GetProgramParameterdvNV_remap_index 781
#define GetProgramParameterfvNV_remap_index 782
#define GetProgramStringNV_remap_index 783
#define GetProgramivNV_remap_index 784
#define GetTrackMatrixivNV_remap_index 785
#define GetVertexAttribdvNV_remap_index 786
#define GetVertexAttribfvNV_remap_index 787
#define GetVertexAttribivNV_remap_index 788
#define LoadProgramNV_remap_index 789
#define ProgramParameters4dvNV_remap_index 790
#define ProgramParameters4fvNV_remap_index 791
#define RequestResidentProgramsNV_remap_index 792
#define TrackMatrixNV_remap_index 793
#define VertexAttrib1dNV_remap_index 794
#define VertexAttrib1dvNV_remap_index 795
#define VertexAttrib1fNV_remap_index 796
#define VertexAttrib1fvNV_remap_index 797
#define VertexAttrib1sNV_remap_index 798
#define VertexAttrib1svNV_remap_index 799
#define VertexAttrib2dNV_remap_index 800
#define VertexAttrib2dvNV_remap_index 801
#define VertexAttrib2fNV_remap_index 802
#define VertexAttrib2fvNV_remap_index 803
#define VertexAttrib2sNV_remap_index 804
#define VertexAttrib2svNV_remap_index 805
#define VertexAttrib3dNV_remap_index 806
#define VertexAttrib3dvNV_remap_index 807
#define VertexAttrib3fNV_remap_index 808
#define VertexAttrib3fvNV_remap_index 809
#define VertexAttrib3sNV_remap_index 810
#define VertexAttrib3svNV_remap_index 811
#define VertexAttrib4dNV_remap_index 812
#define VertexAttrib4dvNV_remap_index 813
#define VertexAttrib4fNV_remap_index 814
#define VertexAttrib4fvNV_remap_index 815
#define VertexAttrib4sNV_remap_index 816
#define VertexAttrib4svNV_remap_index 817
#define VertexAttrib4ubNV_remap_index 818
#define VertexAttrib4ubvNV_remap_index 819
#define VertexAttribPointerNV_remap_index 820
#define VertexAttribs1dvNV_remap_index 821
#define VertexAttribs1fvNV_remap_index 822
#define VertexAttribs1svNV_remap_index 823
#define VertexAttribs2dvNV_remap_index 824
#define VertexAttribs2fvNV_remap_index 825
#define VertexAttribs2svNV_remap_index 826
#define VertexAttribs3dvNV_remap_index 827
#define VertexAttribs3fvNV_remap_index 828
#define VertexAttribs3svNV_remap_index 829
#define VertexAttribs4dvNV_remap_index 830
#define VertexAttribs4fvNV_remap_index 831
#define VertexAttribs4svNV_remap_index 832
#define VertexAttribs4ubvNV_remap_index 833
#define GetTexBumpParameterfvATI_remap_index 834
#define GetTexBumpParameterivATI_remap_index 835
#define TexBumpParameterfvATI_remap_index 836
#define TexBumpParameterivATI_remap_index 837
#define AlphaFragmentOp1ATI_remap_index 838
#define AlphaFragmentOp2ATI_remap_index 839
#define AlphaFragmentOp3ATI_remap_index 840
#define BeginFragmentShaderATI_remap_index 841
#define BindFragmentShaderATI_remap_index 842
#define ColorFragmentOp1ATI_remap_index 843
#define ColorFragmentOp2ATI_remap_index 844
#define ColorFragmentOp3ATI_remap_index 845
#define DeleteFragmentShaderATI_remap_index 846
#define EndFragmentShaderATI_remap_index 847
#define GenFragmentShadersATI_remap_index 848
#define PassTexCoordATI_remap_index 849
#define SampleMapATI_remap_index 850
#define SetFragmentShaderConstantATI_remap_index 851
#define DepthRangeArrayfvOES_remap_index 852
#define DepthRangeIndexedfOES_remap_index 853
#define ActiveStencilFaceEXT_remap_index 854
#define GetProgramNamedParameterdvNV_remap_index 855
#define GetProgramNamedParameterfvNV_remap_index 856
#define ProgramNamedParameter4dNV_remap_index 857
#define ProgramNamedParameter4dvNV_remap_index 858
#define ProgramNamedParameter4fNV_remap_index 859
#define ProgramNamedParameter4fvNV_remap_index 860
#define PrimitiveRestartNV_remap_index 861
#define GetTexGenxvOES_remap_index 862
#define TexGenxOES_remap_index 863
#define TexGenxvOES_remap_index 864
#define DepthBoundsEXT_remap_index 865
#define BindFramebufferEXT_remap_index 866
#define BindRenderbufferEXT_remap_index 867
#define StringMarkerGREMEDY_remap_index 868
#define BufferParameteriAPPLE_remap_index 869
#define FlushMappedBufferRangeAPPLE_remap_index 870
#define VertexAttribI1iEXT_remap_index 871
#define VertexAttribI1uiEXT_remap_index 872
#define VertexAttribI2iEXT_remap_index 873
#define VertexAttribI2ivEXT_remap_index 874
#define VertexAttribI2uiEXT_remap_index 875
#define VertexAttribI2uivEXT_remap_index 876
#define VertexAttribI3iEXT_remap_index 877
#define VertexAttribI3ivEXT_remap_index 878
#define VertexAttribI3uiEXT_remap_index 879
#define VertexAttribI3uivEXT_remap_index 880
#define VertexAttribI4iEXT_remap_index 881
#define VertexAttribI4ivEXT_remap_index 882
#define VertexAttribI4uiEXT_remap_index 883
#define VertexAttribI4uivEXT_remap_index 884
#define ClearColorIiEXT_remap_index 885
#define ClearColorIuiEXT_remap_index 886
#define BindBufferOffsetEXT_remap_index 887
#define BeginPerfMonitorAMD_remap_index 888
#define DeletePerfMonitorsAMD_remap_index 889
#define EndPerfMonitorAMD_remap_index 890
#define GenPerfMonitorsAMD_remap_index 891
#define GetPerfMonitorCounterDataAMD_remap_index 892
#define GetPerfMonitorCounterInfoAMD_remap_index 893
#define GetPerfMonitorCounterStringAMD_remap_index 894
#define GetPerfMonitorCountersAMD_remap_index 895
#define GetPerfMonitorGroupStringAMD_remap_index 896
#define GetPerfMonitorGroupsAMD_remap_index 897
#define SelectPerfMonitorCountersAMD_remap_index 898
#define GetObjectParameterivAPPLE_remap_index 899
#define ObjectPurgeableAPPLE_remap_index 900
#define ObjectUnpurgeableAPPLE_remap_index 901
#define ActiveProgramEXT_remap_index 902
#define CreateShaderProgramEXT_remap_index 903
#define UseShaderProgramEXT_remap_index 904
#define TextureBarrierNV_remap_index 905
#define VDPAUFiniNV_remap_index 906
#define VDPAUGetSurfaceivNV_remap_index 907
#define VDPAUInitNV_remap_index 908
#define VDPAUIsSurfaceNV_remap_index 909
#define VDPAUMapSurfacesNV_remap_index 910
#define VDPAURegisterOutputSurfaceNV_remap_index 911
#define VDPAURegisterVideoSurfaceNV_remap_index 912
#define VDPAUSurfaceAccessNV_remap_index 913
#define VDPAUUnmapSurfacesNV_remap_index 914
#define VDPAUUnregisterSurfaceNV_remap_index 915
#define BeginPerfQueryINTEL_remap_index 916
#define CreatePerfQueryINTEL_remap_index 917
#define DeletePerfQueryINTEL_remap_index 918
#define EndPerfQueryINTEL_remap_index 919
#define GetFirstPerfQueryIdINTEL_remap_index 920
#define GetNextPerfQueryIdINTEL_remap_index 921
#define GetPerfCounterInfoINTEL_remap_index 922
#define GetPerfQueryDataINTEL_remap_index 923
#define GetPerfQueryIdByNameINTEL_remap_index 924
#define GetPerfQueryInfoINTEL_remap_index 925
#define PolygonOffsetClampEXT_remap_index 926
#define SubpixelPrecisionBiasNV_remap_index 927
#define ConservativeRasterParameterfNV_remap_index 928
#define ConservativeRasterParameteriNV_remap_index 929
#define WindowRectanglesEXT_remap_index 930
#define BufferStorageMemEXT_remap_index 931
#define CreateMemoryObjectsEXT_remap_index 932
#define DeleteMemoryObjectsEXT_remap_index 933
#define DeleteSemaphoresEXT_remap_index 934
#define GenSemaphoresEXT_remap_index 935
#define GetMemoryObjectParameterivEXT_remap_index 936
#define GetSemaphoreParameterui64vEXT_remap_index 937
#define GetUnsignedBytei_vEXT_remap_index 938
#define GetUnsignedBytevEXT_remap_index 939
#define IsMemoryObjectEXT_remap_index 940
#define IsSemaphoreEXT_remap_index 941
#define MemoryObjectParameterivEXT_remap_index 942
#define NamedBufferStorageMemEXT_remap_index 943
#define SemaphoreParameterui64vEXT_remap_index 944
#define SignalSemaphoreEXT_remap_index 945
#define TexStorageMem1DEXT_remap_index 946
#define TexStorageMem2DEXT_remap_index 947
#define TexStorageMem2DMultisampleEXT_remap_index 948
#define TexStorageMem3DEXT_remap_index 949
#define TexStorageMem3DMultisampleEXT_remap_index 950
#define TextureStorageMem1DEXT_remap_index 951
#define TextureStorageMem2DEXT_remap_index 952
#define TextureStorageMem2DMultisampleEXT_remap_index 953
#define TextureStorageMem3DEXT_remap_index 954
#define TextureStorageMem3DMultisampleEXT_remap_index 955
#define WaitSemaphoreEXT_remap_index 956
#define ImportMemoryFdEXT_remap_index 957
#define ImportSemaphoreFdEXT_remap_index 958
#define FramebufferFetchBarrierEXT_remap_index 959
#define NamedRenderbufferStorageMultisampleAdvancedAMD_remap_index 960
#define RenderbufferStorageMultisampleAdvancedAMD_remap_index 961
#define StencilFuncSeparateATI_remap_index 962
#define ProgramEnvParameters4fvEXT_remap_index 963
#define ProgramLocalParameters4fvEXT_remap_index 964
#define EGLImageTargetRenderbufferStorageOES_remap_index 965
#define EGLImageTargetTexture2DOES_remap_index 966
#define AlphaFuncx_remap_index 967
#define ClearColorx_remap_index 968
#define ClearDepthx_remap_index 969
#define Color4x_remap_index 970
#define DepthRangex_remap_index 971
#define Fogx_remap_index 972
#define Fogxv_remap_index 973
#define Frustumf_remap_index 974
#define Frustumx_remap_index 975
#define LightModelx_remap_index 976
#define LightModelxv_remap_index 977
#define Lightx_remap_index 978
#define Lightxv_remap_index 979
#define LineWidthx_remap_index 980
#define LoadMatrixx_remap_index 981
#define Materialx_remap_index 982
#define Materialxv_remap_index 983
#define MultMatrixx_remap_index 984
#define MultiTexCoord4x_remap_index 985
#define Normal3x_remap_index 986
#define Orthof_remap_index 987
#define Orthox_remap_index 988
#define PointSizex_remap_index 989
#define PolygonOffsetx_remap_index 990
#define Rotatex_remap_index 991
#define SampleCoveragex_remap_index 992
#define Scalex_remap_index 993
#define TexEnvx_remap_index 994
#define TexEnvxv_remap_index 995
#define TexParameterx_remap_index 996
#define Translatex_remap_index 997
#define ClipPlanef_remap_index 998
#define ClipPlanex_remap_index 999
#define GetClipPlanef_remap_index 1000
#define GetClipPlanex_remap_index 1001
#define GetFixedv_remap_index 1002
#define GetLightxv_remap_index 1003
#define GetMaterialxv_remap_index 1004
#define GetTexEnvxv_remap_index 1005
#define GetTexParameterxv_remap_index 1006
#define PointParameterx_remap_index 1007
#define PointParameterxv_remap_index 1008
#define TexParameterxv_remap_index 1009
#define BlendBarrier_remap_index 1010
#define PrimitiveBoundingBox_remap_index 1011
#define MaxShaderCompilerThreadsKHR_remap_index 1012
#define MatrixLoadfEXT_remap_index 1013
#define MatrixLoaddEXT_remap_index 1014
#define MatrixMultfEXT_remap_index 1015
#define MatrixMultdEXT_remap_index 1016
#define MatrixLoadIdentityEXT_remap_index 1017
#define MatrixRotatefEXT_remap_index 1018
#define MatrixRotatedEXT_remap_index 1019
#define MatrixScalefEXT_remap_index 1020
#define MatrixScaledEXT_remap_index 1021
#define MatrixTranslatefEXT_remap_index 1022
#define MatrixTranslatedEXT_remap_index 1023
#define MatrixOrthoEXT_remap_index 1024
#define MatrixFrustumEXT_remap_index 1025
#define MatrixPushEXT_remap_index 1026
#define MatrixPopEXT_remap_index 1027
#define MatrixLoadTransposefEXT_remap_index 1028
#define MatrixLoadTransposedEXT_remap_index 1029
#define MatrixMultTransposefEXT_remap_index 1030
#define MatrixMultTransposedEXT_remap_index 1031
#define BindMultiTextureEXT_remap_index 1032
#define NamedBufferDataEXT_remap_index 1033
#define NamedBufferSubDataEXT_remap_index 1034
#define NamedBufferStorageEXT_remap_index 1035
#define MapNamedBufferRangeEXT_remap_index 1036
#define TextureImage1DEXT_remap_index 1037
#define TextureImage2DEXT_remap_index 1038
#define TextureImage3DEXT_remap_index 1039
#define TextureSubImage1DEXT_remap_index 1040
#define TextureSubImage2DEXT_remap_index 1041
#define TextureSubImage3DEXT_remap_index 1042
#define CopyTextureImage1DEXT_remap_index 1043
#define CopyTextureImage2DEXT_remap_index 1044
#define CopyTextureSubImage1DEXT_remap_index 1045
#define CopyTextureSubImage2DEXT_remap_index 1046
#define CopyTextureSubImage3DEXT_remap_index 1047
#define MapNamedBufferEXT_remap_index 1048
#define GetTextureParameterivEXT_remap_index 1049
#define GetTextureParameterfvEXT_remap_index 1050
#define TextureParameteriEXT_remap_index 1051
#define TextureParameterivEXT_remap_index 1052
#define TextureParameterfEXT_remap_index 1053
#define TextureParameterfvEXT_remap_index 1054
#define GetTextureImageEXT_remap_index 1055
#define GetTextureLevelParameterivEXT_remap_index 1056
#define GetTextureLevelParameterfvEXT_remap_index 1057
#define GetNamedBufferSubDataEXT_remap_index 1058
#define GetNamedBufferPointervEXT_remap_index 1059
#define GetNamedBufferParameterivEXT_remap_index 1060
#define FlushMappedNamedBufferRangeEXT_remap_index 1061
#define FramebufferDrawBufferEXT_remap_index 1062
#define FramebufferDrawBuffersEXT_remap_index 1063
#define FramebufferReadBufferEXT_remap_index 1064
#define GetFramebufferParameterivEXT_remap_index 1065
#define CheckNamedFramebufferStatusEXT_remap_index 1066
#define NamedFramebufferTexture1DEXT_remap_index 1067
#define NamedFramebufferTexture2DEXT_remap_index 1068
#define NamedFramebufferTexture3DEXT_remap_index 1069
#define NamedFramebufferRenderbufferEXT_remap_index 1070
#define GetNamedFramebufferAttachmentParameterivEXT_remap_index 1071
#define EnableClientStateiEXT_remap_index 1072
#define DisableClientStateiEXT_remap_index 1073
#define GetPointerIndexedvEXT_remap_index 1074
#define MultiTexEnviEXT_remap_index 1075
#define MultiTexEnvivEXT_remap_index 1076
#define MultiTexEnvfEXT_remap_index 1077
#define MultiTexEnvfvEXT_remap_index 1078
#define GetMultiTexEnvivEXT_remap_index 1079
#define GetMultiTexEnvfvEXT_remap_index 1080
#define MultiTexParameteriEXT_remap_index 1081
#define MultiTexParameterivEXT_remap_index 1082
#define MultiTexParameterfEXT_remap_index 1083
#define MultiTexParameterfvEXT_remap_index 1084
#define GetMultiTexImageEXT_remap_index 1085
#define MultiTexImage1DEXT_remap_index 1086
#define MultiTexImage2DEXT_remap_index 1087
#define MultiTexImage3DEXT_remap_index 1088
#define MultiTexSubImage1DEXT_remap_index 1089
#define MultiTexSubImage2DEXT_remap_index 1090
#define MultiTexSubImage3DEXT_remap_index 1091
#define GetMultiTexParameterivEXT_remap_index 1092
#define GetMultiTexParameterfvEXT_remap_index 1093
#define CopyMultiTexImage1DEXT_remap_index 1094
#define CopyMultiTexImage2DEXT_remap_index 1095
#define CopyMultiTexSubImage1DEXT_remap_index 1096
#define CopyMultiTexSubImage2DEXT_remap_index 1097
#define CopyMultiTexSubImage3DEXT_remap_index 1098
#define MultiTexGendEXT_remap_index 1099
#define MultiTexGendvEXT_remap_index 1100
#define MultiTexGenfEXT_remap_index 1101
#define MultiTexGenfvEXT_remap_index 1102
#define MultiTexGeniEXT_remap_index 1103
#define MultiTexGenivEXT_remap_index 1104
#define GetMultiTexGendvEXT_remap_index 1105
#define GetMultiTexGenfvEXT_remap_index 1106
#define GetMultiTexGenivEXT_remap_index 1107
#define MultiTexCoordPointerEXT_remap_index 1108
#define BindImageTextureEXT_remap_index 1109
#define CompressedTextureImage1DEXT_remap_index 1110
#define CompressedTextureImage2DEXT_remap_index 1111
#define CompressedTextureImage3DEXT_remap_index 1112
#define CompressedTextureSubImage1DEXT_remap_index 1113
#define CompressedTextureSubImage2DEXT_remap_index 1114
#define CompressedTextureSubImage3DEXT_remap_index 1115
#define GetCompressedTextureImageEXT_remap_index 1116
#define CompressedMultiTexImage1DEXT_remap_index 1117
#define CompressedMultiTexImage2DEXT_remap_index 1118
#define CompressedMultiTexImage3DEXT_remap_index 1119
#define CompressedMultiTexSubImage1DEXT_remap_index 1120
#define CompressedMultiTexSubImage2DEXT_remap_index 1121
#define CompressedMultiTexSubImage3DEXT_remap_index 1122
#define GetCompressedMultiTexImageEXT_remap_index 1123
#define GetMultiTexLevelParameterivEXT_remap_index 1124
#define GetMultiTexLevelParameterfvEXT_remap_index 1125
#define FramebufferParameteriMESA_remap_index 1126
#define GetFramebufferParameterivMESA_remap_index 1127
#define NamedRenderbufferStorageEXT_remap_index 1128
#define GetNamedRenderbufferParameterivEXT_remap_index 1129
#define ClientAttribDefaultEXT_remap_index 1130
#define PushClientAttribDefaultEXT_remap_index 1131
#define NamedProgramStringEXT_remap_index 1132
#define GetNamedProgramStringEXT_remap_index 1133
#define NamedProgramLocalParameter4fEXT_remap_index 1134
#define NamedProgramLocalParameter4fvEXT_remap_index 1135
#define GetNamedProgramLocalParameterfvEXT_remap_index 1136
#define NamedProgramLocalParameter4dEXT_remap_index 1137
#define NamedProgramLocalParameter4dvEXT_remap_index 1138
#define GetNamedProgramLocalParameterdvEXT_remap_index 1139
#define GetNamedProgramivEXT_remap_index 1140
#define TextureBufferEXT_remap_index 1141
#define MultiTexBufferEXT_remap_index 1142
#define TextureParameterIivEXT_remap_index 1143
#define TextureParameterIuivEXT_remap_index 1144
#define GetTextureParameterIivEXT_remap_index 1145
#define GetTextureParameterIuivEXT_remap_index 1146
#define MultiTexParameterIivEXT_remap_index 1147
#define MultiTexParameterIuivEXT_remap_index 1148
#define GetMultiTexParameterIivEXT_remap_index 1149
#define GetMultiTexParameterIuivEXT_remap_index 1150
#define NamedProgramLocalParameters4fvEXT_remap_index 1151
#define GenerateTextureMipmapEXT_remap_index 1152
#define GenerateMultiTexMipmapEXT_remap_index 1153
#define NamedRenderbufferStorageMultisampleEXT_remap_index 1154
#define NamedCopyBufferSubDataEXT_remap_index 1155
#define VertexArrayVertexOffsetEXT_remap_index 1156
#define VertexArrayColorOffsetEXT_remap_index 1157
#define VertexArrayEdgeFlagOffsetEXT_remap_index 1158
#define VertexArrayIndexOffsetEXT_remap_index 1159
#define VertexArrayNormalOffsetEXT_remap_index 1160
#define VertexArrayTexCoordOffsetEXT_remap_index 1161
#define VertexArrayMultiTexCoordOffsetEXT_remap_index 1162
#define VertexArrayFogCoordOffsetEXT_remap_index 1163
#define VertexArraySecondaryColorOffsetEXT_remap_index 1164
#define VertexArrayVertexAttribOffsetEXT_remap_index 1165
#define VertexArrayVertexAttribIOffsetEXT_remap_index 1166
#define EnableVertexArrayEXT_remap_index 1167
#define DisableVertexArrayEXT_remap_index 1168
#define EnableVertexArrayAttribEXT_remap_index 1169
#define DisableVertexArrayAttribEXT_remap_index 1170
#define GetVertexArrayIntegervEXT_remap_index 1171
#define GetVertexArrayPointervEXT_remap_index 1172
#define GetVertexArrayIntegeri_vEXT_remap_index 1173
#define GetVertexArrayPointeri_vEXT_remap_index 1174
#define ClearNamedBufferDataEXT_remap_index 1175
#define ClearNamedBufferSubDataEXT_remap_index 1176
#define NamedFramebufferParameteriEXT_remap_index 1177
#define GetNamedFramebufferParameterivEXT_remap_index 1178
#define VertexArrayVertexAttribLOffsetEXT_remap_index 1179
#define VertexArrayVertexAttribDivisorEXT_remap_index 1180
#define TextureBufferRangeEXT_remap_index 1181
#define TextureStorage2DMultisampleEXT_remap_index 1182
#define TextureStorage3DMultisampleEXT_remap_index 1183
#define VertexArrayBindVertexBufferEXT_remap_index 1184
#define VertexArrayVertexAttribFormatEXT_remap_index 1185
#define VertexArrayVertexAttribIFormatEXT_remap_index 1186
#define VertexArrayVertexAttribLFormatEXT_remap_index 1187
#define VertexArrayVertexAttribBindingEXT_remap_index 1188
#define VertexArrayVertexBindingDivisorEXT_remap_index 1189
#define NamedBufferPageCommitmentEXT_remap_index 1190
#define NamedStringARB_remap_index 1191
#define DeleteNamedStringARB_remap_index 1192
#define CompileShaderIncludeARB_remap_index 1193
#define IsNamedStringARB_remap_index 1194
#define GetNamedStringARB_remap_index 1195
#define GetNamedStringivARB_remap_index 1196
#define EGLImageTargetTexStorageEXT_remap_index 1197
#define EGLImageTargetTextureStorageEXT_remap_index 1198
#define CopyImageSubDataNV_remap_index 1199
#define ViewportSwizzleNV_remap_index 1200
#define AlphaToCoverageDitherControlNV_remap_index 1201
#define InternalBufferSubDataCopyMESA_remap_index 1202
#define Vertex2hNV_remap_index 1203
#define Vertex2hvNV_remap_index 1204
#define Vertex3hNV_remap_index 1205
#define Vertex3hvNV_remap_index 1206
#define Vertex4hNV_remap_index 1207
#define Vertex4hvNV_remap_index 1208
#define Normal3hNV_remap_index 1209
#define Normal3hvNV_remap_index 1210
#define Color3hNV_remap_index 1211
#define Color3hvNV_remap_index 1212
#define Color4hNV_remap_index 1213
#define Color4hvNV_remap_index 1214
#define TexCoord1hNV_remap_index 1215
#define TexCoord1hvNV_remap_index 1216
#define TexCoord2hNV_remap_index 1217
#define TexCoord2hvNV_remap_index 1218
#define TexCoord3hNV_remap_index 1219
#define TexCoord3hvNV_remap_index 1220
#define TexCoord4hNV_remap_index 1221
#define TexCoord4hvNV_remap_index 1222
#define MultiTexCoord1hNV_remap_index 1223
#define MultiTexCoord1hvNV_remap_index 1224
#define MultiTexCoord2hNV_remap_index 1225
#define MultiTexCoord2hvNV_remap_index 1226
#define MultiTexCoord3hNV_remap_index 1227
#define MultiTexCoord3hvNV_remap_index 1228
#define MultiTexCoord4hNV_remap_index 1229
#define MultiTexCoord4hvNV_remap_index 1230
#define FogCoordhNV_remap_index 1231
#define FogCoordhvNV_remap_index 1232
#define SecondaryColor3hNV_remap_index 1233
#define SecondaryColor3hvNV_remap_index 1234
#define InternalSetError_remap_index 1235
#define VertexAttrib1hNV_remap_index 1236
#define VertexAttrib1hvNV_remap_index 1237
#define VertexAttrib2hNV_remap_index 1238
#define VertexAttrib2hvNV_remap_index 1239
#define VertexAttrib3hNV_remap_index 1240
#define VertexAttrib3hvNV_remap_index 1241
#define VertexAttrib4hNV_remap_index 1242
#define VertexAttrib4hvNV_remap_index 1243
#define VertexAttribs1hvNV_remap_index 1244
#define VertexAttribs2hvNV_remap_index 1245
#define VertexAttribs3hvNV_remap_index 1246
#define VertexAttribs4hvNV_remap_index 1247
#define TexPageCommitmentARB_remap_index 1248
#define TexturePageCommitmentEXT_remap_index 1249
#define ImportMemoryWin32HandleEXT_remap_index 1250
#define ImportSemaphoreWin32HandleEXT_remap_index 1251

#define _gloffset_CompressedTexImage1D driDispatchRemapTable[CompressedTexImage1D_remap_index]
#define _gloffset_CompressedTexImage2D driDispatchRemapTable[CompressedTexImage2D_remap_index]
#define _gloffset_CompressedTexImage3D driDispatchRemapTable[CompressedTexImage3D_remap_index]
#define _gloffset_CompressedTexSubImage1D driDispatchRemapTable[CompressedTexSubImage1D_remap_index]
#define _gloffset_CompressedTexSubImage2D driDispatchRemapTable[CompressedTexSubImage2D_remap_index]
#define _gloffset_CompressedTexSubImage3D driDispatchRemapTable[CompressedTexSubImage3D_remap_index]
#define _gloffset_GetCompressedTexImage driDispatchRemapTable[GetCompressedTexImage_remap_index]
#define _gloffset_LoadTransposeMatrixd driDispatchRemapTable[LoadTransposeMatrixd_remap_index]
#define _gloffset_LoadTransposeMatrixf driDispatchRemapTable[LoadTransposeMatrixf_remap_index]
#define _gloffset_MultTransposeMatrixd driDispatchRemapTable[MultTransposeMatrixd_remap_index]
#define _gloffset_MultTransposeMatrixf driDispatchRemapTable[MultTransposeMatrixf_remap_index]
#define _gloffset_SampleCoverage driDispatchRemapTable[SampleCoverage_remap_index]
#define _gloffset_BlendFuncSeparate driDispatchRemapTable[BlendFuncSeparate_remap_index]
#define _gloffset_FogCoordPointer driDispatchRemapTable[FogCoordPointer_remap_index]
#define _gloffset_FogCoordd driDispatchRemapTable[FogCoordd_remap_index]
#define _gloffset_FogCoorddv driDispatchRemapTable[FogCoorddv_remap_index]
#define _gloffset_MultiDrawArrays driDispatchRemapTable[MultiDrawArrays_remap_index]
#define _gloffset_PointParameterf driDispatchRemapTable[PointParameterf_remap_index]
#define _gloffset_PointParameterfv driDispatchRemapTable[PointParameterfv_remap_index]
#define _gloffset_PointParameteri driDispatchRemapTable[PointParameteri_remap_index]
#define _gloffset_PointParameteriv driDispatchRemapTable[PointParameteriv_remap_index]
#define _gloffset_SecondaryColor3b driDispatchRemapTable[SecondaryColor3b_remap_index]
#define _gloffset_SecondaryColor3bv driDispatchRemapTable[SecondaryColor3bv_remap_index]
#define _gloffset_SecondaryColor3d driDispatchRemapTable[SecondaryColor3d_remap_index]
#define _gloffset_SecondaryColor3dv driDispatchRemapTable[SecondaryColor3dv_remap_index]
#define _gloffset_SecondaryColor3i driDispatchRemapTable[SecondaryColor3i_remap_index]
#define _gloffset_SecondaryColor3iv driDispatchRemapTable[SecondaryColor3iv_remap_index]
#define _gloffset_SecondaryColor3s driDispatchRemapTable[SecondaryColor3s_remap_index]
#define _gloffset_SecondaryColor3sv driDispatchRemapTable[SecondaryColor3sv_remap_index]
#define _gloffset_SecondaryColor3ub driDispatchRemapTable[SecondaryColor3ub_remap_index]
#define _gloffset_SecondaryColor3ubv driDispatchRemapTable[SecondaryColor3ubv_remap_index]
#define _gloffset_SecondaryColor3ui driDispatchRemapTable[SecondaryColor3ui_remap_index]
#define _gloffset_SecondaryColor3uiv driDispatchRemapTable[SecondaryColor3uiv_remap_index]
#define _gloffset_SecondaryColor3us driDispatchRemapTable[SecondaryColor3us_remap_index]
#define _gloffset_SecondaryColor3usv driDispatchRemapTable[SecondaryColor3usv_remap_index]
#define _gloffset_SecondaryColorPointer driDispatchRemapTable[SecondaryColorPointer_remap_index]
#define _gloffset_WindowPos2d driDispatchRemapTable[WindowPos2d_remap_index]
#define _gloffset_WindowPos2dv driDispatchRemapTable[WindowPos2dv_remap_index]
#define _gloffset_WindowPos2f driDispatchRemapTable[WindowPos2f_remap_index]
#define _gloffset_WindowPos2fv driDispatchRemapTable[WindowPos2fv_remap_index]
#define _gloffset_WindowPos2i driDispatchRemapTable[WindowPos2i_remap_index]
#define _gloffset_WindowPos2iv driDispatchRemapTable[WindowPos2iv_remap_index]
#define _gloffset_WindowPos2s driDispatchRemapTable[WindowPos2s_remap_index]
#define _gloffset_WindowPos2sv driDispatchRemapTable[WindowPos2sv_remap_index]
#define _gloffset_WindowPos3d driDispatchRemapTable[WindowPos3d_remap_index]
#define _gloffset_WindowPos3dv driDispatchRemapTable[WindowPos3dv_remap_index]
#define _gloffset_WindowPos3f driDispatchRemapTable[WindowPos3f_remap_index]
#define _gloffset_WindowPos3fv driDispatchRemapTable[WindowPos3fv_remap_index]
#define _gloffset_WindowPos3i driDispatchRemapTable[WindowPos3i_remap_index]
#define _gloffset_WindowPos3iv driDispatchRemapTable[WindowPos3iv_remap_index]
#define _gloffset_WindowPos3s driDispatchRemapTable[WindowPos3s_remap_index]
#define _gloffset_WindowPos3sv driDispatchRemapTable[WindowPos3sv_remap_index]
#define _gloffset_BeginQuery driDispatchRemapTable[BeginQuery_remap_index]
#define _gloffset_BindBuffer driDispatchRemapTable[BindBuffer_remap_index]
#define _gloffset_BufferData driDispatchRemapTable[BufferData_remap_index]
#define _gloffset_BufferSubData driDispatchRemapTable[BufferSubData_remap_index]
#define _gloffset_DeleteBuffers driDispatchRemapTable[DeleteBuffers_remap_index]
#define _gloffset_DeleteQueries driDispatchRemapTable[DeleteQueries_remap_index]
#define _gloffset_EndQuery driDispatchRemapTable[EndQuery_remap_index]
#define _gloffset_GenBuffers driDispatchRemapTable[GenBuffers_remap_index]
#define _gloffset_GenQueries driDispatchRemapTable[GenQueries_remap_index]
#define _gloffset_GetBufferParameteriv driDispatchRemapTable[GetBufferParameteriv_remap_index]
#define _gloffset_GetBufferPointerv driDispatchRemapTable[GetBufferPointerv_remap_index]
#define _gloffset_GetBufferSubData driDispatchRemapTable[GetBufferSubData_remap_index]
#define _gloffset_GetQueryObjectiv driDispatchRemapTable[GetQueryObjectiv_remap_index]
#define _gloffset_GetQueryObjectuiv driDispatchRemapTable[GetQueryObjectuiv_remap_index]
#define _gloffset_GetQueryiv driDispatchRemapTable[GetQueryiv_remap_index]
#define _gloffset_IsBuffer driDispatchRemapTable[IsBuffer_remap_index]
#define _gloffset_IsQuery driDispatchRemapTable[IsQuery_remap_index]
#define _gloffset_MapBuffer driDispatchRemapTable[MapBuffer_remap_index]
#define _gloffset_UnmapBuffer driDispatchRemapTable[UnmapBuffer_remap_index]
#define _gloffset_AttachShader driDispatchRemapTable[AttachShader_remap_index]
#define _gloffset_BindAttribLocation driDispatchRemapTable[BindAttribLocation_remap_index]
#define _gloffset_BlendEquationSeparate driDispatchRemapTable[BlendEquationSeparate_remap_index]
#define _gloffset_CompileShader driDispatchRemapTable[CompileShader_remap_index]
#define _gloffset_CreateProgram driDispatchRemapTable[CreateProgram_remap_index]
#define _gloffset_CreateShader driDispatchRemapTable[CreateShader_remap_index]
#define _gloffset_DeleteProgram driDispatchRemapTable[DeleteProgram_remap_index]
#define _gloffset_DeleteShader driDispatchRemapTable[DeleteShader_remap_index]
#define _gloffset_DetachShader driDispatchRemapTable[DetachShader_remap_index]
#define _gloffset_DisableVertexAttribArray driDispatchRemapTable[DisableVertexAttribArray_remap_index]
#define _gloffset_DrawBuffers driDispatchRemapTable[DrawBuffers_remap_index]
#define _gloffset_EnableVertexAttribArray driDispatchRemapTable[EnableVertexAttribArray_remap_index]
#define _gloffset_GetActiveAttrib driDispatchRemapTable[GetActiveAttrib_remap_index]
#define _gloffset_GetActiveUniform driDispatchRemapTable[GetActiveUniform_remap_index]
#define _gloffset_GetAttachedShaders driDispatchRemapTable[GetAttachedShaders_remap_index]
#define _gloffset_GetAttribLocation driDispatchRemapTable[GetAttribLocation_remap_index]
#define _gloffset_GetProgramInfoLog driDispatchRemapTable[GetProgramInfoLog_remap_index]
#define _gloffset_GetProgramiv driDispatchRemapTable[GetProgramiv_remap_index]
#define _gloffset_GetShaderInfoLog driDispatchRemapTable[GetShaderInfoLog_remap_index]
#define _gloffset_GetShaderSource driDispatchRemapTable[GetShaderSource_remap_index]
#define _gloffset_GetShaderiv driDispatchRemapTable[GetShaderiv_remap_index]
#define _gloffset_GetUniformLocation driDispatchRemapTable[GetUniformLocation_remap_index]
#define _gloffset_GetUniformfv driDispatchRemapTable[GetUniformfv_remap_index]
#define _gloffset_GetUniformiv driDispatchRemapTable[GetUniformiv_remap_index]
#define _gloffset_GetVertexAttribPointerv driDispatchRemapTable[GetVertexAttribPointerv_remap_index]
#define _gloffset_GetVertexAttribdv driDispatchRemapTable[GetVertexAttribdv_remap_index]
#define _gloffset_GetVertexAttribfv driDispatchRemapTable[GetVertexAttribfv_remap_index]
#define _gloffset_GetVertexAttribiv driDispatchRemapTable[GetVertexAttribiv_remap_index]
#define _gloffset_IsProgram driDispatchRemapTable[IsProgram_remap_index]
#define _gloffset_IsShader driDispatchRemapTable[IsShader_remap_index]
#define _gloffset_LinkProgram driDispatchRemapTable[LinkProgram_remap_index]
#define _gloffset_ShaderSource driDispatchRemapTable[ShaderSource_remap_index]
#define _gloffset_StencilFuncSeparate driDispatchRemapTable[StencilFuncSeparate_remap_index]
#define _gloffset_StencilMaskSeparate driDispatchRemapTable[StencilMaskSeparate_remap_index]
#define _gloffset_StencilOpSeparate driDispatchRemapTable[StencilOpSeparate_remap_index]
#define _gloffset_Uniform1f driDispatchRemapTable[Uniform1f_remap_index]
#define _gloffset_Uniform1fv driDispatchRemapTable[Uniform1fv_remap_index]
#define _gloffset_Uniform1i driDispatchRemapTable[Uniform1i_remap_index]
#define _gloffset_Uniform1iv driDispatchRemapTable[Uniform1iv_remap_index]
#define _gloffset_Uniform2f driDispatchRemapTable[Uniform2f_remap_index]
#define _gloffset_Uniform2fv driDispatchRemapTable[Uniform2fv_remap_index]
#define _gloffset_Uniform2i driDispatchRemapTable[Uniform2i_remap_index]
#define _gloffset_Uniform2iv driDispatchRemapTable[Uniform2iv_remap_index]
#define _gloffset_Uniform3f driDispatchRemapTable[Uniform3f_remap_index]
#define _gloffset_Uniform3fv driDispatchRemapTable[Uniform3fv_remap_index]
#define _gloffset_Uniform3i driDispatchRemapTable[Uniform3i_remap_index]
#define _gloffset_Uniform3iv driDispatchRemapTable[Uniform3iv_remap_index]
#define _gloffset_Uniform4f driDispatchRemapTable[Uniform4f_remap_index]
#define _gloffset_Uniform4fv driDispatchRemapTable[Uniform4fv_remap_index]
#define _gloffset_Uniform4i driDispatchRemapTable[Uniform4i_remap_index]
#define _gloffset_Uniform4iv driDispatchRemapTable[Uniform4iv_remap_index]
#define _gloffset_UniformMatrix2fv driDispatchRemapTable[UniformMatrix2fv_remap_index]
#define _gloffset_UniformMatrix3fv driDispatchRemapTable[UniformMatrix3fv_remap_index]
#define _gloffset_UniformMatrix4fv driDispatchRemapTable[UniformMatrix4fv_remap_index]
#define _gloffset_UseProgram driDispatchRemapTable[UseProgram_remap_index]
#define _gloffset_ValidateProgram driDispatchRemapTable[ValidateProgram_remap_index]
#define _gloffset_VertexAttrib1d driDispatchRemapTable[VertexAttrib1d_remap_index]
#define _gloffset_VertexAttrib1dv driDispatchRemapTable[VertexAttrib1dv_remap_index]
#define _gloffset_VertexAttrib1s driDispatchRemapTable[VertexAttrib1s_remap_index]
#define _gloffset_VertexAttrib1sv driDispatchRemapTable[VertexAttrib1sv_remap_index]
#define _gloffset_VertexAttrib2d driDispatchRemapTable[VertexAttrib2d_remap_index]
#define _gloffset_VertexAttrib2dv driDispatchRemapTable[VertexAttrib2dv_remap_index]
#define _gloffset_VertexAttrib2s driDispatchRemapTable[VertexAttrib2s_remap_index]
#define _gloffset_VertexAttrib2sv driDispatchRemapTable[VertexAttrib2sv_remap_index]
#define _gloffset_VertexAttrib3d driDispatchRemapTable[VertexAttrib3d_remap_index]
#define _gloffset_VertexAttrib3dv driDispatchRemapTable[VertexAttrib3dv_remap_index]
#define _gloffset_VertexAttrib3s driDispatchRemapTable[VertexAttrib3s_remap_index]
#define _gloffset_VertexAttrib3sv driDispatchRemapTable[VertexAttrib3sv_remap_index]
#define _gloffset_VertexAttrib4Nbv driDispatchRemapTable[VertexAttrib4Nbv_remap_index]
#define _gloffset_VertexAttrib4Niv driDispatchRemapTable[VertexAttrib4Niv_remap_index]
#define _gloffset_VertexAttrib4Nsv driDispatchRemapTable[VertexAttrib4Nsv_remap_index]
#define _gloffset_VertexAttrib4Nub driDispatchRemapTable[VertexAttrib4Nub_remap_index]
#define _gloffset_VertexAttrib4Nubv driDispatchRemapTable[VertexAttrib4Nubv_remap_index]
#define _gloffset_VertexAttrib4Nuiv driDispatchRemapTable[VertexAttrib4Nuiv_remap_index]
#define _gloffset_VertexAttrib4Nusv driDispatchRemapTable[VertexAttrib4Nusv_remap_index]
#define _gloffset_VertexAttrib4bv driDispatchRemapTable[VertexAttrib4bv_remap_index]
#define _gloffset_VertexAttrib4d driDispatchRemapTable[VertexAttrib4d_remap_index]
#define _gloffset_VertexAttrib4dv driDispatchRemapTable[VertexAttrib4dv_remap_index]
#define _gloffset_VertexAttrib4iv driDispatchRemapTable[VertexAttrib4iv_remap_index]
#define _gloffset_VertexAttrib4s driDispatchRemapTable[VertexAttrib4s_remap_index]
#define _gloffset_VertexAttrib4sv driDispatchRemapTable[VertexAttrib4sv_remap_index]
#define _gloffset_VertexAttrib4ubv driDispatchRemapTable[VertexAttrib4ubv_remap_index]
#define _gloffset_VertexAttrib4uiv driDispatchRemapTable[VertexAttrib4uiv_remap_index]
#define _gloffset_VertexAttrib4usv driDispatchRemapTable[VertexAttrib4usv_remap_index]
#define _gloffset_VertexAttribPointer driDispatchRemapTable[VertexAttribPointer_remap_index]
#define _gloffset_UniformMatrix2x3fv driDispatchRemapTable[UniformMatrix2x3fv_remap_index]
#define _gloffset_UniformMatrix2x4fv driDispatchRemapTable[UniformMatrix2x4fv_remap_index]
#define _gloffset_UniformMatrix3x2fv driDispatchRemapTable[UniformMatrix3x2fv_remap_index]
#define _gloffset_UniformMatrix3x4fv driDispatchRemapTable[UniformMatrix3x4fv_remap_index]
#define _gloffset_UniformMatrix4x2fv driDispatchRemapTable[UniformMatrix4x2fv_remap_index]
#define _gloffset_UniformMatrix4x3fv driDispatchRemapTable[UniformMatrix4x3fv_remap_index]
#define _gloffset_BeginConditionalRender driDispatchRemapTable[BeginConditionalRender_remap_index]
#define _gloffset_BeginTransformFeedback driDispatchRemapTable[BeginTransformFeedback_remap_index]
#define _gloffset_BindBufferBase driDispatchRemapTable[BindBufferBase_remap_index]
#define _gloffset_BindBufferRange driDispatchRemapTable[BindBufferRange_remap_index]
#define _gloffset_BindFragDataLocation driDispatchRemapTable[BindFragDataLocation_remap_index]
#define _gloffset_ClampColor driDispatchRemapTable[ClampColor_remap_index]
#define _gloffset_ClearBufferfi driDispatchRemapTable[ClearBufferfi_remap_index]
#define _gloffset_ClearBufferfv driDispatchRemapTable[ClearBufferfv_remap_index]
#define _gloffset_ClearBufferiv driDispatchRemapTable[ClearBufferiv_remap_index]
#define _gloffset_ClearBufferuiv driDispatchRemapTable[ClearBufferuiv_remap_index]
#define _gloffset_ColorMaski driDispatchRemapTable[ColorMaski_remap_index]
#define _gloffset_Disablei driDispatchRemapTable[Disablei_remap_index]
#define _gloffset_Enablei driDispatchRemapTable[Enablei_remap_index]
#define _gloffset_EndConditionalRender driDispatchRemapTable[EndConditionalRender_remap_index]
#define _gloffset_EndTransformFeedback driDispatchRemapTable[EndTransformFeedback_remap_index]
#define _gloffset_GetBooleani_v driDispatchRemapTable[GetBooleani_v_remap_index]
#define _gloffset_GetFragDataLocation driDispatchRemapTable[GetFragDataLocation_remap_index]
#define _gloffset_GetIntegeri_v driDispatchRemapTable[GetIntegeri_v_remap_index]
#define _gloffset_GetStringi driDispatchRemapTable[GetStringi_remap_index]
#define _gloffset_GetTexParameterIiv driDispatchRemapTable[GetTexParameterIiv_remap_index]
#define _gloffset_GetTexParameterIuiv driDispatchRemapTable[GetTexParameterIuiv_remap_index]
#define _gloffset_GetTransformFeedbackVarying driDispatchRemapTable[GetTransformFeedbackVarying_remap_index]
#define _gloffset_GetUniformuiv driDispatchRemapTable[GetUniformuiv_remap_index]
#define _gloffset_GetVertexAttribIiv driDispatchRemapTable[GetVertexAttribIiv_remap_index]
#define _gloffset_GetVertexAttribIuiv driDispatchRemapTable[GetVertexAttribIuiv_remap_index]
#define _gloffset_IsEnabledi driDispatchRemapTable[IsEnabledi_remap_index]
#define _gloffset_TexParameterIiv driDispatchRemapTable[TexParameterIiv_remap_index]
#define _gloffset_TexParameterIuiv driDispatchRemapTable[TexParameterIuiv_remap_index]
#define _gloffset_TransformFeedbackVaryings driDispatchRemapTable[TransformFeedbackVaryings_remap_index]
#define _gloffset_Uniform1ui driDispatchRemapTable[Uniform1ui_remap_index]
#define _gloffset_Uniform1uiv driDispatchRemapTable[Uniform1uiv_remap_index]
#define _gloffset_Uniform2ui driDispatchRemapTable[Uniform2ui_remap_index]
#define _gloffset_Uniform2uiv driDispatchRemapTable[Uniform2uiv_remap_index]
#define _gloffset_Uniform3ui driDispatchRemapTable[Uniform3ui_remap_index]
#define _gloffset_Uniform3uiv driDispatchRemapTable[Uniform3uiv_remap_index]
#define _gloffset_Uniform4ui driDispatchRemapTable[Uniform4ui_remap_index]
#define _gloffset_Uniform4uiv driDispatchRemapTable[Uniform4uiv_remap_index]
#define _gloffset_VertexAttribI1iv driDispatchRemapTable[VertexAttribI1iv_remap_index]
#define _gloffset_VertexAttribI1uiv driDispatchRemapTable[VertexAttribI1uiv_remap_index]
#define _gloffset_VertexAttribI4bv driDispatchRemapTable[VertexAttribI4bv_remap_index]
#define _gloffset_VertexAttribI4sv driDispatchRemapTable[VertexAttribI4sv_remap_index]
#define _gloffset_VertexAttribI4ubv driDispatchRemapTable[VertexAttribI4ubv_remap_index]
#define _gloffset_VertexAttribI4usv driDispatchRemapTable[VertexAttribI4usv_remap_index]
#define _gloffset_VertexAttribIPointer driDispatchRemapTable[VertexAttribIPointer_remap_index]
#define _gloffset_PrimitiveRestartIndex driDispatchRemapTable[PrimitiveRestartIndex_remap_index]
#define _gloffset_TexBuffer driDispatchRemapTable[TexBuffer_remap_index]
#define _gloffset_FramebufferTexture driDispatchRemapTable[FramebufferTexture_remap_index]
#define _gloffset_GetBufferParameteri64v driDispatchRemapTable[GetBufferParameteri64v_remap_index]
#define _gloffset_GetInteger64i_v driDispatchRemapTable[GetInteger64i_v_remap_index]
#define _gloffset_VertexAttribDivisor driDispatchRemapTable[VertexAttribDivisor_remap_index]
#define _gloffset_MinSampleShading driDispatchRemapTable[MinSampleShading_remap_index]
#define _gloffset_MemoryBarrierByRegion driDispatchRemapTable[MemoryBarrierByRegion_remap_index]
#define _gloffset_BindProgramARB driDispatchRemapTable[BindProgramARB_remap_index]
#define _gloffset_DeleteProgramsARB driDispatchRemapTable[DeleteProgramsARB_remap_index]
#define _gloffset_GenProgramsARB driDispatchRemapTable[GenProgramsARB_remap_index]
#define _gloffset_GetProgramEnvParameterdvARB driDispatchRemapTable[GetProgramEnvParameterdvARB_remap_index]
#define _gloffset_GetProgramEnvParameterfvARB driDispatchRemapTable[GetProgramEnvParameterfvARB_remap_index]
#define _gloffset_GetProgramLocalParameterdvARB driDispatchRemapTable[GetProgramLocalParameterdvARB_remap_index]
#define _gloffset_GetProgramLocalParameterfvARB driDispatchRemapTable[GetProgramLocalParameterfvARB_remap_index]
#define _gloffset_GetProgramStringARB driDispatchRemapTable[GetProgramStringARB_remap_index]
#define _gloffset_GetProgramivARB driDispatchRemapTable[GetProgramivARB_remap_index]
#define _gloffset_IsProgramARB driDispatchRemapTable[IsProgramARB_remap_index]
#define _gloffset_ProgramEnvParameter4dARB driDispatchRemapTable[ProgramEnvParameter4dARB_remap_index]
#define _gloffset_ProgramEnvParameter4dvARB driDispatchRemapTable[ProgramEnvParameter4dvARB_remap_index]
#define _gloffset_ProgramEnvParameter4fARB driDispatchRemapTable[ProgramEnvParameter4fARB_remap_index]
#define _gloffset_ProgramEnvParameter4fvARB driDispatchRemapTable[ProgramEnvParameter4fvARB_remap_index]
#define _gloffset_ProgramLocalParameter4dARB driDispatchRemapTable[ProgramLocalParameter4dARB_remap_index]
#define _gloffset_ProgramLocalParameter4dvARB driDispatchRemapTable[ProgramLocalParameter4dvARB_remap_index]
#define _gloffset_ProgramLocalParameter4fARB driDispatchRemapTable[ProgramLocalParameter4fARB_remap_index]
#define _gloffset_ProgramLocalParameter4fvARB driDispatchRemapTable[ProgramLocalParameter4fvARB_remap_index]
#define _gloffset_ProgramStringARB driDispatchRemapTable[ProgramStringARB_remap_index]
#define _gloffset_VertexAttrib1fARB driDispatchRemapTable[VertexAttrib1fARB_remap_index]
#define _gloffset_VertexAttrib1fvARB driDispatchRemapTable[VertexAttrib1fvARB_remap_index]
#define _gloffset_VertexAttrib2fARB driDispatchRemapTable[VertexAttrib2fARB_remap_index]
#define _gloffset_VertexAttrib2fvARB driDispatchRemapTable[VertexAttrib2fvARB_remap_index]
#define _gloffset_VertexAttrib3fARB driDispatchRemapTable[VertexAttrib3fARB_remap_index]
#define _gloffset_VertexAttrib3fvARB driDispatchRemapTable[VertexAttrib3fvARB_remap_index]
#define _gloffset_VertexAttrib4fARB driDispatchRemapTable[VertexAttrib4fARB_remap_index]
#define _gloffset_VertexAttrib4fvARB driDispatchRemapTable[VertexAttrib4fvARB_remap_index]
#define _gloffset_AttachObjectARB driDispatchRemapTable[AttachObjectARB_remap_index]
#define _gloffset_CreateProgramObjectARB driDispatchRemapTable[CreateProgramObjectARB_remap_index]
#define _gloffset_CreateShaderObjectARB driDispatchRemapTable[CreateShaderObjectARB_remap_index]
#define _gloffset_DeleteObjectARB driDispatchRemapTable[DeleteObjectARB_remap_index]
#define _gloffset_DetachObjectARB driDispatchRemapTable[DetachObjectARB_remap_index]
#define _gloffset_GetAttachedObjectsARB driDispatchRemapTable[GetAttachedObjectsARB_remap_index]
#define _gloffset_GetHandleARB driDispatchRemapTable[GetHandleARB_remap_index]
#define _gloffset_GetInfoLogARB driDispatchRemapTable[GetInfoLogARB_remap_index]
#define _gloffset_GetObjectParameterfvARB driDispatchRemapTable[GetObjectParameterfvARB_remap_index]
#define _gloffset_GetObjectParameterivARB driDispatchRemapTable[GetObjectParameterivARB_remap_index]
#define _gloffset_DrawArraysInstancedARB driDispatchRemapTable[DrawArraysInstancedARB_remap_index]
#define _gloffset_DrawElementsInstancedARB driDispatchRemapTable[DrawElementsInstancedARB_remap_index]
#define _gloffset_BindFramebuffer driDispatchRemapTable[BindFramebuffer_remap_index]
#define _gloffset_BindRenderbuffer driDispatchRemapTable[BindRenderbuffer_remap_index]
#define _gloffset_BlitFramebuffer driDispatchRemapTable[BlitFramebuffer_remap_index]
#define _gloffset_CheckFramebufferStatus driDispatchRemapTable[CheckFramebufferStatus_remap_index]
#define _gloffset_DeleteFramebuffers driDispatchRemapTable[DeleteFramebuffers_remap_index]
#define _gloffset_DeleteRenderbuffers driDispatchRemapTable[DeleteRenderbuffers_remap_index]
#define _gloffset_FramebufferRenderbuffer driDispatchRemapTable[FramebufferRenderbuffer_remap_index]
#define _gloffset_FramebufferTexture1D driDispatchRemapTable[FramebufferTexture1D_remap_index]
#define _gloffset_FramebufferTexture2D driDispatchRemapTable[FramebufferTexture2D_remap_index]
#define _gloffset_FramebufferTexture3D driDispatchRemapTable[FramebufferTexture3D_remap_index]
#define _gloffset_FramebufferTextureLayer driDispatchRemapTable[FramebufferTextureLayer_remap_index]
#define _gloffset_GenFramebuffers driDispatchRemapTable[GenFramebuffers_remap_index]
#define _gloffset_GenRenderbuffers driDispatchRemapTable[GenRenderbuffers_remap_index]
#define _gloffset_GenerateMipmap driDispatchRemapTable[GenerateMipmap_remap_index]
#define _gloffset_GetFramebufferAttachmentParameteriv driDispatchRemapTable[GetFramebufferAttachmentParameteriv_remap_index]
#define _gloffset_GetRenderbufferParameteriv driDispatchRemapTable[GetRenderbufferParameteriv_remap_index]
#define _gloffset_IsFramebuffer driDispatchRemapTable[IsFramebuffer_remap_index]
#define _gloffset_IsRenderbuffer driDispatchRemapTable[IsRenderbuffer_remap_index]
#define _gloffset_RenderbufferStorage driDispatchRemapTable[RenderbufferStorage_remap_index]
#define _gloffset_RenderbufferStorageMultisample driDispatchRemapTable[RenderbufferStorageMultisample_remap_index]
#define _gloffset_FlushMappedBufferRange driDispatchRemapTable[FlushMappedBufferRange_remap_index]
#define _gloffset_MapBufferRange driDispatchRemapTable[MapBufferRange_remap_index]
#define _gloffset_BindVertexArray driDispatchRemapTable[BindVertexArray_remap_index]
#define _gloffset_DeleteVertexArrays driDispatchRemapTable[DeleteVertexArrays_remap_index]
#define _gloffset_GenVertexArrays driDispatchRemapTable[GenVertexArrays_remap_index]
#define _gloffset_IsVertexArray driDispatchRemapTable[IsVertexArray_remap_index]
#define _gloffset_GetActiveUniformBlockName driDispatchRemapTable[GetActiveUniformBlockName_remap_index]
#define _gloffset_GetActiveUniformBlockiv driDispatchRemapTable[GetActiveUniformBlockiv_remap_index]
#define _gloffset_GetActiveUniformName driDispatchRemapTable[GetActiveUniformName_remap_index]
#define _gloffset_GetActiveUniformsiv driDispatchRemapTable[GetActiveUniformsiv_remap_index]
#define _gloffset_GetUniformBlockIndex driDispatchRemapTable[GetUniformBlockIndex_remap_index]
#define _gloffset_GetUniformIndices driDispatchRemapTable[GetUniformIndices_remap_index]
#define _gloffset_UniformBlockBinding driDispatchRemapTable[UniformBlockBinding_remap_index]
#define _gloffset_CopyBufferSubData driDispatchRemapTable[CopyBufferSubData_remap_index]
#define _gloffset_ClientWaitSync driDispatchRemapTable[ClientWaitSync_remap_index]
#define _gloffset_DeleteSync driDispatchRemapTable[DeleteSync_remap_index]
#define _gloffset_FenceSync driDispatchRemapTable[FenceSync_remap_index]
#define _gloffset_GetInteger64v driDispatchRemapTable[GetInteger64v_remap_index]
#define _gloffset_GetSynciv driDispatchRemapTable[GetSynciv_remap_index]
#define _gloffset_IsSync driDispatchRemapTable[IsSync_remap_index]
#define _gloffset_WaitSync driDispatchRemapTable[WaitSync_remap_index]
#define _gloffset_DrawElementsBaseVertex driDispatchRemapTable[DrawElementsBaseVertex_remap_index]
#define _gloffset_DrawElementsInstancedBaseVertex driDispatchRemapTable[DrawElementsInstancedBaseVertex_remap_index]
#define _gloffset_DrawRangeElementsBaseVertex driDispatchRemapTable[DrawRangeElementsBaseVertex_remap_index]
#define _gloffset_MultiDrawElementsBaseVertex driDispatchRemapTable[MultiDrawElementsBaseVertex_remap_index]
#define _gloffset_ProvokingVertex driDispatchRemapTable[ProvokingVertex_remap_index]
#define _gloffset_GetMultisamplefv driDispatchRemapTable[GetMultisamplefv_remap_index]
#define _gloffset_SampleMaski driDispatchRemapTable[SampleMaski_remap_index]
#define _gloffset_TexImage2DMultisample driDispatchRemapTable[TexImage2DMultisample_remap_index]
#define _gloffset_TexImage3DMultisample driDispatchRemapTable[TexImage3DMultisample_remap_index]
#define _gloffset_BlendEquationSeparateiARB driDispatchRemapTable[BlendEquationSeparateiARB_remap_index]
#define _gloffset_BlendEquationiARB driDispatchRemapTable[BlendEquationiARB_remap_index]
#define _gloffset_BlendFuncSeparateiARB driDispatchRemapTable[BlendFuncSeparateiARB_remap_index]
#define _gloffset_BlendFunciARB driDispatchRemapTable[BlendFunciARB_remap_index]
#define _gloffset_BindFragDataLocationIndexed driDispatchRemapTable[BindFragDataLocationIndexed_remap_index]
#define _gloffset_GetFragDataIndex driDispatchRemapTable[GetFragDataIndex_remap_index]
#define _gloffset_BindSampler driDispatchRemapTable[BindSampler_remap_index]
#define _gloffset_DeleteSamplers driDispatchRemapTable[DeleteSamplers_remap_index]
#define _gloffset_GenSamplers driDispatchRemapTable[GenSamplers_remap_index]
#define _gloffset_GetSamplerParameterIiv driDispatchRemapTable[GetSamplerParameterIiv_remap_index]
#define _gloffset_GetSamplerParameterIuiv driDispatchRemapTable[GetSamplerParameterIuiv_remap_index]
#define _gloffset_GetSamplerParameterfv driDispatchRemapTable[GetSamplerParameterfv_remap_index]
#define _gloffset_GetSamplerParameteriv driDispatchRemapTable[GetSamplerParameteriv_remap_index]
#define _gloffset_IsSampler driDispatchRemapTable[IsSampler_remap_index]
#define _gloffset_SamplerParameterIiv driDispatchRemapTable[SamplerParameterIiv_remap_index]
#define _gloffset_SamplerParameterIuiv driDispatchRemapTable[SamplerParameterIuiv_remap_index]
#define _gloffset_SamplerParameterf driDispatchRemapTable[SamplerParameterf_remap_index]
#define _gloffset_SamplerParameterfv driDispatchRemapTable[SamplerParameterfv_remap_index]
#define _gloffset_SamplerParameteri driDispatchRemapTable[SamplerParameteri_remap_index]
#define _gloffset_SamplerParameteriv driDispatchRemapTable[SamplerParameteriv_remap_index]
#define _gloffset_GetQueryObjecti64v driDispatchRemapTable[GetQueryObjecti64v_remap_index]
#define _gloffset_GetQueryObjectui64v driDispatchRemapTable[GetQueryObjectui64v_remap_index]
#define _gloffset_QueryCounter driDispatchRemapTable[QueryCounter_remap_index]
#define _gloffset_ColorP3ui driDispatchRemapTable[ColorP3ui_remap_index]
#define _gloffset_ColorP3uiv driDispatchRemapTable[ColorP3uiv_remap_index]
#define _gloffset_ColorP4ui driDispatchRemapTable[ColorP4ui_remap_index]
#define _gloffset_ColorP4uiv driDispatchRemapTable[ColorP4uiv_remap_index]
#define _gloffset_MultiTexCoordP1ui driDispatchRemapTable[MultiTexCoordP1ui_remap_index]
#define _gloffset_MultiTexCoordP1uiv driDispatchRemapTable[MultiTexCoordP1uiv_remap_index]
#define _gloffset_MultiTexCoordP2ui driDispatchRemapTable[MultiTexCoordP2ui_remap_index]
#define _gloffset_MultiTexCoordP2uiv driDispatchRemapTable[MultiTexCoordP2uiv_remap_index]
#define _gloffset_MultiTexCoordP3ui driDispatchRemapTable[MultiTexCoordP3ui_remap_index]
#define _gloffset_MultiTexCoordP3uiv driDispatchRemapTable[MultiTexCoordP3uiv_remap_index]
#define _gloffset_MultiTexCoordP4ui driDispatchRemapTable[MultiTexCoordP4ui_remap_index]
#define _gloffset_MultiTexCoordP4uiv driDispatchRemapTable[MultiTexCoordP4uiv_remap_index]
#define _gloffset_NormalP3ui driDispatchRemapTable[NormalP3ui_remap_index]
#define _gloffset_NormalP3uiv driDispatchRemapTable[NormalP3uiv_remap_index]
#define _gloffset_SecondaryColorP3ui driDispatchRemapTable[SecondaryColorP3ui_remap_index]
#define _gloffset_SecondaryColorP3uiv driDispatchRemapTable[SecondaryColorP3uiv_remap_index]
#define _gloffset_TexCoordP1ui driDispatchRemapTable[TexCoordP1ui_remap_index]
#define _gloffset_TexCoordP1uiv driDispatchRemapTable[TexCoordP1uiv_remap_index]
#define _gloffset_TexCoordP2ui driDispatchRemapTable[TexCoordP2ui_remap_index]
#define _gloffset_TexCoordP2uiv driDispatchRemapTable[TexCoordP2uiv_remap_index]
#define _gloffset_TexCoordP3ui driDispatchRemapTable[TexCoordP3ui_remap_index]
#define _gloffset_TexCoordP3uiv driDispatchRemapTable[TexCoordP3uiv_remap_index]
#define _gloffset_TexCoordP4ui driDispatchRemapTable[TexCoordP4ui_remap_index]
#define _gloffset_TexCoordP4uiv driDispatchRemapTable[TexCoordP4uiv_remap_index]
#define _gloffset_VertexAttribP1ui driDispatchRemapTable[VertexAttribP1ui_remap_index]
#define _gloffset_VertexAttribP1uiv driDispatchRemapTable[VertexAttribP1uiv_remap_index]
#define _gloffset_VertexAttribP2ui driDispatchRemapTable[VertexAttribP2ui_remap_index]
#define _gloffset_VertexAttribP2uiv driDispatchRemapTable[VertexAttribP2uiv_remap_index]
#define _gloffset_VertexAttribP3ui driDispatchRemapTable[VertexAttribP3ui_remap_index]
#define _gloffset_VertexAttribP3uiv driDispatchRemapTable[VertexAttribP3uiv_remap_index]
#define _gloffset_VertexAttribP4ui driDispatchRemapTable[VertexAttribP4ui_remap_index]
#define _gloffset_VertexAttribP4uiv driDispatchRemapTable[VertexAttribP4uiv_remap_index]
#define _gloffset_VertexP2ui driDispatchRemapTable[VertexP2ui_remap_index]
#define _gloffset_VertexP2uiv driDispatchRemapTable[VertexP2uiv_remap_index]
#define _gloffset_VertexP3ui driDispatchRemapTable[VertexP3ui_remap_index]
#define _gloffset_VertexP3uiv driDispatchRemapTable[VertexP3uiv_remap_index]
#define _gloffset_VertexP4ui driDispatchRemapTable[VertexP4ui_remap_index]
#define _gloffset_VertexP4uiv driDispatchRemapTable[VertexP4uiv_remap_index]
#define _gloffset_DrawArraysIndirect driDispatchRemapTable[DrawArraysIndirect_remap_index]
#define _gloffset_DrawElementsIndirect driDispatchRemapTable[DrawElementsIndirect_remap_index]
#define _gloffset_GetUniformdv driDispatchRemapTable[GetUniformdv_remap_index]
#define _gloffset_Uniform1d driDispatchRemapTable[Uniform1d_remap_index]
#define _gloffset_Uniform1dv driDispatchRemapTable[Uniform1dv_remap_index]
#define _gloffset_Uniform2d driDispatchRemapTable[Uniform2d_remap_index]
#define _gloffset_Uniform2dv driDispatchRemapTable[Uniform2dv_remap_index]
#define _gloffset_Uniform3d driDispatchRemapTable[Uniform3d_remap_index]
#define _gloffset_Uniform3dv driDispatchRemapTable[Uniform3dv_remap_index]
#define _gloffset_Uniform4d driDispatchRemapTable[Uniform4d_remap_index]
#define _gloffset_Uniform4dv driDispatchRemapTable[Uniform4dv_remap_index]
#define _gloffset_UniformMatrix2dv driDispatchRemapTable[UniformMatrix2dv_remap_index]
#define _gloffset_UniformMatrix2x3dv driDispatchRemapTable[UniformMatrix2x3dv_remap_index]
#define _gloffset_UniformMatrix2x4dv driDispatchRemapTable[UniformMatrix2x4dv_remap_index]
#define _gloffset_UniformMatrix3dv driDispatchRemapTable[UniformMatrix3dv_remap_index]
#define _gloffset_UniformMatrix3x2dv driDispatchRemapTable[UniformMatrix3x2dv_remap_index]
#define _gloffset_UniformMatrix3x4dv driDispatchRemapTable[UniformMatrix3x4dv_remap_index]
#define _gloffset_UniformMatrix4dv driDispatchRemapTable[UniformMatrix4dv_remap_index]
#define _gloffset_UniformMatrix4x2dv driDispatchRemapTable[UniformMatrix4x2dv_remap_index]
#define _gloffset_UniformMatrix4x3dv driDispatchRemapTable[UniformMatrix4x3dv_remap_index]
#define _gloffset_GetActiveSubroutineName driDispatchRemapTable[GetActiveSubroutineName_remap_index]
#define _gloffset_GetActiveSubroutineUniformName driDispatchRemapTable[GetActiveSubroutineUniformName_remap_index]
#define _gloffset_GetActiveSubroutineUniformiv driDispatchRemapTable[GetActiveSubroutineUniformiv_remap_index]
#define _gloffset_GetProgramStageiv driDispatchRemapTable[GetProgramStageiv_remap_index]
#define _gloffset_GetSubroutineIndex driDispatchRemapTable[GetSubroutineIndex_remap_index]
#define _gloffset_GetSubroutineUniformLocation driDispatchRemapTable[GetSubroutineUniformLocation_remap_index]
#define _gloffset_GetUniformSubroutineuiv driDispatchRemapTable[GetUniformSubroutineuiv_remap_index]
#define _gloffset_UniformSubroutinesuiv driDispatchRemapTable[UniformSubroutinesuiv_remap_index]
#define _gloffset_PatchParameterfv driDispatchRemapTable[PatchParameterfv_remap_index]
#define _gloffset_PatchParameteri driDispatchRemapTable[PatchParameteri_remap_index]
#define _gloffset_BindTransformFeedback driDispatchRemapTable[BindTransformFeedback_remap_index]
#define _gloffset_DeleteTransformFeedbacks driDispatchRemapTable[DeleteTransformFeedbacks_remap_index]
#define _gloffset_DrawTransformFeedback driDispatchRemapTable[DrawTransformFeedback_remap_index]
#define _gloffset_GenTransformFeedbacks driDispatchRemapTable[GenTransformFeedbacks_remap_index]
#define _gloffset_IsTransformFeedback driDispatchRemapTable[IsTransformFeedback_remap_index]
#define _gloffset_PauseTransformFeedback driDispatchRemapTable[PauseTransformFeedback_remap_index]
#define _gloffset_ResumeTransformFeedback driDispatchRemapTable[ResumeTransformFeedback_remap_index]
#define _gloffset_BeginQueryIndexed driDispatchRemapTable[BeginQueryIndexed_remap_index]
#define _gloffset_DrawTransformFeedbackStream driDispatchRemapTable[DrawTransformFeedbackStream_remap_index]
#define _gloffset_EndQueryIndexed driDispatchRemapTable[EndQueryIndexed_remap_index]
#define _gloffset_GetQueryIndexediv driDispatchRemapTable[GetQueryIndexediv_remap_index]
#define _gloffset_ClearDepthf driDispatchRemapTable[ClearDepthf_remap_index]
#define _gloffset_DepthRangef driDispatchRemapTable[DepthRangef_remap_index]
#define _gloffset_GetShaderPrecisionFormat driDispatchRemapTable[GetShaderPrecisionFormat_remap_index]
#define _gloffset_ReleaseShaderCompiler driDispatchRemapTable[ReleaseShaderCompiler_remap_index]
#define _gloffset_ShaderBinary driDispatchRemapTable[ShaderBinary_remap_index]
#define _gloffset_GetProgramBinary driDispatchRemapTable[GetProgramBinary_remap_index]
#define _gloffset_ProgramBinary driDispatchRemapTable[ProgramBinary_remap_index]
#define _gloffset_ProgramParameteri driDispatchRemapTable[ProgramParameteri_remap_index]
#define _gloffset_GetVertexAttribLdv driDispatchRemapTable[GetVertexAttribLdv_remap_index]
#define _gloffset_VertexAttribL1d driDispatchRemapTable[VertexAttribL1d_remap_index]
#define _gloffset_VertexAttribL1dv driDispatchRemapTable[VertexAttribL1dv_remap_index]
#define _gloffset_VertexAttribL2d driDispatchRemapTable[VertexAttribL2d_remap_index]
#define _gloffset_VertexAttribL2dv driDispatchRemapTable[VertexAttribL2dv_remap_index]
#define _gloffset_VertexAttribL3d driDispatchRemapTable[VertexAttribL3d_remap_index]
#define _gloffset_VertexAttribL3dv driDispatchRemapTable[VertexAttribL3dv_remap_index]
#define _gloffset_VertexAttribL4d driDispatchRemapTable[VertexAttribL4d_remap_index]
#define _gloffset_VertexAttribL4dv driDispatchRemapTable[VertexAttribL4dv_remap_index]
#define _gloffset_VertexAttribLPointer driDispatchRemapTable[VertexAttribLPointer_remap_index]
#define _gloffset_DepthRangeArrayv driDispatchRemapTable[DepthRangeArrayv_remap_index]
#define _gloffset_DepthRangeIndexed driDispatchRemapTable[DepthRangeIndexed_remap_index]
#define _gloffset_GetDoublei_v driDispatchRemapTable[GetDoublei_v_remap_index]
#define _gloffset_GetFloati_v driDispatchRemapTable[GetFloati_v_remap_index]
#define _gloffset_ScissorArrayv driDispatchRemapTable[ScissorArrayv_remap_index]
#define _gloffset_ScissorIndexed driDispatchRemapTable[ScissorIndexed_remap_index]
#define _gloffset_ScissorIndexedv driDispatchRemapTable[ScissorIndexedv_remap_index]
#define _gloffset_ViewportArrayv driDispatchRemapTable[ViewportArrayv_remap_index]
#define _gloffset_ViewportIndexedf driDispatchRemapTable[ViewportIndexedf_remap_index]
#define _gloffset_ViewportIndexedfv driDispatchRemapTable[ViewportIndexedfv_remap_index]
#define _gloffset_GetGraphicsResetStatusARB driDispatchRemapTable[GetGraphicsResetStatusARB_remap_index]
#define _gloffset_GetnColorTableARB driDispatchRemapTable[GetnColorTableARB_remap_index]
#define _gloffset_GetnCompressedTexImageARB driDispatchRemapTable[GetnCompressedTexImageARB_remap_index]
#define _gloffset_GetnConvolutionFilterARB driDispatchRemapTable[GetnConvolutionFilterARB_remap_index]
#define _gloffset_GetnHistogramARB driDispatchRemapTable[GetnHistogramARB_remap_index]
#define _gloffset_GetnMapdvARB driDispatchRemapTable[GetnMapdvARB_remap_index]
#define _gloffset_GetnMapfvARB driDispatchRemapTable[GetnMapfvARB_remap_index]
#define _gloffset_GetnMapivARB driDispatchRemapTable[GetnMapivARB_remap_index]
#define _gloffset_GetnMinmaxARB driDispatchRemapTable[GetnMinmaxARB_remap_index]
#define _gloffset_GetnPixelMapfvARB driDispatchRemapTable[GetnPixelMapfvARB_remap_index]
#define _gloffset_GetnPixelMapuivARB driDispatchRemapTable[GetnPixelMapuivARB_remap_index]
#define _gloffset_GetnPixelMapusvARB driDispatchRemapTable[GetnPixelMapusvARB_remap_index]
#define _gloffset_GetnPolygonStippleARB driDispatchRemapTable[GetnPolygonStippleARB_remap_index]
#define _gloffset_GetnSeparableFilterARB driDispatchRemapTable[GetnSeparableFilterARB_remap_index]
#define _gloffset_GetnTexImageARB driDispatchRemapTable[GetnTexImageARB_remap_index]
#define _gloffset_GetnUniformdvARB driDispatchRemapTable[GetnUniformdvARB_remap_index]
#define _gloffset_GetnUniformfvARB driDispatchRemapTable[GetnUniformfvARB_remap_index]
#define _gloffset_GetnUniformivARB driDispatchRemapTable[GetnUniformivARB_remap_index]
#define _gloffset_GetnUniformuivARB driDispatchRemapTable[GetnUniformuivARB_remap_index]
#define _gloffset_ReadnPixelsARB driDispatchRemapTable[ReadnPixelsARB_remap_index]
#define _gloffset_DrawArraysInstancedBaseInstance driDispatchRemapTable[DrawArraysInstancedBaseInstance_remap_index]
#define _gloffset_DrawElementsInstancedBaseInstance driDispatchRemapTable[DrawElementsInstancedBaseInstance_remap_index]
#define _gloffset_DrawElementsInstancedBaseVertexBaseInstance driDispatchRemapTable[DrawElementsInstancedBaseVertexBaseInstance_remap_index]
#define _gloffset_DrawTransformFeedbackInstanced driDispatchRemapTable[DrawTransformFeedbackInstanced_remap_index]
#define _gloffset_DrawTransformFeedbackStreamInstanced driDispatchRemapTable[DrawTransformFeedbackStreamInstanced_remap_index]
#define _gloffset_GetInternalformativ driDispatchRemapTable[GetInternalformativ_remap_index]
#define _gloffset_GetActiveAtomicCounterBufferiv driDispatchRemapTable[GetActiveAtomicCounterBufferiv_remap_index]
#define _gloffset_BindImageTexture driDispatchRemapTable[BindImageTexture_remap_index]
#define _gloffset_MemoryBarrier driDispatchRemapTable[MemoryBarrier_remap_index]
#define _gloffset_TexStorage1D driDispatchRemapTable[TexStorage1D_remap_index]
#define _gloffset_TexStorage2D driDispatchRemapTable[TexStorage2D_remap_index]
#define _gloffset_TexStorage3D driDispatchRemapTable[TexStorage3D_remap_index]
#define _gloffset_TextureStorage1DEXT driDispatchRemapTable[TextureStorage1DEXT_remap_index]
#define _gloffset_TextureStorage2DEXT driDispatchRemapTable[TextureStorage2DEXT_remap_index]
#define _gloffset_TextureStorage3DEXT driDispatchRemapTable[TextureStorage3DEXT_remap_index]
#define _gloffset_ClearBufferData driDispatchRemapTable[ClearBufferData_remap_index]
#define _gloffset_ClearBufferSubData driDispatchRemapTable[ClearBufferSubData_remap_index]
#define _gloffset_DispatchCompute driDispatchRemapTable[DispatchCompute_remap_index]
#define _gloffset_DispatchComputeIndirect driDispatchRemapTable[DispatchComputeIndirect_remap_index]
#define _gloffset_CopyImageSubData driDispatchRemapTable[CopyImageSubData_remap_index]
#define _gloffset_TextureView driDispatchRemapTable[TextureView_remap_index]
#define _gloffset_BindVertexBuffer driDispatchRemapTable[BindVertexBuffer_remap_index]
#define _gloffset_VertexAttribBinding driDispatchRemapTable[VertexAttribBinding_remap_index]
#define _gloffset_VertexAttribFormat driDispatchRemapTable[VertexAttribFormat_remap_index]
#define _gloffset_VertexAttribIFormat driDispatchRemapTable[VertexAttribIFormat_remap_index]
#define _gloffset_VertexAttribLFormat driDispatchRemapTable[VertexAttribLFormat_remap_index]
#define _gloffset_VertexBindingDivisor driDispatchRemapTable[VertexBindingDivisor_remap_index]
#define _gloffset_FramebufferParameteri driDispatchRemapTable[FramebufferParameteri_remap_index]
#define _gloffset_GetFramebufferParameteriv driDispatchRemapTable[GetFramebufferParameteriv_remap_index]
#define _gloffset_GetInternalformati64v driDispatchRemapTable[GetInternalformati64v_remap_index]
#define _gloffset_MultiDrawArraysIndirect driDispatchRemapTable[MultiDrawArraysIndirect_remap_index]
#define _gloffset_MultiDrawElementsIndirect driDispatchRemapTable[MultiDrawElementsIndirect_remap_index]
#define _gloffset_GetProgramInterfaceiv driDispatchRemapTable[GetProgramInterfaceiv_remap_index]
#define _gloffset_GetProgramResourceIndex driDispatchRemapTable[GetProgramResourceIndex_remap_index]
#define _gloffset_GetProgramResourceLocation driDispatchRemapTable[GetProgramResourceLocation_remap_index]
#define _gloffset_GetProgramResourceLocationIndex driDispatchRemapTable[GetProgramResourceLocationIndex_remap_index]
#define _gloffset_GetProgramResourceName driDispatchRemapTable[GetProgramResourceName_remap_index]
#define _gloffset_GetProgramResourceiv driDispatchRemapTable[GetProgramResourceiv_remap_index]
#define _gloffset_ShaderStorageBlockBinding driDispatchRemapTable[ShaderStorageBlockBinding_remap_index]
#define _gloffset_TexBufferRange driDispatchRemapTable[TexBufferRange_remap_index]
#define _gloffset_TexStorage2DMultisample driDispatchRemapTable[TexStorage2DMultisample_remap_index]
#define _gloffset_TexStorage3DMultisample driDispatchRemapTable[TexStorage3DMultisample_remap_index]
#define _gloffset_BufferStorage driDispatchRemapTable[BufferStorage_remap_index]
#define _gloffset_ClearTexImage driDispatchRemapTable[ClearTexImage_remap_index]
#define _gloffset_ClearTexSubImage driDispatchRemapTable[ClearTexSubImage_remap_index]
#define _gloffset_BindBuffersBase driDispatchRemapTable[BindBuffersBase_remap_index]
#define _gloffset_BindBuffersRange driDispatchRemapTable[BindBuffersRange_remap_index]
#define _gloffset_BindImageTextures driDispatchRemapTable[BindImageTextures_remap_index]
#define _gloffset_BindSamplers driDispatchRemapTable[BindSamplers_remap_index]
#define _gloffset_BindTextures driDispatchRemapTable[BindTextures_remap_index]
#define _gloffset_BindVertexBuffers driDispatchRemapTable[BindVertexBuffers_remap_index]
#define _gloffset_GetImageHandleARB driDispatchRemapTable[GetImageHandleARB_remap_index]
#define _gloffset_GetTextureHandleARB driDispatchRemapTable[GetTextureHandleARB_remap_index]
#define _gloffset_GetTextureSamplerHandleARB driDispatchRemapTable[GetTextureSamplerHandleARB_remap_index]
#define _gloffset_GetVertexAttribLui64vARB driDispatchRemapTable[GetVertexAttribLui64vARB_remap_index]
#define _gloffset_IsImageHandleResidentARB driDispatchRemapTable[IsImageHandleResidentARB_remap_index]
#define _gloffset_IsTextureHandleResidentARB driDispatchRemapTable[IsTextureHandleResidentARB_remap_index]
#define _gloffset_MakeImageHandleNonResidentARB driDispatchRemapTable[MakeImageHandleNonResidentARB_remap_index]
#define _gloffset_MakeImageHandleResidentARB driDispatchRemapTable[MakeImageHandleResidentARB_remap_index]
#define _gloffset_MakeTextureHandleNonResidentARB driDispatchRemapTable[MakeTextureHandleNonResidentARB_remap_index]
#define _gloffset_MakeTextureHandleResidentARB driDispatchRemapTable[MakeTextureHandleResidentARB_remap_index]
#define _gloffset_ProgramUniformHandleui64ARB driDispatchRemapTable[ProgramUniformHandleui64ARB_remap_index]
#define _gloffset_ProgramUniformHandleui64vARB driDispatchRemapTable[ProgramUniformHandleui64vARB_remap_index]
#define _gloffset_UniformHandleui64ARB driDispatchRemapTable[UniformHandleui64ARB_remap_index]
#define _gloffset_UniformHandleui64vARB driDispatchRemapTable[UniformHandleui64vARB_remap_index]
#define _gloffset_VertexAttribL1ui64ARB driDispatchRemapTable[VertexAttribL1ui64ARB_remap_index]
#define _gloffset_VertexAttribL1ui64vARB driDispatchRemapTable[VertexAttribL1ui64vARB_remap_index]
#define _gloffset_DispatchComputeGroupSizeARB driDispatchRemapTable[DispatchComputeGroupSizeARB_remap_index]
#define _gloffset_MultiDrawArraysIndirectCountARB driDispatchRemapTable[MultiDrawArraysIndirectCountARB_remap_index]
#define _gloffset_MultiDrawElementsIndirectCountARB driDispatchRemapTable[MultiDrawElementsIndirectCountARB_remap_index]
#define _gloffset_ClipControl driDispatchRemapTable[ClipControl_remap_index]
#define _gloffset_BindTextureUnit driDispatchRemapTable[BindTextureUnit_remap_index]
#define _gloffset_BlitNamedFramebuffer driDispatchRemapTable[BlitNamedFramebuffer_remap_index]
#define _gloffset_CheckNamedFramebufferStatus driDispatchRemapTable[CheckNamedFramebufferStatus_remap_index]
#define _gloffset_ClearNamedBufferData driDispatchRemapTable[ClearNamedBufferData_remap_index]
#define _gloffset_ClearNamedBufferSubData driDispatchRemapTable[ClearNamedBufferSubData_remap_index]
#define _gloffset_ClearNamedFramebufferfi driDispatchRemapTable[ClearNamedFramebufferfi_remap_index]
#define _gloffset_ClearNamedFramebufferfv driDispatchRemapTable[ClearNamedFramebufferfv_remap_index]
#define _gloffset_ClearNamedFramebufferiv driDispatchRemapTable[ClearNamedFramebufferiv_remap_index]
#define _gloffset_ClearNamedFramebufferuiv driDispatchRemapTable[ClearNamedFramebufferuiv_remap_index]
#define _gloffset_CompressedTextureSubImage1D driDispatchRemapTable[CompressedTextureSubImage1D_remap_index]
#define _gloffset_CompressedTextureSubImage2D driDispatchRemapTable[CompressedTextureSubImage2D_remap_index]
#define _gloffset_CompressedTextureSubImage3D driDispatchRemapTable[CompressedTextureSubImage3D_remap_index]
#define _gloffset_CopyNamedBufferSubData driDispatchRemapTable[CopyNamedBufferSubData_remap_index]
#define _gloffset_CopyTextureSubImage1D driDispatchRemapTable[CopyTextureSubImage1D_remap_index]
#define _gloffset_CopyTextureSubImage2D driDispatchRemapTable[CopyTextureSubImage2D_remap_index]
#define _gloffset_CopyTextureSubImage3D driDispatchRemapTable[CopyTextureSubImage3D_remap_index]
#define _gloffset_CreateBuffers driDispatchRemapTable[CreateBuffers_remap_index]
#define _gloffset_CreateFramebuffers driDispatchRemapTable[CreateFramebuffers_remap_index]
#define _gloffset_CreateProgramPipelines driDispatchRemapTable[CreateProgramPipelines_remap_index]
#define _gloffset_CreateQueries driDispatchRemapTable[CreateQueries_remap_index]
#define _gloffset_CreateRenderbuffers driDispatchRemapTable[CreateRenderbuffers_remap_index]
#define _gloffset_CreateSamplers driDispatchRemapTable[CreateSamplers_remap_index]
#define _gloffset_CreateTextures driDispatchRemapTable[CreateTextures_remap_index]
#define _gloffset_CreateTransformFeedbacks driDispatchRemapTable[CreateTransformFeedbacks_remap_index]
#define _gloffset_CreateVertexArrays driDispatchRemapTable[CreateVertexArrays_remap_index]
#define _gloffset_DisableVertexArrayAttrib driDispatchRemapTable[DisableVertexArrayAttrib_remap_index]
#define _gloffset_EnableVertexArrayAttrib driDispatchRemapTable[EnableVertexArrayAttrib_remap_index]
#define _gloffset_FlushMappedNamedBufferRange driDispatchRemapTable[FlushMappedNamedBufferRange_remap_index]
#define _gloffset_GenerateTextureMipmap driDispatchRemapTable[GenerateTextureMipmap_remap_index]
#define _gloffset_GetCompressedTextureImage driDispatchRemapTable[GetCompressedTextureImage_remap_index]
#define _gloffset_GetNamedBufferParameteri64v driDispatchRemapTable[GetNamedBufferParameteri64v_remap_index]
#define _gloffset_GetNamedBufferParameteriv driDispatchRemapTable[GetNamedBufferParameteriv_remap_index]
#define _gloffset_GetNamedBufferPointerv driDispatchRemapTable[GetNamedBufferPointerv_remap_index]
#define _gloffset_GetNamedBufferSubData driDispatchRemapTable[GetNamedBufferSubData_remap_index]
#define _gloffset_GetNamedFramebufferAttachmentParameteriv driDispatchRemapTable[GetNamedFramebufferAttachmentParameteriv_remap_index]
#define _gloffset_GetNamedFramebufferParameteriv driDispatchRemapTable[GetNamedFramebufferParameteriv_remap_index]
#define _gloffset_GetNamedRenderbufferParameteriv driDispatchRemapTable[GetNamedRenderbufferParameteriv_remap_index]
#define _gloffset_GetQueryBufferObjecti64v driDispatchRemapTable[GetQueryBufferObjecti64v_remap_index]
#define _gloffset_GetQueryBufferObjectiv driDispatchRemapTable[GetQueryBufferObjectiv_remap_index]
#define _gloffset_GetQueryBufferObjectui64v driDispatchRemapTable[GetQueryBufferObjectui64v_remap_index]
#define _gloffset_GetQueryBufferObjectuiv driDispatchRemapTable[GetQueryBufferObjectuiv_remap_index]
#define _gloffset_GetTextureImage driDispatchRemapTable[GetTextureImage_remap_index]
#define _gloffset_GetTextureLevelParameterfv driDispatchRemapTable[GetTextureLevelParameterfv_remap_index]
#define _gloffset_GetTextureLevelParameteriv driDispatchRemapTable[GetTextureLevelParameteriv_remap_index]
#define _gloffset_GetTextureParameterIiv driDispatchRemapTable[GetTextureParameterIiv_remap_index]
#define _gloffset_GetTextureParameterIuiv driDispatchRemapTable[GetTextureParameterIuiv_remap_index]
#define _gloffset_GetTextureParameterfv driDispatchRemapTable[GetTextureParameterfv_remap_index]
#define _gloffset_GetTextureParameteriv driDispatchRemapTable[GetTextureParameteriv_remap_index]
#define _gloffset_GetTransformFeedbacki64_v driDispatchRemapTable[GetTransformFeedbacki64_v_remap_index]
#define _gloffset_GetTransformFeedbacki_v driDispatchRemapTable[GetTransformFeedbacki_v_remap_index]
#define _gloffset_GetTransformFeedbackiv driDispatchRemapTable[GetTransformFeedbackiv_remap_index]
#define _gloffset_GetVertexArrayIndexed64iv driDispatchRemapTable[GetVertexArrayIndexed64iv_remap_index]
#define _gloffset_GetVertexArrayIndexediv driDispatchRemapTable[GetVertexArrayIndexediv_remap_index]
#define _gloffset_GetVertexArrayiv driDispatchRemapTable[GetVertexArrayiv_remap_index]
#define _gloffset_InvalidateNamedFramebufferData driDispatchRemapTable[InvalidateNamedFramebufferData_remap_index]
#define _gloffset_InvalidateNamedFramebufferSubData driDispatchRemapTable[InvalidateNamedFramebufferSubData_remap_index]
#define _gloffset_MapNamedBuffer driDispatchRemapTable[MapNamedBuffer_remap_index]
#define _gloffset_MapNamedBufferRange driDispatchRemapTable[MapNamedBufferRange_remap_index]
#define _gloffset_NamedBufferData driDispatchRemapTable[NamedBufferData_remap_index]
#define _gloffset_NamedBufferStorage driDispatchRemapTable[NamedBufferStorage_remap_index]
#define _gloffset_NamedBufferSubData driDispatchRemapTable[NamedBufferSubData_remap_index]
#define _gloffset_NamedFramebufferDrawBuffer driDispatchRemapTable[NamedFramebufferDrawBuffer_remap_index]
#define _gloffset_NamedFramebufferDrawBuffers driDispatchRemapTable[NamedFramebufferDrawBuffers_remap_index]
#define _gloffset_NamedFramebufferParameteri driDispatchRemapTable[NamedFramebufferParameteri_remap_index]
#define _gloffset_NamedFramebufferReadBuffer driDispatchRemapTable[NamedFramebufferReadBuffer_remap_index]
#define _gloffset_NamedFramebufferRenderbuffer driDispatchRemapTable[NamedFramebufferRenderbuffer_remap_index]
#define _gloffset_NamedFramebufferTexture driDispatchRemapTable[NamedFramebufferTexture_remap_index]
#define _gloffset_NamedFramebufferTextureLayer driDispatchRemapTable[NamedFramebufferTextureLayer_remap_index]
#define _gloffset_NamedRenderbufferStorage driDispatchRemapTable[NamedRenderbufferStorage_remap_index]
#define _gloffset_NamedRenderbufferStorageMultisample driDispatchRemapTable[NamedRenderbufferStorageMultisample_remap_index]
#define _gloffset_TextureBuffer driDispatchRemapTable[TextureBuffer_remap_index]
#define _gloffset_TextureBufferRange driDispatchRemapTable[TextureBufferRange_remap_index]
#define _gloffset_TextureParameterIiv driDispatchRemapTable[TextureParameterIiv_remap_index]
#define _gloffset_TextureParameterIuiv driDispatchRemapTable[TextureParameterIuiv_remap_index]
#define _gloffset_TextureParameterf driDispatchRemapTable[TextureParameterf_remap_index]
#define _gloffset_TextureParameterfv driDispatchRemapTable[TextureParameterfv_remap_index]
#define _gloffset_TextureParameteri driDispatchRemapTable[TextureParameteri_remap_index]
#define _gloffset_TextureParameteriv driDispatchRemapTable[TextureParameteriv_remap_index]
#define _gloffset_TextureStorage1D driDispatchRemapTable[TextureStorage1D_remap_index]
#define _gloffset_TextureStorage2D driDispatchRemapTable[TextureStorage2D_remap_index]
#define _gloffset_TextureStorage2DMultisample driDispatchRemapTable[TextureStorage2DMultisample_remap_index]
#define _gloffset_TextureStorage3D driDispatchRemapTable[TextureStorage3D_remap_index]
#define _gloffset_TextureStorage3DMultisample driDispatchRemapTable[TextureStorage3DMultisample_remap_index]
#define _gloffset_TextureSubImage1D driDispatchRemapTable[TextureSubImage1D_remap_index]
#define _gloffset_TextureSubImage2D driDispatchRemapTable[TextureSubImage2D_remap_index]
#define _gloffset_TextureSubImage3D driDispatchRemapTable[TextureSubImage3D_remap_index]
#define _gloffset_TransformFeedbackBufferBase driDispatchRemapTable[TransformFeedbackBufferBase_remap_index]
#define _gloffset_TransformFeedbackBufferRange driDispatchRemapTable[TransformFeedbackBufferRange_remap_index]
#define _gloffset_UnmapNamedBufferEXT driDispatchRemapTable[UnmapNamedBufferEXT_remap_index]
#define _gloffset_VertexArrayAttribBinding driDispatchRemapTable[VertexArrayAttribBinding_remap_index]
#define _gloffset_VertexArrayAttribFormat driDispatchRemapTable[VertexArrayAttribFormat_remap_index]
#define _gloffset_VertexArrayAttribIFormat driDispatchRemapTable[VertexArrayAttribIFormat_remap_index]
#define _gloffset_VertexArrayAttribLFormat driDispatchRemapTable[VertexArrayAttribLFormat_remap_index]
#define _gloffset_VertexArrayBindingDivisor driDispatchRemapTable[VertexArrayBindingDivisor_remap_index]
#define _gloffset_VertexArrayElementBuffer driDispatchRemapTable[VertexArrayElementBuffer_remap_index]
#define _gloffset_VertexArrayVertexBuffer driDispatchRemapTable[VertexArrayVertexBuffer_remap_index]
#define _gloffset_VertexArrayVertexBuffers driDispatchRemapTable[VertexArrayVertexBuffers_remap_index]
#define _gloffset_GetCompressedTextureSubImage driDispatchRemapTable[GetCompressedTextureSubImage_remap_index]
#define _gloffset_GetTextureSubImage driDispatchRemapTable[GetTextureSubImage_remap_index]
#define _gloffset_BufferPageCommitmentARB driDispatchRemapTable[BufferPageCommitmentARB_remap_index]
#define _gloffset_NamedBufferPageCommitmentARB driDispatchRemapTable[NamedBufferPageCommitmentARB_remap_index]
#define _gloffset_GetUniformi64vARB driDispatchRemapTable[GetUniformi64vARB_remap_index]
#define _gloffset_GetUniformui64vARB driDispatchRemapTable[GetUniformui64vARB_remap_index]
#define _gloffset_GetnUniformi64vARB driDispatchRemapTable[GetnUniformi64vARB_remap_index]
#define _gloffset_GetnUniformui64vARB driDispatchRemapTable[GetnUniformui64vARB_remap_index]
#define _gloffset_ProgramUniform1i64ARB driDispatchRemapTable[ProgramUniform1i64ARB_remap_index]
#define _gloffset_ProgramUniform1i64vARB driDispatchRemapTable[ProgramUniform1i64vARB_remap_index]
#define _gloffset_ProgramUniform1ui64ARB driDispatchRemapTable[ProgramUniform1ui64ARB_remap_index]
#define _gloffset_ProgramUniform1ui64vARB driDispatchRemapTable[ProgramUniform1ui64vARB_remap_index]
#define _gloffset_ProgramUniform2i64ARB driDispatchRemapTable[ProgramUniform2i64ARB_remap_index]
#define _gloffset_ProgramUniform2i64vARB driDispatchRemapTable[ProgramUniform2i64vARB_remap_index]
#define _gloffset_ProgramUniform2ui64ARB driDispatchRemapTable[ProgramUniform2ui64ARB_remap_index]
#define _gloffset_ProgramUniform2ui64vARB driDispatchRemapTable[ProgramUniform2ui64vARB_remap_index]
#define _gloffset_ProgramUniform3i64ARB driDispatchRemapTable[ProgramUniform3i64ARB_remap_index]
#define _gloffset_ProgramUniform3i64vARB driDispatchRemapTable[ProgramUniform3i64vARB_remap_index]
#define _gloffset_ProgramUniform3ui64ARB driDispatchRemapTable[ProgramUniform3ui64ARB_remap_index]
#define _gloffset_ProgramUniform3ui64vARB driDispatchRemapTable[ProgramUniform3ui64vARB_remap_index]
#define _gloffset_ProgramUniform4i64ARB driDispatchRemapTable[ProgramUniform4i64ARB_remap_index]
#define _gloffset_ProgramUniform4i64vARB driDispatchRemapTable[ProgramUniform4i64vARB_remap_index]
#define _gloffset_ProgramUniform4ui64ARB driDispatchRemapTable[ProgramUniform4ui64ARB_remap_index]
#define _gloffset_ProgramUniform4ui64vARB driDispatchRemapTable[ProgramUniform4ui64vARB_remap_index]
#define _gloffset_Uniform1i64ARB driDispatchRemapTable[Uniform1i64ARB_remap_index]
#define _gloffset_Uniform1i64vARB driDispatchRemapTable[Uniform1i64vARB_remap_index]
#define _gloffset_Uniform1ui64ARB driDispatchRemapTable[Uniform1ui64ARB_remap_index]
#define _gloffset_Uniform1ui64vARB driDispatchRemapTable[Uniform1ui64vARB_remap_index]
#define _gloffset_Uniform2i64ARB driDispatchRemapTable[Uniform2i64ARB_remap_index]
#define _gloffset_Uniform2i64vARB driDispatchRemapTable[Uniform2i64vARB_remap_index]
#define _gloffset_Uniform2ui64ARB driDispatchRemapTable[Uniform2ui64ARB_remap_index]
#define _gloffset_Uniform2ui64vARB driDispatchRemapTable[Uniform2ui64vARB_remap_index]
#define _gloffset_Uniform3i64ARB driDispatchRemapTable[Uniform3i64ARB_remap_index]
#define _gloffset_Uniform3i64vARB driDispatchRemapTable[Uniform3i64vARB_remap_index]
#define _gloffset_Uniform3ui64ARB driDispatchRemapTable[Uniform3ui64ARB_remap_index]
#define _gloffset_Uniform3ui64vARB driDispatchRemapTable[Uniform3ui64vARB_remap_index]
#define _gloffset_Uniform4i64ARB driDispatchRemapTable[Uniform4i64ARB_remap_index]
#define _gloffset_Uniform4i64vARB driDispatchRemapTable[Uniform4i64vARB_remap_index]
#define _gloffset_Uniform4ui64ARB driDispatchRemapTable[Uniform4ui64ARB_remap_index]
#define _gloffset_Uniform4ui64vARB driDispatchRemapTable[Uniform4ui64vARB_remap_index]
#define _gloffset_EvaluateDepthValuesARB driDispatchRemapTable[EvaluateDepthValuesARB_remap_index]
#define _gloffset_FramebufferSampleLocationsfvARB driDispatchRemapTable[FramebufferSampleLocationsfvARB_remap_index]
#define _gloffset_NamedFramebufferSampleLocationsfvARB driDispatchRemapTable[NamedFramebufferSampleLocationsfvARB_remap_index]
#define _gloffset_SpecializeShaderARB driDispatchRemapTable[SpecializeShaderARB_remap_index]
#define _gloffset_InvalidateBufferData driDispatchRemapTable[InvalidateBufferData_remap_index]
#define _gloffset_InvalidateBufferSubData driDispatchRemapTable[InvalidateBufferSubData_remap_index]
#define _gloffset_InvalidateFramebuffer driDispatchRemapTable[InvalidateFramebuffer_remap_index]
#define _gloffset_InvalidateSubFramebuffer driDispatchRemapTable[InvalidateSubFramebuffer_remap_index]
#define _gloffset_InvalidateTexImage driDispatchRemapTable[InvalidateTexImage_remap_index]
#define _gloffset_InvalidateTexSubImage driDispatchRemapTable[InvalidateTexSubImage_remap_index]
#define _gloffset_DrawTexfOES driDispatchRemapTable[DrawTexfOES_remap_index]
#define _gloffset_DrawTexfvOES driDispatchRemapTable[DrawTexfvOES_remap_index]
#define _gloffset_DrawTexiOES driDispatchRemapTable[DrawTexiOES_remap_index]
#define _gloffset_DrawTexivOES driDispatchRemapTable[DrawTexivOES_remap_index]
#define _gloffset_DrawTexsOES driDispatchRemapTable[DrawTexsOES_remap_index]
#define _gloffset_DrawTexsvOES driDispatchRemapTable[DrawTexsvOES_remap_index]
#define _gloffset_DrawTexxOES driDispatchRemapTable[DrawTexxOES_remap_index]
#define _gloffset_DrawTexxvOES driDispatchRemapTable[DrawTexxvOES_remap_index]
#define _gloffset_PointSizePointerOES driDispatchRemapTable[PointSizePointerOES_remap_index]
#define _gloffset_QueryMatrixxOES driDispatchRemapTable[QueryMatrixxOES_remap_index]
#define _gloffset_SampleMaskSGIS driDispatchRemapTable[SampleMaskSGIS_remap_index]
#define _gloffset_SamplePatternSGIS driDispatchRemapTable[SamplePatternSGIS_remap_index]
#define _gloffset_ColorPointerEXT driDispatchRemapTable[ColorPointerEXT_remap_index]
#define _gloffset_EdgeFlagPointerEXT driDispatchRemapTable[EdgeFlagPointerEXT_remap_index]
#define _gloffset_IndexPointerEXT driDispatchRemapTable[IndexPointerEXT_remap_index]
#define _gloffset_NormalPointerEXT driDispatchRemapTable[NormalPointerEXT_remap_index]
#define _gloffset_TexCoordPointerEXT driDispatchRemapTable[TexCoordPointerEXT_remap_index]
#define _gloffset_VertexPointerEXT driDispatchRemapTable[VertexPointerEXT_remap_index]
#define _gloffset_DiscardFramebufferEXT driDispatchRemapTable[DiscardFramebufferEXT_remap_index]
#define _gloffset_ActiveShaderProgram driDispatchRemapTable[ActiveShaderProgram_remap_index]
#define _gloffset_BindProgramPipeline driDispatchRemapTable[BindProgramPipeline_remap_index]
#define _gloffset_CreateShaderProgramv driDispatchRemapTable[CreateShaderProgramv_remap_index]
#define _gloffset_DeleteProgramPipelines driDispatchRemapTable[DeleteProgramPipelines_remap_index]
#define _gloffset_GenProgramPipelines driDispatchRemapTable[GenProgramPipelines_remap_index]
#define _gloffset_GetProgramPipelineInfoLog driDispatchRemapTable[GetProgramPipelineInfoLog_remap_index]
#define _gloffset_GetProgramPipelineiv driDispatchRemapTable[GetProgramPipelineiv_remap_index]
#define _gloffset_IsProgramPipeline driDispatchRemapTable[IsProgramPipeline_remap_index]
#define _gloffset_LockArraysEXT driDispatchRemapTable[LockArraysEXT_remap_index]
#define _gloffset_ProgramUniform1d driDispatchRemapTable[ProgramUniform1d_remap_index]
#define _gloffset_ProgramUniform1dv driDispatchRemapTable[ProgramUniform1dv_remap_index]
#define _gloffset_ProgramUniform1f driDispatchRemapTable[ProgramUniform1f_remap_index]
#define _gloffset_ProgramUniform1fv driDispatchRemapTable[ProgramUniform1fv_remap_index]
#define _gloffset_ProgramUniform1i driDispatchRemapTable[ProgramUniform1i_remap_index]
#define _gloffset_ProgramUniform1iv driDispatchRemapTable[ProgramUniform1iv_remap_index]
#define _gloffset_ProgramUniform1ui driDispatchRemapTable[ProgramUniform1ui_remap_index]
#define _gloffset_ProgramUniform1uiv driDispatchRemapTable[ProgramUniform1uiv_remap_index]
#define _gloffset_ProgramUniform2d driDispatchRemapTable[ProgramUniform2d_remap_index]
#define _gloffset_ProgramUniform2dv driDispatchRemapTable[ProgramUniform2dv_remap_index]
#define _gloffset_ProgramUniform2f driDispatchRemapTable[ProgramUniform2f_remap_index]
#define _gloffset_ProgramUniform2fv driDispatchRemapTable[ProgramUniform2fv_remap_index]
#define _gloffset_ProgramUniform2i driDispatchRemapTable[ProgramUniform2i_remap_index]
#define _gloffset_ProgramUniform2iv driDispatchRemapTable[ProgramUniform2iv_remap_index]
#define _gloffset_ProgramUniform2ui driDispatchRemapTable[ProgramUniform2ui_remap_index]
#define _gloffset_ProgramUniform2uiv driDispatchRemapTable[ProgramUniform2uiv_remap_index]
#define _gloffset_ProgramUniform3d driDispatchRemapTable[ProgramUniform3d_remap_index]
#define _gloffset_ProgramUniform3dv driDispatchRemapTable[ProgramUniform3dv_remap_index]
#define _gloffset_ProgramUniform3f driDispatchRemapTable[ProgramUniform3f_remap_index]
#define _gloffset_ProgramUniform3fv driDispatchRemapTable[ProgramUniform3fv_remap_index]
#define _gloffset_ProgramUniform3i driDispatchRemapTable[ProgramUniform3i_remap_index]
#define _gloffset_ProgramUniform3iv driDispatchRemapTable[ProgramUniform3iv_remap_index]
#define _gloffset_ProgramUniform3ui driDispatchRemapTable[ProgramUniform3ui_remap_index]
#define _gloffset_ProgramUniform3uiv driDispatchRemapTable[ProgramUniform3uiv_remap_index]
#define _gloffset_ProgramUniform4d driDispatchRemapTable[ProgramUniform4d_remap_index]
#define _gloffset_ProgramUniform4dv driDispatchRemapTable[ProgramUniform4dv_remap_index]
#define _gloffset_ProgramUniform4f driDispatchRemapTable[ProgramUniform4f_remap_index]
#define _gloffset_ProgramUniform4fv driDispatchRemapTable[ProgramUniform4fv_remap_index]
#define _gloffset_ProgramUniform4i driDispatchRemapTable[ProgramUniform4i_remap_index]
#define _gloffset_ProgramUniform4iv driDispatchRemapTable[ProgramUniform4iv_remap_index]
#define _gloffset_ProgramUniform4ui driDispatchRemapTable[ProgramUniform4ui_remap_index]
#define _gloffset_ProgramUniform4uiv driDispatchRemapTable[ProgramUniform4uiv_remap_index]
#define _gloffset_ProgramUniformMatrix2dv driDispatchRemapTable[ProgramUniformMatrix2dv_remap_index]
#define _gloffset_ProgramUniformMatrix2fv driDispatchRemapTable[ProgramUniformMatrix2fv_remap_index]
#define _gloffset_ProgramUniformMatrix2x3dv driDispatchRemapTable[ProgramUniformMatrix2x3dv_remap_index]
#define _gloffset_ProgramUniformMatrix2x3fv driDispatchRemapTable[ProgramUniformMatrix2x3fv_remap_index]
#define _gloffset_ProgramUniformMatrix2x4dv driDispatchRemapTable[ProgramUniformMatrix2x4dv_remap_index]
#define _gloffset_ProgramUniformMatrix2x4fv driDispatchRemapTable[ProgramUniformMatrix2x4fv_remap_index]
#define _gloffset_ProgramUniformMatrix3dv driDispatchRemapTable[ProgramUniformMatrix3dv_remap_index]
#define _gloffset_ProgramUniformMatrix3fv driDispatchRemapTable[ProgramUniformMatrix3fv_remap_index]
#define _gloffset_ProgramUniformMatrix3x2dv driDispatchRemapTable[ProgramUniformMatrix3x2dv_remap_index]
#define _gloffset_ProgramUniformMatrix3x2fv driDispatchRemapTable[ProgramUniformMatrix3x2fv_remap_index]
#define _gloffset_ProgramUniformMatrix3x4dv driDispatchRemapTable[ProgramUniformMatrix3x4dv_remap_index]
#define _gloffset_ProgramUniformMatrix3x4fv driDispatchRemapTable[ProgramUniformMatrix3x4fv_remap_index]
#define _gloffset_ProgramUniformMatrix4dv driDispatchRemapTable[ProgramUniformMatrix4dv_remap_index]
#define _gloffset_ProgramUniformMatrix4fv driDispatchRemapTable[ProgramUniformMatrix4fv_remap_index]
#define _gloffset_ProgramUniformMatrix4x2dv driDispatchRemapTable[ProgramUniformMatrix4x2dv_remap_index]
#define _gloffset_ProgramUniformMatrix4x2fv driDispatchRemapTable[ProgramUniformMatrix4x2fv_remap_index]
#define _gloffset_ProgramUniformMatrix4x3dv driDispatchRemapTable[ProgramUniformMatrix4x3dv_remap_index]
#define _gloffset_ProgramUniformMatrix4x3fv driDispatchRemapTable[ProgramUniformMatrix4x3fv_remap_index]
#define _gloffset_UnlockArraysEXT driDispatchRemapTable[UnlockArraysEXT_remap_index]
#define _gloffset_UseProgramStages driDispatchRemapTable[UseProgramStages_remap_index]
#define _gloffset_ValidateProgramPipeline driDispatchRemapTable[ValidateProgramPipeline_remap_index]
#define _gloffset_FramebufferTexture2DMultisampleEXT driDispatchRemapTable[FramebufferTexture2DMultisampleEXT_remap_index]
#define _gloffset_DebugMessageCallback driDispatchRemapTable[DebugMessageCallback_remap_index]
#define _gloffset_DebugMessageControl driDispatchRemapTable[DebugMessageControl_remap_index]
#define _gloffset_DebugMessageInsert driDispatchRemapTable[DebugMessageInsert_remap_index]
#define _gloffset_GetDebugMessageLog driDispatchRemapTable[GetDebugMessageLog_remap_index]
#define _gloffset_GetObjectLabel driDispatchRemapTable[GetObjectLabel_remap_index]
#define _gloffset_GetObjectPtrLabel driDispatchRemapTable[GetObjectPtrLabel_remap_index]
#define _gloffset_ObjectLabel driDispatchRemapTable[ObjectLabel_remap_index]
#define _gloffset_ObjectPtrLabel driDispatchRemapTable[ObjectPtrLabel_remap_index]
#define _gloffset_PopDebugGroup driDispatchRemapTable[PopDebugGroup_remap_index]
#define _gloffset_PushDebugGroup driDispatchRemapTable[PushDebugGroup_remap_index]
#define _gloffset_SecondaryColor3fEXT driDispatchRemapTable[SecondaryColor3fEXT_remap_index]
#define _gloffset_SecondaryColor3fvEXT driDispatchRemapTable[SecondaryColor3fvEXT_remap_index]
#define _gloffset_MultiDrawElementsEXT driDispatchRemapTable[MultiDrawElementsEXT_remap_index]
#define _gloffset_FogCoordfEXT driDispatchRemapTable[FogCoordfEXT_remap_index]
#define _gloffset_FogCoordfvEXT driDispatchRemapTable[FogCoordfvEXT_remap_index]
#define _gloffset_ResizeBuffersMESA driDispatchRemapTable[ResizeBuffersMESA_remap_index]
#define _gloffset_WindowPos4dMESA driDispatchRemapTable[WindowPos4dMESA_remap_index]
#define _gloffset_WindowPos4dvMESA driDispatchRemapTable[WindowPos4dvMESA_remap_index]
#define _gloffset_WindowPos4fMESA driDispatchRemapTable[WindowPos4fMESA_remap_index]
#define _gloffset_WindowPos4fvMESA driDispatchRemapTable[WindowPos4fvMESA_remap_index]
#define _gloffset_WindowPos4iMESA driDispatchRemapTable[WindowPos4iMESA_remap_index]
#define _gloffset_WindowPos4ivMESA driDispatchRemapTable[WindowPos4ivMESA_remap_index]
#define _gloffset_WindowPos4sMESA driDispatchRemapTable[WindowPos4sMESA_remap_index]
#define _gloffset_WindowPos4svMESA driDispatchRemapTable[WindowPos4svMESA_remap_index]
#define _gloffset_MultiModeDrawArraysIBM driDispatchRemapTable[MultiModeDrawArraysIBM_remap_index]
#define _gloffset_MultiModeDrawElementsIBM driDispatchRemapTable[MultiModeDrawElementsIBM_remap_index]
#define _gloffset_AreProgramsResidentNV driDispatchRemapTable[AreProgramsResidentNV_remap_index]
#define _gloffset_ExecuteProgramNV driDispatchRemapTable[ExecuteProgramNV_remap_index]
#define _gloffset_GetProgramParameterdvNV driDispatchRemapTable[GetProgramParameterdvNV_remap_index]
#define _gloffset_GetProgramParameterfvNV driDispatchRemapTable[GetProgramParameterfvNV_remap_index]
#define _gloffset_GetProgramStringNV driDispatchRemapTable[GetProgramStringNV_remap_index]
#define _gloffset_GetProgramivNV driDispatchRemapTable[GetProgramivNV_remap_index]
#define _gloffset_GetTrackMatrixivNV driDispatchRemapTable[GetTrackMatrixivNV_remap_index]
#define _gloffset_GetVertexAttribdvNV driDispatchRemapTable[GetVertexAttribdvNV_remap_index]
#define _gloffset_GetVertexAttribfvNV driDispatchRemapTable[GetVertexAttribfvNV_remap_index]
#define _gloffset_GetVertexAttribivNV driDispatchRemapTable[GetVertexAttribivNV_remap_index]
#define _gloffset_LoadProgramNV driDispatchRemapTable[LoadProgramNV_remap_index]
#define _gloffset_ProgramParameters4dvNV driDispatchRemapTable[ProgramParameters4dvNV_remap_index]
#define _gloffset_ProgramParameters4fvNV driDispatchRemapTable[ProgramParameters4fvNV_remap_index]
#define _gloffset_RequestResidentProgramsNV driDispatchRemapTable[RequestResidentProgramsNV_remap_index]
#define _gloffset_TrackMatrixNV driDispatchRemapTable[TrackMatrixNV_remap_index]
#define _gloffset_VertexAttrib1dNV driDispatchRemapTable[VertexAttrib1dNV_remap_index]
#define _gloffset_VertexAttrib1dvNV driDispatchRemapTable[VertexAttrib1dvNV_remap_index]
#define _gloffset_VertexAttrib1fNV driDispatchRemapTable[VertexAttrib1fNV_remap_index]
#define _gloffset_VertexAttrib1fvNV driDispatchRemapTable[VertexAttrib1fvNV_remap_index]
#define _gloffset_VertexAttrib1sNV driDispatchRemapTable[VertexAttrib1sNV_remap_index]
#define _gloffset_VertexAttrib1svNV driDispatchRemapTable[VertexAttrib1svNV_remap_index]
#define _gloffset_VertexAttrib2dNV driDispatchRemapTable[VertexAttrib2dNV_remap_index]
#define _gloffset_VertexAttrib2dvNV driDispatchRemapTable[VertexAttrib2dvNV_remap_index]
#define _gloffset_VertexAttrib2fNV driDispatchRemapTable[VertexAttrib2fNV_remap_index]
#define _gloffset_VertexAttrib2fvNV driDispatchRemapTable[VertexAttrib2fvNV_remap_index]
#define _gloffset_VertexAttrib2sNV driDispatchRemapTable[VertexAttrib2sNV_remap_index]
#define _gloffset_VertexAttrib2svNV driDispatchRemapTable[VertexAttrib2svNV_remap_index]
#define _gloffset_VertexAttrib3dNV driDispatchRemapTable[VertexAttrib3dNV_remap_index]
#define _gloffset_VertexAttrib3dvNV driDispatchRemapTable[VertexAttrib3dvNV_remap_index]
#define _gloffset_VertexAttrib3fNV driDispatchRemapTable[VertexAttrib3fNV_remap_index]
#define _gloffset_VertexAttrib3fvNV driDispatchRemapTable[VertexAttrib3fvNV_remap_index]
#define _gloffset_VertexAttrib3sNV driDispatchRemapTable[VertexAttrib3sNV_remap_index]
#define _gloffset_VertexAttrib3svNV driDispatchRemapTable[VertexAttrib3svNV_remap_index]
#define _gloffset_VertexAttrib4dNV driDispatchRemapTable[VertexAttrib4dNV_remap_index]
#define _gloffset_VertexAttrib4dvNV driDispatchRemapTable[VertexAttrib4dvNV_remap_index]
#define _gloffset_VertexAttrib4fNV driDispatchRemapTable[VertexAttrib4fNV_remap_index]
#define _gloffset_VertexAttrib4fvNV driDispatchRemapTable[VertexAttrib4fvNV_remap_index]
#define _gloffset_VertexAttrib4sNV driDispatchRemapTable[VertexAttrib4sNV_remap_index]
#define _gloffset_VertexAttrib4svNV driDispatchRemapTable[VertexAttrib4svNV_remap_index]
#define _gloffset_VertexAttrib4ubNV driDispatchRemapTable[VertexAttrib4ubNV_remap_index]
#define _gloffset_VertexAttrib4ubvNV driDispatchRemapTable[VertexAttrib4ubvNV_remap_index]
#define _gloffset_VertexAttribPointerNV driDispatchRemapTable[VertexAttribPointerNV_remap_index]
#define _gloffset_VertexAttribs1dvNV driDispatchRemapTable[VertexAttribs1dvNV_remap_index]
#define _gloffset_VertexAttribs1fvNV driDispatchRemapTable[VertexAttribs1fvNV_remap_index]
#define _gloffset_VertexAttribs1svNV driDispatchRemapTable[VertexAttribs1svNV_remap_index]
#define _gloffset_VertexAttribs2dvNV driDispatchRemapTable[VertexAttribs2dvNV_remap_index]
#define _gloffset_VertexAttribs2fvNV driDispatchRemapTable[VertexAttribs2fvNV_remap_index]
#define _gloffset_VertexAttribs2svNV driDispatchRemapTable[VertexAttribs2svNV_remap_index]
#define _gloffset_VertexAttribs3dvNV driDispatchRemapTable[VertexAttribs3dvNV_remap_index]
#define _gloffset_VertexAttribs3fvNV driDispatchRemapTable[VertexAttribs3fvNV_remap_index]
#define _gloffset_VertexAttribs3svNV driDispatchRemapTable[VertexAttribs3svNV_remap_index]
#define _gloffset_VertexAttribs4dvNV driDispatchRemapTable[VertexAttribs4dvNV_remap_index]
#define _gloffset_VertexAttribs4fvNV driDispatchRemapTable[VertexAttribs4fvNV_remap_index]
#define _gloffset_VertexAttribs4svNV driDispatchRemapTable[VertexAttribs4svNV_remap_index]
#define _gloffset_VertexAttribs4ubvNV driDispatchRemapTable[VertexAttribs4ubvNV_remap_index]
#define _gloffset_GetTexBumpParameterfvATI driDispatchRemapTable[GetTexBumpParameterfvATI_remap_index]
#define _gloffset_GetTexBumpParameterivATI driDispatchRemapTable[GetTexBumpParameterivATI_remap_index]
#define _gloffset_TexBumpParameterfvATI driDispatchRemapTable[TexBumpParameterfvATI_remap_index]
#define _gloffset_TexBumpParameterivATI driDispatchRemapTable[TexBumpParameterivATI_remap_index]
#define _gloffset_AlphaFragmentOp1ATI driDispatchRemapTable[AlphaFragmentOp1ATI_remap_index]
#define _gloffset_AlphaFragmentOp2ATI driDispatchRemapTable[AlphaFragmentOp2ATI_remap_index]
#define _gloffset_AlphaFragmentOp3ATI driDispatchRemapTable[AlphaFragmentOp3ATI_remap_index]
#define _gloffset_BeginFragmentShaderATI driDispatchRemapTable[BeginFragmentShaderATI_remap_index]
#define _gloffset_BindFragmentShaderATI driDispatchRemapTable[BindFragmentShaderATI_remap_index]
#define _gloffset_ColorFragmentOp1ATI driDispatchRemapTable[ColorFragmentOp1ATI_remap_index]
#define _gloffset_ColorFragmentOp2ATI driDispatchRemapTable[ColorFragmentOp2ATI_remap_index]
#define _gloffset_ColorFragmentOp3ATI driDispatchRemapTable[ColorFragmentOp3ATI_remap_index]
#define _gloffset_DeleteFragmentShaderATI driDispatchRemapTable[DeleteFragmentShaderATI_remap_index]
#define _gloffset_EndFragmentShaderATI driDispatchRemapTable[EndFragmentShaderATI_remap_index]
#define _gloffset_GenFragmentShadersATI driDispatchRemapTable[GenFragmentShadersATI_remap_index]
#define _gloffset_PassTexCoordATI driDispatchRemapTable[PassTexCoordATI_remap_index]
#define _gloffset_SampleMapATI driDispatchRemapTable[SampleMapATI_remap_index]
#define _gloffset_SetFragmentShaderConstantATI driDispatchRemapTable[SetFragmentShaderConstantATI_remap_index]
#define _gloffset_DepthRangeArrayfvOES driDispatchRemapTable[DepthRangeArrayfvOES_remap_index]
#define _gloffset_DepthRangeIndexedfOES driDispatchRemapTable[DepthRangeIndexedfOES_remap_index]
#define _gloffset_ActiveStencilFaceEXT driDispatchRemapTable[ActiveStencilFaceEXT_remap_index]
#define _gloffset_GetProgramNamedParameterdvNV driDispatchRemapTable[GetProgramNamedParameterdvNV_remap_index]
#define _gloffset_GetProgramNamedParameterfvNV driDispatchRemapTable[GetProgramNamedParameterfvNV_remap_index]
#define _gloffset_ProgramNamedParameter4dNV driDispatchRemapTable[ProgramNamedParameter4dNV_remap_index]
#define _gloffset_ProgramNamedParameter4dvNV driDispatchRemapTable[ProgramNamedParameter4dvNV_remap_index]
#define _gloffset_ProgramNamedParameter4fNV driDispatchRemapTable[ProgramNamedParameter4fNV_remap_index]
#define _gloffset_ProgramNamedParameter4fvNV driDispatchRemapTable[ProgramNamedParameter4fvNV_remap_index]
#define _gloffset_PrimitiveRestartNV driDispatchRemapTable[PrimitiveRestartNV_remap_index]
#define _gloffset_GetTexGenxvOES driDispatchRemapTable[GetTexGenxvOES_remap_index]
#define _gloffset_TexGenxOES driDispatchRemapTable[TexGenxOES_remap_index]
#define _gloffset_TexGenxvOES driDispatchRemapTable[TexGenxvOES_remap_index]
#define _gloffset_DepthBoundsEXT driDispatchRemapTable[DepthBoundsEXT_remap_index]
#define _gloffset_BindFramebufferEXT driDispatchRemapTable[BindFramebufferEXT_remap_index]
#define _gloffset_BindRenderbufferEXT driDispatchRemapTable[BindRenderbufferEXT_remap_index]
#define _gloffset_StringMarkerGREMEDY driDispatchRemapTable[StringMarkerGREMEDY_remap_index]
#define _gloffset_BufferParameteriAPPLE driDispatchRemapTable[BufferParameteriAPPLE_remap_index]
#define _gloffset_FlushMappedBufferRangeAPPLE driDispatchRemapTable[FlushMappedBufferRangeAPPLE_remap_index]
#define _gloffset_VertexAttribI1iEXT driDispatchRemapTable[VertexAttribI1iEXT_remap_index]
#define _gloffset_VertexAttribI1uiEXT driDispatchRemapTable[VertexAttribI1uiEXT_remap_index]
#define _gloffset_VertexAttribI2iEXT driDispatchRemapTable[VertexAttribI2iEXT_remap_index]
#define _gloffset_VertexAttribI2ivEXT driDispatchRemapTable[VertexAttribI2ivEXT_remap_index]
#define _gloffset_VertexAttribI2uiEXT driDispatchRemapTable[VertexAttribI2uiEXT_remap_index]
#define _gloffset_VertexAttribI2uivEXT driDispatchRemapTable[VertexAttribI2uivEXT_remap_index]
#define _gloffset_VertexAttribI3iEXT driDispatchRemapTable[VertexAttribI3iEXT_remap_index]
#define _gloffset_VertexAttribI3ivEXT driDispatchRemapTable[VertexAttribI3ivEXT_remap_index]
#define _gloffset_VertexAttribI3uiEXT driDispatchRemapTable[VertexAttribI3uiEXT_remap_index]
#define _gloffset_VertexAttribI3uivEXT driDispatchRemapTable[VertexAttribI3uivEXT_remap_index]
#define _gloffset_VertexAttribI4iEXT driDispatchRemapTable[VertexAttribI4iEXT_remap_index]
#define _gloffset_VertexAttribI4ivEXT driDispatchRemapTable[VertexAttribI4ivEXT_remap_index]
#define _gloffset_VertexAttribI4uiEXT driDispatchRemapTable[VertexAttribI4uiEXT_remap_index]
#define _gloffset_VertexAttribI4uivEXT driDispatchRemapTable[VertexAttribI4uivEXT_remap_index]
#define _gloffset_ClearColorIiEXT driDispatchRemapTable[ClearColorIiEXT_remap_index]
#define _gloffset_ClearColorIuiEXT driDispatchRemapTable[ClearColorIuiEXT_remap_index]
#define _gloffset_BindBufferOffsetEXT driDispatchRemapTable[BindBufferOffsetEXT_remap_index]
#define _gloffset_BeginPerfMonitorAMD driDispatchRemapTable[BeginPerfMonitorAMD_remap_index]
#define _gloffset_DeletePerfMonitorsAMD driDispatchRemapTable[DeletePerfMonitorsAMD_remap_index]
#define _gloffset_EndPerfMonitorAMD driDispatchRemapTable[EndPerfMonitorAMD_remap_index]
#define _gloffset_GenPerfMonitorsAMD driDispatchRemapTable[GenPerfMonitorsAMD_remap_index]
#define _gloffset_GetPerfMonitorCounterDataAMD driDispatchRemapTable[GetPerfMonitorCounterDataAMD_remap_index]
#define _gloffset_GetPerfMonitorCounterInfoAMD driDispatchRemapTable[GetPerfMonitorCounterInfoAMD_remap_index]
#define _gloffset_GetPerfMonitorCounterStringAMD driDispatchRemapTable[GetPerfMonitorCounterStringAMD_remap_index]
#define _gloffset_GetPerfMonitorCountersAMD driDispatchRemapTable[GetPerfMonitorCountersAMD_remap_index]
#define _gloffset_GetPerfMonitorGroupStringAMD driDispatchRemapTable[GetPerfMonitorGroupStringAMD_remap_index]
#define _gloffset_GetPerfMonitorGroupsAMD driDispatchRemapTable[GetPerfMonitorGroupsAMD_remap_index]
#define _gloffset_SelectPerfMonitorCountersAMD driDispatchRemapTable[SelectPerfMonitorCountersAMD_remap_index]
#define _gloffset_GetObjectParameterivAPPLE driDispatchRemapTable[GetObjectParameterivAPPLE_remap_index]
#define _gloffset_ObjectPurgeableAPPLE driDispatchRemapTable[ObjectPurgeableAPPLE_remap_index]
#define _gloffset_ObjectUnpurgeableAPPLE driDispatchRemapTable[ObjectUnpurgeableAPPLE_remap_index]
#define _gloffset_ActiveProgramEXT driDispatchRemapTable[ActiveProgramEXT_remap_index]
#define _gloffset_CreateShaderProgramEXT driDispatchRemapTable[CreateShaderProgramEXT_remap_index]
#define _gloffset_UseShaderProgramEXT driDispatchRemapTable[UseShaderProgramEXT_remap_index]
#define _gloffset_TextureBarrierNV driDispatchRemapTable[TextureBarrierNV_remap_index]
#define _gloffset_VDPAUFiniNV driDispatchRemapTable[VDPAUFiniNV_remap_index]
#define _gloffset_VDPAUGetSurfaceivNV driDispatchRemapTable[VDPAUGetSurfaceivNV_remap_index]
#define _gloffset_VDPAUInitNV driDispatchRemapTable[VDPAUInitNV_remap_index]
#define _gloffset_VDPAUIsSurfaceNV driDispatchRemapTable[VDPAUIsSurfaceNV_remap_index]
#define _gloffset_VDPAUMapSurfacesNV driDispatchRemapTable[VDPAUMapSurfacesNV_remap_index]
#define _gloffset_VDPAURegisterOutputSurfaceNV driDispatchRemapTable[VDPAURegisterOutputSurfaceNV_remap_index]
#define _gloffset_VDPAURegisterVideoSurfaceNV driDispatchRemapTable[VDPAURegisterVideoSurfaceNV_remap_index]
#define _gloffset_VDPAUSurfaceAccessNV driDispatchRemapTable[VDPAUSurfaceAccessNV_remap_index]
#define _gloffset_VDPAUUnmapSurfacesNV driDispatchRemapTable[VDPAUUnmapSurfacesNV_remap_index]
#define _gloffset_VDPAUUnregisterSurfaceNV driDispatchRemapTable[VDPAUUnregisterSurfaceNV_remap_index]
#define _gloffset_BeginPerfQueryINTEL driDispatchRemapTable[BeginPerfQueryINTEL_remap_index]
#define _gloffset_CreatePerfQueryINTEL driDispatchRemapTable[CreatePerfQueryINTEL_remap_index]
#define _gloffset_DeletePerfQueryINTEL driDispatchRemapTable[DeletePerfQueryINTEL_remap_index]
#define _gloffset_EndPerfQueryINTEL driDispatchRemapTable[EndPerfQueryINTEL_remap_index]
#define _gloffset_GetFirstPerfQueryIdINTEL driDispatchRemapTable[GetFirstPerfQueryIdINTEL_remap_index]
#define _gloffset_GetNextPerfQueryIdINTEL driDispatchRemapTable[GetNextPerfQueryIdINTEL_remap_index]
#define _gloffset_GetPerfCounterInfoINTEL driDispatchRemapTable[GetPerfCounterInfoINTEL_remap_index]
#define _gloffset_GetPerfQueryDataINTEL driDispatchRemapTable[GetPerfQueryDataINTEL_remap_index]
#define _gloffset_GetPerfQueryIdByNameINTEL driDispatchRemapTable[GetPerfQueryIdByNameINTEL_remap_index]
#define _gloffset_GetPerfQueryInfoINTEL driDispatchRemapTable[GetPerfQueryInfoINTEL_remap_index]
#define _gloffset_PolygonOffsetClampEXT driDispatchRemapTable[PolygonOffsetClampEXT_remap_index]
#define _gloffset_SubpixelPrecisionBiasNV driDispatchRemapTable[SubpixelPrecisionBiasNV_remap_index]
#define _gloffset_ConservativeRasterParameterfNV driDispatchRemapTable[ConservativeRasterParameterfNV_remap_index]
#define _gloffset_ConservativeRasterParameteriNV driDispatchRemapTable[ConservativeRasterParameteriNV_remap_index]
#define _gloffset_WindowRectanglesEXT driDispatchRemapTable[WindowRectanglesEXT_remap_index]
#define _gloffset_BufferStorageMemEXT driDispatchRemapTable[BufferStorageMemEXT_remap_index]
#define _gloffset_CreateMemoryObjectsEXT driDispatchRemapTable[CreateMemoryObjectsEXT_remap_index]
#define _gloffset_DeleteMemoryObjectsEXT driDispatchRemapTable[DeleteMemoryObjectsEXT_remap_index]
#define _gloffset_DeleteSemaphoresEXT driDispatchRemapTable[DeleteSemaphoresEXT_remap_index]
#define _gloffset_GenSemaphoresEXT driDispatchRemapTable[GenSemaphoresEXT_remap_index]
#define _gloffset_GetMemoryObjectParameterivEXT driDispatchRemapTable[GetMemoryObjectParameterivEXT_remap_index]
#define _gloffset_GetSemaphoreParameterui64vEXT driDispatchRemapTable[GetSemaphoreParameterui64vEXT_remap_index]
#define _gloffset_GetUnsignedBytei_vEXT driDispatchRemapTable[GetUnsignedBytei_vEXT_remap_index]
#define _gloffset_GetUnsignedBytevEXT driDispatchRemapTable[GetUnsignedBytevEXT_remap_index]
#define _gloffset_IsMemoryObjectEXT driDispatchRemapTable[IsMemoryObjectEXT_remap_index]
#define _gloffset_IsSemaphoreEXT driDispatchRemapTable[IsSemaphoreEXT_remap_index]
#define _gloffset_MemoryObjectParameterivEXT driDispatchRemapTable[MemoryObjectParameterivEXT_remap_index]
#define _gloffset_NamedBufferStorageMemEXT driDispatchRemapTable[NamedBufferStorageMemEXT_remap_index]
#define _gloffset_SemaphoreParameterui64vEXT driDispatchRemapTable[SemaphoreParameterui64vEXT_remap_index]
#define _gloffset_SignalSemaphoreEXT driDispatchRemapTable[SignalSemaphoreEXT_remap_index]
#define _gloffset_TexStorageMem1DEXT driDispatchRemapTable[TexStorageMem1DEXT_remap_index]
#define _gloffset_TexStorageMem2DEXT driDispatchRemapTable[TexStorageMem2DEXT_remap_index]
#define _gloffset_TexStorageMem2DMultisampleEXT driDispatchRemapTable[TexStorageMem2DMultisampleEXT_remap_index]
#define _gloffset_TexStorageMem3DEXT driDispatchRemapTable[TexStorageMem3DEXT_remap_index]
#define _gloffset_TexStorageMem3DMultisampleEXT driDispatchRemapTable[TexStorageMem3DMultisampleEXT_remap_index]
#define _gloffset_TextureStorageMem1DEXT driDispatchRemapTable[TextureStorageMem1DEXT_remap_index]
#define _gloffset_TextureStorageMem2DEXT driDispatchRemapTable[TextureStorageMem2DEXT_remap_index]
#define _gloffset_TextureStorageMem2DMultisampleEXT driDispatchRemapTable[TextureStorageMem2DMultisampleEXT_remap_index]
#define _gloffset_TextureStorageMem3DEXT driDispatchRemapTable[TextureStorageMem3DEXT_remap_index]
#define _gloffset_TextureStorageMem3DMultisampleEXT driDispatchRemapTable[TextureStorageMem3DMultisampleEXT_remap_index]
#define _gloffset_WaitSemaphoreEXT driDispatchRemapTable[WaitSemaphoreEXT_remap_index]
#define _gloffset_ImportMemoryFdEXT driDispatchRemapTable[ImportMemoryFdEXT_remap_index]
#define _gloffset_ImportSemaphoreFdEXT driDispatchRemapTable[ImportSemaphoreFdEXT_remap_index]
#define _gloffset_FramebufferFetchBarrierEXT driDispatchRemapTable[FramebufferFetchBarrierEXT_remap_index]
#define _gloffset_NamedRenderbufferStorageMultisampleAdvancedAMD driDispatchRemapTable[NamedRenderbufferStorageMultisampleAdvancedAMD_remap_index]
#define _gloffset_RenderbufferStorageMultisampleAdvancedAMD driDispatchRemapTable[RenderbufferStorageMultisampleAdvancedAMD_remap_index]
#define _gloffset_StencilFuncSeparateATI driDispatchRemapTable[StencilFuncSeparateATI_remap_index]
#define _gloffset_ProgramEnvParameters4fvEXT driDispatchRemapTable[ProgramEnvParameters4fvEXT_remap_index]
#define _gloffset_ProgramLocalParameters4fvEXT driDispatchRemapTable[ProgramLocalParameters4fvEXT_remap_index]
#define _gloffset_EGLImageTargetRenderbufferStorageOES driDispatchRemapTable[EGLImageTargetRenderbufferStorageOES_remap_index]
#define _gloffset_EGLImageTargetTexture2DOES driDispatchRemapTable[EGLImageTargetTexture2DOES_remap_index]
#define _gloffset_AlphaFuncx driDispatchRemapTable[AlphaFuncx_remap_index]
#define _gloffset_ClearColorx driDispatchRemapTable[ClearColorx_remap_index]
#define _gloffset_ClearDepthx driDispatchRemapTable[ClearDepthx_remap_index]
#define _gloffset_Color4x driDispatchRemapTable[Color4x_remap_index]
#define _gloffset_DepthRangex driDispatchRemapTable[DepthRangex_remap_index]
#define _gloffset_Fogx driDispatchRemapTable[Fogx_remap_index]
#define _gloffset_Fogxv driDispatchRemapTable[Fogxv_remap_index]
#define _gloffset_Frustumf driDispatchRemapTable[Frustumf_remap_index]
#define _gloffset_Frustumx driDispatchRemapTable[Frustumx_remap_index]
#define _gloffset_LightModelx driDispatchRemapTable[LightModelx_remap_index]
#define _gloffset_LightModelxv driDispatchRemapTable[LightModelxv_remap_index]
#define _gloffset_Lightx driDispatchRemapTable[Lightx_remap_index]
#define _gloffset_Lightxv driDispatchRemapTable[Lightxv_remap_index]
#define _gloffset_LineWidthx driDispatchRemapTable[LineWidthx_remap_index]
#define _gloffset_LoadMatrixx driDispatchRemapTable[LoadMatrixx_remap_index]
#define _gloffset_Materialx driDispatchRemapTable[Materialx_remap_index]
#define _gloffset_Materialxv driDispatchRemapTable[Materialxv_remap_index]
#define _gloffset_MultMatrixx driDispatchRemapTable[MultMatrixx_remap_index]
#define _gloffset_MultiTexCoord4x driDispatchRemapTable[MultiTexCoord4x_remap_index]
#define _gloffset_Normal3x driDispatchRemapTable[Normal3x_remap_index]
#define _gloffset_Orthof driDispatchRemapTable[Orthof_remap_index]
#define _gloffset_Orthox driDispatchRemapTable[Orthox_remap_index]
#define _gloffset_PointSizex driDispatchRemapTable[PointSizex_remap_index]
#define _gloffset_PolygonOffsetx driDispatchRemapTable[PolygonOffsetx_remap_index]
#define _gloffset_Rotatex driDispatchRemapTable[Rotatex_remap_index]
#define _gloffset_SampleCoveragex driDispatchRemapTable[SampleCoveragex_remap_index]
#define _gloffset_Scalex driDispatchRemapTable[Scalex_remap_index]
#define _gloffset_TexEnvx driDispatchRemapTable[TexEnvx_remap_index]
#define _gloffset_TexEnvxv driDispatchRemapTable[TexEnvxv_remap_index]
#define _gloffset_TexParameterx driDispatchRemapTable[TexParameterx_remap_index]
#define _gloffset_Translatex driDispatchRemapTable[Translatex_remap_index]
#define _gloffset_ClipPlanef driDispatchRemapTable[ClipPlanef_remap_index]
#define _gloffset_ClipPlanex driDispatchRemapTable[ClipPlanex_remap_index]
#define _gloffset_GetClipPlanef driDispatchRemapTable[GetClipPlanef_remap_index]
#define _gloffset_GetClipPlanex driDispatchRemapTable[GetClipPlanex_remap_index]
#define _gloffset_GetFixedv driDispatchRemapTable[GetFixedv_remap_index]
#define _gloffset_GetLightxv driDispatchRemapTable[GetLightxv_remap_index]
#define _gloffset_GetMaterialxv driDispatchRemapTable[GetMaterialxv_remap_index]
#define _gloffset_GetTexEnvxv driDispatchRemapTable[GetTexEnvxv_remap_index]
#define _gloffset_GetTexParameterxv driDispatchRemapTable[GetTexParameterxv_remap_index]
#define _gloffset_PointParameterx driDispatchRemapTable[PointParameterx_remap_index]
#define _gloffset_PointParameterxv driDispatchRemapTable[PointParameterxv_remap_index]
#define _gloffset_TexParameterxv driDispatchRemapTable[TexParameterxv_remap_index]
#define _gloffset_BlendBarrier driDispatchRemapTable[BlendBarrier_remap_index]
#define _gloffset_PrimitiveBoundingBox driDispatchRemapTable[PrimitiveBoundingBox_remap_index]
#define _gloffset_MaxShaderCompilerThreadsKHR driDispatchRemapTable[MaxShaderCompilerThreadsKHR_remap_index]
#define _gloffset_MatrixLoadfEXT driDispatchRemapTable[MatrixLoadfEXT_remap_index]
#define _gloffset_MatrixLoaddEXT driDispatchRemapTable[MatrixLoaddEXT_remap_index]
#define _gloffset_MatrixMultfEXT driDispatchRemapTable[MatrixMultfEXT_remap_index]
#define _gloffset_MatrixMultdEXT driDispatchRemapTable[MatrixMultdEXT_remap_index]
#define _gloffset_MatrixLoadIdentityEXT driDispatchRemapTable[MatrixLoadIdentityEXT_remap_index]
#define _gloffset_MatrixRotatefEXT driDispatchRemapTable[MatrixRotatefEXT_remap_index]
#define _gloffset_MatrixRotatedEXT driDispatchRemapTable[MatrixRotatedEXT_remap_index]
#define _gloffset_MatrixScalefEXT driDispatchRemapTable[MatrixScalefEXT_remap_index]
#define _gloffset_MatrixScaledEXT driDispatchRemapTable[MatrixScaledEXT_remap_index]
#define _gloffset_MatrixTranslatefEXT driDispatchRemapTable[MatrixTranslatefEXT_remap_index]
#define _gloffset_MatrixTranslatedEXT driDispatchRemapTable[MatrixTranslatedEXT_remap_index]
#define _gloffset_MatrixOrthoEXT driDispatchRemapTable[MatrixOrthoEXT_remap_index]
#define _gloffset_MatrixFrustumEXT driDispatchRemapTable[MatrixFrustumEXT_remap_index]
#define _gloffset_MatrixPushEXT driDispatchRemapTable[MatrixPushEXT_remap_index]
#define _gloffset_MatrixPopEXT driDispatchRemapTable[MatrixPopEXT_remap_index]
#define _gloffset_MatrixLoadTransposefEXT driDispatchRemapTable[MatrixLoadTransposefEXT_remap_index]
#define _gloffset_MatrixLoadTransposedEXT driDispatchRemapTable[MatrixLoadTransposedEXT_remap_index]
#define _gloffset_MatrixMultTransposefEXT driDispatchRemapTable[MatrixMultTransposefEXT_remap_index]
#define _gloffset_MatrixMultTransposedEXT driDispatchRemapTable[MatrixMultTransposedEXT_remap_index]
#define _gloffset_BindMultiTextureEXT driDispatchRemapTable[BindMultiTextureEXT_remap_index]
#define _gloffset_NamedBufferDataEXT driDispatchRemapTable[NamedBufferDataEXT_remap_index]
#define _gloffset_NamedBufferSubDataEXT driDispatchRemapTable[NamedBufferSubDataEXT_remap_index]
#define _gloffset_NamedBufferStorageEXT driDispatchRemapTable[NamedBufferStorageEXT_remap_index]
#define _gloffset_MapNamedBufferRangeEXT driDispatchRemapTable[MapNamedBufferRangeEXT_remap_index]
#define _gloffset_TextureImage1DEXT driDispatchRemapTable[TextureImage1DEXT_remap_index]
#define _gloffset_TextureImage2DEXT driDispatchRemapTable[TextureImage2DEXT_remap_index]
#define _gloffset_TextureImage3DEXT driDispatchRemapTable[TextureImage3DEXT_remap_index]
#define _gloffset_TextureSubImage1DEXT driDispatchRemapTable[TextureSubImage1DEXT_remap_index]
#define _gloffset_TextureSubImage2DEXT driDispatchRemapTable[TextureSubImage2DEXT_remap_index]
#define _gloffset_TextureSubImage3DEXT driDispatchRemapTable[TextureSubImage3DEXT_remap_index]
#define _gloffset_CopyTextureImage1DEXT driDispatchRemapTable[CopyTextureImage1DEXT_remap_index]
#define _gloffset_CopyTextureImage2DEXT driDispatchRemapTable[CopyTextureImage2DEXT_remap_index]
#define _gloffset_CopyTextureSubImage1DEXT driDispatchRemapTable[CopyTextureSubImage1DEXT_remap_index]
#define _gloffset_CopyTextureSubImage2DEXT driDispatchRemapTable[CopyTextureSubImage2DEXT_remap_index]
#define _gloffset_CopyTextureSubImage3DEXT driDispatchRemapTable[CopyTextureSubImage3DEXT_remap_index]
#define _gloffset_MapNamedBufferEXT driDispatchRemapTable[MapNamedBufferEXT_remap_index]
#define _gloffset_GetTextureParameterivEXT driDispatchRemapTable[GetTextureParameterivEXT_remap_index]
#define _gloffset_GetTextureParameterfvEXT driDispatchRemapTable[GetTextureParameterfvEXT_remap_index]
#define _gloffset_TextureParameteriEXT driDispatchRemapTable[TextureParameteriEXT_remap_index]
#define _gloffset_TextureParameterivEXT driDispatchRemapTable[TextureParameterivEXT_remap_index]
#define _gloffset_TextureParameterfEXT driDispatchRemapTable[TextureParameterfEXT_remap_index]
#define _gloffset_TextureParameterfvEXT driDispatchRemapTable[TextureParameterfvEXT_remap_index]
#define _gloffset_GetTextureImageEXT driDispatchRemapTable[GetTextureImageEXT_remap_index]
#define _gloffset_GetTextureLevelParameterivEXT driDispatchRemapTable[GetTextureLevelParameterivEXT_remap_index]
#define _gloffset_GetTextureLevelParameterfvEXT driDispatchRemapTable[GetTextureLevelParameterfvEXT_remap_index]
#define _gloffset_GetNamedBufferSubDataEXT driDispatchRemapTable[GetNamedBufferSubDataEXT_remap_index]
#define _gloffset_GetNamedBufferPointervEXT driDispatchRemapTable[GetNamedBufferPointervEXT_remap_index]
#define _gloffset_GetNamedBufferParameterivEXT driDispatchRemapTable[GetNamedBufferParameterivEXT_remap_index]
#define _gloffset_FlushMappedNamedBufferRangeEXT driDispatchRemapTable[FlushMappedNamedBufferRangeEXT_remap_index]
#define _gloffset_FramebufferDrawBufferEXT driDispatchRemapTable[FramebufferDrawBufferEXT_remap_index]
#define _gloffset_FramebufferDrawBuffersEXT driDispatchRemapTable[FramebufferDrawBuffersEXT_remap_index]
#define _gloffset_FramebufferReadBufferEXT driDispatchRemapTable[FramebufferReadBufferEXT_remap_index]
#define _gloffset_GetFramebufferParameterivEXT driDispatchRemapTable[GetFramebufferParameterivEXT_remap_index]
#define _gloffset_CheckNamedFramebufferStatusEXT driDispatchRemapTable[CheckNamedFramebufferStatusEXT_remap_index]
#define _gloffset_NamedFramebufferTexture1DEXT driDispatchRemapTable[NamedFramebufferTexture1DEXT_remap_index]
#define _gloffset_NamedFramebufferTexture2DEXT driDispatchRemapTable[NamedFramebufferTexture2DEXT_remap_index]
#define _gloffset_NamedFramebufferTexture3DEXT driDispatchRemapTable[NamedFramebufferTexture3DEXT_remap_index]
#define _gloffset_NamedFramebufferRenderbufferEXT driDispatchRemapTable[NamedFramebufferRenderbufferEXT_remap_index]
#define _gloffset_GetNamedFramebufferAttachmentParameterivEXT driDispatchRemapTable[GetNamedFramebufferAttachmentParameterivEXT_remap_index]
#define _gloffset_EnableClientStateiEXT driDispatchRemapTable[EnableClientStateiEXT_remap_index]
#define _gloffset_DisableClientStateiEXT driDispatchRemapTable[DisableClientStateiEXT_remap_index]
#define _gloffset_GetPointerIndexedvEXT driDispatchRemapTable[GetPointerIndexedvEXT_remap_index]
#define _gloffset_MultiTexEnviEXT driDispatchRemapTable[MultiTexEnviEXT_remap_index]
#define _gloffset_MultiTexEnvivEXT driDispatchRemapTable[MultiTexEnvivEXT_remap_index]
#define _gloffset_MultiTexEnvfEXT driDispatchRemapTable[MultiTexEnvfEXT_remap_index]
#define _gloffset_MultiTexEnvfvEXT driDispatchRemapTable[MultiTexEnvfvEXT_remap_index]
#define _gloffset_GetMultiTexEnvivEXT driDispatchRemapTable[GetMultiTexEnvivEXT_remap_index]
#define _gloffset_GetMultiTexEnvfvEXT driDispatchRemapTable[GetMultiTexEnvfvEXT_remap_index]
#define _gloffset_MultiTexParameteriEXT driDispatchRemapTable[MultiTexParameteriEXT_remap_index]
#define _gloffset_MultiTexParameterivEXT driDispatchRemapTable[MultiTexParameterivEXT_remap_index]
#define _gloffset_MultiTexParameterfEXT driDispatchRemapTable[MultiTexParameterfEXT_remap_index]
#define _gloffset_MultiTexParameterfvEXT driDispatchRemapTable[MultiTexParameterfvEXT_remap_index]
#define _gloffset_GetMultiTexImageEXT driDispatchRemapTable[GetMultiTexImageEXT_remap_index]
#define _gloffset_MultiTexImage1DEXT driDispatchRemapTable[MultiTexImage1DEXT_remap_index]
#define _gloffset_MultiTexImage2DEXT driDispatchRemapTable[MultiTexImage2DEXT_remap_index]
#define _gloffset_MultiTexImage3DEXT driDispatchRemapTable[MultiTexImage3DEXT_remap_index]
#define _gloffset_MultiTexSubImage1DEXT driDispatchRemapTable[MultiTexSubImage1DEXT_remap_index]
#define _gloffset_MultiTexSubImage2DEXT driDispatchRemapTable[MultiTexSubImage2DEXT_remap_index]
#define _gloffset_MultiTexSubImage3DEXT driDispatchRemapTable[MultiTexSubImage3DEXT_remap_index]
#define _gloffset_GetMultiTexParameterivEXT driDispatchRemapTable[GetMultiTexParameterivEXT_remap_index]
#define _gloffset_GetMultiTexParameterfvEXT driDispatchRemapTable[GetMultiTexParameterfvEXT_remap_index]
#define _gloffset_CopyMultiTexImage1DEXT driDispatchRemapTable[CopyMultiTexImage1DEXT_remap_index]
#define _gloffset_CopyMultiTexImage2DEXT driDispatchRemapTable[CopyMultiTexImage2DEXT_remap_index]
#define _gloffset_CopyMultiTexSubImage1DEXT driDispatchRemapTable[CopyMultiTexSubImage1DEXT_remap_index]
#define _gloffset_CopyMultiTexSubImage2DEXT driDispatchRemapTable[CopyMultiTexSubImage2DEXT_remap_index]
#define _gloffset_CopyMultiTexSubImage3DEXT driDispatchRemapTable[CopyMultiTexSubImage3DEXT_remap_index]
#define _gloffset_MultiTexGendEXT driDispatchRemapTable[MultiTexGendEXT_remap_index]
#define _gloffset_MultiTexGendvEXT driDispatchRemapTable[MultiTexGendvEXT_remap_index]
#define _gloffset_MultiTexGenfEXT driDispatchRemapTable[MultiTexGenfEXT_remap_index]
#define _gloffset_MultiTexGenfvEXT driDispatchRemapTable[MultiTexGenfvEXT_remap_index]
#define _gloffset_MultiTexGeniEXT driDispatchRemapTable[MultiTexGeniEXT_remap_index]
#define _gloffset_MultiTexGenivEXT driDispatchRemapTable[MultiTexGenivEXT_remap_index]
#define _gloffset_GetMultiTexGendvEXT driDispatchRemapTable[GetMultiTexGendvEXT_remap_index]
#define _gloffset_GetMultiTexGenfvEXT driDispatchRemapTable[GetMultiTexGenfvEXT_remap_index]
#define _gloffset_GetMultiTexGenivEXT driDispatchRemapTable[GetMultiTexGenivEXT_remap_index]
#define _gloffset_MultiTexCoordPointerEXT driDispatchRemapTable[MultiTexCoordPointerEXT_remap_index]
#define _gloffset_BindImageTextureEXT driDispatchRemapTable[BindImageTextureEXT_remap_index]
#define _gloffset_CompressedTextureImage1DEXT driDispatchRemapTable[CompressedTextureImage1DEXT_remap_index]
#define _gloffset_CompressedTextureImage2DEXT driDispatchRemapTable[CompressedTextureImage2DEXT_remap_index]
#define _gloffset_CompressedTextureImage3DEXT driDispatchRemapTable[CompressedTextureImage3DEXT_remap_index]
#define _gloffset_CompressedTextureSubImage1DEXT driDispatchRemapTable[CompressedTextureSubImage1DEXT_remap_index]
#define _gloffset_CompressedTextureSubImage2DEXT driDispatchRemapTable[CompressedTextureSubImage2DEXT_remap_index]
#define _gloffset_CompressedTextureSubImage3DEXT driDispatchRemapTable[CompressedTextureSubImage3DEXT_remap_index]
#define _gloffset_GetCompressedTextureImageEXT driDispatchRemapTable[GetCompressedTextureImageEXT_remap_index]
#define _gloffset_CompressedMultiTexImage1DEXT driDispatchRemapTable[CompressedMultiTexImage1DEXT_remap_index]
#define _gloffset_CompressedMultiTexImage2DEXT driDispatchRemapTable[CompressedMultiTexImage2DEXT_remap_index]
#define _gloffset_CompressedMultiTexImage3DEXT driDispatchRemapTable[CompressedMultiTexImage3DEXT_remap_index]
#define _gloffset_CompressedMultiTexSubImage1DEXT driDispatchRemapTable[CompressedMultiTexSubImage1DEXT_remap_index]
#define _gloffset_CompressedMultiTexSubImage2DEXT driDispatchRemapTable[CompressedMultiTexSubImage2DEXT_remap_index]
#define _gloffset_CompressedMultiTexSubImage3DEXT driDispatchRemapTable[CompressedMultiTexSubImage3DEXT_remap_index]
#define _gloffset_GetCompressedMultiTexImageEXT driDispatchRemapTable[GetCompressedMultiTexImageEXT_remap_index]
#define _gloffset_GetMultiTexLevelParameterivEXT driDispatchRemapTable[GetMultiTexLevelParameterivEXT_remap_index]
#define _gloffset_GetMultiTexLevelParameterfvEXT driDispatchRemapTable[GetMultiTexLevelParameterfvEXT_remap_index]
#define _gloffset_FramebufferParameteriMESA driDispatchRemapTable[FramebufferParameteriMESA_remap_index]
#define _gloffset_GetFramebufferParameterivMESA driDispatchRemapTable[GetFramebufferParameterivMESA_remap_index]
#define _gloffset_NamedRenderbufferStorageEXT driDispatchRemapTable[NamedRenderbufferStorageEXT_remap_index]
#define _gloffset_GetNamedRenderbufferParameterivEXT driDispatchRemapTable[GetNamedRenderbufferParameterivEXT_remap_index]
#define _gloffset_ClientAttribDefaultEXT driDispatchRemapTable[ClientAttribDefaultEXT_remap_index]
#define _gloffset_PushClientAttribDefaultEXT driDispatchRemapTable[PushClientAttribDefaultEXT_remap_index]
#define _gloffset_NamedProgramStringEXT driDispatchRemapTable[NamedProgramStringEXT_remap_index]
#define _gloffset_GetNamedProgramStringEXT driDispatchRemapTable[GetNamedProgramStringEXT_remap_index]
#define _gloffset_NamedProgramLocalParameter4fEXT driDispatchRemapTable[NamedProgramLocalParameter4fEXT_remap_index]
#define _gloffset_NamedProgramLocalParameter4fvEXT driDispatchRemapTable[NamedProgramLocalParameter4fvEXT_remap_index]
#define _gloffset_GetNamedProgramLocalParameterfvEXT driDispatchRemapTable[GetNamedProgramLocalParameterfvEXT_remap_index]
#define _gloffset_NamedProgramLocalParameter4dEXT driDispatchRemapTable[NamedProgramLocalParameter4dEXT_remap_index]
#define _gloffset_NamedProgramLocalParameter4dvEXT driDispatchRemapTable[NamedProgramLocalParameter4dvEXT_remap_index]
#define _gloffset_GetNamedProgramLocalParameterdvEXT driDispatchRemapTable[GetNamedProgramLocalParameterdvEXT_remap_index]
#define _gloffset_GetNamedProgramivEXT driDispatchRemapTable[GetNamedProgramivEXT_remap_index]
#define _gloffset_TextureBufferEXT driDispatchRemapTable[TextureBufferEXT_remap_index]
#define _gloffset_MultiTexBufferEXT driDispatchRemapTable[MultiTexBufferEXT_remap_index]
#define _gloffset_TextureParameterIivEXT driDispatchRemapTable[TextureParameterIivEXT_remap_index]
#define _gloffset_TextureParameterIuivEXT driDispatchRemapTable[TextureParameterIuivEXT_remap_index]
#define _gloffset_GetTextureParameterIivEXT driDispatchRemapTable[GetTextureParameterIivEXT_remap_index]
#define _gloffset_GetTextureParameterIuivEXT driDispatchRemapTable[GetTextureParameterIuivEXT_remap_index]
#define _gloffset_MultiTexParameterIivEXT driDispatchRemapTable[MultiTexParameterIivEXT_remap_index]
#define _gloffset_MultiTexParameterIuivEXT driDispatchRemapTable[MultiTexParameterIuivEXT_remap_index]
#define _gloffset_GetMultiTexParameterIivEXT driDispatchRemapTable[GetMultiTexParameterIivEXT_remap_index]
#define _gloffset_GetMultiTexParameterIuivEXT driDispatchRemapTable[GetMultiTexParameterIuivEXT_remap_index]
#define _gloffset_NamedProgramLocalParameters4fvEXT driDispatchRemapTable[NamedProgramLocalParameters4fvEXT_remap_index]
#define _gloffset_GenerateTextureMipmapEXT driDispatchRemapTable[GenerateTextureMipmapEXT_remap_index]
#define _gloffset_GenerateMultiTexMipmapEXT driDispatchRemapTable[GenerateMultiTexMipmapEXT_remap_index]
#define _gloffset_NamedRenderbufferStorageMultisampleEXT driDispatchRemapTable[NamedRenderbufferStorageMultisampleEXT_remap_index]
#define _gloffset_NamedCopyBufferSubDataEXT driDispatchRemapTable[NamedCopyBufferSubDataEXT_remap_index]
#define _gloffset_VertexArrayVertexOffsetEXT driDispatchRemapTable[VertexArrayVertexOffsetEXT_remap_index]
#define _gloffset_VertexArrayColorOffsetEXT driDispatchRemapTable[VertexArrayColorOffsetEXT_remap_index]
#define _gloffset_VertexArrayEdgeFlagOffsetEXT driDispatchRemapTable[VertexArrayEdgeFlagOffsetEXT_remap_index]
#define _gloffset_VertexArrayIndexOffsetEXT driDispatchRemapTable[VertexArrayIndexOffsetEXT_remap_index]
#define _gloffset_VertexArrayNormalOffsetEXT driDispatchRemapTable[VertexArrayNormalOffsetEXT_remap_index]
#define _gloffset_VertexArrayTexCoordOffsetEXT driDispatchRemapTable[VertexArrayTexCoordOffsetEXT_remap_index]
#define _gloffset_VertexArrayMultiTexCoordOffsetEXT driDispatchRemapTable[VertexArrayMultiTexCoordOffsetEXT_remap_index]
#define _gloffset_VertexArrayFogCoordOffsetEXT driDispatchRemapTable[VertexArrayFogCoordOffsetEXT_remap_index]
#define _gloffset_VertexArraySecondaryColorOffsetEXT driDispatchRemapTable[VertexArraySecondaryColorOffsetEXT_remap_index]
#define _gloffset_VertexArrayVertexAttribOffsetEXT driDispatchRemapTable[VertexArrayVertexAttribOffsetEXT_remap_index]
#define _gloffset_VertexArrayVertexAttribIOffsetEXT driDispatchRemapTable[VertexArrayVertexAttribIOffsetEXT_remap_index]
#define _gloffset_EnableVertexArrayEXT driDispatchRemapTable[EnableVertexArrayEXT_remap_index]
#define _gloffset_DisableVertexArrayEXT driDispatchRemapTable[DisableVertexArrayEXT_remap_index]
#define _gloffset_EnableVertexArrayAttribEXT driDispatchRemapTable[EnableVertexArrayAttribEXT_remap_index]
#define _gloffset_DisableVertexArrayAttribEXT driDispatchRemapTable[DisableVertexArrayAttribEXT_remap_index]
#define _gloffset_GetVertexArrayIntegervEXT driDispatchRemapTable[GetVertexArrayIntegervEXT_remap_index]
#define _gloffset_GetVertexArrayPointervEXT driDispatchRemapTable[GetVertexArrayPointervEXT_remap_index]
#define _gloffset_GetVertexArrayIntegeri_vEXT driDispatchRemapTable[GetVertexArrayIntegeri_vEXT_remap_index]
#define _gloffset_GetVertexArrayPointeri_vEXT driDispatchRemapTable[GetVertexArrayPointeri_vEXT_remap_index]
#define _gloffset_ClearNamedBufferDataEXT driDispatchRemapTable[ClearNamedBufferDataEXT_remap_index]
#define _gloffset_ClearNamedBufferSubDataEXT driDispatchRemapTable[ClearNamedBufferSubDataEXT_remap_index]
#define _gloffset_NamedFramebufferParameteriEXT driDispatchRemapTable[NamedFramebufferParameteriEXT_remap_index]
#define _gloffset_GetNamedFramebufferParameterivEXT driDispatchRemapTable[GetNamedFramebufferParameterivEXT_remap_index]
#define _gloffset_VertexArrayVertexAttribLOffsetEXT driDispatchRemapTable[VertexArrayVertexAttribLOffsetEXT_remap_index]
#define _gloffset_VertexArrayVertexAttribDivisorEXT driDispatchRemapTable[VertexArrayVertexAttribDivisorEXT_remap_index]
#define _gloffset_TextureBufferRangeEXT driDispatchRemapTable[TextureBufferRangeEXT_remap_index]
#define _gloffset_TextureStorage2DMultisampleEXT driDispatchRemapTable[TextureStorage2DMultisampleEXT_remap_index]
#define _gloffset_TextureStorage3DMultisampleEXT driDispatchRemapTable[TextureStorage3DMultisampleEXT_remap_index]
#define _gloffset_VertexArrayBindVertexBufferEXT driDispatchRemapTable[VertexArrayBindVertexBufferEXT_remap_index]
#define _gloffset_VertexArrayVertexAttribFormatEXT driDispatchRemapTable[VertexArrayVertexAttribFormatEXT_remap_index]
#define _gloffset_VertexArrayVertexAttribIFormatEXT driDispatchRemapTable[VertexArrayVertexAttribIFormatEXT_remap_index]
#define _gloffset_VertexArrayVertexAttribLFormatEXT driDispatchRemapTable[VertexArrayVertexAttribLFormatEXT_remap_index]
#define _gloffset_VertexArrayVertexAttribBindingEXT driDispatchRemapTable[VertexArrayVertexAttribBindingEXT_remap_index]
#define _gloffset_VertexArrayVertexBindingDivisorEXT driDispatchRemapTable[VertexArrayVertexBindingDivisorEXT_remap_index]
#define _gloffset_NamedBufferPageCommitmentEXT driDispatchRemapTable[NamedBufferPageCommitmentEXT_remap_index]
#define _gloffset_NamedStringARB driDispatchRemapTable[NamedStringARB_remap_index]
#define _gloffset_DeleteNamedStringARB driDispatchRemapTable[DeleteNamedStringARB_remap_index]
#define _gloffset_CompileShaderIncludeARB driDispatchRemapTable[CompileShaderIncludeARB_remap_index]
#define _gloffset_IsNamedStringARB driDispatchRemapTable[IsNamedStringARB_remap_index]
#define _gloffset_GetNamedStringARB driDispatchRemapTable[GetNamedStringARB_remap_index]
#define _gloffset_GetNamedStringivARB driDispatchRemapTable[GetNamedStringivARB_remap_index]
#define _gloffset_EGLImageTargetTexStorageEXT driDispatchRemapTable[EGLImageTargetTexStorageEXT_remap_index]
#define _gloffset_EGLImageTargetTextureStorageEXT driDispatchRemapTable[EGLImageTargetTextureStorageEXT_remap_index]
#define _gloffset_CopyImageSubDataNV driDispatchRemapTable[CopyImageSubDataNV_remap_index]
#define _gloffset_ViewportSwizzleNV driDispatchRemapTable[ViewportSwizzleNV_remap_index]
#define _gloffset_AlphaToCoverageDitherControlNV driDispatchRemapTable[AlphaToCoverageDitherControlNV_remap_index]
#define _gloffset_InternalBufferSubDataCopyMESA driDispatchRemapTable[InternalBufferSubDataCopyMESA_remap_index]
#define _gloffset_Vertex2hNV driDispatchRemapTable[Vertex2hNV_remap_index]
#define _gloffset_Vertex2hvNV driDispatchRemapTable[Vertex2hvNV_remap_index]
#define _gloffset_Vertex3hNV driDispatchRemapTable[Vertex3hNV_remap_index]
#define _gloffset_Vertex3hvNV driDispatchRemapTable[Vertex3hvNV_remap_index]
#define _gloffset_Vertex4hNV driDispatchRemapTable[Vertex4hNV_remap_index]
#define _gloffset_Vertex4hvNV driDispatchRemapTable[Vertex4hvNV_remap_index]
#define _gloffset_Normal3hNV driDispatchRemapTable[Normal3hNV_remap_index]
#define _gloffset_Normal3hvNV driDispatchRemapTable[Normal3hvNV_remap_index]
#define _gloffset_Color3hNV driDispatchRemapTable[Color3hNV_remap_index]
#define _gloffset_Color3hvNV driDispatchRemapTable[Color3hvNV_remap_index]
#define _gloffset_Color4hNV driDispatchRemapTable[Color4hNV_remap_index]
#define _gloffset_Color4hvNV driDispatchRemapTable[Color4hvNV_remap_index]
#define _gloffset_TexCoord1hNV driDispatchRemapTable[TexCoord1hNV_remap_index]
#define _gloffset_TexCoord1hvNV driDispatchRemapTable[TexCoord1hvNV_remap_index]
#define _gloffset_TexCoord2hNV driDispatchRemapTable[TexCoord2hNV_remap_index]
#define _gloffset_TexCoord2hvNV driDispatchRemapTable[TexCoord2hvNV_remap_index]
#define _gloffset_TexCoord3hNV driDispatchRemapTable[TexCoord3hNV_remap_index]
#define _gloffset_TexCoord3hvNV driDispatchRemapTable[TexCoord3hvNV_remap_index]
#define _gloffset_TexCoord4hNV driDispatchRemapTable[TexCoord4hNV_remap_index]
#define _gloffset_TexCoord4hvNV driDispatchRemapTable[TexCoord4hvNV_remap_index]
#define _gloffset_MultiTexCoord1hNV driDispatchRemapTable[MultiTexCoord1hNV_remap_index]
#define _gloffset_MultiTexCoord1hvNV driDispatchRemapTable[MultiTexCoord1hvNV_remap_index]
#define _gloffset_MultiTexCoord2hNV driDispatchRemapTable[MultiTexCoord2hNV_remap_index]
#define _gloffset_MultiTexCoord2hvNV driDispatchRemapTable[MultiTexCoord2hvNV_remap_index]
#define _gloffset_MultiTexCoord3hNV driDispatchRemapTable[MultiTexCoord3hNV_remap_index]
#define _gloffset_MultiTexCoord3hvNV driDispatchRemapTable[MultiTexCoord3hvNV_remap_index]
#define _gloffset_MultiTexCoord4hNV driDispatchRemapTable[MultiTexCoord4hNV_remap_index]
#define _gloffset_MultiTexCoord4hvNV driDispatchRemapTable[MultiTexCoord4hvNV_remap_index]
#define _gloffset_FogCoordhNV driDispatchRemapTable[FogCoordhNV_remap_index]
#define _gloffset_FogCoordhvNV driDispatchRemapTable[FogCoordhvNV_remap_index]
#define _gloffset_SecondaryColor3hNV driDispatchRemapTable[SecondaryColor3hNV_remap_index]
#define _gloffset_SecondaryColor3hvNV driDispatchRemapTable[SecondaryColor3hvNV_remap_index]
#define _gloffset_InternalSetError driDispatchRemapTable[InternalSetError_remap_index]
#define _gloffset_VertexAttrib1hNV driDispatchRemapTable[VertexAttrib1hNV_remap_index]
#define _gloffset_VertexAttrib1hvNV driDispatchRemapTable[VertexAttrib1hvNV_remap_index]
#define _gloffset_VertexAttrib2hNV driDispatchRemapTable[VertexAttrib2hNV_remap_index]
#define _gloffset_VertexAttrib2hvNV driDispatchRemapTable[VertexAttrib2hvNV_remap_index]
#define _gloffset_VertexAttrib3hNV driDispatchRemapTable[VertexAttrib3hNV_remap_index]
#define _gloffset_VertexAttrib3hvNV driDispatchRemapTable[VertexAttrib3hvNV_remap_index]
#define _gloffset_VertexAttrib4hNV driDispatchRemapTable[VertexAttrib4hNV_remap_index]
#define _gloffset_VertexAttrib4hvNV driDispatchRemapTable[VertexAttrib4hvNV_remap_index]
#define _gloffset_VertexAttribs1hvNV driDispatchRemapTable[VertexAttribs1hvNV_remap_index]
#define _gloffset_VertexAttribs2hvNV driDispatchRemapTable[VertexAttribs2hvNV_remap_index]
#define _gloffset_VertexAttribs3hvNV driDispatchRemapTable[VertexAttribs3hvNV_remap_index]
#define _gloffset_VertexAttribs4hvNV driDispatchRemapTable[VertexAttribs4hvNV_remap_index]
#define _gloffset_TexPageCommitmentARB driDispatchRemapTable[TexPageCommitmentARB_remap_index]
#define _gloffset_TexturePageCommitmentEXT driDispatchRemapTable[TexturePageCommitmentEXT_remap_index]
#define _gloffset_ImportMemoryWin32HandleEXT driDispatchRemapTable[ImportMemoryWin32HandleEXT_remap_index]
#define _gloffset_ImportSemaphoreWin32HandleEXT driDispatchRemapTable[ImportSemaphoreWin32HandleEXT_remap_index]

typedef void (GLAPIENTRYP _glptr_NewList)(GLuint, GLenum);
#define CALL_NewList(disp, parameters) (* GET_NewList(disp)) parameters
#define GET_NewList(disp) ((_glptr_NewList)(GET_by_offset((disp), _gloffset_NewList)))
#define SET_NewList(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLenum) = func; \
   SET_by_offset(disp, _gloffset_NewList, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_EndList)(void);
#define CALL_EndList(disp, parameters) (* GET_EndList(disp)) parameters
#define GET_EndList(disp) ((_glptr_EndList)(GET_by_offset((disp), _gloffset_EndList)))
#define SET_EndList(disp, func) do { \
   void (GLAPIENTRYP fn)(void) = func; \
   SET_by_offset(disp, _gloffset_EndList, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_CallList)(GLuint);
#define CALL_CallList(disp, parameters) (* GET_CallList(disp)) parameters
#define GET_CallList(disp) ((_glptr_CallList)(GET_by_offset((disp), _gloffset_CallList)))
#define SET_CallList(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint) = func; \
   SET_by_offset(disp, _gloffset_CallList, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_CallLists)(GLsizei, GLenum, const GLvoid *);
#define CALL_CallLists(disp, parameters) (* GET_CallLists(disp)) parameters
#define GET_CallLists(disp) ((_glptr_CallLists)(GET_by_offset((disp), _gloffset_CallLists)))
#define SET_CallLists(disp, func) do { \
   void (GLAPIENTRYP fn)(GLsizei, GLenum, const GLvoid *) = func; \
   SET_by_offset(disp, _gloffset_CallLists, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_DeleteLists)(GLuint, GLsizei);
#define CALL_DeleteLists(disp, parameters) (* GET_DeleteLists(disp)) parameters
#define GET_DeleteLists(disp) ((_glptr_DeleteLists)(GET_by_offset((disp), _gloffset_DeleteLists)))
#define SET_DeleteLists(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLsizei) = func; \
   SET_by_offset(disp, _gloffset_DeleteLists, fn); \
} while (0)

typedef GLuint (GLAPIENTRYP _glptr_GenLists)(GLsizei);
#define CALL_GenLists(disp, parameters) (* GET_GenLists(disp)) parameters
#define GET_GenLists(disp) ((_glptr_GenLists)(GET_by_offset((disp), _gloffset_GenLists)))
#define SET_GenLists(disp, func) do { \
   GLuint (GLAPIENTRYP fn)(GLsizei) = func; \
   SET_by_offset(disp, _gloffset_GenLists, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_ListBase)(GLuint);
#define CALL_ListBase(disp, parameters) (* GET_ListBase(disp)) parameters
#define GET_ListBase(disp) ((_glptr_ListBase)(GET_by_offset((disp), _gloffset_ListBase)))
#define SET_ListBase(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint) = func; \
   SET_by_offset(disp, _gloffset_ListBase, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_Begin)(GLenum);
#define CALL_Begin(disp, parameters) (* GET_Begin(disp)) parameters
#define GET_Begin(disp) ((_glptr_Begin)(GET_by_offset((disp), _gloffset_Begin)))
#define SET_Begin(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum) = func; \
   SET_by_offset(disp, _gloffset_Begin, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_Bitmap)(GLsizei, GLsizei, GLfloat, GLfloat, GLfloat, GLfloat, const GLubyte *);
#define CALL_Bitmap(disp, parameters) (* GET_Bitmap(disp)) parameters
#define GET_Bitmap(disp) ((_glptr_Bitmap)(GET_by_offset((disp), _gloffset_Bitmap)))
#define SET_Bitmap(disp, func) do { \
   void (GLAPIENTRYP fn)(GLsizei, GLsizei, GLfloat, GLfloat, GLfloat, GLfloat, const GLubyte *) = func; \
   SET_by_offset(disp, _gloffset_Bitmap, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_Color3b)(GLbyte, GLbyte, GLbyte);
#define CALL_Color3b(disp, parameters) (* GET_Color3b(disp)) parameters
#define GET_Color3b(disp) ((_glptr_Color3b)(GET_by_offset((disp), _gloffset_Color3b)))
#define SET_Color3b(disp, func) do { \
   void (GLAPIENTRYP fn)(GLbyte, GLbyte, GLbyte) = func; \
   SET_by_offset(disp, _gloffset_Color3b, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_Color3bv)(const GLbyte *);
#define CALL_Color3bv(disp, parameters) (* GET_Color3bv(disp)) parameters
#define GET_Color3bv(disp) ((_glptr_Color3bv)(GET_by_offset((disp), _gloffset_Color3bv)))
#define SET_Color3bv(disp, func) do { \
   void (GLAPIENTRYP fn)(const GLbyte *) = func; \
   SET_by_offset(disp, _gloffset_Color3bv, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_Color3d)(GLdouble, GLdouble, GLdouble);
#define CALL_Color3d(disp, parameters) (* GET_Color3d(disp)) parameters
#define GET_Color3d(disp) ((_glptr_Color3d)(GET_by_offset((disp), _gloffset_Color3d)))
#define SET_Color3d(disp, func) do { \
   void (GLAPIENTRYP fn)(GLdouble, GLdouble, GLdouble) = func; \
   SET_by_offset(disp, _gloffset_Color3d, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_Color3dv)(const GLdouble *);
#define CALL_Color3dv(disp, parameters) (* GET_Color3dv(disp)) parameters
#define GET_Color3dv(disp) ((_glptr_Color3dv)(GET_by_offset((disp), _gloffset_Color3dv)))
#define SET_Color3dv(disp, func) do { \
   void (GLAPIENTRYP fn)(const GLdouble *) = func; \
   SET_by_offset(disp, _gloffset_Color3dv, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_Color3f)(GLfloat, GLfloat, GLfloat);
#define CALL_Color3f(disp, parameters) (* GET_Color3f(disp)) parameters
#define GET_Color3f(disp) ((_glptr_Color3f)(GET_by_offset((disp), _gloffset_Color3f)))
#define SET_Color3f(disp, func) do { \
   void (GLAPIENTRYP fn)(GLfloat, GLfloat, GLfloat) = func; \
   SET_by_offset(disp, _gloffset_Color3f, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_Color3fv)(const GLfloat *);
#define CALL_Color3fv(disp, parameters) (* GET_Color3fv(disp)) parameters
#define GET_Color3fv(disp) ((_glptr_Color3fv)(GET_by_offset((disp), _gloffset_Color3fv)))
#define SET_Color3fv(disp, func) do { \
   void (GLAPIENTRYP fn)(const GLfloat *) = func; \
   SET_by_offset(disp, _gloffset_Color3fv, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_Color3i)(GLint, GLint, GLint);
#define CALL_Color3i(disp, parameters) (* GET_Color3i(disp)) parameters
#define GET_Color3i(disp) ((_glptr_Color3i)(GET_by_offset((disp), _gloffset_Color3i)))
#define SET_Color3i(disp, func) do { \
   void (GLAPIENTRYP fn)(GLint, GLint, GLint) = func; \
   SET_by_offset(disp, _gloffset_Color3i, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_Color3iv)(const GLint *);
#define CALL_Color3iv(disp, parameters) (* GET_Color3iv(disp)) parameters
#define GET_Color3iv(disp) ((_glptr_Color3iv)(GET_by_offset((disp), _gloffset_Color3iv)))
#define SET_Color3iv(disp, func) do { \
   void (GLAPIENTRYP fn)(const GLint *) = func; \
   SET_by_offset(disp, _gloffset_Color3iv, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_Color3s)(GLshort, GLshort, GLshort);
#define CALL_Color3s(disp, parameters) (* GET_Color3s(disp)) parameters
#define GET_Color3s(disp) ((_glptr_Color3s)(GET_by_offset((disp), _gloffset_Color3s)))
#define SET_Color3s(disp, func) do { \
   void (GLAPIENTRYP fn)(GLshort, GLshort, GLshort) = func; \
   SET_by_offset(disp, _gloffset_Color3s, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_Color3sv)(const GLshort *);
#define CALL_Color3sv(disp, parameters) (* GET_Color3sv(disp)) parameters
#define GET_Color3sv(disp) ((_glptr_Color3sv)(GET_by_offset((disp), _gloffset_Color3sv)))
#define SET_Color3sv(disp, func) do { \
   void (GLAPIENTRYP fn)(const GLshort *) = func; \
   SET_by_offset(disp, _gloffset_Color3sv, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_Color3ub)(GLubyte, GLubyte, GLubyte);
#define CALL_Color3ub(disp, parameters) (* GET_Color3ub(disp)) parameters
#define GET_Color3ub(disp) ((_glptr_Color3ub)(GET_by_offset((disp), _gloffset_Color3ub)))
#define SET_Color3ub(disp, func) do { \
   void (GLAPIENTRYP fn)(GLubyte, GLubyte, GLubyte) = func; \
   SET_by_offset(disp, _gloffset_Color3ub, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_Color3ubv)(const GLubyte *);
#define CALL_Color3ubv(disp, parameters) (* GET_Color3ubv(disp)) parameters
#define GET_Color3ubv(disp) ((_glptr_Color3ubv)(GET_by_offset((disp), _gloffset_Color3ubv)))
#define SET_Color3ubv(disp, func) do { \
   void (GLAPIENTRYP fn)(const GLubyte *) = func; \
   SET_by_offset(disp, _gloffset_Color3ubv, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_Color3ui)(GLuint, GLuint, GLuint);
#define CALL_Color3ui(disp, parameters) (* GET_Color3ui(disp)) parameters
#define GET_Color3ui(disp) ((_glptr_Color3ui)(GET_by_offset((disp), _gloffset_Color3ui)))
#define SET_Color3ui(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLuint, GLuint) = func; \
   SET_by_offset(disp, _gloffset_Color3ui, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_Color3uiv)(const GLuint *);
#define CALL_Color3uiv(disp, parameters) (* GET_Color3uiv(disp)) parameters
#define GET_Color3uiv(disp) ((_glptr_Color3uiv)(GET_by_offset((disp), _gloffset_Color3uiv)))
#define SET_Color3uiv(disp, func) do { \
   void (GLAPIENTRYP fn)(const GLuint *) = func; \
   SET_by_offset(disp, _gloffset_Color3uiv, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_Color3us)(GLushort, GLushort, GLushort);
#define CALL_Color3us(disp, parameters) (* GET_Color3us(disp)) parameters
#define GET_Color3us(disp) ((_glptr_Color3us)(GET_by_offset((disp), _gloffset_Color3us)))
#define SET_Color3us(disp, func) do { \
   void (GLAPIENTRYP fn)(GLushort, GLushort, GLushort) = func; \
   SET_by_offset(disp, _gloffset_Color3us, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_Color3usv)(const GLushort *);
#define CALL_Color3usv(disp, parameters) (* GET_Color3usv(disp)) parameters
#define GET_Color3usv(disp) ((_glptr_Color3usv)(GET_by_offset((disp), _gloffset_Color3usv)))
#define SET_Color3usv(disp, func) do { \
   void (GLAPIENTRYP fn)(const GLushort *) = func; \
   SET_by_offset(disp, _gloffset_Color3usv, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_Color4b)(GLbyte, GLbyte, GLbyte, GLbyte);
#define CALL_Color4b(disp, parameters) (* GET_Color4b(disp)) parameters
#define GET_Color4b(disp) ((_glptr_Color4b)(GET_by_offset((disp), _gloffset_Color4b)))
#define SET_Color4b(disp, func) do { \
   void (GLAPIENTRYP fn)(GLbyte, GLbyte, GLbyte, GLbyte) = func; \
   SET_by_offset(disp, _gloffset_Color4b, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_Color4bv)(const GLbyte *);
#define CALL_Color4bv(disp, parameters) (* GET_Color4bv(disp)) parameters
#define GET_Color4bv(disp) ((_glptr_Color4bv)(GET_by_offset((disp), _gloffset_Color4bv)))
#define SET_Color4bv(disp, func) do { \
   void (GLAPIENTRYP fn)(const GLbyte *) = func; \
   SET_by_offset(disp, _gloffset_Color4bv, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_Color4d)(GLdouble, GLdouble, GLdouble, GLdouble);
#define CALL_Color4d(disp, parameters) (* GET_Color4d(disp)) parameters
#define GET_Color4d(disp) ((_glptr_Color4d)(GET_by_offset((disp), _gloffset_Color4d)))
#define SET_Color4d(disp, func) do { \
   void (GLAPIENTRYP fn)(GLdouble, GLdouble, GLdouble, GLdouble) = func; \
   SET_by_offset(disp, _gloffset_Color4d, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_Color4dv)(const GLdouble *);
#define CALL_Color4dv(disp, parameters) (* GET_Color4dv(disp)) parameters
#define GET_Color4dv(disp) ((_glptr_Color4dv)(GET_by_offset((disp), _gloffset_Color4dv)))
#define SET_Color4dv(disp, func) do { \
   void (GLAPIENTRYP fn)(const GLdouble *) = func; \
   SET_by_offset(disp, _gloffset_Color4dv, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_Color4f)(GLfloat, GLfloat, GLfloat, GLfloat);
#define CALL_Color4f(disp, parameters) (* GET_Color4f(disp)) parameters
#define GET_Color4f(disp) ((_glptr_Color4f)(GET_by_offset((disp), _gloffset_Color4f)))
#define SET_Color4f(disp, func) do { \
   void (GLAPIENTRYP fn)(GLfloat, GLfloat, GLfloat, GLfloat) = func; \
   SET_by_offset(disp, _gloffset_Color4f, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_Color4fv)(const GLfloat *);
#define CALL_Color4fv(disp, parameters) (* GET_Color4fv(disp)) parameters
#define GET_Color4fv(disp) ((_glptr_Color4fv)(GET_by_offset((disp), _gloffset_Color4fv)))
#define SET_Color4fv(disp, func) do { \
   void (GLAPIENTRYP fn)(const GLfloat *) = func; \
   SET_by_offset(disp, _gloffset_Color4fv, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_Color4i)(GLint, GLint, GLint, GLint);
#define CALL_Color4i(disp, parameters) (* GET_Color4i(disp)) parameters
#define GET_Color4i(disp) ((_glptr_Color4i)(GET_by_offset((disp), _gloffset_Color4i)))
#define SET_Color4i(disp, func) do { \
   void (GLAPIENTRYP fn)(GLint, GLint, GLint, GLint) = func; \
   SET_by_offset(disp, _gloffset_Color4i, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_Color4iv)(const GLint *);
#define CALL_Color4iv(disp, parameters) (* GET_Color4iv(disp)) parameters
#define GET_Color4iv(disp) ((_glptr_Color4iv)(GET_by_offset((disp), _gloffset_Color4iv)))
#define SET_Color4iv(disp, func) do { \
   void (GLAPIENTRYP fn)(const GLint *) = func; \
   SET_by_offset(disp, _gloffset_Color4iv, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_Color4s)(GLshort, GLshort, GLshort, GLshort);
#define CALL_Color4s(disp, parameters) (* GET_Color4s(disp)) parameters
#define GET_Color4s(disp) ((_glptr_Color4s)(GET_by_offset((disp), _gloffset_Color4s)))
#define SET_Color4s(disp, func) do { \
   void (GLAPIENTRYP fn)(GLshort, GLshort, GLshort, GLshort) = func; \
   SET_by_offset(disp, _gloffset_Color4s, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_Color4sv)(const GLshort *);
#define CALL_Color4sv(disp, parameters) (* GET_Color4sv(disp)) parameters
#define GET_Color4sv(disp) ((_glptr_Color4sv)(GET_by_offset((disp), _gloffset_Color4sv)))
#define SET_Color4sv(disp, func) do { \
   void (GLAPIENTRYP fn)(const GLshort *) = func; \
   SET_by_offset(disp, _gloffset_Color4sv, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_Color4ub)(GLubyte, GLubyte, GLubyte, GLubyte);
#define CALL_Color4ub(disp, parameters) (* GET_Color4ub(disp)) parameters
#define GET_Color4ub(disp) ((_glptr_Color4ub)(GET_by_offset((disp), _gloffset_Color4ub)))
#define SET_Color4ub(disp, func) do { \
   void (GLAPIENTRYP fn)(GLubyte, GLubyte, GLubyte, GLubyte) = func; \
   SET_by_offset(disp, _gloffset_Color4ub, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_Color4ubv)(const GLubyte *);
#define CALL_Color4ubv(disp, parameters) (* GET_Color4ubv(disp)) parameters
#define GET_Color4ubv(disp) ((_glptr_Color4ubv)(GET_by_offset((disp), _gloffset_Color4ubv)))
#define SET_Color4ubv(disp, func) do { \
   void (GLAPIENTRYP fn)(const GLubyte *) = func; \
   SET_by_offset(disp, _gloffset_Color4ubv, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_Color4ui)(GLuint, GLuint, GLuint, GLuint);
#define CALL_Color4ui(disp, parameters) (* GET_Color4ui(disp)) parameters
#define GET_Color4ui(disp) ((_glptr_Color4ui)(GET_by_offset((disp), _gloffset_Color4ui)))
#define SET_Color4ui(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLuint, GLuint, GLuint) = func; \
   SET_by_offset(disp, _gloffset_Color4ui, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_Color4uiv)(const GLuint *);
#define CALL_Color4uiv(disp, parameters) (* GET_Color4uiv(disp)) parameters
#define GET_Color4uiv(disp) ((_glptr_Color4uiv)(GET_by_offset((disp), _gloffset_Color4uiv)))
#define SET_Color4uiv(disp, func) do { \
   void (GLAPIENTRYP fn)(const GLuint *) = func; \
   SET_by_offset(disp, _gloffset_Color4uiv, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_Color4us)(GLushort, GLushort, GLushort, GLushort);
#define CALL_Color4us(disp, parameters) (* GET_Color4us(disp)) parameters
#define GET_Color4us(disp) ((_glptr_Color4us)(GET_by_offset((disp), _gloffset_Color4us)))
#define SET_Color4us(disp, func) do { \
   void (GLAPIENTRYP fn)(GLushort, GLushort, GLushort, GLushort) = func; \
   SET_by_offset(disp, _gloffset_Color4us, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_Color4usv)(const GLushort *);
#define CALL_Color4usv(disp, parameters) (* GET_Color4usv(disp)) parameters
#define GET_Color4usv(disp) ((_glptr_Color4usv)(GET_by_offset((disp), _gloffset_Color4usv)))
#define SET_Color4usv(disp, func) do { \
   void (GLAPIENTRYP fn)(const GLushort *) = func; \
   SET_by_offset(disp, _gloffset_Color4usv, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_EdgeFlag)(GLboolean);
#define CALL_EdgeFlag(disp, parameters) (* GET_EdgeFlag(disp)) parameters
#define GET_EdgeFlag(disp) ((_glptr_EdgeFlag)(GET_by_offset((disp), _gloffset_EdgeFlag)))
#define SET_EdgeFlag(disp, func) do { \
   void (GLAPIENTRYP fn)(GLboolean) = func; \
   SET_by_offset(disp, _gloffset_EdgeFlag, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_EdgeFlagv)(const GLboolean *);
#define CALL_EdgeFlagv(disp, parameters) (* GET_EdgeFlagv(disp)) parameters
#define GET_EdgeFlagv(disp) ((_glptr_EdgeFlagv)(GET_by_offset((disp), _gloffset_EdgeFlagv)))
#define SET_EdgeFlagv(disp, func) do { \
   void (GLAPIENTRYP fn)(const GLboolean *) = func; \
   SET_by_offset(disp, _gloffset_EdgeFlagv, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_End)(void);
#define CALL_End(disp, parameters) (* GET_End(disp)) parameters
#define GET_End(disp) ((_glptr_End)(GET_by_offset((disp), _gloffset_End)))
#define SET_End(disp, func) do { \
   void (GLAPIENTRYP fn)(void) = func; \
   SET_by_offset(disp, _gloffset_End, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_Indexd)(GLdouble);
#define CALL_Indexd(disp, parameters) (* GET_Indexd(disp)) parameters
#define GET_Indexd(disp) ((_glptr_Indexd)(GET_by_offset((disp), _gloffset_Indexd)))
#define SET_Indexd(disp, func) do { \
   void (GLAPIENTRYP fn)(GLdouble) = func; \
   SET_by_offset(disp, _gloffset_Indexd, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_Indexdv)(const GLdouble *);
#define CALL_Indexdv(disp, parameters) (* GET_Indexdv(disp)) parameters
#define GET_Indexdv(disp) ((_glptr_Indexdv)(GET_by_offset((disp), _gloffset_Indexdv)))
#define SET_Indexdv(disp, func) do { \
   void (GLAPIENTRYP fn)(const GLdouble *) = func; \
   SET_by_offset(disp, _gloffset_Indexdv, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_Indexf)(GLfloat);
#define CALL_Indexf(disp, parameters) (* GET_Indexf(disp)) parameters
#define GET_Indexf(disp) ((_glptr_Indexf)(GET_by_offset((disp), _gloffset_Indexf)))
#define SET_Indexf(disp, func) do { \
   void (GLAPIENTRYP fn)(GLfloat) = func; \
   SET_by_offset(disp, _gloffset_Indexf, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_Indexfv)(const GLfloat *);
#define CALL_Indexfv(disp, parameters) (* GET_Indexfv(disp)) parameters
#define GET_Indexfv(disp) ((_glptr_Indexfv)(GET_by_offset((disp), _gloffset_Indexfv)))
#define SET_Indexfv(disp, func) do { \
   void (GLAPIENTRYP fn)(const GLfloat *) = func; \
   SET_by_offset(disp, _gloffset_Indexfv, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_Indexi)(GLint);
#define CALL_Indexi(disp, parameters) (* GET_Indexi(disp)) parameters
#define GET_Indexi(disp) ((_glptr_Indexi)(GET_by_offset((disp), _gloffset_Indexi)))
#define SET_Indexi(disp, func) do { \
   void (GLAPIENTRYP fn)(GLint) = func; \
   SET_by_offset(disp, _gloffset_Indexi, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_Indexiv)(const GLint *);
#define CALL_Indexiv(disp, parameters) (* GET_Indexiv(disp)) parameters
#define GET_Indexiv(disp) ((_glptr_Indexiv)(GET_by_offset((disp), _gloffset_Indexiv)))
#define SET_Indexiv(disp, func) do { \
   void (GLAPIENTRYP fn)(const GLint *) = func; \
   SET_by_offset(disp, _gloffset_Indexiv, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_Indexs)(GLshort);
#define CALL_Indexs(disp, parameters) (* GET_Indexs(disp)) parameters
#define GET_Indexs(disp) ((_glptr_Indexs)(GET_by_offset((disp), _gloffset_Indexs)))
#define SET_Indexs(disp, func) do { \
   void (GLAPIENTRYP fn)(GLshort) = func; \
   SET_by_offset(disp, _gloffset_Indexs, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_Indexsv)(const GLshort *);
#define CALL_Indexsv(disp, parameters) (* GET_Indexsv(disp)) parameters
#define GET_Indexsv(disp) ((_glptr_Indexsv)(GET_by_offset((disp), _gloffset_Indexsv)))
#define SET_Indexsv(disp, func) do { \
   void (GLAPIENTRYP fn)(const GLshort *) = func; \
   SET_by_offset(disp, _gloffset_Indexsv, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_Normal3b)(GLbyte, GLbyte, GLbyte);
#define CALL_Normal3b(disp, parameters) (* GET_Normal3b(disp)) parameters
#define GET_Normal3b(disp) ((_glptr_Normal3b)(GET_by_offset((disp), _gloffset_Normal3b)))
#define SET_Normal3b(disp, func) do { \
   void (GLAPIENTRYP fn)(GLbyte, GLbyte, GLbyte) = func; \
   SET_by_offset(disp, _gloffset_Normal3b, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_Normal3bv)(const GLbyte *);
#define CALL_Normal3bv(disp, parameters) (* GET_Normal3bv(disp)) parameters
#define GET_Normal3bv(disp) ((_glptr_Normal3bv)(GET_by_offset((disp), _gloffset_Normal3bv)))
#define SET_Normal3bv(disp, func) do { \
   void (GLAPIENTRYP fn)(const GLbyte *) = func; \
   SET_by_offset(disp, _gloffset_Normal3bv, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_Normal3d)(GLdouble, GLdouble, GLdouble);
#define CALL_Normal3d(disp, parameters) (* GET_Normal3d(disp)) parameters
#define GET_Normal3d(disp) ((_glptr_Normal3d)(GET_by_offset((disp), _gloffset_Normal3d)))
#define SET_Normal3d(disp, func) do { \
   void (GLAPIENTRYP fn)(GLdouble, GLdouble, GLdouble) = func; \
   SET_by_offset(disp, _gloffset_Normal3d, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_Normal3dv)(const GLdouble *);
#define CALL_Normal3dv(disp, parameters) (* GET_Normal3dv(disp)) parameters
#define GET_Normal3dv(disp) ((_glptr_Normal3dv)(GET_by_offset((disp), _gloffset_Normal3dv)))
#define SET_Normal3dv(disp, func) do { \
   void (GLAPIENTRYP fn)(const GLdouble *) = func; \
   SET_by_offset(disp, _gloffset_Normal3dv, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_Normal3f)(GLfloat, GLfloat, GLfloat);
#define CALL_Normal3f(disp, parameters) (* GET_Normal3f(disp)) parameters
#define GET_Normal3f(disp) ((_glptr_Normal3f)(GET_by_offset((disp), _gloffset_Normal3f)))
#define SET_Normal3f(disp, func) do { \
   void (GLAPIENTRYP fn)(GLfloat, GLfloat, GLfloat) = func; \
   SET_by_offset(disp, _gloffset_Normal3f, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_Normal3fv)(const GLfloat *);
#define CALL_Normal3fv(disp, parameters) (* GET_Normal3fv(disp)) parameters
#define GET_Normal3fv(disp) ((_glptr_Normal3fv)(GET_by_offset((disp), _gloffset_Normal3fv)))
#define SET_Normal3fv(disp, func) do { \
   void (GLAPIENTRYP fn)(const GLfloat *) = func; \
   SET_by_offset(disp, _gloffset_Normal3fv, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_Normal3i)(GLint, GLint, GLint);
#define CALL_Normal3i(disp, parameters) (* GET_Normal3i(disp)) parameters
#define GET_Normal3i(disp) ((_glptr_Normal3i)(GET_by_offset((disp), _gloffset_Normal3i)))
#define SET_Normal3i(disp, func) do { \
   void (GLAPIENTRYP fn)(GLint, GLint, GLint) = func; \
   SET_by_offset(disp, _gloffset_Normal3i, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_Normal3iv)(const GLint *);
#define CALL_Normal3iv(disp, parameters) (* GET_Normal3iv(disp)) parameters
#define GET_Normal3iv(disp) ((_glptr_Normal3iv)(GET_by_offset((disp), _gloffset_Normal3iv)))
#define SET_Normal3iv(disp, func) do { \
   void (GLAPIENTRYP fn)(const GLint *) = func; \
   SET_by_offset(disp, _gloffset_Normal3iv, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_Normal3s)(GLshort, GLshort, GLshort);
#define CALL_Normal3s(disp, parameters) (* GET_Normal3s(disp)) parameters
#define GET_Normal3s(disp) ((_glptr_Normal3s)(GET_by_offset((disp), _gloffset_Normal3s)))
#define SET_Normal3s(disp, func) do { \
   void (GLAPIENTRYP fn)(GLshort, GLshort, GLshort) = func; \
   SET_by_offset(disp, _gloffset_Normal3s, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_Normal3sv)(const GLshort *);
#define CALL_Normal3sv(disp, parameters) (* GET_Normal3sv(disp)) parameters
#define GET_Normal3sv(disp) ((_glptr_Normal3sv)(GET_by_offset((disp), _gloffset_Normal3sv)))
#define SET_Normal3sv(disp, func) do { \
   void (GLAPIENTRYP fn)(const GLshort *) = func; \
   SET_by_offset(disp, _gloffset_Normal3sv, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_RasterPos2d)(GLdouble, GLdouble);
#define CALL_RasterPos2d(disp, parameters) (* GET_RasterPos2d(disp)) parameters
#define GET_RasterPos2d(disp) ((_glptr_RasterPos2d)(GET_by_offset((disp), _gloffset_RasterPos2d)))
#define SET_RasterPos2d(disp, func) do { \
   void (GLAPIENTRYP fn)(GLdouble, GLdouble) = func; \
   SET_by_offset(disp, _gloffset_RasterPos2d, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_RasterPos2dv)(const GLdouble *);
#define CALL_RasterPos2dv(disp, parameters) (* GET_RasterPos2dv(disp)) parameters
#define GET_RasterPos2dv(disp) ((_glptr_RasterPos2dv)(GET_by_offset((disp), _gloffset_RasterPos2dv)))
#define SET_RasterPos2dv(disp, func) do { \
   void (GLAPIENTRYP fn)(const GLdouble *) = func; \
   SET_by_offset(disp, _gloffset_RasterPos2dv, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_RasterPos2f)(GLfloat, GLfloat);
#define CALL_RasterPos2f(disp, parameters) (* GET_RasterPos2f(disp)) parameters
#define GET_RasterPos2f(disp) ((_glptr_RasterPos2f)(GET_by_offset((disp), _gloffset_RasterPos2f)))
#define SET_RasterPos2f(disp, func) do { \
   void (GLAPIENTRYP fn)(GLfloat, GLfloat) = func; \
   SET_by_offset(disp, _gloffset_RasterPos2f, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_RasterPos2fv)(const GLfloat *);
#define CALL_RasterPos2fv(disp, parameters) (* GET_RasterPos2fv(disp)) parameters
#define GET_RasterPos2fv(disp) ((_glptr_RasterPos2fv)(GET_by_offset((disp), _gloffset_RasterPos2fv)))
#define SET_RasterPos2fv(disp, func) do { \
   void (GLAPIENTRYP fn)(const GLfloat *) = func; \
   SET_by_offset(disp, _gloffset_RasterPos2fv, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_RasterPos2i)(GLint, GLint);
#define CALL_RasterPos2i(disp, parameters) (* GET_RasterPos2i(disp)) parameters
#define GET_RasterPos2i(disp) ((_glptr_RasterPos2i)(GET_by_offset((disp), _gloffset_RasterPos2i)))
#define SET_RasterPos2i(disp, func) do { \
   void (GLAPIENTRYP fn)(GLint, GLint) = func; \
   SET_by_offset(disp, _gloffset_RasterPos2i, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_RasterPos2iv)(const GLint *);
#define CALL_RasterPos2iv(disp, parameters) (* GET_RasterPos2iv(disp)) parameters
#define GET_RasterPos2iv(disp) ((_glptr_RasterPos2iv)(GET_by_offset((disp), _gloffset_RasterPos2iv)))
#define SET_RasterPos2iv(disp, func) do { \
   void (GLAPIENTRYP fn)(const GLint *) = func; \
   SET_by_offset(disp, _gloffset_RasterPos2iv, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_RasterPos2s)(GLshort, GLshort);
#define CALL_RasterPos2s(disp, parameters) (* GET_RasterPos2s(disp)) parameters
#define GET_RasterPos2s(disp) ((_glptr_RasterPos2s)(GET_by_offset((disp), _gloffset_RasterPos2s)))
#define SET_RasterPos2s(disp, func) do { \
   void (GLAPIENTRYP fn)(GLshort, GLshort) = func; \
   SET_by_offset(disp, _gloffset_RasterPos2s, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_RasterPos2sv)(const GLshort *);
#define CALL_RasterPos2sv(disp, parameters) (* GET_RasterPos2sv(disp)) parameters
#define GET_RasterPos2sv(disp) ((_glptr_RasterPos2sv)(GET_by_offset((disp), _gloffset_RasterPos2sv)))
#define SET_RasterPos2sv(disp, func) do { \
   void (GLAPIENTRYP fn)(const GLshort *) = func; \
   SET_by_offset(disp, _gloffset_RasterPos2sv, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_RasterPos3d)(GLdouble, GLdouble, GLdouble);
#define CALL_RasterPos3d(disp, parameters) (* GET_RasterPos3d(disp)) parameters
#define GET_RasterPos3d(disp) ((_glptr_RasterPos3d)(GET_by_offset((disp), _gloffset_RasterPos3d)))
#define SET_RasterPos3d(disp, func) do { \
   void (GLAPIENTRYP fn)(GLdouble, GLdouble, GLdouble) = func; \
   SET_by_offset(disp, _gloffset_RasterPos3d, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_RasterPos3dv)(const GLdouble *);
#define CALL_RasterPos3dv(disp, parameters) (* GET_RasterPos3dv(disp)) parameters
#define GET_RasterPos3dv(disp) ((_glptr_RasterPos3dv)(GET_by_offset((disp), _gloffset_RasterPos3dv)))
#define SET_RasterPos3dv(disp, func) do { \
   void (GLAPIENTRYP fn)(const GLdouble *) = func; \
   SET_by_offset(disp, _gloffset_RasterPos3dv, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_RasterPos3f)(GLfloat, GLfloat, GLfloat);
#define CALL_RasterPos3f(disp, parameters) (* GET_RasterPos3f(disp)) parameters
#define GET_RasterPos3f(disp) ((_glptr_RasterPos3f)(GET_by_offset((disp), _gloffset_RasterPos3f)))
#define SET_RasterPos3f(disp, func) do { \
   void (GLAPIENTRYP fn)(GLfloat, GLfloat, GLfloat) = func; \
   SET_by_offset(disp, _gloffset_RasterPos3f, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_RasterPos3fv)(const GLfloat *);
#define CALL_RasterPos3fv(disp, parameters) (* GET_RasterPos3fv(disp)) parameters
#define GET_RasterPos3fv(disp) ((_glptr_RasterPos3fv)(GET_by_offset((disp), _gloffset_RasterPos3fv)))
#define SET_RasterPos3fv(disp, func) do { \
   void (GLAPIENTRYP fn)(const GLfloat *) = func; \
   SET_by_offset(disp, _gloffset_RasterPos3fv, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_RasterPos3i)(GLint, GLint, GLint);
#define CALL_RasterPos3i(disp, parameters) (* GET_RasterPos3i(disp)) parameters
#define GET_RasterPos3i(disp) ((_glptr_RasterPos3i)(GET_by_offset((disp), _gloffset_RasterPos3i)))
#define SET_RasterPos3i(disp, func) do { \
   void (GLAPIENTRYP fn)(GLint, GLint, GLint) = func; \
   SET_by_offset(disp, _gloffset_RasterPos3i, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_RasterPos3iv)(const GLint *);
#define CALL_RasterPos3iv(disp, parameters) (* GET_RasterPos3iv(disp)) parameters
#define GET_RasterPos3iv(disp) ((_glptr_RasterPos3iv)(GET_by_offset((disp), _gloffset_RasterPos3iv)))
#define SET_RasterPos3iv(disp, func) do { \
   void (GLAPIENTRYP fn)(const GLint *) = func; \
   SET_by_offset(disp, _gloffset_RasterPos3iv, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_RasterPos3s)(GLshort, GLshort, GLshort);
#define CALL_RasterPos3s(disp, parameters) (* GET_RasterPos3s(disp)) parameters
#define GET_RasterPos3s(disp) ((_glptr_RasterPos3s)(GET_by_offset((disp), _gloffset_RasterPos3s)))
#define SET_RasterPos3s(disp, func) do { \
   void (GLAPIENTRYP fn)(GLshort, GLshort, GLshort) = func; \
   SET_by_offset(disp, _gloffset_RasterPos3s, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_RasterPos3sv)(const GLshort *);
#define CALL_RasterPos3sv(disp, parameters) (* GET_RasterPos3sv(disp)) parameters
#define GET_RasterPos3sv(disp) ((_glptr_RasterPos3sv)(GET_by_offset((disp), _gloffset_RasterPos3sv)))
#define SET_RasterPos3sv(disp, func) do { \
   void (GLAPIENTRYP fn)(const GLshort *) = func; \
   SET_by_offset(disp, _gloffset_RasterPos3sv, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_RasterPos4d)(GLdouble, GLdouble, GLdouble, GLdouble);
#define CALL_RasterPos4d(disp, parameters) (* GET_RasterPos4d(disp)) parameters
#define GET_RasterPos4d(disp) ((_glptr_RasterPos4d)(GET_by_offset((disp), _gloffset_RasterPos4d)))
#define SET_RasterPos4d(disp, func) do { \
   void (GLAPIENTRYP fn)(GLdouble, GLdouble, GLdouble, GLdouble) = func; \
   SET_by_offset(disp, _gloffset_RasterPos4d, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_RasterPos4dv)(const GLdouble *);
#define CALL_RasterPos4dv(disp, parameters) (* GET_RasterPos4dv(disp)) parameters
#define GET_RasterPos4dv(disp) ((_glptr_RasterPos4dv)(GET_by_offset((disp), _gloffset_RasterPos4dv)))
#define SET_RasterPos4dv(disp, func) do { \
   void (GLAPIENTRYP fn)(const GLdouble *) = func; \
   SET_by_offset(disp, _gloffset_RasterPos4dv, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_RasterPos4f)(GLfloat, GLfloat, GLfloat, GLfloat);
#define CALL_RasterPos4f(disp, parameters) (* GET_RasterPos4f(disp)) parameters
#define GET_RasterPos4f(disp) ((_glptr_RasterPos4f)(GET_by_offset((disp), _gloffset_RasterPos4f)))
#define SET_RasterPos4f(disp, func) do { \
   void (GLAPIENTRYP fn)(GLfloat, GLfloat, GLfloat, GLfloat) = func; \
   SET_by_offset(disp, _gloffset_RasterPos4f, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_RasterPos4fv)(const GLfloat *);
#define CALL_RasterPos4fv(disp, parameters) (* GET_RasterPos4fv(disp)) parameters
#define GET_RasterPos4fv(disp) ((_glptr_RasterPos4fv)(GET_by_offset((disp), _gloffset_RasterPos4fv)))
#define SET_RasterPos4fv(disp, func) do { \
   void (GLAPIENTRYP fn)(const GLfloat *) = func; \
   SET_by_offset(disp, _gloffset_RasterPos4fv, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_RasterPos4i)(GLint, GLint, GLint, GLint);
#define CALL_RasterPos4i(disp, parameters) (* GET_RasterPos4i(disp)) parameters
#define GET_RasterPos4i(disp) ((_glptr_RasterPos4i)(GET_by_offset((disp), _gloffset_RasterPos4i)))
#define SET_RasterPos4i(disp, func) do { \
   void (GLAPIENTRYP fn)(GLint, GLint, GLint, GLint) = func; \
   SET_by_offset(disp, _gloffset_RasterPos4i, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_RasterPos4iv)(const GLint *);
#define CALL_RasterPos4iv(disp, parameters) (* GET_RasterPos4iv(disp)) parameters
#define GET_RasterPos4iv(disp) ((_glptr_RasterPos4iv)(GET_by_offset((disp), _gloffset_RasterPos4iv)))
#define SET_RasterPos4iv(disp, func) do { \
   void (GLAPIENTRYP fn)(const GLint *) = func; \
   SET_by_offset(disp, _gloffset_RasterPos4iv, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_RasterPos4s)(GLshort, GLshort, GLshort, GLshort);
#define CALL_RasterPos4s(disp, parameters) (* GET_RasterPos4s(disp)) parameters
#define GET_RasterPos4s(disp) ((_glptr_RasterPos4s)(GET_by_offset((disp), _gloffset_RasterPos4s)))
#define SET_RasterPos4s(disp, func) do { \
   void (GLAPIENTRYP fn)(GLshort, GLshort, GLshort, GLshort) = func; \
   SET_by_offset(disp, _gloffset_RasterPos4s, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_RasterPos4sv)(const GLshort *);
#define CALL_RasterPos4sv(disp, parameters) (* GET_RasterPos4sv(disp)) parameters
#define GET_RasterPos4sv(disp) ((_glptr_RasterPos4sv)(GET_by_offset((disp), _gloffset_RasterPos4sv)))
#define SET_RasterPos4sv(disp, func) do { \
   void (GLAPIENTRYP fn)(const GLshort *) = func; \
   SET_by_offset(disp, _gloffset_RasterPos4sv, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_Rectd)(GLdouble, GLdouble, GLdouble, GLdouble);
#define CALL_Rectd(disp, parameters) (* GET_Rectd(disp)) parameters
#define GET_Rectd(disp) ((_glptr_Rectd)(GET_by_offset((disp), _gloffset_Rectd)))
#define SET_Rectd(disp, func) do { \
   void (GLAPIENTRYP fn)(GLdouble, GLdouble, GLdouble, GLdouble) = func; \
   SET_by_offset(disp, _gloffset_Rectd, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_Rectdv)(const GLdouble *, const GLdouble *);
#define CALL_Rectdv(disp, parameters) (* GET_Rectdv(disp)) parameters
#define GET_Rectdv(disp) ((_glptr_Rectdv)(GET_by_offset((disp), _gloffset_Rectdv)))
#define SET_Rectdv(disp, func) do { \
   void (GLAPIENTRYP fn)(const GLdouble *, const GLdouble *) = func; \
   SET_by_offset(disp, _gloffset_Rectdv, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_Rectf)(GLfloat, GLfloat, GLfloat, GLfloat);
#define CALL_Rectf(disp, parameters) (* GET_Rectf(disp)) parameters
#define GET_Rectf(disp) ((_glptr_Rectf)(GET_by_offset((disp), _gloffset_Rectf)))
#define SET_Rectf(disp, func) do { \
   void (GLAPIENTRYP fn)(GLfloat, GLfloat, GLfloat, GLfloat) = func; \
   SET_by_offset(disp, _gloffset_Rectf, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_Rectfv)(const GLfloat *, const GLfloat *);
#define CALL_Rectfv(disp, parameters) (* GET_Rectfv(disp)) parameters
#define GET_Rectfv(disp) ((_glptr_Rectfv)(GET_by_offset((disp), _gloffset_Rectfv)))
#define SET_Rectfv(disp, func) do { \
   void (GLAPIENTRYP fn)(const GLfloat *, const GLfloat *) = func; \
   SET_by_offset(disp, _gloffset_Rectfv, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_Recti)(GLint, GLint, GLint, GLint);
#define CALL_Recti(disp, parameters) (* GET_Recti(disp)) parameters
#define GET_Recti(disp) ((_glptr_Recti)(GET_by_offset((disp), _gloffset_Recti)))
#define SET_Recti(disp, func) do { \
   void (GLAPIENTRYP fn)(GLint, GLint, GLint, GLint) = func; \
   SET_by_offset(disp, _gloffset_Recti, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_Rectiv)(const GLint *, const GLint *);
#define CALL_Rectiv(disp, parameters) (* GET_Rectiv(disp)) parameters
#define GET_Rectiv(disp) ((_glptr_Rectiv)(GET_by_offset((disp), _gloffset_Rectiv)))
#define SET_Rectiv(disp, func) do { \
   void (GLAPIENTRYP fn)(const GLint *, const GLint *) = func; \
   SET_by_offset(disp, _gloffset_Rectiv, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_Rects)(GLshort, GLshort, GLshort, GLshort);
#define CALL_Rects(disp, parameters) (* GET_Rects(disp)) parameters
#define GET_Rects(disp) ((_glptr_Rects)(GET_by_offset((disp), _gloffset_Rects)))
#define SET_Rects(disp, func) do { \
   void (GLAPIENTRYP fn)(GLshort, GLshort, GLshort, GLshort) = func; \
   SET_by_offset(disp, _gloffset_Rects, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_Rectsv)(const GLshort *, const GLshort *);
#define CALL_Rectsv(disp, parameters) (* GET_Rectsv(disp)) parameters
#define GET_Rectsv(disp) ((_glptr_Rectsv)(GET_by_offset((disp), _gloffset_Rectsv)))
#define SET_Rectsv(disp, func) do { \
   void (GLAPIENTRYP fn)(const GLshort *, const GLshort *) = func; \
   SET_by_offset(disp, _gloffset_Rectsv, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_TexCoord1d)(GLdouble);
#define CALL_TexCoord1d(disp, parameters) (* GET_TexCoord1d(disp)) parameters
#define GET_TexCoord1d(disp) ((_glptr_TexCoord1d)(GET_by_offset((disp), _gloffset_TexCoord1d)))
#define SET_TexCoord1d(disp, func) do { \
   void (GLAPIENTRYP fn)(GLdouble) = func; \
   SET_by_offset(disp, _gloffset_TexCoord1d, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_TexCoord1dv)(const GLdouble *);
#define CALL_TexCoord1dv(disp, parameters) (* GET_TexCoord1dv(disp)) parameters
#define GET_TexCoord1dv(disp) ((_glptr_TexCoord1dv)(GET_by_offset((disp), _gloffset_TexCoord1dv)))
#define SET_TexCoord1dv(disp, func) do { \
   void (GLAPIENTRYP fn)(const GLdouble *) = func; \
   SET_by_offset(disp, _gloffset_TexCoord1dv, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_TexCoord1f)(GLfloat);
#define CALL_TexCoord1f(disp, parameters) (* GET_TexCoord1f(disp)) parameters
#define GET_TexCoord1f(disp) ((_glptr_TexCoord1f)(GET_by_offset((disp), _gloffset_TexCoord1f)))
#define SET_TexCoord1f(disp, func) do { \
   void (GLAPIENTRYP fn)(GLfloat) = func; \
   SET_by_offset(disp, _gloffset_TexCoord1f, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_TexCoord1fv)(const GLfloat *);
#define CALL_TexCoord1fv(disp, parameters) (* GET_TexCoord1fv(disp)) parameters
#define GET_TexCoord1fv(disp) ((_glptr_TexCoord1fv)(GET_by_offset((disp), _gloffset_TexCoord1fv)))
#define SET_TexCoord1fv(disp, func) do { \
   void (GLAPIENTRYP fn)(const GLfloat *) = func; \
   SET_by_offset(disp, _gloffset_TexCoord1fv, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_TexCoord1i)(GLint);
#define CALL_TexCoord1i(disp, parameters) (* GET_TexCoord1i(disp)) parameters
#define GET_TexCoord1i(disp) ((_glptr_TexCoord1i)(GET_by_offset((disp), _gloffset_TexCoord1i)))
#define SET_TexCoord1i(disp, func) do { \
   void (GLAPIENTRYP fn)(GLint) = func; \
   SET_by_offset(disp, _gloffset_TexCoord1i, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_TexCoord1iv)(const GLint *);
#define CALL_TexCoord1iv(disp, parameters) (* GET_TexCoord1iv(disp)) parameters
#define GET_TexCoord1iv(disp) ((_glptr_TexCoord1iv)(GET_by_offset((disp), _gloffset_TexCoord1iv)))
#define SET_TexCoord1iv(disp, func) do { \
   void (GLAPIENTRYP fn)(const GLint *) = func; \
   SET_by_offset(disp, _gloffset_TexCoord1iv, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_TexCoord1s)(GLshort);
#define CALL_TexCoord1s(disp, parameters) (* GET_TexCoord1s(disp)) parameters
#define GET_TexCoord1s(disp) ((_glptr_TexCoord1s)(GET_by_offset((disp), _gloffset_TexCoord1s)))
#define SET_TexCoord1s(disp, func) do { \
   void (GLAPIENTRYP fn)(GLshort) = func; \
   SET_by_offset(disp, _gloffset_TexCoord1s, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_TexCoord1sv)(const GLshort *);
#define CALL_TexCoord1sv(disp, parameters) (* GET_TexCoord1sv(disp)) parameters
#define GET_TexCoord1sv(disp) ((_glptr_TexCoord1sv)(GET_by_offset((disp), _gloffset_TexCoord1sv)))
#define SET_TexCoord1sv(disp, func) do { \
   void (GLAPIENTRYP fn)(const GLshort *) = func; \
   SET_by_offset(disp, _gloffset_TexCoord1sv, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_TexCoord2d)(GLdouble, GLdouble);
#define CALL_TexCoord2d(disp, parameters) (* GET_TexCoord2d(disp)) parameters
#define GET_TexCoord2d(disp) ((_glptr_TexCoord2d)(GET_by_offset((disp), _gloffset_TexCoord2d)))
#define SET_TexCoord2d(disp, func) do { \
   void (GLAPIENTRYP fn)(GLdouble, GLdouble) = func; \
   SET_by_offset(disp, _gloffset_TexCoord2d, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_TexCoord2dv)(const GLdouble *);
#define CALL_TexCoord2dv(disp, parameters) (* GET_TexCoord2dv(disp)) parameters
#define GET_TexCoord2dv(disp) ((_glptr_TexCoord2dv)(GET_by_offset((disp), _gloffset_TexCoord2dv)))
#define SET_TexCoord2dv(disp, func) do { \
   void (GLAPIENTRYP fn)(const GLdouble *) = func; \
   SET_by_offset(disp, _gloffset_TexCoord2dv, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_TexCoord2f)(GLfloat, GLfloat);
#define CALL_TexCoord2f(disp, parameters) (* GET_TexCoord2f(disp)) parameters
#define GET_TexCoord2f(disp) ((_glptr_TexCoord2f)(GET_by_offset((disp), _gloffset_TexCoord2f)))
#define SET_TexCoord2f(disp, func) do { \
   void (GLAPIENTRYP fn)(GLfloat, GLfloat) = func; \
   SET_by_offset(disp, _gloffset_TexCoord2f, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_TexCoord2fv)(const GLfloat *);
#define CALL_TexCoord2fv(disp, parameters) (* GET_TexCoord2fv(disp)) parameters
#define GET_TexCoord2fv(disp) ((_glptr_TexCoord2fv)(GET_by_offset((disp), _gloffset_TexCoord2fv)))
#define SET_TexCoord2fv(disp, func) do { \
   void (GLAPIENTRYP fn)(const GLfloat *) = func; \
   SET_by_offset(disp, _gloffset_TexCoord2fv, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_TexCoord2i)(GLint, GLint);
#define CALL_TexCoord2i(disp, parameters) (* GET_TexCoord2i(disp)) parameters
#define GET_TexCoord2i(disp) ((_glptr_TexCoord2i)(GET_by_offset((disp), _gloffset_TexCoord2i)))
#define SET_TexCoord2i(disp, func) do { \
   void (GLAPIENTRYP fn)(GLint, GLint) = func; \
   SET_by_offset(disp, _gloffset_TexCoord2i, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_TexCoord2iv)(const GLint *);
#define CALL_TexCoord2iv(disp, parameters) (* GET_TexCoord2iv(disp)) parameters
#define GET_TexCoord2iv(disp) ((_glptr_TexCoord2iv)(GET_by_offset((disp), _gloffset_TexCoord2iv)))
#define SET_TexCoord2iv(disp, func) do { \
   void (GLAPIENTRYP fn)(const GLint *) = func; \
   SET_by_offset(disp, _gloffset_TexCoord2iv, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_TexCoord2s)(GLshort, GLshort);
#define CALL_TexCoord2s(disp, parameters) (* GET_TexCoord2s(disp)) parameters
#define GET_TexCoord2s(disp) ((_glptr_TexCoord2s)(GET_by_offset((disp), _gloffset_TexCoord2s)))
#define SET_TexCoord2s(disp, func) do { \
   void (GLAPIENTRYP fn)(GLshort, GLshort) = func; \
   SET_by_offset(disp, _gloffset_TexCoord2s, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_TexCoord2sv)(const GLshort *);
#define CALL_TexCoord2sv(disp, parameters) (* GET_TexCoord2sv(disp)) parameters
#define GET_TexCoord2sv(disp) ((_glptr_TexCoord2sv)(GET_by_offset((disp), _gloffset_TexCoord2sv)))
#define SET_TexCoord2sv(disp, func) do { \
   void (GLAPIENTRYP fn)(const GLshort *) = func; \
   SET_by_offset(disp, _gloffset_TexCoord2sv, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_TexCoord3d)(GLdouble, GLdouble, GLdouble);
#define CALL_TexCoord3d(disp, parameters) (* GET_TexCoord3d(disp)) parameters
#define GET_TexCoord3d(disp) ((_glptr_TexCoord3d)(GET_by_offset((disp), _gloffset_TexCoord3d)))
#define SET_TexCoord3d(disp, func) do { \
   void (GLAPIENTRYP fn)(GLdouble, GLdouble, GLdouble) = func; \
   SET_by_offset(disp, _gloffset_TexCoord3d, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_TexCoord3dv)(const GLdouble *);
#define CALL_TexCoord3dv(disp, parameters) (* GET_TexCoord3dv(disp)) parameters
#define GET_TexCoord3dv(disp) ((_glptr_TexCoord3dv)(GET_by_offset((disp), _gloffset_TexCoord3dv)))
#define SET_TexCoord3dv(disp, func) do { \
   void (GLAPIENTRYP fn)(const GLdouble *) = func; \
   SET_by_offset(disp, _gloffset_TexCoord3dv, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_TexCoord3f)(GLfloat, GLfloat, GLfloat);
#define CALL_TexCoord3f(disp, parameters) (* GET_TexCoord3f(disp)) parameters
#define GET_TexCoord3f(disp) ((_glptr_TexCoord3f)(GET_by_offset((disp), _gloffset_TexCoord3f)))
#define SET_TexCoord3f(disp, func) do { \
   void (GLAPIENTRYP fn)(GLfloat, GLfloat, GLfloat) = func; \
   SET_by_offset(disp, _gloffset_TexCoord3f, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_TexCoord3fv)(const GLfloat *);
#define CALL_TexCoord3fv(disp, parameters) (* GET_TexCoord3fv(disp)) parameters
#define GET_TexCoord3fv(disp) ((_glptr_TexCoord3fv)(GET_by_offset((disp), _gloffset_TexCoord3fv)))
#define SET_TexCoord3fv(disp, func) do { \
   void (GLAPIENTRYP fn)(const GLfloat *) = func; \
   SET_by_offset(disp, _gloffset_TexCoord3fv, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_TexCoord3i)(GLint, GLint, GLint);
#define CALL_TexCoord3i(disp, parameters) (* GET_TexCoord3i(disp)) parameters
#define GET_TexCoord3i(disp) ((_glptr_TexCoord3i)(GET_by_offset((disp), _gloffset_TexCoord3i)))
#define SET_TexCoord3i(disp, func) do { \
   void (GLAPIENTRYP fn)(GLint, GLint, GLint) = func; \
   SET_by_offset(disp, _gloffset_TexCoord3i, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_TexCoord3iv)(const GLint *);
#define CALL_TexCoord3iv(disp, parameters) (* GET_TexCoord3iv(disp)) parameters
#define GET_TexCoord3iv(disp) ((_glptr_TexCoord3iv)(GET_by_offset((disp), _gloffset_TexCoord3iv)))
#define SET_TexCoord3iv(disp, func) do { \
   void (GLAPIENTRYP fn)(const GLint *) = func; \
   SET_by_offset(disp, _gloffset_TexCoord3iv, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_TexCoord3s)(GLshort, GLshort, GLshort);
#define CALL_TexCoord3s(disp, parameters) (* GET_TexCoord3s(disp)) parameters
#define GET_TexCoord3s(disp) ((_glptr_TexCoord3s)(GET_by_offset((disp), _gloffset_TexCoord3s)))
#define SET_TexCoord3s(disp, func) do { \
   void (GLAPIENTRYP fn)(GLshort, GLshort, GLshort) = func; \
   SET_by_offset(disp, _gloffset_TexCoord3s, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_TexCoord3sv)(const GLshort *);
#define CALL_TexCoord3sv(disp, parameters) (* GET_TexCoord3sv(disp)) parameters
#define GET_TexCoord3sv(disp) ((_glptr_TexCoord3sv)(GET_by_offset((disp), _gloffset_TexCoord3sv)))
#define SET_TexCoord3sv(disp, func) do { \
   void (GLAPIENTRYP fn)(const GLshort *) = func; \
   SET_by_offset(disp, _gloffset_TexCoord3sv, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_TexCoord4d)(GLdouble, GLdouble, GLdouble, GLdouble);
#define CALL_TexCoord4d(disp, parameters) (* GET_TexCoord4d(disp)) parameters
#define GET_TexCoord4d(disp) ((_glptr_TexCoord4d)(GET_by_offset((disp), _gloffset_TexCoord4d)))
#define SET_TexCoord4d(disp, func) do { \
   void (GLAPIENTRYP fn)(GLdouble, GLdouble, GLdouble, GLdouble) = func; \
   SET_by_offset(disp, _gloffset_TexCoord4d, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_TexCoord4dv)(const GLdouble *);
#define CALL_TexCoord4dv(disp, parameters) (* GET_TexCoord4dv(disp)) parameters
#define GET_TexCoord4dv(disp) ((_glptr_TexCoord4dv)(GET_by_offset((disp), _gloffset_TexCoord4dv)))
#define SET_TexCoord4dv(disp, func) do { \
   void (GLAPIENTRYP fn)(const GLdouble *) = func; \
   SET_by_offset(disp, _gloffset_TexCoord4dv, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_TexCoord4f)(GLfloat, GLfloat, GLfloat, GLfloat);
#define CALL_TexCoord4f(disp, parameters) (* GET_TexCoord4f(disp)) parameters
#define GET_TexCoord4f(disp) ((_glptr_TexCoord4f)(GET_by_offset((disp), _gloffset_TexCoord4f)))
#define SET_TexCoord4f(disp, func) do { \
   void (GLAPIENTRYP fn)(GLfloat, GLfloat, GLfloat, GLfloat) = func; \
   SET_by_offset(disp, _gloffset_TexCoord4f, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_TexCoord4fv)(const GLfloat *);
#define CALL_TexCoord4fv(disp, parameters) (* GET_TexCoord4fv(disp)) parameters
#define GET_TexCoord4fv(disp) ((_glptr_TexCoord4fv)(GET_by_offset((disp), _gloffset_TexCoord4fv)))
#define SET_TexCoord4fv(disp, func) do { \
   void (GLAPIENTRYP fn)(const GLfloat *) = func; \
   SET_by_offset(disp, _gloffset_TexCoord4fv, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_TexCoord4i)(GLint, GLint, GLint, GLint);
#define CALL_TexCoord4i(disp, parameters) (* GET_TexCoord4i(disp)) parameters
#define GET_TexCoord4i(disp) ((_glptr_TexCoord4i)(GET_by_offset((disp), _gloffset_TexCoord4i)))
#define SET_TexCoord4i(disp, func) do { \
   void (GLAPIENTRYP fn)(GLint, GLint, GLint, GLint) = func; \
   SET_by_offset(disp, _gloffset_TexCoord4i, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_TexCoord4iv)(const GLint *);
#define CALL_TexCoord4iv(disp, parameters) (* GET_TexCoord4iv(disp)) parameters
#define GET_TexCoord4iv(disp) ((_glptr_TexCoord4iv)(GET_by_offset((disp), _gloffset_TexCoord4iv)))
#define SET_TexCoord4iv(disp, func) do { \
   void (GLAPIENTRYP fn)(const GLint *) = func; \
   SET_by_offset(disp, _gloffset_TexCoord4iv, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_TexCoord4s)(GLshort, GLshort, GLshort, GLshort);
#define CALL_TexCoord4s(disp, parameters) (* GET_TexCoord4s(disp)) parameters
#define GET_TexCoord4s(disp) ((_glptr_TexCoord4s)(GET_by_offset((disp), _gloffset_TexCoord4s)))
#define SET_TexCoord4s(disp, func) do { \
   void (GLAPIENTRYP fn)(GLshort, GLshort, GLshort, GLshort) = func; \
   SET_by_offset(disp, _gloffset_TexCoord4s, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_TexCoord4sv)(const GLshort *);
#define CALL_TexCoord4sv(disp, parameters) (* GET_TexCoord4sv(disp)) parameters
#define GET_TexCoord4sv(disp) ((_glptr_TexCoord4sv)(GET_by_offset((disp), _gloffset_TexCoord4sv)))
#define SET_TexCoord4sv(disp, func) do { \
   void (GLAPIENTRYP fn)(const GLshort *) = func; \
   SET_by_offset(disp, _gloffset_TexCoord4sv, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_Vertex2d)(GLdouble, GLdouble);
#define CALL_Vertex2d(disp, parameters) (* GET_Vertex2d(disp)) parameters
#define GET_Vertex2d(disp) ((_glptr_Vertex2d)(GET_by_offset((disp), _gloffset_Vertex2d)))
#define SET_Vertex2d(disp, func) do { \
   void (GLAPIENTRYP fn)(GLdouble, GLdouble) = func; \
   SET_by_offset(disp, _gloffset_Vertex2d, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_Vertex2dv)(const GLdouble *);
#define CALL_Vertex2dv(disp, parameters) (* GET_Vertex2dv(disp)) parameters
#define GET_Vertex2dv(disp) ((_glptr_Vertex2dv)(GET_by_offset((disp), _gloffset_Vertex2dv)))
#define SET_Vertex2dv(disp, func) do { \
   void (GLAPIENTRYP fn)(const GLdouble *) = func; \
   SET_by_offset(disp, _gloffset_Vertex2dv, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_Vertex2f)(GLfloat, GLfloat);
#define CALL_Vertex2f(disp, parameters) (* GET_Vertex2f(disp)) parameters
#define GET_Vertex2f(disp) ((_glptr_Vertex2f)(GET_by_offset((disp), _gloffset_Vertex2f)))
#define SET_Vertex2f(disp, func) do { \
   void (GLAPIENTRYP fn)(GLfloat, GLfloat) = func; \
   SET_by_offset(disp, _gloffset_Vertex2f, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_Vertex2fv)(const GLfloat *);
#define CALL_Vertex2fv(disp, parameters) (* GET_Vertex2fv(disp)) parameters
#define GET_Vertex2fv(disp) ((_glptr_Vertex2fv)(GET_by_offset((disp), _gloffset_Vertex2fv)))
#define SET_Vertex2fv(disp, func) do { \
   void (GLAPIENTRYP fn)(const GLfloat *) = func; \
   SET_by_offset(disp, _gloffset_Vertex2fv, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_Vertex2i)(GLint, GLint);
#define CALL_Vertex2i(disp, parameters) (* GET_Vertex2i(disp)) parameters
#define GET_Vertex2i(disp) ((_glptr_Vertex2i)(GET_by_offset((disp), _gloffset_Vertex2i)))
#define SET_Vertex2i(disp, func) do { \
   void (GLAPIENTRYP fn)(GLint, GLint) = func; \
   SET_by_offset(disp, _gloffset_Vertex2i, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_Vertex2iv)(const GLint *);
#define CALL_Vertex2iv(disp, parameters) (* GET_Vertex2iv(disp)) parameters
#define GET_Vertex2iv(disp) ((_glptr_Vertex2iv)(GET_by_offset((disp), _gloffset_Vertex2iv)))
#define SET_Vertex2iv(disp, func) do { \
   void (GLAPIENTRYP fn)(const GLint *) = func; \
   SET_by_offset(disp, _gloffset_Vertex2iv, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_Vertex2s)(GLshort, GLshort);
#define CALL_Vertex2s(disp, parameters) (* GET_Vertex2s(disp)) parameters
#define GET_Vertex2s(disp) ((_glptr_Vertex2s)(GET_by_offset((disp), _gloffset_Vertex2s)))
#define SET_Vertex2s(disp, func) do { \
   void (GLAPIENTRYP fn)(GLshort, GLshort) = func; \
   SET_by_offset(disp, _gloffset_Vertex2s, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_Vertex2sv)(const GLshort *);
#define CALL_Vertex2sv(disp, parameters) (* GET_Vertex2sv(disp)) parameters
#define GET_Vertex2sv(disp) ((_glptr_Vertex2sv)(GET_by_offset((disp), _gloffset_Vertex2sv)))
#define SET_Vertex2sv(disp, func) do { \
   void (GLAPIENTRYP fn)(const GLshort *) = func; \
   SET_by_offset(disp, _gloffset_Vertex2sv, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_Vertex3d)(GLdouble, GLdouble, GLdouble);
#define CALL_Vertex3d(disp, parameters) (* GET_Vertex3d(disp)) parameters
#define GET_Vertex3d(disp) ((_glptr_Vertex3d)(GET_by_offset((disp), _gloffset_Vertex3d)))
#define SET_Vertex3d(disp, func) do { \
   void (GLAPIENTRYP fn)(GLdouble, GLdouble, GLdouble) = func; \
   SET_by_offset(disp, _gloffset_Vertex3d, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_Vertex3dv)(const GLdouble *);
#define CALL_Vertex3dv(disp, parameters) (* GET_Vertex3dv(disp)) parameters
#define GET_Vertex3dv(disp) ((_glptr_Vertex3dv)(GET_by_offset((disp), _gloffset_Vertex3dv)))
#define SET_Vertex3dv(disp, func) do { \
   void (GLAPIENTRYP fn)(const GLdouble *) = func; \
   SET_by_offset(disp, _gloffset_Vertex3dv, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_Vertex3f)(GLfloat, GLfloat, GLfloat);
#define CALL_Vertex3f(disp, parameters) (* GET_Vertex3f(disp)) parameters
#define GET_Vertex3f(disp) ((_glptr_Vertex3f)(GET_by_offset((disp), _gloffset_Vertex3f)))
#define SET_Vertex3f(disp, func) do { \
   void (GLAPIENTRYP fn)(GLfloat, GLfloat, GLfloat) = func; \
   SET_by_offset(disp, _gloffset_Vertex3f, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_Vertex3fv)(const GLfloat *);
#define CALL_Vertex3fv(disp, parameters) (* GET_Vertex3fv(disp)) parameters
#define GET_Vertex3fv(disp) ((_glptr_Vertex3fv)(GET_by_offset((disp), _gloffset_Vertex3fv)))
#define SET_Vertex3fv(disp, func) do { \
   void (GLAPIENTRYP fn)(const GLfloat *) = func; \
   SET_by_offset(disp, _gloffset_Vertex3fv, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_Vertex3i)(GLint, GLint, GLint);
#define CALL_Vertex3i(disp, parameters) (* GET_Vertex3i(disp)) parameters
#define GET_Vertex3i(disp) ((_glptr_Vertex3i)(GET_by_offset((disp), _gloffset_Vertex3i)))
#define SET_Vertex3i(disp, func) do { \
   void (GLAPIENTRYP fn)(GLint, GLint, GLint) = func; \
   SET_by_offset(disp, _gloffset_Vertex3i, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_Vertex3iv)(const GLint *);
#define CALL_Vertex3iv(disp, parameters) (* GET_Vertex3iv(disp)) parameters
#define GET_Vertex3iv(disp) ((_glptr_Vertex3iv)(GET_by_offset((disp), _gloffset_Vertex3iv)))
#define SET_Vertex3iv(disp, func) do { \
   void (GLAPIENTRYP fn)(const GLint *) = func; \
   SET_by_offset(disp, _gloffset_Vertex3iv, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_Vertex3s)(GLshort, GLshort, GLshort);
#define CALL_Vertex3s(disp, parameters) (* GET_Vertex3s(disp)) parameters
#define GET_Vertex3s(disp) ((_glptr_Vertex3s)(GET_by_offset((disp), _gloffset_Vertex3s)))
#define SET_Vertex3s(disp, func) do { \
   void (GLAPIENTRYP fn)(GLshort, GLshort, GLshort) = func; \
   SET_by_offset(disp, _gloffset_Vertex3s, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_Vertex3sv)(const GLshort *);
#define CALL_Vertex3sv(disp, parameters) (* GET_Vertex3sv(disp)) parameters
#define GET_Vertex3sv(disp) ((_glptr_Vertex3sv)(GET_by_offset((disp), _gloffset_Vertex3sv)))
#define SET_Vertex3sv(disp, func) do { \
   void (GLAPIENTRYP fn)(const GLshort *) = func; \
   SET_by_offset(disp, _gloffset_Vertex3sv, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_Vertex4d)(GLdouble, GLdouble, GLdouble, GLdouble);
#define CALL_Vertex4d(disp, parameters) (* GET_Vertex4d(disp)) parameters
#define GET_Vertex4d(disp) ((_glptr_Vertex4d)(GET_by_offset((disp), _gloffset_Vertex4d)))
#define SET_Vertex4d(disp, func) do { \
   void (GLAPIENTRYP fn)(GLdouble, GLdouble, GLdouble, GLdouble) = func; \
   SET_by_offset(disp, _gloffset_Vertex4d, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_Vertex4dv)(const GLdouble *);
#define CALL_Vertex4dv(disp, parameters) (* GET_Vertex4dv(disp)) parameters
#define GET_Vertex4dv(disp) ((_glptr_Vertex4dv)(GET_by_offset((disp), _gloffset_Vertex4dv)))
#define SET_Vertex4dv(disp, func) do { \
   void (GLAPIENTRYP fn)(const GLdouble *) = func; \
   SET_by_offset(disp, _gloffset_Vertex4dv, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_Vertex4f)(GLfloat, GLfloat, GLfloat, GLfloat);
#define CALL_Vertex4f(disp, parameters) (* GET_Vertex4f(disp)) parameters
#define GET_Vertex4f(disp) ((_glptr_Vertex4f)(GET_by_offset((disp), _gloffset_Vertex4f)))
#define SET_Vertex4f(disp, func) do { \
   void (GLAPIENTRYP fn)(GLfloat, GLfloat, GLfloat, GLfloat) = func; \
   SET_by_offset(disp, _gloffset_Vertex4f, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_Vertex4fv)(const GLfloat *);
#define CALL_Vertex4fv(disp, parameters) (* GET_Vertex4fv(disp)) parameters
#define GET_Vertex4fv(disp) ((_glptr_Vertex4fv)(GET_by_offset((disp), _gloffset_Vertex4fv)))
#define SET_Vertex4fv(disp, func) do { \
   void (GLAPIENTRYP fn)(const GLfloat *) = func; \
   SET_by_offset(disp, _gloffset_Vertex4fv, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_Vertex4i)(GLint, GLint, GLint, GLint);
#define CALL_Vertex4i(disp, parameters) (* GET_Vertex4i(disp)) parameters
#define GET_Vertex4i(disp) ((_glptr_Vertex4i)(GET_by_offset((disp), _gloffset_Vertex4i)))
#define SET_Vertex4i(disp, func) do { \
   void (GLAPIENTRYP fn)(GLint, GLint, GLint, GLint) = func; \
   SET_by_offset(disp, _gloffset_Vertex4i, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_Vertex4iv)(const GLint *);
#define CALL_Vertex4iv(disp, parameters) (* GET_Vertex4iv(disp)) parameters
#define GET_Vertex4iv(disp) ((_glptr_Vertex4iv)(GET_by_offset((disp), _gloffset_Vertex4iv)))
#define SET_Vertex4iv(disp, func) do { \
   void (GLAPIENTRYP fn)(const GLint *) = func; \
   SET_by_offset(disp, _gloffset_Vertex4iv, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_Vertex4s)(GLshort, GLshort, GLshort, GLshort);
#define CALL_Vertex4s(disp, parameters) (* GET_Vertex4s(disp)) parameters
#define GET_Vertex4s(disp) ((_glptr_Vertex4s)(GET_by_offset((disp), _gloffset_Vertex4s)))
#define SET_Vertex4s(disp, func) do { \
   void (GLAPIENTRYP fn)(GLshort, GLshort, GLshort, GLshort) = func; \
   SET_by_offset(disp, _gloffset_Vertex4s, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_Vertex4sv)(const GLshort *);
#define CALL_Vertex4sv(disp, parameters) (* GET_Vertex4sv(disp)) parameters
#define GET_Vertex4sv(disp) ((_glptr_Vertex4sv)(GET_by_offset((disp), _gloffset_Vertex4sv)))
#define SET_Vertex4sv(disp, func) do { \
   void (GLAPIENTRYP fn)(const GLshort *) = func; \
   SET_by_offset(disp, _gloffset_Vertex4sv, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_ClipPlane)(GLenum, const GLdouble *);
#define CALL_ClipPlane(disp, parameters) (* GET_ClipPlane(disp)) parameters
#define GET_ClipPlane(disp) ((_glptr_ClipPlane)(GET_by_offset((disp), _gloffset_ClipPlane)))
#define SET_ClipPlane(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, const GLdouble *) = func; \
   SET_by_offset(disp, _gloffset_ClipPlane, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_ColorMaterial)(GLenum, GLenum);
#define CALL_ColorMaterial(disp, parameters) (* GET_ColorMaterial(disp)) parameters
#define GET_ColorMaterial(disp) ((_glptr_ColorMaterial)(GET_by_offset((disp), _gloffset_ColorMaterial)))
#define SET_ColorMaterial(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLenum) = func; \
   SET_by_offset(disp, _gloffset_ColorMaterial, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_CullFace)(GLenum);
#define CALL_CullFace(disp, parameters) (* GET_CullFace(disp)) parameters
#define GET_CullFace(disp) ((_glptr_CullFace)(GET_by_offset((disp), _gloffset_CullFace)))
#define SET_CullFace(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum) = func; \
   SET_by_offset(disp, _gloffset_CullFace, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_Fogf)(GLenum, GLfloat);
#define CALL_Fogf(disp, parameters) (* GET_Fogf(disp)) parameters
#define GET_Fogf(disp) ((_glptr_Fogf)(GET_by_offset((disp), _gloffset_Fogf)))
#define SET_Fogf(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLfloat) = func; \
   SET_by_offset(disp, _gloffset_Fogf, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_Fogfv)(GLenum, const GLfloat *);
#define CALL_Fogfv(disp, parameters) (* GET_Fogfv(disp)) parameters
#define GET_Fogfv(disp) ((_glptr_Fogfv)(GET_by_offset((disp), _gloffset_Fogfv)))
#define SET_Fogfv(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, const GLfloat *) = func; \
   SET_by_offset(disp, _gloffset_Fogfv, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_Fogi)(GLenum, GLint);
#define CALL_Fogi(disp, parameters) (* GET_Fogi(disp)) parameters
#define GET_Fogi(disp) ((_glptr_Fogi)(GET_by_offset((disp), _gloffset_Fogi)))
#define SET_Fogi(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLint) = func; \
   SET_by_offset(disp, _gloffset_Fogi, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_Fogiv)(GLenum, const GLint *);
#define CALL_Fogiv(disp, parameters) (* GET_Fogiv(disp)) parameters
#define GET_Fogiv(disp) ((_glptr_Fogiv)(GET_by_offset((disp), _gloffset_Fogiv)))
#define SET_Fogiv(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, const GLint *) = func; \
   SET_by_offset(disp, _gloffset_Fogiv, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_FrontFace)(GLenum);
#define CALL_FrontFace(disp, parameters) (* GET_FrontFace(disp)) parameters
#define GET_FrontFace(disp) ((_glptr_FrontFace)(GET_by_offset((disp), _gloffset_FrontFace)))
#define SET_FrontFace(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum) = func; \
   SET_by_offset(disp, _gloffset_FrontFace, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_Hint)(GLenum, GLenum);
#define CALL_Hint(disp, parameters) (* GET_Hint(disp)) parameters
#define GET_Hint(disp) ((_glptr_Hint)(GET_by_offset((disp), _gloffset_Hint)))
#define SET_Hint(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLenum) = func; \
   SET_by_offset(disp, _gloffset_Hint, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_Lightf)(GLenum, GLenum, GLfloat);
#define CALL_Lightf(disp, parameters) (* GET_Lightf(disp)) parameters
#define GET_Lightf(disp) ((_glptr_Lightf)(GET_by_offset((disp), _gloffset_Lightf)))
#define SET_Lightf(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLenum, GLfloat) = func; \
   SET_by_offset(disp, _gloffset_Lightf, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_Lightfv)(GLenum, GLenum, const GLfloat *);
#define CALL_Lightfv(disp, parameters) (* GET_Lightfv(disp)) parameters
#define GET_Lightfv(disp) ((_glptr_Lightfv)(GET_by_offset((disp), _gloffset_Lightfv)))
#define SET_Lightfv(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLenum, const GLfloat *) = func; \
   SET_by_offset(disp, _gloffset_Lightfv, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_Lighti)(GLenum, GLenum, GLint);
#define CALL_Lighti(disp, parameters) (* GET_Lighti(disp)) parameters
#define GET_Lighti(disp) ((_glptr_Lighti)(GET_by_offset((disp), _gloffset_Lighti)))
#define SET_Lighti(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLenum, GLint) = func; \
   SET_by_offset(disp, _gloffset_Lighti, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_Lightiv)(GLenum, GLenum, const GLint *);
#define CALL_Lightiv(disp, parameters) (* GET_Lightiv(disp)) parameters
#define GET_Lightiv(disp) ((_glptr_Lightiv)(GET_by_offset((disp), _gloffset_Lightiv)))
#define SET_Lightiv(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLenum, const GLint *) = func; \
   SET_by_offset(disp, _gloffset_Lightiv, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_LightModelf)(GLenum, GLfloat);
#define CALL_LightModelf(disp, parameters) (* GET_LightModelf(disp)) parameters
#define GET_LightModelf(disp) ((_glptr_LightModelf)(GET_by_offset((disp), _gloffset_LightModelf)))
#define SET_LightModelf(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLfloat) = func; \
   SET_by_offset(disp, _gloffset_LightModelf, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_LightModelfv)(GLenum, const GLfloat *);
#define CALL_LightModelfv(disp, parameters) (* GET_LightModelfv(disp)) parameters
#define GET_LightModelfv(disp) ((_glptr_LightModelfv)(GET_by_offset((disp), _gloffset_LightModelfv)))
#define SET_LightModelfv(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, const GLfloat *) = func; \
   SET_by_offset(disp, _gloffset_LightModelfv, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_LightModeli)(GLenum, GLint);
#define CALL_LightModeli(disp, parameters) (* GET_LightModeli(disp)) parameters
#define GET_LightModeli(disp) ((_glptr_LightModeli)(GET_by_offset((disp), _gloffset_LightModeli)))
#define SET_LightModeli(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLint) = func; \
   SET_by_offset(disp, _gloffset_LightModeli, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_LightModeliv)(GLenum, const GLint *);
#define CALL_LightModeliv(disp, parameters) (* GET_LightModeliv(disp)) parameters
#define GET_LightModeliv(disp) ((_glptr_LightModeliv)(GET_by_offset((disp), _gloffset_LightModeliv)))
#define SET_LightModeliv(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, const GLint *) = func; \
   SET_by_offset(disp, _gloffset_LightModeliv, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_LineStipple)(GLint, GLushort);
#define CALL_LineStipple(disp, parameters) (* GET_LineStipple(disp)) parameters
#define GET_LineStipple(disp) ((_glptr_LineStipple)(GET_by_offset((disp), _gloffset_LineStipple)))
#define SET_LineStipple(disp, func) do { \
   void (GLAPIENTRYP fn)(GLint, GLushort) = func; \
   SET_by_offset(disp, _gloffset_LineStipple, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_LineWidth)(GLfloat);
#define CALL_LineWidth(disp, parameters) (* GET_LineWidth(disp)) parameters
#define GET_LineWidth(disp) ((_glptr_LineWidth)(GET_by_offset((disp), _gloffset_LineWidth)))
#define SET_LineWidth(disp, func) do { \
   void (GLAPIENTRYP fn)(GLfloat) = func; \
   SET_by_offset(disp, _gloffset_LineWidth, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_Materialf)(GLenum, GLenum, GLfloat);
#define CALL_Materialf(disp, parameters) (* GET_Materialf(disp)) parameters
#define GET_Materialf(disp) ((_glptr_Materialf)(GET_by_offset((disp), _gloffset_Materialf)))
#define SET_Materialf(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLenum, GLfloat) = func; \
   SET_by_offset(disp, _gloffset_Materialf, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_Materialfv)(GLenum, GLenum, const GLfloat *);
#define CALL_Materialfv(disp, parameters) (* GET_Materialfv(disp)) parameters
#define GET_Materialfv(disp) ((_glptr_Materialfv)(GET_by_offset((disp), _gloffset_Materialfv)))
#define SET_Materialfv(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLenum, const GLfloat *) = func; \
   SET_by_offset(disp, _gloffset_Materialfv, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_Materiali)(GLenum, GLenum, GLint);
#define CALL_Materiali(disp, parameters) (* GET_Materiali(disp)) parameters
#define GET_Materiali(disp) ((_glptr_Materiali)(GET_by_offset((disp), _gloffset_Materiali)))
#define SET_Materiali(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLenum, GLint) = func; \
   SET_by_offset(disp, _gloffset_Materiali, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_Materialiv)(GLenum, GLenum, const GLint *);
#define CALL_Materialiv(disp, parameters) (* GET_Materialiv(disp)) parameters
#define GET_Materialiv(disp) ((_glptr_Materialiv)(GET_by_offset((disp), _gloffset_Materialiv)))
#define SET_Materialiv(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLenum, const GLint *) = func; \
   SET_by_offset(disp, _gloffset_Materialiv, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_PointSize)(GLfloat);
#define CALL_PointSize(disp, parameters) (* GET_PointSize(disp)) parameters
#define GET_PointSize(disp) ((_glptr_PointSize)(GET_by_offset((disp), _gloffset_PointSize)))
#define SET_PointSize(disp, func) do { \
   void (GLAPIENTRYP fn)(GLfloat) = func; \
   SET_by_offset(disp, _gloffset_PointSize, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_PolygonMode)(GLenum, GLenum);
#define CALL_PolygonMode(disp, parameters) (* GET_PolygonMode(disp)) parameters
#define GET_PolygonMode(disp) ((_glptr_PolygonMode)(GET_by_offset((disp), _gloffset_PolygonMode)))
#define SET_PolygonMode(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLenum) = func; \
   SET_by_offset(disp, _gloffset_PolygonMode, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_PolygonStipple)(const GLubyte *);
#define CALL_PolygonStipple(disp, parameters) (* GET_PolygonStipple(disp)) parameters
#define GET_PolygonStipple(disp) ((_glptr_PolygonStipple)(GET_by_offset((disp), _gloffset_PolygonStipple)))
#define SET_PolygonStipple(disp, func) do { \
   void (GLAPIENTRYP fn)(const GLubyte *) = func; \
   SET_by_offset(disp, _gloffset_PolygonStipple, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_Scissor)(GLint, GLint, GLsizei, GLsizei);
#define CALL_Scissor(disp, parameters) (* GET_Scissor(disp)) parameters
#define GET_Scissor(disp) ((_glptr_Scissor)(GET_by_offset((disp), _gloffset_Scissor)))
#define SET_Scissor(disp, func) do { \
   void (GLAPIENTRYP fn)(GLint, GLint, GLsizei, GLsizei) = func; \
   SET_by_offset(disp, _gloffset_Scissor, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_ShadeModel)(GLenum);
#define CALL_ShadeModel(disp, parameters) (* GET_ShadeModel(disp)) parameters
#define GET_ShadeModel(disp) ((_glptr_ShadeModel)(GET_by_offset((disp), _gloffset_ShadeModel)))
#define SET_ShadeModel(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum) = func; \
   SET_by_offset(disp, _gloffset_ShadeModel, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_TexParameterf)(GLenum, GLenum, GLfloat);
#define CALL_TexParameterf(disp, parameters) (* GET_TexParameterf(disp)) parameters
#define GET_TexParameterf(disp) ((_glptr_TexParameterf)(GET_by_offset((disp), _gloffset_TexParameterf)))
#define SET_TexParameterf(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLenum, GLfloat) = func; \
   SET_by_offset(disp, _gloffset_TexParameterf, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_TexParameterfv)(GLenum, GLenum, const GLfloat *);
#define CALL_TexParameterfv(disp, parameters) (* GET_TexParameterfv(disp)) parameters
#define GET_TexParameterfv(disp) ((_glptr_TexParameterfv)(GET_by_offset((disp), _gloffset_TexParameterfv)))
#define SET_TexParameterfv(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLenum, const GLfloat *) = func; \
   SET_by_offset(disp, _gloffset_TexParameterfv, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_TexParameteri)(GLenum, GLenum, GLint);
#define CALL_TexParameteri(disp, parameters) (* GET_TexParameteri(disp)) parameters
#define GET_TexParameteri(disp) ((_glptr_TexParameteri)(GET_by_offset((disp), _gloffset_TexParameteri)))
#define SET_TexParameteri(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLenum, GLint) = func; \
   SET_by_offset(disp, _gloffset_TexParameteri, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_TexParameteriv)(GLenum, GLenum, const GLint *);
#define CALL_TexParameteriv(disp, parameters) (* GET_TexParameteriv(disp)) parameters
#define GET_TexParameteriv(disp) ((_glptr_TexParameteriv)(GET_by_offset((disp), _gloffset_TexParameteriv)))
#define SET_TexParameteriv(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLenum, const GLint *) = func; \
   SET_by_offset(disp, _gloffset_TexParameteriv, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_TexImage1D)(GLenum, GLint, GLint, GLsizei, GLint, GLenum, GLenum, const GLvoid *);
#define CALL_TexImage1D(disp, parameters) (* GET_TexImage1D(disp)) parameters
#define GET_TexImage1D(disp) ((_glptr_TexImage1D)(GET_by_offset((disp), _gloffset_TexImage1D)))
#define SET_TexImage1D(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLint, GLint, GLsizei, GLint, GLenum, GLenum, const GLvoid *) = func; \
   SET_by_offset(disp, _gloffset_TexImage1D, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_TexImage2D)(GLenum, GLint, GLint, GLsizei, GLsizei, GLint, GLenum, GLenum, const GLvoid *);
#define CALL_TexImage2D(disp, parameters) (* GET_TexImage2D(disp)) parameters
#define GET_TexImage2D(disp) ((_glptr_TexImage2D)(GET_by_offset((disp), _gloffset_TexImage2D)))
#define SET_TexImage2D(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLint, GLint, GLsizei, GLsizei, GLint, GLenum, GLenum, const GLvoid *) = func; \
   SET_by_offset(disp, _gloffset_TexImage2D, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_TexEnvf)(GLenum, GLenum, GLfloat);
#define CALL_TexEnvf(disp, parameters) (* GET_TexEnvf(disp)) parameters
#define GET_TexEnvf(disp) ((_glptr_TexEnvf)(GET_by_offset((disp), _gloffset_TexEnvf)))
#define SET_TexEnvf(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLenum, GLfloat) = func; \
   SET_by_offset(disp, _gloffset_TexEnvf, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_TexEnvfv)(GLenum, GLenum, const GLfloat *);
#define CALL_TexEnvfv(disp, parameters) (* GET_TexEnvfv(disp)) parameters
#define GET_TexEnvfv(disp) ((_glptr_TexEnvfv)(GET_by_offset((disp), _gloffset_TexEnvfv)))
#define SET_TexEnvfv(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLenum, const GLfloat *) = func; \
   SET_by_offset(disp, _gloffset_TexEnvfv, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_TexEnvi)(GLenum, GLenum, GLint);
#define CALL_TexEnvi(disp, parameters) (* GET_TexEnvi(disp)) parameters
#define GET_TexEnvi(disp) ((_glptr_TexEnvi)(GET_by_offset((disp), _gloffset_TexEnvi)))
#define SET_TexEnvi(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLenum, GLint) = func; \
   SET_by_offset(disp, _gloffset_TexEnvi, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_TexEnviv)(GLenum, GLenum, const GLint *);
#define CALL_TexEnviv(disp, parameters) (* GET_TexEnviv(disp)) parameters
#define GET_TexEnviv(disp) ((_glptr_TexEnviv)(GET_by_offset((disp), _gloffset_TexEnviv)))
#define SET_TexEnviv(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLenum, const GLint *) = func; \
   SET_by_offset(disp, _gloffset_TexEnviv, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_TexGend)(GLenum, GLenum, GLdouble);
#define CALL_TexGend(disp, parameters) (* GET_TexGend(disp)) parameters
#define GET_TexGend(disp) ((_glptr_TexGend)(GET_by_offset((disp), _gloffset_TexGend)))
#define SET_TexGend(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLenum, GLdouble) = func; \
   SET_by_offset(disp, _gloffset_TexGend, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_TexGendv)(GLenum, GLenum, const GLdouble *);
#define CALL_TexGendv(disp, parameters) (* GET_TexGendv(disp)) parameters
#define GET_TexGendv(disp) ((_glptr_TexGendv)(GET_by_offset((disp), _gloffset_TexGendv)))
#define SET_TexGendv(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLenum, const GLdouble *) = func; \
   SET_by_offset(disp, _gloffset_TexGendv, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_TexGenf)(GLenum, GLenum, GLfloat);
#define CALL_TexGenf(disp, parameters) (* GET_TexGenf(disp)) parameters
#define GET_TexGenf(disp) ((_glptr_TexGenf)(GET_by_offset((disp), _gloffset_TexGenf)))
#define SET_TexGenf(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLenum, GLfloat) = func; \
   SET_by_offset(disp, _gloffset_TexGenf, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_TexGenfv)(GLenum, GLenum, const GLfloat *);
#define CALL_TexGenfv(disp, parameters) (* GET_TexGenfv(disp)) parameters
#define GET_TexGenfv(disp) ((_glptr_TexGenfv)(GET_by_offset((disp), _gloffset_TexGenfv)))
#define SET_TexGenfv(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLenum, const GLfloat *) = func; \
   SET_by_offset(disp, _gloffset_TexGenfv, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_TexGeni)(GLenum, GLenum, GLint);
#define CALL_TexGeni(disp, parameters) (* GET_TexGeni(disp)) parameters
#define GET_TexGeni(disp) ((_glptr_TexGeni)(GET_by_offset((disp), _gloffset_TexGeni)))
#define SET_TexGeni(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLenum, GLint) = func; \
   SET_by_offset(disp, _gloffset_TexGeni, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_TexGeniv)(GLenum, GLenum, const GLint *);
#define CALL_TexGeniv(disp, parameters) (* GET_TexGeniv(disp)) parameters
#define GET_TexGeniv(disp) ((_glptr_TexGeniv)(GET_by_offset((disp), _gloffset_TexGeniv)))
#define SET_TexGeniv(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLenum, const GLint *) = func; \
   SET_by_offset(disp, _gloffset_TexGeniv, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_FeedbackBuffer)(GLsizei, GLenum, GLfloat *);
#define CALL_FeedbackBuffer(disp, parameters) (* GET_FeedbackBuffer(disp)) parameters
#define GET_FeedbackBuffer(disp) ((_glptr_FeedbackBuffer)(GET_by_offset((disp), _gloffset_FeedbackBuffer)))
#define SET_FeedbackBuffer(disp, func) do { \
   void (GLAPIENTRYP fn)(GLsizei, GLenum, GLfloat *) = func; \
   SET_by_offset(disp, _gloffset_FeedbackBuffer, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_SelectBuffer)(GLsizei, GLuint *);
#define CALL_SelectBuffer(disp, parameters) (* GET_SelectBuffer(disp)) parameters
#define GET_SelectBuffer(disp) ((_glptr_SelectBuffer)(GET_by_offset((disp), _gloffset_SelectBuffer)))
#define SET_SelectBuffer(disp, func) do { \
   void (GLAPIENTRYP fn)(GLsizei, GLuint *) = func; \
   SET_by_offset(disp, _gloffset_SelectBuffer, fn); \
} while (0)

typedef GLint (GLAPIENTRYP _glptr_RenderMode)(GLenum);
#define CALL_RenderMode(disp, parameters) (* GET_RenderMode(disp)) parameters
#define GET_RenderMode(disp) ((_glptr_RenderMode)(GET_by_offset((disp), _gloffset_RenderMode)))
#define SET_RenderMode(disp, func) do { \
   GLint (GLAPIENTRYP fn)(GLenum) = func; \
   SET_by_offset(disp, _gloffset_RenderMode, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_InitNames)(void);
#define CALL_InitNames(disp, parameters) (* GET_InitNames(disp)) parameters
#define GET_InitNames(disp) ((_glptr_InitNames)(GET_by_offset((disp), _gloffset_InitNames)))
#define SET_InitNames(disp, func) do { \
   void (GLAPIENTRYP fn)(void) = func; \
   SET_by_offset(disp, _gloffset_InitNames, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_LoadName)(GLuint);
#define CALL_LoadName(disp, parameters) (* GET_LoadName(disp)) parameters
#define GET_LoadName(disp) ((_glptr_LoadName)(GET_by_offset((disp), _gloffset_LoadName)))
#define SET_LoadName(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint) = func; \
   SET_by_offset(disp, _gloffset_LoadName, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_PassThrough)(GLfloat);
#define CALL_PassThrough(disp, parameters) (* GET_PassThrough(disp)) parameters
#define GET_PassThrough(disp) ((_glptr_PassThrough)(GET_by_offset((disp), _gloffset_PassThrough)))
#define SET_PassThrough(disp, func) do { \
   void (GLAPIENTRYP fn)(GLfloat) = func; \
   SET_by_offset(disp, _gloffset_PassThrough, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_PopName)(void);
#define CALL_PopName(disp, parameters) (* GET_PopName(disp)) parameters
#define GET_PopName(disp) ((_glptr_PopName)(GET_by_offset((disp), _gloffset_PopName)))
#define SET_PopName(disp, func) do { \
   void (GLAPIENTRYP fn)(void) = func; \
   SET_by_offset(disp, _gloffset_PopName, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_PushName)(GLuint);
#define CALL_PushName(disp, parameters) (* GET_PushName(disp)) parameters
#define GET_PushName(disp) ((_glptr_PushName)(GET_by_offset((disp), _gloffset_PushName)))
#define SET_PushName(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint) = func; \
   SET_by_offset(disp, _gloffset_PushName, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_DrawBuffer)(GLenum);
#define CALL_DrawBuffer(disp, parameters) (* GET_DrawBuffer(disp)) parameters
#define GET_DrawBuffer(disp) ((_glptr_DrawBuffer)(GET_by_offset((disp), _gloffset_DrawBuffer)))
#define SET_DrawBuffer(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum) = func; \
   SET_by_offset(disp, _gloffset_DrawBuffer, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_Clear)(GLbitfield);
#define CALL_Clear(disp, parameters) (* GET_Clear(disp)) parameters
#define GET_Clear(disp) ((_glptr_Clear)(GET_by_offset((disp), _gloffset_Clear)))
#define SET_Clear(disp, func) do { \
   void (GLAPIENTRYP fn)(GLbitfield) = func; \
   SET_by_offset(disp, _gloffset_Clear, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_ClearAccum)(GLfloat, GLfloat, GLfloat, GLfloat);
#define CALL_ClearAccum(disp, parameters) (* GET_ClearAccum(disp)) parameters
#define GET_ClearAccum(disp) ((_glptr_ClearAccum)(GET_by_offset((disp), _gloffset_ClearAccum)))
#define SET_ClearAccum(disp, func) do { \
   void (GLAPIENTRYP fn)(GLfloat, GLfloat, GLfloat, GLfloat) = func; \
   SET_by_offset(disp, _gloffset_ClearAccum, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_ClearIndex)(GLfloat);
#define CALL_ClearIndex(disp, parameters) (* GET_ClearIndex(disp)) parameters
#define GET_ClearIndex(disp) ((_glptr_ClearIndex)(GET_by_offset((disp), _gloffset_ClearIndex)))
#define SET_ClearIndex(disp, func) do { \
   void (GLAPIENTRYP fn)(GLfloat) = func; \
   SET_by_offset(disp, _gloffset_ClearIndex, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_ClearColor)(GLclampf, GLclampf, GLclampf, GLclampf);
#define CALL_ClearColor(disp, parameters) (* GET_ClearColor(disp)) parameters
#define GET_ClearColor(disp) ((_glptr_ClearColor)(GET_by_offset((disp), _gloffset_ClearColor)))
#define SET_ClearColor(disp, func) do { \
   void (GLAPIENTRYP fn)(GLclampf, GLclampf, GLclampf, GLclampf) = func; \
   SET_by_offset(disp, _gloffset_ClearColor, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_ClearStencil)(GLint);
#define CALL_ClearStencil(disp, parameters) (* GET_ClearStencil(disp)) parameters
#define GET_ClearStencil(disp) ((_glptr_ClearStencil)(GET_by_offset((disp), _gloffset_ClearStencil)))
#define SET_ClearStencil(disp, func) do { \
   void (GLAPIENTRYP fn)(GLint) = func; \
   SET_by_offset(disp, _gloffset_ClearStencil, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_ClearDepth)(GLclampd);
#define CALL_ClearDepth(disp, parameters) (* GET_ClearDepth(disp)) parameters
#define GET_ClearDepth(disp) ((_glptr_ClearDepth)(GET_by_offset((disp), _gloffset_ClearDepth)))
#define SET_ClearDepth(disp, func) do { \
   void (GLAPIENTRYP fn)(GLclampd) = func; \
   SET_by_offset(disp, _gloffset_ClearDepth, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_StencilMask)(GLuint);
#define CALL_StencilMask(disp, parameters) (* GET_StencilMask(disp)) parameters
#define GET_StencilMask(disp) ((_glptr_StencilMask)(GET_by_offset((disp), _gloffset_StencilMask)))
#define SET_StencilMask(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint) = func; \
   SET_by_offset(disp, _gloffset_StencilMask, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_ColorMask)(GLboolean, GLboolean, GLboolean, GLboolean);
#define CALL_ColorMask(disp, parameters) (* GET_ColorMask(disp)) parameters
#define GET_ColorMask(disp) ((_glptr_ColorMask)(GET_by_offset((disp), _gloffset_ColorMask)))
#define SET_ColorMask(disp, func) do { \
   void (GLAPIENTRYP fn)(GLboolean, GLboolean, GLboolean, GLboolean) = func; \
   SET_by_offset(disp, _gloffset_ColorMask, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_DepthMask)(GLboolean);
#define CALL_DepthMask(disp, parameters) (* GET_DepthMask(disp)) parameters
#define GET_DepthMask(disp) ((_glptr_DepthMask)(GET_by_offset((disp), _gloffset_DepthMask)))
#define SET_DepthMask(disp, func) do { \
   void (GLAPIENTRYP fn)(GLboolean) = func; \
   SET_by_offset(disp, _gloffset_DepthMask, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_IndexMask)(GLuint);
#define CALL_IndexMask(disp, parameters) (* GET_IndexMask(disp)) parameters
#define GET_IndexMask(disp) ((_glptr_IndexMask)(GET_by_offset((disp), _gloffset_IndexMask)))
#define SET_IndexMask(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint) = func; \
   SET_by_offset(disp, _gloffset_IndexMask, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_Accum)(GLenum, GLfloat);
#define CALL_Accum(disp, parameters) (* GET_Accum(disp)) parameters
#define GET_Accum(disp) ((_glptr_Accum)(GET_by_offset((disp), _gloffset_Accum)))
#define SET_Accum(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLfloat) = func; \
   SET_by_offset(disp, _gloffset_Accum, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_Disable)(GLenum);
#define CALL_Disable(disp, parameters) (* GET_Disable(disp)) parameters
#define GET_Disable(disp) ((_glptr_Disable)(GET_by_offset((disp), _gloffset_Disable)))
#define SET_Disable(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum) = func; \
   SET_by_offset(disp, _gloffset_Disable, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_Enable)(GLenum);
#define CALL_Enable(disp, parameters) (* GET_Enable(disp)) parameters
#define GET_Enable(disp) ((_glptr_Enable)(GET_by_offset((disp), _gloffset_Enable)))
#define SET_Enable(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum) = func; \
   SET_by_offset(disp, _gloffset_Enable, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_Finish)(void);
#define CALL_Finish(disp, parameters) (* GET_Finish(disp)) parameters
#define GET_Finish(disp) ((_glptr_Finish)(GET_by_offset((disp), _gloffset_Finish)))
#define SET_Finish(disp, func) do { \
   void (GLAPIENTRYP fn)(void) = func; \
   SET_by_offset(disp, _gloffset_Finish, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_Flush)(void);
#define CALL_Flush(disp, parameters) (* GET_Flush(disp)) parameters
#define GET_Flush(disp) ((_glptr_Flush)(GET_by_offset((disp), _gloffset_Flush)))
#define SET_Flush(disp, func) do { \
   void (GLAPIENTRYP fn)(void) = func; \
   SET_by_offset(disp, _gloffset_Flush, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_PopAttrib)(void);
#define CALL_PopAttrib(disp, parameters) (* GET_PopAttrib(disp)) parameters
#define GET_PopAttrib(disp) ((_glptr_PopAttrib)(GET_by_offset((disp), _gloffset_PopAttrib)))
#define SET_PopAttrib(disp, func) do { \
   void (GLAPIENTRYP fn)(void) = func; \
   SET_by_offset(disp, _gloffset_PopAttrib, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_PushAttrib)(GLbitfield);
#define CALL_PushAttrib(disp, parameters) (* GET_PushAttrib(disp)) parameters
#define GET_PushAttrib(disp) ((_glptr_PushAttrib)(GET_by_offset((disp), _gloffset_PushAttrib)))
#define SET_PushAttrib(disp, func) do { \
   void (GLAPIENTRYP fn)(GLbitfield) = func; \
   SET_by_offset(disp, _gloffset_PushAttrib, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_Map1d)(GLenum, GLdouble, GLdouble, GLint, GLint, const GLdouble *);
#define CALL_Map1d(disp, parameters) (* GET_Map1d(disp)) parameters
#define GET_Map1d(disp) ((_glptr_Map1d)(GET_by_offset((disp), _gloffset_Map1d)))
#define SET_Map1d(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLdouble, GLdouble, GLint, GLint, const GLdouble *) = func; \
   SET_by_offset(disp, _gloffset_Map1d, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_Map1f)(GLenum, GLfloat, GLfloat, GLint, GLint, const GLfloat *);
#define CALL_Map1f(disp, parameters) (* GET_Map1f(disp)) parameters
#define GET_Map1f(disp) ((_glptr_Map1f)(GET_by_offset((disp), _gloffset_Map1f)))
#define SET_Map1f(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLfloat, GLfloat, GLint, GLint, const GLfloat *) = func; \
   SET_by_offset(disp, _gloffset_Map1f, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_Map2d)(GLenum, GLdouble, GLdouble, GLint, GLint, GLdouble, GLdouble, GLint, GLint, const GLdouble *);
#define CALL_Map2d(disp, parameters) (* GET_Map2d(disp)) parameters
#define GET_Map2d(disp) ((_glptr_Map2d)(GET_by_offset((disp), _gloffset_Map2d)))
#define SET_Map2d(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLdouble, GLdouble, GLint, GLint, GLdouble, GLdouble, GLint, GLint, const GLdouble *) = func; \
   SET_by_offset(disp, _gloffset_Map2d, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_Map2f)(GLenum, GLfloat, GLfloat, GLint, GLint, GLfloat, GLfloat, GLint, GLint, const GLfloat *);
#define CALL_Map2f(disp, parameters) (* GET_Map2f(disp)) parameters
#define GET_Map2f(disp) ((_glptr_Map2f)(GET_by_offset((disp), _gloffset_Map2f)))
#define SET_Map2f(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLfloat, GLfloat, GLint, GLint, GLfloat, GLfloat, GLint, GLint, const GLfloat *) = func; \
   SET_by_offset(disp, _gloffset_Map2f, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_MapGrid1d)(GLint, GLdouble, GLdouble);
#define CALL_MapGrid1d(disp, parameters) (* GET_MapGrid1d(disp)) parameters
#define GET_MapGrid1d(disp) ((_glptr_MapGrid1d)(GET_by_offset((disp), _gloffset_MapGrid1d)))
#define SET_MapGrid1d(disp, func) do { \
   void (GLAPIENTRYP fn)(GLint, GLdouble, GLdouble) = func; \
   SET_by_offset(disp, _gloffset_MapGrid1d, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_MapGrid1f)(GLint, GLfloat, GLfloat);
#define CALL_MapGrid1f(disp, parameters) (* GET_MapGrid1f(disp)) parameters
#define GET_MapGrid1f(disp) ((_glptr_MapGrid1f)(GET_by_offset((disp), _gloffset_MapGrid1f)))
#define SET_MapGrid1f(disp, func) do { \
   void (GLAPIENTRYP fn)(GLint, GLfloat, GLfloat) = func; \
   SET_by_offset(disp, _gloffset_MapGrid1f, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_MapGrid2d)(GLint, GLdouble, GLdouble, GLint, GLdouble, GLdouble);
#define CALL_MapGrid2d(disp, parameters) (* GET_MapGrid2d(disp)) parameters
#define GET_MapGrid2d(disp) ((_glptr_MapGrid2d)(GET_by_offset((disp), _gloffset_MapGrid2d)))
#define SET_MapGrid2d(disp, func) do { \
   void (GLAPIENTRYP fn)(GLint, GLdouble, GLdouble, GLint, GLdouble, GLdouble) = func; \
   SET_by_offset(disp, _gloffset_MapGrid2d, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_MapGrid2f)(GLint, GLfloat, GLfloat, GLint, GLfloat, GLfloat);
#define CALL_MapGrid2f(disp, parameters) (* GET_MapGrid2f(disp)) parameters
#define GET_MapGrid2f(disp) ((_glptr_MapGrid2f)(GET_by_offset((disp), _gloffset_MapGrid2f)))
#define SET_MapGrid2f(disp, func) do { \
   void (GLAPIENTRYP fn)(GLint, GLfloat, GLfloat, GLint, GLfloat, GLfloat) = func; \
   SET_by_offset(disp, _gloffset_MapGrid2f, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_EvalCoord1d)(GLdouble);
#define CALL_EvalCoord1d(disp, parameters) (* GET_EvalCoord1d(disp)) parameters
#define GET_EvalCoord1d(disp) ((_glptr_EvalCoord1d)(GET_by_offset((disp), _gloffset_EvalCoord1d)))
#define SET_EvalCoord1d(disp, func) do { \
   void (GLAPIENTRYP fn)(GLdouble) = func; \
   SET_by_offset(disp, _gloffset_EvalCoord1d, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_EvalCoord1dv)(const GLdouble *);
#define CALL_EvalCoord1dv(disp, parameters) (* GET_EvalCoord1dv(disp)) parameters
#define GET_EvalCoord1dv(disp) ((_glptr_EvalCoord1dv)(GET_by_offset((disp), _gloffset_EvalCoord1dv)))
#define SET_EvalCoord1dv(disp, func) do { \
   void (GLAPIENTRYP fn)(const GLdouble *) = func; \
   SET_by_offset(disp, _gloffset_EvalCoord1dv, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_EvalCoord1f)(GLfloat);
#define CALL_EvalCoord1f(disp, parameters) (* GET_EvalCoord1f(disp)) parameters
#define GET_EvalCoord1f(disp) ((_glptr_EvalCoord1f)(GET_by_offset((disp), _gloffset_EvalCoord1f)))
#define SET_EvalCoord1f(disp, func) do { \
   void (GLAPIENTRYP fn)(GLfloat) = func; \
   SET_by_offset(disp, _gloffset_EvalCoord1f, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_EvalCoord1fv)(const GLfloat *);
#define CALL_EvalCoord1fv(disp, parameters) (* GET_EvalCoord1fv(disp)) parameters
#define GET_EvalCoord1fv(disp) ((_glptr_EvalCoord1fv)(GET_by_offset((disp), _gloffset_EvalCoord1fv)))
#define SET_EvalCoord1fv(disp, func) do { \
   void (GLAPIENTRYP fn)(const GLfloat *) = func; \
   SET_by_offset(disp, _gloffset_EvalCoord1fv, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_EvalCoord2d)(GLdouble, GLdouble);
#define CALL_EvalCoord2d(disp, parameters) (* GET_EvalCoord2d(disp)) parameters
#define GET_EvalCoord2d(disp) ((_glptr_EvalCoord2d)(GET_by_offset((disp), _gloffset_EvalCoord2d)))
#define SET_EvalCoord2d(disp, func) do { \
   void (GLAPIENTRYP fn)(GLdouble, GLdouble) = func; \
   SET_by_offset(disp, _gloffset_EvalCoord2d, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_EvalCoord2dv)(const GLdouble *);
#define CALL_EvalCoord2dv(disp, parameters) (* GET_EvalCoord2dv(disp)) parameters
#define GET_EvalCoord2dv(disp) ((_glptr_EvalCoord2dv)(GET_by_offset((disp), _gloffset_EvalCoord2dv)))
#define SET_EvalCoord2dv(disp, func) do { \
   void (GLAPIENTRYP fn)(const GLdouble *) = func; \
   SET_by_offset(disp, _gloffset_EvalCoord2dv, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_EvalCoord2f)(GLfloat, GLfloat);
#define CALL_EvalCoord2f(disp, parameters) (* GET_EvalCoord2f(disp)) parameters
#define GET_EvalCoord2f(disp) ((_glptr_EvalCoord2f)(GET_by_offset((disp), _gloffset_EvalCoord2f)))
#define SET_EvalCoord2f(disp, func) do { \
   void (GLAPIENTRYP fn)(GLfloat, GLfloat) = func; \
   SET_by_offset(disp, _gloffset_EvalCoord2f, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_EvalCoord2fv)(const GLfloat *);
#define CALL_EvalCoord2fv(disp, parameters) (* GET_EvalCoord2fv(disp)) parameters
#define GET_EvalCoord2fv(disp) ((_glptr_EvalCoord2fv)(GET_by_offset((disp), _gloffset_EvalCoord2fv)))
#define SET_EvalCoord2fv(disp, func) do { \
   void (GLAPIENTRYP fn)(const GLfloat *) = func; \
   SET_by_offset(disp, _gloffset_EvalCoord2fv, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_EvalMesh1)(GLenum, GLint, GLint);
#define CALL_EvalMesh1(disp, parameters) (* GET_EvalMesh1(disp)) parameters
#define GET_EvalMesh1(disp) ((_glptr_EvalMesh1)(GET_by_offset((disp), _gloffset_EvalMesh1)))
#define SET_EvalMesh1(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLint, GLint) = func; \
   SET_by_offset(disp, _gloffset_EvalMesh1, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_EvalPoint1)(GLint);
#define CALL_EvalPoint1(disp, parameters) (* GET_EvalPoint1(disp)) parameters
#define GET_EvalPoint1(disp) ((_glptr_EvalPoint1)(GET_by_offset((disp), _gloffset_EvalPoint1)))
#define SET_EvalPoint1(disp, func) do { \
   void (GLAPIENTRYP fn)(GLint) = func; \
   SET_by_offset(disp, _gloffset_EvalPoint1, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_EvalMesh2)(GLenum, GLint, GLint, GLint, GLint);
#define CALL_EvalMesh2(disp, parameters) (* GET_EvalMesh2(disp)) parameters
#define GET_EvalMesh2(disp) ((_glptr_EvalMesh2)(GET_by_offset((disp), _gloffset_EvalMesh2)))
#define SET_EvalMesh2(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLint, GLint, GLint, GLint) = func; \
   SET_by_offset(disp, _gloffset_EvalMesh2, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_EvalPoint2)(GLint, GLint);
#define CALL_EvalPoint2(disp, parameters) (* GET_EvalPoint2(disp)) parameters
#define GET_EvalPoint2(disp) ((_glptr_EvalPoint2)(GET_by_offset((disp), _gloffset_EvalPoint2)))
#define SET_EvalPoint2(disp, func) do { \
   void (GLAPIENTRYP fn)(GLint, GLint) = func; \
   SET_by_offset(disp, _gloffset_EvalPoint2, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_AlphaFunc)(GLenum, GLclampf);
#define CALL_AlphaFunc(disp, parameters) (* GET_AlphaFunc(disp)) parameters
#define GET_AlphaFunc(disp) ((_glptr_AlphaFunc)(GET_by_offset((disp), _gloffset_AlphaFunc)))
#define SET_AlphaFunc(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLclampf) = func; \
   SET_by_offset(disp, _gloffset_AlphaFunc, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_BlendFunc)(GLenum, GLenum);
#define CALL_BlendFunc(disp, parameters) (* GET_BlendFunc(disp)) parameters
#define GET_BlendFunc(disp) ((_glptr_BlendFunc)(GET_by_offset((disp), _gloffset_BlendFunc)))
#define SET_BlendFunc(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLenum) = func; \
   SET_by_offset(disp, _gloffset_BlendFunc, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_LogicOp)(GLenum);
#define CALL_LogicOp(disp, parameters) (* GET_LogicOp(disp)) parameters
#define GET_LogicOp(disp) ((_glptr_LogicOp)(GET_by_offset((disp), _gloffset_LogicOp)))
#define SET_LogicOp(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum) = func; \
   SET_by_offset(disp, _gloffset_LogicOp, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_StencilFunc)(GLenum, GLint, GLuint);
#define CALL_StencilFunc(disp, parameters) (* GET_StencilFunc(disp)) parameters
#define GET_StencilFunc(disp) ((_glptr_StencilFunc)(GET_by_offset((disp), _gloffset_StencilFunc)))
#define SET_StencilFunc(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLint, GLuint) = func; \
   SET_by_offset(disp, _gloffset_StencilFunc, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_StencilOp)(GLenum, GLenum, GLenum);
#define CALL_StencilOp(disp, parameters) (* GET_StencilOp(disp)) parameters
#define GET_StencilOp(disp) ((_glptr_StencilOp)(GET_by_offset((disp), _gloffset_StencilOp)))
#define SET_StencilOp(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLenum, GLenum) = func; \
   SET_by_offset(disp, _gloffset_StencilOp, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_DepthFunc)(GLenum);
#define CALL_DepthFunc(disp, parameters) (* GET_DepthFunc(disp)) parameters
#define GET_DepthFunc(disp) ((_glptr_DepthFunc)(GET_by_offset((disp), _gloffset_DepthFunc)))
#define SET_DepthFunc(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum) = func; \
   SET_by_offset(disp, _gloffset_DepthFunc, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_PixelZoom)(GLfloat, GLfloat);
#define CALL_PixelZoom(disp, parameters) (* GET_PixelZoom(disp)) parameters
#define GET_PixelZoom(disp) ((_glptr_PixelZoom)(GET_by_offset((disp), _gloffset_PixelZoom)))
#define SET_PixelZoom(disp, func) do { \
   void (GLAPIENTRYP fn)(GLfloat, GLfloat) = func; \
   SET_by_offset(disp, _gloffset_PixelZoom, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_PixelTransferf)(GLenum, GLfloat);
#define CALL_PixelTransferf(disp, parameters) (* GET_PixelTransferf(disp)) parameters
#define GET_PixelTransferf(disp) ((_glptr_PixelTransferf)(GET_by_offset((disp), _gloffset_PixelTransferf)))
#define SET_PixelTransferf(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLfloat) = func; \
   SET_by_offset(disp, _gloffset_PixelTransferf, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_PixelTransferi)(GLenum, GLint);
#define CALL_PixelTransferi(disp, parameters) (* GET_PixelTransferi(disp)) parameters
#define GET_PixelTransferi(disp) ((_glptr_PixelTransferi)(GET_by_offset((disp), _gloffset_PixelTransferi)))
#define SET_PixelTransferi(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLint) = func; \
   SET_by_offset(disp, _gloffset_PixelTransferi, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_PixelStoref)(GLenum, GLfloat);
#define CALL_PixelStoref(disp, parameters) (* GET_PixelStoref(disp)) parameters
#define GET_PixelStoref(disp) ((_glptr_PixelStoref)(GET_by_offset((disp), _gloffset_PixelStoref)))
#define SET_PixelStoref(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLfloat) = func; \
   SET_by_offset(disp, _gloffset_PixelStoref, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_PixelStorei)(GLenum, GLint);
#define CALL_PixelStorei(disp, parameters) (* GET_PixelStorei(disp)) parameters
#define GET_PixelStorei(disp) ((_glptr_PixelStorei)(GET_by_offset((disp), _gloffset_PixelStorei)))
#define SET_PixelStorei(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLint) = func; \
   SET_by_offset(disp, _gloffset_PixelStorei, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_PixelMapfv)(GLenum, GLsizei, const GLfloat *);
#define CALL_PixelMapfv(disp, parameters) (* GET_PixelMapfv(disp)) parameters
#define GET_PixelMapfv(disp) ((_glptr_PixelMapfv)(GET_by_offset((disp), _gloffset_PixelMapfv)))
#define SET_PixelMapfv(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLsizei, const GLfloat *) = func; \
   SET_by_offset(disp, _gloffset_PixelMapfv, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_PixelMapuiv)(GLenum, GLsizei, const GLuint *);
#define CALL_PixelMapuiv(disp, parameters) (* GET_PixelMapuiv(disp)) parameters
#define GET_PixelMapuiv(disp) ((_glptr_PixelMapuiv)(GET_by_offset((disp), _gloffset_PixelMapuiv)))
#define SET_PixelMapuiv(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLsizei, const GLuint *) = func; \
   SET_by_offset(disp, _gloffset_PixelMapuiv, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_PixelMapusv)(GLenum, GLsizei, const GLushort *);
#define CALL_PixelMapusv(disp, parameters) (* GET_PixelMapusv(disp)) parameters
#define GET_PixelMapusv(disp) ((_glptr_PixelMapusv)(GET_by_offset((disp), _gloffset_PixelMapusv)))
#define SET_PixelMapusv(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLsizei, const GLushort *) = func; \
   SET_by_offset(disp, _gloffset_PixelMapusv, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_ReadBuffer)(GLenum);
#define CALL_ReadBuffer(disp, parameters) (* GET_ReadBuffer(disp)) parameters
#define GET_ReadBuffer(disp) ((_glptr_ReadBuffer)(GET_by_offset((disp), _gloffset_ReadBuffer)))
#define SET_ReadBuffer(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum) = func; \
   SET_by_offset(disp, _gloffset_ReadBuffer, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_CopyPixels)(GLint, GLint, GLsizei, GLsizei, GLenum);
#define CALL_CopyPixels(disp, parameters) (* GET_CopyPixels(disp)) parameters
#define GET_CopyPixels(disp) ((_glptr_CopyPixels)(GET_by_offset((disp), _gloffset_CopyPixels)))
#define SET_CopyPixels(disp, func) do { \
   void (GLAPIENTRYP fn)(GLint, GLint, GLsizei, GLsizei, GLenum) = func; \
   SET_by_offset(disp, _gloffset_CopyPixels, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_ReadPixels)(GLint, GLint, GLsizei, GLsizei, GLenum, GLenum, GLvoid *);
#define CALL_ReadPixels(disp, parameters) (* GET_ReadPixels(disp)) parameters
#define GET_ReadPixels(disp) ((_glptr_ReadPixels)(GET_by_offset((disp), _gloffset_ReadPixels)))
#define SET_ReadPixels(disp, func) do { \
   void (GLAPIENTRYP fn)(GLint, GLint, GLsizei, GLsizei, GLenum, GLenum, GLvoid *) = func; \
   SET_by_offset(disp, _gloffset_ReadPixels, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_DrawPixels)(GLsizei, GLsizei, GLenum, GLenum, const GLvoid *);
#define CALL_DrawPixels(disp, parameters) (* GET_DrawPixels(disp)) parameters
#define GET_DrawPixels(disp) ((_glptr_DrawPixels)(GET_by_offset((disp), _gloffset_DrawPixels)))
#define SET_DrawPixels(disp, func) do { \
   void (GLAPIENTRYP fn)(GLsizei, GLsizei, GLenum, GLenum, const GLvoid *) = func; \
   SET_by_offset(disp, _gloffset_DrawPixels, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_GetBooleanv)(GLenum, GLboolean *);
#define CALL_GetBooleanv(disp, parameters) (* GET_GetBooleanv(disp)) parameters
#define GET_GetBooleanv(disp) ((_glptr_GetBooleanv)(GET_by_offset((disp), _gloffset_GetBooleanv)))
#define SET_GetBooleanv(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLboolean *) = func; \
   SET_by_offset(disp, _gloffset_GetBooleanv, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_GetClipPlane)(GLenum, GLdouble *);
#define CALL_GetClipPlane(disp, parameters) (* GET_GetClipPlane(disp)) parameters
#define GET_GetClipPlane(disp) ((_glptr_GetClipPlane)(GET_by_offset((disp), _gloffset_GetClipPlane)))
#define SET_GetClipPlane(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLdouble *) = func; \
   SET_by_offset(disp, _gloffset_GetClipPlane, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_GetDoublev)(GLenum, GLdouble *);
#define CALL_GetDoublev(disp, parameters) (* GET_GetDoublev(disp)) parameters
#define GET_GetDoublev(disp) ((_glptr_GetDoublev)(GET_by_offset((disp), _gloffset_GetDoublev)))
#define SET_GetDoublev(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLdouble *) = func; \
   SET_by_offset(disp, _gloffset_GetDoublev, fn); \
} while (0)

typedef GLenum (GLAPIENTRYP _glptr_GetError)(void);
#define CALL_GetError(disp, parameters) (* GET_GetError(disp)) parameters
#define GET_GetError(disp) ((_glptr_GetError)(GET_by_offset((disp), _gloffset_GetError)))
#define SET_GetError(disp, func) do { \
   GLenum (GLAPIENTRYP fn)(void) = func; \
   SET_by_offset(disp, _gloffset_GetError, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_GetFloatv)(GLenum, GLfloat *);
#define CALL_GetFloatv(disp, parameters) (* GET_GetFloatv(disp)) parameters
#define GET_GetFloatv(disp) ((_glptr_GetFloatv)(GET_by_offset((disp), _gloffset_GetFloatv)))
#define SET_GetFloatv(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLfloat *) = func; \
   SET_by_offset(disp, _gloffset_GetFloatv, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_GetIntegerv)(GLenum, GLint *);
#define CALL_GetIntegerv(disp, parameters) (* GET_GetIntegerv(disp)) parameters
#define GET_GetIntegerv(disp) ((_glptr_GetIntegerv)(GET_by_offset((disp), _gloffset_GetIntegerv)))
#define SET_GetIntegerv(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLint *) = func; \
   SET_by_offset(disp, _gloffset_GetIntegerv, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_GetLightfv)(GLenum, GLenum, GLfloat *);
#define CALL_GetLightfv(disp, parameters) (* GET_GetLightfv(disp)) parameters
#define GET_GetLightfv(disp) ((_glptr_GetLightfv)(GET_by_offset((disp), _gloffset_GetLightfv)))
#define SET_GetLightfv(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLenum, GLfloat *) = func; \
   SET_by_offset(disp, _gloffset_GetLightfv, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_GetLightiv)(GLenum, GLenum, GLint *);
#define CALL_GetLightiv(disp, parameters) (* GET_GetLightiv(disp)) parameters
#define GET_GetLightiv(disp) ((_glptr_GetLightiv)(GET_by_offset((disp), _gloffset_GetLightiv)))
#define SET_GetLightiv(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLenum, GLint *) = func; \
   SET_by_offset(disp, _gloffset_GetLightiv, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_GetMapdv)(GLenum, GLenum, GLdouble *);
#define CALL_GetMapdv(disp, parameters) (* GET_GetMapdv(disp)) parameters
#define GET_GetMapdv(disp) ((_glptr_GetMapdv)(GET_by_offset((disp), _gloffset_GetMapdv)))
#define SET_GetMapdv(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLenum, GLdouble *) = func; \
   SET_by_offset(disp, _gloffset_GetMapdv, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_GetMapfv)(GLenum, GLenum, GLfloat *);
#define CALL_GetMapfv(disp, parameters) (* GET_GetMapfv(disp)) parameters
#define GET_GetMapfv(disp) ((_glptr_GetMapfv)(GET_by_offset((disp), _gloffset_GetMapfv)))
#define SET_GetMapfv(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLenum, GLfloat *) = func; \
   SET_by_offset(disp, _gloffset_GetMapfv, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_GetMapiv)(GLenum, GLenum, GLint *);
#define CALL_GetMapiv(disp, parameters) (* GET_GetMapiv(disp)) parameters
#define GET_GetMapiv(disp) ((_glptr_GetMapiv)(GET_by_offset((disp), _gloffset_GetMapiv)))
#define SET_GetMapiv(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLenum, GLint *) = func; \
   SET_by_offset(disp, _gloffset_GetMapiv, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_GetMaterialfv)(GLenum, GLenum, GLfloat *);
#define CALL_GetMaterialfv(disp, parameters) (* GET_GetMaterialfv(disp)) parameters
#define GET_GetMaterialfv(disp) ((_glptr_GetMaterialfv)(GET_by_offset((disp), _gloffset_GetMaterialfv)))
#define SET_GetMaterialfv(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLenum, GLfloat *) = func; \
   SET_by_offset(disp, _gloffset_GetMaterialfv, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_GetMaterialiv)(GLenum, GLenum, GLint *);
#define CALL_GetMaterialiv(disp, parameters) (* GET_GetMaterialiv(disp)) parameters
#define GET_GetMaterialiv(disp) ((_glptr_GetMaterialiv)(GET_by_offset((disp), _gloffset_GetMaterialiv)))
#define SET_GetMaterialiv(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLenum, GLint *) = func; \
   SET_by_offset(disp, _gloffset_GetMaterialiv, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_GetPixelMapfv)(GLenum, GLfloat *);
#define CALL_GetPixelMapfv(disp, parameters) (* GET_GetPixelMapfv(disp)) parameters
#define GET_GetPixelMapfv(disp) ((_glptr_GetPixelMapfv)(GET_by_offset((disp), _gloffset_GetPixelMapfv)))
#define SET_GetPixelMapfv(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLfloat *) = func; \
   SET_by_offset(disp, _gloffset_GetPixelMapfv, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_GetPixelMapuiv)(GLenum, GLuint *);
#define CALL_GetPixelMapuiv(disp, parameters) (* GET_GetPixelMapuiv(disp)) parameters
#define GET_GetPixelMapuiv(disp) ((_glptr_GetPixelMapuiv)(GET_by_offset((disp), _gloffset_GetPixelMapuiv)))
#define SET_GetPixelMapuiv(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLuint *) = func; \
   SET_by_offset(disp, _gloffset_GetPixelMapuiv, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_GetPixelMapusv)(GLenum, GLushort *);
#define CALL_GetPixelMapusv(disp, parameters) (* GET_GetPixelMapusv(disp)) parameters
#define GET_GetPixelMapusv(disp) ((_glptr_GetPixelMapusv)(GET_by_offset((disp), _gloffset_GetPixelMapusv)))
#define SET_GetPixelMapusv(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLushort *) = func; \
   SET_by_offset(disp, _gloffset_GetPixelMapusv, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_GetPolygonStipple)(GLubyte *);
#define CALL_GetPolygonStipple(disp, parameters) (* GET_GetPolygonStipple(disp)) parameters
#define GET_GetPolygonStipple(disp) ((_glptr_GetPolygonStipple)(GET_by_offset((disp), _gloffset_GetPolygonStipple)))
#define SET_GetPolygonStipple(disp, func) do { \
   void (GLAPIENTRYP fn)(GLubyte *) = func; \
   SET_by_offset(disp, _gloffset_GetPolygonStipple, fn); \
} while (0)

typedef const GLubyte * (GLAPIENTRYP _glptr_GetString)(GLenum);
#define CALL_GetString(disp, parameters) (* GET_GetString(disp)) parameters
#define GET_GetString(disp) ((_glptr_GetString)(GET_by_offset((disp), _gloffset_GetString)))
#define SET_GetString(disp, func) do { \
   const GLubyte * (GLAPIENTRYP fn)(GLenum) = func; \
   SET_by_offset(disp, _gloffset_GetString, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_GetTexEnvfv)(GLenum, GLenum, GLfloat *);
#define CALL_GetTexEnvfv(disp, parameters) (* GET_GetTexEnvfv(disp)) parameters
#define GET_GetTexEnvfv(disp) ((_glptr_GetTexEnvfv)(GET_by_offset((disp), _gloffset_GetTexEnvfv)))
#define SET_GetTexEnvfv(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLenum, GLfloat *) = func; \
   SET_by_offset(disp, _gloffset_GetTexEnvfv, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_GetTexEnviv)(GLenum, GLenum, GLint *);
#define CALL_GetTexEnviv(disp, parameters) (* GET_GetTexEnviv(disp)) parameters
#define GET_GetTexEnviv(disp) ((_glptr_GetTexEnviv)(GET_by_offset((disp), _gloffset_GetTexEnviv)))
#define SET_GetTexEnviv(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLenum, GLint *) = func; \
   SET_by_offset(disp, _gloffset_GetTexEnviv, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_GetTexGendv)(GLenum, GLenum, GLdouble *);
#define CALL_GetTexGendv(disp, parameters) (* GET_GetTexGendv(disp)) parameters
#define GET_GetTexGendv(disp) ((_glptr_GetTexGendv)(GET_by_offset((disp), _gloffset_GetTexGendv)))
#define SET_GetTexGendv(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLenum, GLdouble *) = func; \
   SET_by_offset(disp, _gloffset_GetTexGendv, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_GetTexGenfv)(GLenum, GLenum, GLfloat *);
#define CALL_GetTexGenfv(disp, parameters) (* GET_GetTexGenfv(disp)) parameters
#define GET_GetTexGenfv(disp) ((_glptr_GetTexGenfv)(GET_by_offset((disp), _gloffset_GetTexGenfv)))
#define SET_GetTexGenfv(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLenum, GLfloat *) = func; \
   SET_by_offset(disp, _gloffset_GetTexGenfv, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_GetTexGeniv)(GLenum, GLenum, GLint *);
#define CALL_GetTexGeniv(disp, parameters) (* GET_GetTexGeniv(disp)) parameters
#define GET_GetTexGeniv(disp) ((_glptr_GetTexGeniv)(GET_by_offset((disp), _gloffset_GetTexGeniv)))
#define SET_GetTexGeniv(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLenum, GLint *) = func; \
   SET_by_offset(disp, _gloffset_GetTexGeniv, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_GetTexImage)(GLenum, GLint, GLenum, GLenum, GLvoid *);
#define CALL_GetTexImage(disp, parameters) (* GET_GetTexImage(disp)) parameters
#define GET_GetTexImage(disp) ((_glptr_GetTexImage)(GET_by_offset((disp), _gloffset_GetTexImage)))
#define SET_GetTexImage(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLint, GLenum, GLenum, GLvoid *) = func; \
   SET_by_offset(disp, _gloffset_GetTexImage, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_GetTexParameterfv)(GLenum, GLenum, GLfloat *);
#define CALL_GetTexParameterfv(disp, parameters) (* GET_GetTexParameterfv(disp)) parameters
#define GET_GetTexParameterfv(disp) ((_glptr_GetTexParameterfv)(GET_by_offset((disp), _gloffset_GetTexParameterfv)))
#define SET_GetTexParameterfv(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLenum, GLfloat *) = func; \
   SET_by_offset(disp, _gloffset_GetTexParameterfv, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_GetTexParameteriv)(GLenum, GLenum, GLint *);
#define CALL_GetTexParameteriv(disp, parameters) (* GET_GetTexParameteriv(disp)) parameters
#define GET_GetTexParameteriv(disp) ((_glptr_GetTexParameteriv)(GET_by_offset((disp), _gloffset_GetTexParameteriv)))
#define SET_GetTexParameteriv(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLenum, GLint *) = func; \
   SET_by_offset(disp, _gloffset_GetTexParameteriv, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_GetTexLevelParameterfv)(GLenum, GLint, GLenum, GLfloat *);
#define CALL_GetTexLevelParameterfv(disp, parameters) (* GET_GetTexLevelParameterfv(disp)) parameters
#define GET_GetTexLevelParameterfv(disp) ((_glptr_GetTexLevelParameterfv)(GET_by_offset((disp), _gloffset_GetTexLevelParameterfv)))
#define SET_GetTexLevelParameterfv(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLint, GLenum, GLfloat *) = func; \
   SET_by_offset(disp, _gloffset_GetTexLevelParameterfv, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_GetTexLevelParameteriv)(GLenum, GLint, GLenum, GLint *);
#define CALL_GetTexLevelParameteriv(disp, parameters) (* GET_GetTexLevelParameteriv(disp)) parameters
#define GET_GetTexLevelParameteriv(disp) ((_glptr_GetTexLevelParameteriv)(GET_by_offset((disp), _gloffset_GetTexLevelParameteriv)))
#define SET_GetTexLevelParameteriv(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLint, GLenum, GLint *) = func; \
   SET_by_offset(disp, _gloffset_GetTexLevelParameteriv, fn); \
} while (0)

typedef GLboolean (GLAPIENTRYP _glptr_IsEnabled)(GLenum);
#define CALL_IsEnabled(disp, parameters) (* GET_IsEnabled(disp)) parameters
#define GET_IsEnabled(disp) ((_glptr_IsEnabled)(GET_by_offset((disp), _gloffset_IsEnabled)))
#define SET_IsEnabled(disp, func) do { \
   GLboolean (GLAPIENTRYP fn)(GLenum) = func; \
   SET_by_offset(disp, _gloffset_IsEnabled, fn); \
} while (0)

typedef GLboolean (GLAPIENTRYP _glptr_IsList)(GLuint);
#define CALL_IsList(disp, parameters) (* GET_IsList(disp)) parameters
#define GET_IsList(disp) ((_glptr_IsList)(GET_by_offset((disp), _gloffset_IsList)))
#define SET_IsList(disp, func) do { \
   GLboolean (GLAPIENTRYP fn)(GLuint) = func; \
   SET_by_offset(disp, _gloffset_IsList, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_DepthRange)(GLclampd, GLclampd);
#define CALL_DepthRange(disp, parameters) (* GET_DepthRange(disp)) parameters
#define GET_DepthRange(disp) ((_glptr_DepthRange)(GET_by_offset((disp), _gloffset_DepthRange)))
#define SET_DepthRange(disp, func) do { \
   void (GLAPIENTRYP fn)(GLclampd, GLclampd) = func; \
   SET_by_offset(disp, _gloffset_DepthRange, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_Frustum)(GLdouble, GLdouble, GLdouble, GLdouble, GLdouble, GLdouble);
#define CALL_Frustum(disp, parameters) (* GET_Frustum(disp)) parameters
#define GET_Frustum(disp) ((_glptr_Frustum)(GET_by_offset((disp), _gloffset_Frustum)))
#define SET_Frustum(disp, func) do { \
   void (GLAPIENTRYP fn)(GLdouble, GLdouble, GLdouble, GLdouble, GLdouble, GLdouble) = func; \
   SET_by_offset(disp, _gloffset_Frustum, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_LoadIdentity)(void);
#define CALL_LoadIdentity(disp, parameters) (* GET_LoadIdentity(disp)) parameters
#define GET_LoadIdentity(disp) ((_glptr_LoadIdentity)(GET_by_offset((disp), _gloffset_LoadIdentity)))
#define SET_LoadIdentity(disp, func) do { \
   void (GLAPIENTRYP fn)(void) = func; \
   SET_by_offset(disp, _gloffset_LoadIdentity, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_LoadMatrixf)(const GLfloat *);
#define CALL_LoadMatrixf(disp, parameters) (* GET_LoadMatrixf(disp)) parameters
#define GET_LoadMatrixf(disp) ((_glptr_LoadMatrixf)(GET_by_offset((disp), _gloffset_LoadMatrixf)))
#define SET_LoadMatrixf(disp, func) do { \
   void (GLAPIENTRYP fn)(const GLfloat *) = func; \
   SET_by_offset(disp, _gloffset_LoadMatrixf, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_LoadMatrixd)(const GLdouble *);
#define CALL_LoadMatrixd(disp, parameters) (* GET_LoadMatrixd(disp)) parameters
#define GET_LoadMatrixd(disp) ((_glptr_LoadMatrixd)(GET_by_offset((disp), _gloffset_LoadMatrixd)))
#define SET_LoadMatrixd(disp, func) do { \
   void (GLAPIENTRYP fn)(const GLdouble *) = func; \
   SET_by_offset(disp, _gloffset_LoadMatrixd, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_MatrixMode)(GLenum);
#define CALL_MatrixMode(disp, parameters) (* GET_MatrixMode(disp)) parameters
#define GET_MatrixMode(disp) ((_glptr_MatrixMode)(GET_by_offset((disp), _gloffset_MatrixMode)))
#define SET_MatrixMode(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum) = func; \
   SET_by_offset(disp, _gloffset_MatrixMode, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_MultMatrixf)(const GLfloat *);
#define CALL_MultMatrixf(disp, parameters) (* GET_MultMatrixf(disp)) parameters
#define GET_MultMatrixf(disp) ((_glptr_MultMatrixf)(GET_by_offset((disp), _gloffset_MultMatrixf)))
#define SET_MultMatrixf(disp, func) do { \
   void (GLAPIENTRYP fn)(const GLfloat *) = func; \
   SET_by_offset(disp, _gloffset_MultMatrixf, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_MultMatrixd)(const GLdouble *);
#define CALL_MultMatrixd(disp, parameters) (* GET_MultMatrixd(disp)) parameters
#define GET_MultMatrixd(disp) ((_glptr_MultMatrixd)(GET_by_offset((disp), _gloffset_MultMatrixd)))
#define SET_MultMatrixd(disp, func) do { \
   void (GLAPIENTRYP fn)(const GLdouble *) = func; \
   SET_by_offset(disp, _gloffset_MultMatrixd, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_Ortho)(GLdouble, GLdouble, GLdouble, GLdouble, GLdouble, GLdouble);
#define CALL_Ortho(disp, parameters) (* GET_Ortho(disp)) parameters
#define GET_Ortho(disp) ((_glptr_Ortho)(GET_by_offset((disp), _gloffset_Ortho)))
#define SET_Ortho(disp, func) do { \
   void (GLAPIENTRYP fn)(GLdouble, GLdouble, GLdouble, GLdouble, GLdouble, GLdouble) = func; \
   SET_by_offset(disp, _gloffset_Ortho, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_PopMatrix)(void);
#define CALL_PopMatrix(disp, parameters) (* GET_PopMatrix(disp)) parameters
#define GET_PopMatrix(disp) ((_glptr_PopMatrix)(GET_by_offset((disp), _gloffset_PopMatrix)))
#define SET_PopMatrix(disp, func) do { \
   void (GLAPIENTRYP fn)(void) = func; \
   SET_by_offset(disp, _gloffset_PopMatrix, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_PushMatrix)(void);
#define CALL_PushMatrix(disp, parameters) (* GET_PushMatrix(disp)) parameters
#define GET_PushMatrix(disp) ((_glptr_PushMatrix)(GET_by_offset((disp), _gloffset_PushMatrix)))
#define SET_PushMatrix(disp, func) do { \
   void (GLAPIENTRYP fn)(void) = func; \
   SET_by_offset(disp, _gloffset_PushMatrix, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_Rotated)(GLdouble, GLdouble, GLdouble, GLdouble);
#define CALL_Rotated(disp, parameters) (* GET_Rotated(disp)) parameters
#define GET_Rotated(disp) ((_glptr_Rotated)(GET_by_offset((disp), _gloffset_Rotated)))
#define SET_Rotated(disp, func) do { \
   void (GLAPIENTRYP fn)(GLdouble, GLdouble, GLdouble, GLdouble) = func; \
   SET_by_offset(disp, _gloffset_Rotated, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_Rotatef)(GLfloat, GLfloat, GLfloat, GLfloat);
#define CALL_Rotatef(disp, parameters) (* GET_Rotatef(disp)) parameters
#define GET_Rotatef(disp) ((_glptr_Rotatef)(GET_by_offset((disp), _gloffset_Rotatef)))
#define SET_Rotatef(disp, func) do { \
   void (GLAPIENTRYP fn)(GLfloat, GLfloat, GLfloat, GLfloat) = func; \
   SET_by_offset(disp, _gloffset_Rotatef, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_Scaled)(GLdouble, GLdouble, GLdouble);
#define CALL_Scaled(disp, parameters) (* GET_Scaled(disp)) parameters
#define GET_Scaled(disp) ((_glptr_Scaled)(GET_by_offset((disp), _gloffset_Scaled)))
#define SET_Scaled(disp, func) do { \
   void (GLAPIENTRYP fn)(GLdouble, GLdouble, GLdouble) = func; \
   SET_by_offset(disp, _gloffset_Scaled, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_Scalef)(GLfloat, GLfloat, GLfloat);
#define CALL_Scalef(disp, parameters) (* GET_Scalef(disp)) parameters
#define GET_Scalef(disp) ((_glptr_Scalef)(GET_by_offset((disp), _gloffset_Scalef)))
#define SET_Scalef(disp, func) do { \
   void (GLAPIENTRYP fn)(GLfloat, GLfloat, GLfloat) = func; \
   SET_by_offset(disp, _gloffset_Scalef, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_Translated)(GLdouble, GLdouble, GLdouble);
#define CALL_Translated(disp, parameters) (* GET_Translated(disp)) parameters
#define GET_Translated(disp) ((_glptr_Translated)(GET_by_offset((disp), _gloffset_Translated)))
#define SET_Translated(disp, func) do { \
   void (GLAPIENTRYP fn)(GLdouble, GLdouble, GLdouble) = func; \
   SET_by_offset(disp, _gloffset_Translated, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_Translatef)(GLfloat, GLfloat, GLfloat);
#define CALL_Translatef(disp, parameters) (* GET_Translatef(disp)) parameters
#define GET_Translatef(disp) ((_glptr_Translatef)(GET_by_offset((disp), _gloffset_Translatef)))
#define SET_Translatef(disp, func) do { \
   void (GLAPIENTRYP fn)(GLfloat, GLfloat, GLfloat) = func; \
   SET_by_offset(disp, _gloffset_Translatef, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_Viewport)(GLint, GLint, GLsizei, GLsizei);
#define CALL_Viewport(disp, parameters) (* GET_Viewport(disp)) parameters
#define GET_Viewport(disp) ((_glptr_Viewport)(GET_by_offset((disp), _gloffset_Viewport)))
#define SET_Viewport(disp, func) do { \
   void (GLAPIENTRYP fn)(GLint, GLint, GLsizei, GLsizei) = func; \
   SET_by_offset(disp, _gloffset_Viewport, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_ArrayElement)(GLint);
#define CALL_ArrayElement(disp, parameters) (* GET_ArrayElement(disp)) parameters
#define GET_ArrayElement(disp) ((_glptr_ArrayElement)(GET_by_offset((disp), _gloffset_ArrayElement)))
#define SET_ArrayElement(disp, func) do { \
   void (GLAPIENTRYP fn)(GLint) = func; \
   SET_by_offset(disp, _gloffset_ArrayElement, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_BindTexture)(GLenum, GLuint);
#define CALL_BindTexture(disp, parameters) (* GET_BindTexture(disp)) parameters
#define GET_BindTexture(disp) ((_glptr_BindTexture)(GET_by_offset((disp), _gloffset_BindTexture)))
#define SET_BindTexture(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLuint) = func; \
   SET_by_offset(disp, _gloffset_BindTexture, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_ColorPointer)(GLint, GLenum, GLsizei, const GLvoid *);
#define CALL_ColorPointer(disp, parameters) (* GET_ColorPointer(disp)) parameters
#define GET_ColorPointer(disp) ((_glptr_ColorPointer)(GET_by_offset((disp), _gloffset_ColorPointer)))
#define SET_ColorPointer(disp, func) do { \
   void (GLAPIENTRYP fn)(GLint, GLenum, GLsizei, const GLvoid *) = func; \
   SET_by_offset(disp, _gloffset_ColorPointer, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_DisableClientState)(GLenum);
#define CALL_DisableClientState(disp, parameters) (* GET_DisableClientState(disp)) parameters
#define GET_DisableClientState(disp) ((_glptr_DisableClientState)(GET_by_offset((disp), _gloffset_DisableClientState)))
#define SET_DisableClientState(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum) = func; \
   SET_by_offset(disp, _gloffset_DisableClientState, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_DrawArrays)(GLenum, GLint, GLsizei);
#define CALL_DrawArrays(disp, parameters) (* GET_DrawArrays(disp)) parameters
#define GET_DrawArrays(disp) ((_glptr_DrawArrays)(GET_by_offset((disp), _gloffset_DrawArrays)))
#define SET_DrawArrays(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLint, GLsizei) = func; \
   SET_by_offset(disp, _gloffset_DrawArrays, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_DrawElements)(GLenum, GLsizei, GLenum, const GLvoid *);
#define CALL_DrawElements(disp, parameters) (* GET_DrawElements(disp)) parameters
#define GET_DrawElements(disp) ((_glptr_DrawElements)(GET_by_offset((disp), _gloffset_DrawElements)))
#define SET_DrawElements(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLsizei, GLenum, const GLvoid *) = func; \
   SET_by_offset(disp, _gloffset_DrawElements, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_EdgeFlagPointer)(GLsizei, const GLvoid *);
#define CALL_EdgeFlagPointer(disp, parameters) (* GET_EdgeFlagPointer(disp)) parameters
#define GET_EdgeFlagPointer(disp) ((_glptr_EdgeFlagPointer)(GET_by_offset((disp), _gloffset_EdgeFlagPointer)))
#define SET_EdgeFlagPointer(disp, func) do { \
   void (GLAPIENTRYP fn)(GLsizei, const GLvoid *) = func; \
   SET_by_offset(disp, _gloffset_EdgeFlagPointer, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_EnableClientState)(GLenum);
#define CALL_EnableClientState(disp, parameters) (* GET_EnableClientState(disp)) parameters
#define GET_EnableClientState(disp) ((_glptr_EnableClientState)(GET_by_offset((disp), _gloffset_EnableClientState)))
#define SET_EnableClientState(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum) = func; \
   SET_by_offset(disp, _gloffset_EnableClientState, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_IndexPointer)(GLenum, GLsizei, const GLvoid *);
#define CALL_IndexPointer(disp, parameters) (* GET_IndexPointer(disp)) parameters
#define GET_IndexPointer(disp) ((_glptr_IndexPointer)(GET_by_offset((disp), _gloffset_IndexPointer)))
#define SET_IndexPointer(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLsizei, const GLvoid *) = func; \
   SET_by_offset(disp, _gloffset_IndexPointer, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_Indexub)(GLubyte);
#define CALL_Indexub(disp, parameters) (* GET_Indexub(disp)) parameters
#define GET_Indexub(disp) ((_glptr_Indexub)(GET_by_offset((disp), _gloffset_Indexub)))
#define SET_Indexub(disp, func) do { \
   void (GLAPIENTRYP fn)(GLubyte) = func; \
   SET_by_offset(disp, _gloffset_Indexub, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_Indexubv)(const GLubyte *);
#define CALL_Indexubv(disp, parameters) (* GET_Indexubv(disp)) parameters
#define GET_Indexubv(disp) ((_glptr_Indexubv)(GET_by_offset((disp), _gloffset_Indexubv)))
#define SET_Indexubv(disp, func) do { \
   void (GLAPIENTRYP fn)(const GLubyte *) = func; \
   SET_by_offset(disp, _gloffset_Indexubv, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_InterleavedArrays)(GLenum, GLsizei, const GLvoid *);
#define CALL_InterleavedArrays(disp, parameters) (* GET_InterleavedArrays(disp)) parameters
#define GET_InterleavedArrays(disp) ((_glptr_InterleavedArrays)(GET_by_offset((disp), _gloffset_InterleavedArrays)))
#define SET_InterleavedArrays(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLsizei, const GLvoid *) = func; \
   SET_by_offset(disp, _gloffset_InterleavedArrays, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_NormalPointer)(GLenum, GLsizei, const GLvoid *);
#define CALL_NormalPointer(disp, parameters) (* GET_NormalPointer(disp)) parameters
#define GET_NormalPointer(disp) ((_glptr_NormalPointer)(GET_by_offset((disp), _gloffset_NormalPointer)))
#define SET_NormalPointer(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLsizei, const GLvoid *) = func; \
   SET_by_offset(disp, _gloffset_NormalPointer, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_PolygonOffset)(GLfloat, GLfloat);
#define CALL_PolygonOffset(disp, parameters) (* GET_PolygonOffset(disp)) parameters
#define GET_PolygonOffset(disp) ((_glptr_PolygonOffset)(GET_by_offset((disp), _gloffset_PolygonOffset)))
#define SET_PolygonOffset(disp, func) do { \
   void (GLAPIENTRYP fn)(GLfloat, GLfloat) = func; \
   SET_by_offset(disp, _gloffset_PolygonOffset, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_TexCoordPointer)(GLint, GLenum, GLsizei, const GLvoid *);
#define CALL_TexCoordPointer(disp, parameters) (* GET_TexCoordPointer(disp)) parameters
#define GET_TexCoordPointer(disp) ((_glptr_TexCoordPointer)(GET_by_offset((disp), _gloffset_TexCoordPointer)))
#define SET_TexCoordPointer(disp, func) do { \
   void (GLAPIENTRYP fn)(GLint, GLenum, GLsizei, const GLvoid *) = func; \
   SET_by_offset(disp, _gloffset_TexCoordPointer, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_VertexPointer)(GLint, GLenum, GLsizei, const GLvoid *);
#define CALL_VertexPointer(disp, parameters) (* GET_VertexPointer(disp)) parameters
#define GET_VertexPointer(disp) ((_glptr_VertexPointer)(GET_by_offset((disp), _gloffset_VertexPointer)))
#define SET_VertexPointer(disp, func) do { \
   void (GLAPIENTRYP fn)(GLint, GLenum, GLsizei, const GLvoid *) = func; \
   SET_by_offset(disp, _gloffset_VertexPointer, fn); \
} while (0)

typedef GLboolean (GLAPIENTRYP _glptr_AreTexturesResident)(GLsizei, const GLuint *, GLboolean *);
#define CALL_AreTexturesResident(disp, parameters) (* GET_AreTexturesResident(disp)) parameters
#define GET_AreTexturesResident(disp) ((_glptr_AreTexturesResident)(GET_by_offset((disp), _gloffset_AreTexturesResident)))
#define SET_AreTexturesResident(disp, func) do { \
   GLboolean (GLAPIENTRYP fn)(GLsizei, const GLuint *, GLboolean *) = func; \
   SET_by_offset(disp, _gloffset_AreTexturesResident, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_CopyTexImage1D)(GLenum, GLint, GLenum, GLint, GLint, GLsizei, GLint);
#define CALL_CopyTexImage1D(disp, parameters) (* GET_CopyTexImage1D(disp)) parameters
#define GET_CopyTexImage1D(disp) ((_glptr_CopyTexImage1D)(GET_by_offset((disp), _gloffset_CopyTexImage1D)))
#define SET_CopyTexImage1D(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLint, GLenum, GLint, GLint, GLsizei, GLint) = func; \
   SET_by_offset(disp, _gloffset_CopyTexImage1D, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_CopyTexImage2D)(GLenum, GLint, GLenum, GLint, GLint, GLsizei, GLsizei, GLint);
#define CALL_CopyTexImage2D(disp, parameters) (* GET_CopyTexImage2D(disp)) parameters
#define GET_CopyTexImage2D(disp) ((_glptr_CopyTexImage2D)(GET_by_offset((disp), _gloffset_CopyTexImage2D)))
#define SET_CopyTexImage2D(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLint, GLenum, GLint, GLint, GLsizei, GLsizei, GLint) = func; \
   SET_by_offset(disp, _gloffset_CopyTexImage2D, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_CopyTexSubImage1D)(GLenum, GLint, GLint, GLint, GLint, GLsizei);
#define CALL_CopyTexSubImage1D(disp, parameters) (* GET_CopyTexSubImage1D(disp)) parameters
#define GET_CopyTexSubImage1D(disp) ((_glptr_CopyTexSubImage1D)(GET_by_offset((disp), _gloffset_CopyTexSubImage1D)))
#define SET_CopyTexSubImage1D(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLint, GLint, GLint, GLint, GLsizei) = func; \
   SET_by_offset(disp, _gloffset_CopyTexSubImage1D, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_CopyTexSubImage2D)(GLenum, GLint, GLint, GLint, GLint, GLint, GLsizei, GLsizei);
#define CALL_CopyTexSubImage2D(disp, parameters) (* GET_CopyTexSubImage2D(disp)) parameters
#define GET_CopyTexSubImage2D(disp) ((_glptr_CopyTexSubImage2D)(GET_by_offset((disp), _gloffset_CopyTexSubImage2D)))
#define SET_CopyTexSubImage2D(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLint, GLint, GLint, GLint, GLint, GLsizei, GLsizei) = func; \
   SET_by_offset(disp, _gloffset_CopyTexSubImage2D, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_DeleteTextures)(GLsizei, const GLuint *);
#define CALL_DeleteTextures(disp, parameters) (* GET_DeleteTextures(disp)) parameters
#define GET_DeleteTextures(disp) ((_glptr_DeleteTextures)(GET_by_offset((disp), _gloffset_DeleteTextures)))
#define SET_DeleteTextures(disp, func) do { \
   void (GLAPIENTRYP fn)(GLsizei, const GLuint *) = func; \
   SET_by_offset(disp, _gloffset_DeleteTextures, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_GenTextures)(GLsizei, GLuint *);
#define CALL_GenTextures(disp, parameters) (* GET_GenTextures(disp)) parameters
#define GET_GenTextures(disp) ((_glptr_GenTextures)(GET_by_offset((disp), _gloffset_GenTextures)))
#define SET_GenTextures(disp, func) do { \
   void (GLAPIENTRYP fn)(GLsizei, GLuint *) = func; \
   SET_by_offset(disp, _gloffset_GenTextures, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_GetPointerv)(GLenum, GLvoid **);
#define CALL_GetPointerv(disp, parameters) (* GET_GetPointerv(disp)) parameters
#define GET_GetPointerv(disp) ((_glptr_GetPointerv)(GET_by_offset((disp), _gloffset_GetPointerv)))
#define SET_GetPointerv(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLvoid **) = func; \
   SET_by_offset(disp, _gloffset_GetPointerv, fn); \
} while (0)

typedef GLboolean (GLAPIENTRYP _glptr_IsTexture)(GLuint);
#define CALL_IsTexture(disp, parameters) (* GET_IsTexture(disp)) parameters
#define GET_IsTexture(disp) ((_glptr_IsTexture)(GET_by_offset((disp), _gloffset_IsTexture)))
#define SET_IsTexture(disp, func) do { \
   GLboolean (GLAPIENTRYP fn)(GLuint) = func; \
   SET_by_offset(disp, _gloffset_IsTexture, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_PrioritizeTextures)(GLsizei, const GLuint *, const GLclampf *);
#define CALL_PrioritizeTextures(disp, parameters) (* GET_PrioritizeTextures(disp)) parameters
#define GET_PrioritizeTextures(disp) ((_glptr_PrioritizeTextures)(GET_by_offset((disp), _gloffset_PrioritizeTextures)))
#define SET_PrioritizeTextures(disp, func) do { \
   void (GLAPIENTRYP fn)(GLsizei, const GLuint *, const GLclampf *) = func; \
   SET_by_offset(disp, _gloffset_PrioritizeTextures, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_TexSubImage1D)(GLenum, GLint, GLint, GLsizei, GLenum, GLenum, const GLvoid *);
#define CALL_TexSubImage1D(disp, parameters) (* GET_TexSubImage1D(disp)) parameters
#define GET_TexSubImage1D(disp) ((_glptr_TexSubImage1D)(GET_by_offset((disp), _gloffset_TexSubImage1D)))
#define SET_TexSubImage1D(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLint, GLint, GLsizei, GLenum, GLenum, const GLvoid *) = func; \
   SET_by_offset(disp, _gloffset_TexSubImage1D, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_TexSubImage2D)(GLenum, GLint, GLint, GLint, GLsizei, GLsizei, GLenum, GLenum, const GLvoid *);
#define CALL_TexSubImage2D(disp, parameters) (* GET_TexSubImage2D(disp)) parameters
#define GET_TexSubImage2D(disp) ((_glptr_TexSubImage2D)(GET_by_offset((disp), _gloffset_TexSubImage2D)))
#define SET_TexSubImage2D(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLint, GLint, GLint, GLsizei, GLsizei, GLenum, GLenum, const GLvoid *) = func; \
   SET_by_offset(disp, _gloffset_TexSubImage2D, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_PopClientAttrib)(void);
#define CALL_PopClientAttrib(disp, parameters) (* GET_PopClientAttrib(disp)) parameters
#define GET_PopClientAttrib(disp) ((_glptr_PopClientAttrib)(GET_by_offset((disp), _gloffset_PopClientAttrib)))
#define SET_PopClientAttrib(disp, func) do { \
   void (GLAPIENTRYP fn)(void) = func; \
   SET_by_offset(disp, _gloffset_PopClientAttrib, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_PushClientAttrib)(GLbitfield);
#define CALL_PushClientAttrib(disp, parameters) (* GET_PushClientAttrib(disp)) parameters
#define GET_PushClientAttrib(disp) ((_glptr_PushClientAttrib)(GET_by_offset((disp), _gloffset_PushClientAttrib)))
#define SET_PushClientAttrib(disp, func) do { \
   void (GLAPIENTRYP fn)(GLbitfield) = func; \
   SET_by_offset(disp, _gloffset_PushClientAttrib, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_BlendColor)(GLclampf, GLclampf, GLclampf, GLclampf);
#define CALL_BlendColor(disp, parameters) (* GET_BlendColor(disp)) parameters
#define GET_BlendColor(disp) ((_glptr_BlendColor)(GET_by_offset((disp), _gloffset_BlendColor)))
#define SET_BlendColor(disp, func) do { \
   void (GLAPIENTRYP fn)(GLclampf, GLclampf, GLclampf, GLclampf) = func; \
   SET_by_offset(disp, _gloffset_BlendColor, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_BlendEquation)(GLenum);
#define CALL_BlendEquation(disp, parameters) (* GET_BlendEquation(disp)) parameters
#define GET_BlendEquation(disp) ((_glptr_BlendEquation)(GET_by_offset((disp), _gloffset_BlendEquation)))
#define SET_BlendEquation(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum) = func; \
   SET_by_offset(disp, _gloffset_BlendEquation, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_DrawRangeElements)(GLenum, GLuint, GLuint, GLsizei, GLenum, const GLvoid *);
#define CALL_DrawRangeElements(disp, parameters) (* GET_DrawRangeElements(disp)) parameters
#define GET_DrawRangeElements(disp) ((_glptr_DrawRangeElements)(GET_by_offset((disp), _gloffset_DrawRangeElements)))
#define SET_DrawRangeElements(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLuint, GLuint, GLsizei, GLenum, const GLvoid *) = func; \
   SET_by_offset(disp, _gloffset_DrawRangeElements, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_ColorTable)(GLenum, GLenum, GLsizei, GLenum, GLenum, const GLvoid *);
#define CALL_ColorTable(disp, parameters) (* GET_ColorTable(disp)) parameters
#define GET_ColorTable(disp) ((_glptr_ColorTable)(GET_by_offset((disp), _gloffset_ColorTable)))
#define SET_ColorTable(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLenum, GLsizei, GLenum, GLenum, const GLvoid *) = func; \
   SET_by_offset(disp, _gloffset_ColorTable, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_ColorTableParameterfv)(GLenum, GLenum, const GLfloat *);
#define CALL_ColorTableParameterfv(disp, parameters) (* GET_ColorTableParameterfv(disp)) parameters
#define GET_ColorTableParameterfv(disp) ((_glptr_ColorTableParameterfv)(GET_by_offset((disp), _gloffset_ColorTableParameterfv)))
#define SET_ColorTableParameterfv(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLenum, const GLfloat *) = func; \
   SET_by_offset(disp, _gloffset_ColorTableParameterfv, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_ColorTableParameteriv)(GLenum, GLenum, const GLint *);
#define CALL_ColorTableParameteriv(disp, parameters) (* GET_ColorTableParameteriv(disp)) parameters
#define GET_ColorTableParameteriv(disp) ((_glptr_ColorTableParameteriv)(GET_by_offset((disp), _gloffset_ColorTableParameteriv)))
#define SET_ColorTableParameteriv(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLenum, const GLint *) = func; \
   SET_by_offset(disp, _gloffset_ColorTableParameteriv, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_CopyColorTable)(GLenum, GLenum, GLint, GLint, GLsizei);
#define CALL_CopyColorTable(disp, parameters) (* GET_CopyColorTable(disp)) parameters
#define GET_CopyColorTable(disp) ((_glptr_CopyColorTable)(GET_by_offset((disp), _gloffset_CopyColorTable)))
#define SET_CopyColorTable(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLenum, GLint, GLint, GLsizei) = func; \
   SET_by_offset(disp, _gloffset_CopyColorTable, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_GetColorTable)(GLenum, GLenum, GLenum, GLvoid *);
#define CALL_GetColorTable(disp, parameters) (* GET_GetColorTable(disp)) parameters
#define GET_GetColorTable(disp) ((_glptr_GetColorTable)(GET_by_offset((disp), _gloffset_GetColorTable)))
#define SET_GetColorTable(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLenum, GLenum, GLvoid *) = func; \
   SET_by_offset(disp, _gloffset_GetColorTable, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_GetColorTableParameterfv)(GLenum, GLenum, GLfloat *);
#define CALL_GetColorTableParameterfv(disp, parameters) (* GET_GetColorTableParameterfv(disp)) parameters
#define GET_GetColorTableParameterfv(disp) ((_glptr_GetColorTableParameterfv)(GET_by_offset((disp), _gloffset_GetColorTableParameterfv)))
#define SET_GetColorTableParameterfv(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLenum, GLfloat *) = func; \
   SET_by_offset(disp, _gloffset_GetColorTableParameterfv, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_GetColorTableParameteriv)(GLenum, GLenum, GLint *);
#define CALL_GetColorTableParameteriv(disp, parameters) (* GET_GetColorTableParameteriv(disp)) parameters
#define GET_GetColorTableParameteriv(disp) ((_glptr_GetColorTableParameteriv)(GET_by_offset((disp), _gloffset_GetColorTableParameteriv)))
#define SET_GetColorTableParameteriv(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLenum, GLint *) = func; \
   SET_by_offset(disp, _gloffset_GetColorTableParameteriv, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_ColorSubTable)(GLenum, GLsizei, GLsizei, GLenum, GLenum, const GLvoid *);
#define CALL_ColorSubTable(disp, parameters) (* GET_ColorSubTable(disp)) parameters
#define GET_ColorSubTable(disp) ((_glptr_ColorSubTable)(GET_by_offset((disp), _gloffset_ColorSubTable)))
#define SET_ColorSubTable(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLsizei, GLsizei, GLenum, GLenum, const GLvoid *) = func; \
   SET_by_offset(disp, _gloffset_ColorSubTable, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_CopyColorSubTable)(GLenum, GLsizei, GLint, GLint, GLsizei);
#define CALL_CopyColorSubTable(disp, parameters) (* GET_CopyColorSubTable(disp)) parameters
#define GET_CopyColorSubTable(disp) ((_glptr_CopyColorSubTable)(GET_by_offset((disp), _gloffset_CopyColorSubTable)))
#define SET_CopyColorSubTable(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLsizei, GLint, GLint, GLsizei) = func; \
   SET_by_offset(disp, _gloffset_CopyColorSubTable, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_ConvolutionFilter1D)(GLenum, GLenum, GLsizei, GLenum, GLenum, const GLvoid *);
#define CALL_ConvolutionFilter1D(disp, parameters) (* GET_ConvolutionFilter1D(disp)) parameters
#define GET_ConvolutionFilter1D(disp) ((_glptr_ConvolutionFilter1D)(GET_by_offset((disp), _gloffset_ConvolutionFilter1D)))
#define SET_ConvolutionFilter1D(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLenum, GLsizei, GLenum, GLenum, const GLvoid *) = func; \
   SET_by_offset(disp, _gloffset_ConvolutionFilter1D, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_ConvolutionFilter2D)(GLenum, GLenum, GLsizei, GLsizei, GLenum, GLenum, const GLvoid *);
#define CALL_ConvolutionFilter2D(disp, parameters) (* GET_ConvolutionFilter2D(disp)) parameters
#define GET_ConvolutionFilter2D(disp) ((_glptr_ConvolutionFilter2D)(GET_by_offset((disp), _gloffset_ConvolutionFilter2D)))
#define SET_ConvolutionFilter2D(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLenum, GLsizei, GLsizei, GLenum, GLenum, const GLvoid *) = func; \
   SET_by_offset(disp, _gloffset_ConvolutionFilter2D, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_ConvolutionParameterf)(GLenum, GLenum, GLfloat);
#define CALL_ConvolutionParameterf(disp, parameters) (* GET_ConvolutionParameterf(disp)) parameters
#define GET_ConvolutionParameterf(disp) ((_glptr_ConvolutionParameterf)(GET_by_offset((disp), _gloffset_ConvolutionParameterf)))
#define SET_ConvolutionParameterf(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLenum, GLfloat) = func; \
   SET_by_offset(disp, _gloffset_ConvolutionParameterf, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_ConvolutionParameterfv)(GLenum, GLenum, const GLfloat *);
#define CALL_ConvolutionParameterfv(disp, parameters) (* GET_ConvolutionParameterfv(disp)) parameters
#define GET_ConvolutionParameterfv(disp) ((_glptr_ConvolutionParameterfv)(GET_by_offset((disp), _gloffset_ConvolutionParameterfv)))
#define SET_ConvolutionParameterfv(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLenum, const GLfloat *) = func; \
   SET_by_offset(disp, _gloffset_ConvolutionParameterfv, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_ConvolutionParameteri)(GLenum, GLenum, GLint);
#define CALL_ConvolutionParameteri(disp, parameters) (* GET_ConvolutionParameteri(disp)) parameters
#define GET_ConvolutionParameteri(disp) ((_glptr_ConvolutionParameteri)(GET_by_offset((disp), _gloffset_ConvolutionParameteri)))
#define SET_ConvolutionParameteri(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLenum, GLint) = func; \
   SET_by_offset(disp, _gloffset_ConvolutionParameteri, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_ConvolutionParameteriv)(GLenum, GLenum, const GLint *);
#define CALL_ConvolutionParameteriv(disp, parameters) (* GET_ConvolutionParameteriv(disp)) parameters
#define GET_ConvolutionParameteriv(disp) ((_glptr_ConvolutionParameteriv)(GET_by_offset((disp), _gloffset_ConvolutionParameteriv)))
#define SET_ConvolutionParameteriv(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLenum, const GLint *) = func; \
   SET_by_offset(disp, _gloffset_ConvolutionParameteriv, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_CopyConvolutionFilter1D)(GLenum, GLenum, GLint, GLint, GLsizei);
#define CALL_CopyConvolutionFilter1D(disp, parameters) (* GET_CopyConvolutionFilter1D(disp)) parameters
#define GET_CopyConvolutionFilter1D(disp) ((_glptr_CopyConvolutionFilter1D)(GET_by_offset((disp), _gloffset_CopyConvolutionFilter1D)))
#define SET_CopyConvolutionFilter1D(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLenum, GLint, GLint, GLsizei) = func; \
   SET_by_offset(disp, _gloffset_CopyConvolutionFilter1D, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_CopyConvolutionFilter2D)(GLenum, GLenum, GLint, GLint, GLsizei, GLsizei);
#define CALL_CopyConvolutionFilter2D(disp, parameters) (* GET_CopyConvolutionFilter2D(disp)) parameters
#define GET_CopyConvolutionFilter2D(disp) ((_glptr_CopyConvolutionFilter2D)(GET_by_offset((disp), _gloffset_CopyConvolutionFilter2D)))
#define SET_CopyConvolutionFilter2D(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLenum, GLint, GLint, GLsizei, GLsizei) = func; \
   SET_by_offset(disp, _gloffset_CopyConvolutionFilter2D, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_GetConvolutionFilter)(GLenum, GLenum, GLenum, GLvoid *);
#define CALL_GetConvolutionFilter(disp, parameters) (* GET_GetConvolutionFilter(disp)) parameters
#define GET_GetConvolutionFilter(disp) ((_glptr_GetConvolutionFilter)(GET_by_offset((disp), _gloffset_GetConvolutionFilter)))
#define SET_GetConvolutionFilter(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLenum, GLenum, GLvoid *) = func; \
   SET_by_offset(disp, _gloffset_GetConvolutionFilter, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_GetConvolutionParameterfv)(GLenum, GLenum, GLfloat *);
#define CALL_GetConvolutionParameterfv(disp, parameters) (* GET_GetConvolutionParameterfv(disp)) parameters
#define GET_GetConvolutionParameterfv(disp) ((_glptr_GetConvolutionParameterfv)(GET_by_offset((disp), _gloffset_GetConvolutionParameterfv)))
#define SET_GetConvolutionParameterfv(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLenum, GLfloat *) = func; \
   SET_by_offset(disp, _gloffset_GetConvolutionParameterfv, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_GetConvolutionParameteriv)(GLenum, GLenum, GLint *);
#define CALL_GetConvolutionParameteriv(disp, parameters) (* GET_GetConvolutionParameteriv(disp)) parameters
#define GET_GetConvolutionParameteriv(disp) ((_glptr_GetConvolutionParameteriv)(GET_by_offset((disp), _gloffset_GetConvolutionParameteriv)))
#define SET_GetConvolutionParameteriv(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLenum, GLint *) = func; \
   SET_by_offset(disp, _gloffset_GetConvolutionParameteriv, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_GetSeparableFilter)(GLenum, GLenum, GLenum, GLvoid *, GLvoid *, GLvoid *);
#define CALL_GetSeparableFilter(disp, parameters) (* GET_GetSeparableFilter(disp)) parameters
#define GET_GetSeparableFilter(disp) ((_glptr_GetSeparableFilter)(GET_by_offset((disp), _gloffset_GetSeparableFilter)))
#define SET_GetSeparableFilter(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLenum, GLenum, GLvoid *, GLvoid *, GLvoid *) = func; \
   SET_by_offset(disp, _gloffset_GetSeparableFilter, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_SeparableFilter2D)(GLenum, GLenum, GLsizei, GLsizei, GLenum, GLenum, const GLvoid *, const GLvoid *);
#define CALL_SeparableFilter2D(disp, parameters) (* GET_SeparableFilter2D(disp)) parameters
#define GET_SeparableFilter2D(disp) ((_glptr_SeparableFilter2D)(GET_by_offset((disp), _gloffset_SeparableFilter2D)))
#define SET_SeparableFilter2D(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLenum, GLsizei, GLsizei, GLenum, GLenum, const GLvoid *, const GLvoid *) = func; \
   SET_by_offset(disp, _gloffset_SeparableFilter2D, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_GetHistogram)(GLenum, GLboolean, GLenum, GLenum, GLvoid *);
#define CALL_GetHistogram(disp, parameters) (* GET_GetHistogram(disp)) parameters
#define GET_GetHistogram(disp) ((_glptr_GetHistogram)(GET_by_offset((disp), _gloffset_GetHistogram)))
#define SET_GetHistogram(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLboolean, GLenum, GLenum, GLvoid *) = func; \
   SET_by_offset(disp, _gloffset_GetHistogram, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_GetHistogramParameterfv)(GLenum, GLenum, GLfloat *);
#define CALL_GetHistogramParameterfv(disp, parameters) (* GET_GetHistogramParameterfv(disp)) parameters
#define GET_GetHistogramParameterfv(disp) ((_glptr_GetHistogramParameterfv)(GET_by_offset((disp), _gloffset_GetHistogramParameterfv)))
#define SET_GetHistogramParameterfv(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLenum, GLfloat *) = func; \
   SET_by_offset(disp, _gloffset_GetHistogramParameterfv, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_GetHistogramParameteriv)(GLenum, GLenum, GLint *);
#define CALL_GetHistogramParameteriv(disp, parameters) (* GET_GetHistogramParameteriv(disp)) parameters
#define GET_GetHistogramParameteriv(disp) ((_glptr_GetHistogramParameteriv)(GET_by_offset((disp), _gloffset_GetHistogramParameteriv)))
#define SET_GetHistogramParameteriv(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLenum, GLint *) = func; \
   SET_by_offset(disp, _gloffset_GetHistogramParameteriv, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_GetMinmax)(GLenum, GLboolean, GLenum, GLenum, GLvoid *);
#define CALL_GetMinmax(disp, parameters) (* GET_GetMinmax(disp)) parameters
#define GET_GetMinmax(disp) ((_glptr_GetMinmax)(GET_by_offset((disp), _gloffset_GetMinmax)))
#define SET_GetMinmax(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLboolean, GLenum, GLenum, GLvoid *) = func; \
   SET_by_offset(disp, _gloffset_GetMinmax, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_GetMinmaxParameterfv)(GLenum, GLenum, GLfloat *);
#define CALL_GetMinmaxParameterfv(disp, parameters) (* GET_GetMinmaxParameterfv(disp)) parameters
#define GET_GetMinmaxParameterfv(disp) ((_glptr_GetMinmaxParameterfv)(GET_by_offset((disp), _gloffset_GetMinmaxParameterfv)))
#define SET_GetMinmaxParameterfv(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLenum, GLfloat *) = func; \
   SET_by_offset(disp, _gloffset_GetMinmaxParameterfv, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_GetMinmaxParameteriv)(GLenum, GLenum, GLint *);
#define CALL_GetMinmaxParameteriv(disp, parameters) (* GET_GetMinmaxParameteriv(disp)) parameters
#define GET_GetMinmaxParameteriv(disp) ((_glptr_GetMinmaxParameteriv)(GET_by_offset((disp), _gloffset_GetMinmaxParameteriv)))
#define SET_GetMinmaxParameteriv(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLenum, GLint *) = func; \
   SET_by_offset(disp, _gloffset_GetMinmaxParameteriv, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_Histogram)(GLenum, GLsizei, GLenum, GLboolean);
#define CALL_Histogram(disp, parameters) (* GET_Histogram(disp)) parameters
#define GET_Histogram(disp) ((_glptr_Histogram)(GET_by_offset((disp), _gloffset_Histogram)))
#define SET_Histogram(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLsizei, GLenum, GLboolean) = func; \
   SET_by_offset(disp, _gloffset_Histogram, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_Minmax)(GLenum, GLenum, GLboolean);
#define CALL_Minmax(disp, parameters) (* GET_Minmax(disp)) parameters
#define GET_Minmax(disp) ((_glptr_Minmax)(GET_by_offset((disp), _gloffset_Minmax)))
#define SET_Minmax(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLenum, GLboolean) = func; \
   SET_by_offset(disp, _gloffset_Minmax, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_ResetHistogram)(GLenum);
#define CALL_ResetHistogram(disp, parameters) (* GET_ResetHistogram(disp)) parameters
#define GET_ResetHistogram(disp) ((_glptr_ResetHistogram)(GET_by_offset((disp), _gloffset_ResetHistogram)))
#define SET_ResetHistogram(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum) = func; \
   SET_by_offset(disp, _gloffset_ResetHistogram, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_ResetMinmax)(GLenum);
#define CALL_ResetMinmax(disp, parameters) (* GET_ResetMinmax(disp)) parameters
#define GET_ResetMinmax(disp) ((_glptr_ResetMinmax)(GET_by_offset((disp), _gloffset_ResetMinmax)))
#define SET_ResetMinmax(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum) = func; \
   SET_by_offset(disp, _gloffset_ResetMinmax, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_TexImage3D)(GLenum, GLint, GLint, GLsizei, GLsizei, GLsizei, GLint, GLenum, GLenum, const GLvoid *);
#define CALL_TexImage3D(disp, parameters) (* GET_TexImage3D(disp)) parameters
#define GET_TexImage3D(disp) ((_glptr_TexImage3D)(GET_by_offset((disp), _gloffset_TexImage3D)))
#define SET_TexImage3D(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLint, GLint, GLsizei, GLsizei, GLsizei, GLint, GLenum, GLenum, const GLvoid *) = func; \
   SET_by_offset(disp, _gloffset_TexImage3D, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_TexSubImage3D)(GLenum, GLint, GLint, GLint, GLint, GLsizei, GLsizei, GLsizei, GLenum, GLenum, const GLvoid *);
#define CALL_TexSubImage3D(disp, parameters) (* GET_TexSubImage3D(disp)) parameters
#define GET_TexSubImage3D(disp) ((_glptr_TexSubImage3D)(GET_by_offset((disp), _gloffset_TexSubImage3D)))
#define SET_TexSubImage3D(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLint, GLint, GLint, GLint, GLsizei, GLsizei, GLsizei, GLenum, GLenum, const GLvoid *) = func; \
   SET_by_offset(disp, _gloffset_TexSubImage3D, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_CopyTexSubImage3D)(GLenum, GLint, GLint, GLint, GLint, GLint, GLint, GLsizei, GLsizei);
#define CALL_CopyTexSubImage3D(disp, parameters) (* GET_CopyTexSubImage3D(disp)) parameters
#define GET_CopyTexSubImage3D(disp) ((_glptr_CopyTexSubImage3D)(GET_by_offset((disp), _gloffset_CopyTexSubImage3D)))
#define SET_CopyTexSubImage3D(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLint, GLint, GLint, GLint, GLint, GLint, GLsizei, GLsizei) = func; \
   SET_by_offset(disp, _gloffset_CopyTexSubImage3D, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_ActiveTexture)(GLenum);
#define CALL_ActiveTexture(disp, parameters) (* GET_ActiveTexture(disp)) parameters
#define GET_ActiveTexture(disp) ((_glptr_ActiveTexture)(GET_by_offset((disp), _gloffset_ActiveTexture)))
#define SET_ActiveTexture(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum) = func; \
   SET_by_offset(disp, _gloffset_ActiveTexture, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_ClientActiveTexture)(GLenum);
#define CALL_ClientActiveTexture(disp, parameters) (* GET_ClientActiveTexture(disp)) parameters
#define GET_ClientActiveTexture(disp) ((_glptr_ClientActiveTexture)(GET_by_offset((disp), _gloffset_ClientActiveTexture)))
#define SET_ClientActiveTexture(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum) = func; \
   SET_by_offset(disp, _gloffset_ClientActiveTexture, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_MultiTexCoord1d)(GLenum, GLdouble);
#define CALL_MultiTexCoord1d(disp, parameters) (* GET_MultiTexCoord1d(disp)) parameters
#define GET_MultiTexCoord1d(disp) ((_glptr_MultiTexCoord1d)(GET_by_offset((disp), _gloffset_MultiTexCoord1d)))
#define SET_MultiTexCoord1d(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLdouble) = func; \
   SET_by_offset(disp, _gloffset_MultiTexCoord1d, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_MultiTexCoord1dv)(GLenum, const GLdouble *);
#define CALL_MultiTexCoord1dv(disp, parameters) (* GET_MultiTexCoord1dv(disp)) parameters
#define GET_MultiTexCoord1dv(disp) ((_glptr_MultiTexCoord1dv)(GET_by_offset((disp), _gloffset_MultiTexCoord1dv)))
#define SET_MultiTexCoord1dv(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, const GLdouble *) = func; \
   SET_by_offset(disp, _gloffset_MultiTexCoord1dv, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_MultiTexCoord1fARB)(GLenum, GLfloat);
#define CALL_MultiTexCoord1fARB(disp, parameters) (* GET_MultiTexCoord1fARB(disp)) parameters
#define GET_MultiTexCoord1fARB(disp) ((_glptr_MultiTexCoord1fARB)(GET_by_offset((disp), _gloffset_MultiTexCoord1fARB)))
#define SET_MultiTexCoord1fARB(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLfloat) = func; \
   SET_by_offset(disp, _gloffset_MultiTexCoord1fARB, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_MultiTexCoord1fvARB)(GLenum, const GLfloat *);
#define CALL_MultiTexCoord1fvARB(disp, parameters) (* GET_MultiTexCoord1fvARB(disp)) parameters
#define GET_MultiTexCoord1fvARB(disp) ((_glptr_MultiTexCoord1fvARB)(GET_by_offset((disp), _gloffset_MultiTexCoord1fvARB)))
#define SET_MultiTexCoord1fvARB(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, const GLfloat *) = func; \
   SET_by_offset(disp, _gloffset_MultiTexCoord1fvARB, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_MultiTexCoord1i)(GLenum, GLint);
#define CALL_MultiTexCoord1i(disp, parameters) (* GET_MultiTexCoord1i(disp)) parameters
#define GET_MultiTexCoord1i(disp) ((_glptr_MultiTexCoord1i)(GET_by_offset((disp), _gloffset_MultiTexCoord1i)))
#define SET_MultiTexCoord1i(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLint) = func; \
   SET_by_offset(disp, _gloffset_MultiTexCoord1i, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_MultiTexCoord1iv)(GLenum, const GLint *);
#define CALL_MultiTexCoord1iv(disp, parameters) (* GET_MultiTexCoord1iv(disp)) parameters
#define GET_MultiTexCoord1iv(disp) ((_glptr_MultiTexCoord1iv)(GET_by_offset((disp), _gloffset_MultiTexCoord1iv)))
#define SET_MultiTexCoord1iv(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, const GLint *) = func; \
   SET_by_offset(disp, _gloffset_MultiTexCoord1iv, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_MultiTexCoord1s)(GLenum, GLshort);
#define CALL_MultiTexCoord1s(disp, parameters) (* GET_MultiTexCoord1s(disp)) parameters
#define GET_MultiTexCoord1s(disp) ((_glptr_MultiTexCoord1s)(GET_by_offset((disp), _gloffset_MultiTexCoord1s)))
#define SET_MultiTexCoord1s(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLshort) = func; \
   SET_by_offset(disp, _gloffset_MultiTexCoord1s, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_MultiTexCoord1sv)(GLenum, const GLshort *);
#define CALL_MultiTexCoord1sv(disp, parameters) (* GET_MultiTexCoord1sv(disp)) parameters
#define GET_MultiTexCoord1sv(disp) ((_glptr_MultiTexCoord1sv)(GET_by_offset((disp), _gloffset_MultiTexCoord1sv)))
#define SET_MultiTexCoord1sv(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, const GLshort *) = func; \
   SET_by_offset(disp, _gloffset_MultiTexCoord1sv, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_MultiTexCoord2d)(GLenum, GLdouble, GLdouble);
#define CALL_MultiTexCoord2d(disp, parameters) (* GET_MultiTexCoord2d(disp)) parameters
#define GET_MultiTexCoord2d(disp) ((_glptr_MultiTexCoord2d)(GET_by_offset((disp), _gloffset_MultiTexCoord2d)))
#define SET_MultiTexCoord2d(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLdouble, GLdouble) = func; \
   SET_by_offset(disp, _gloffset_MultiTexCoord2d, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_MultiTexCoord2dv)(GLenum, const GLdouble *);
#define CALL_MultiTexCoord2dv(disp, parameters) (* GET_MultiTexCoord2dv(disp)) parameters
#define GET_MultiTexCoord2dv(disp) ((_glptr_MultiTexCoord2dv)(GET_by_offset((disp), _gloffset_MultiTexCoord2dv)))
#define SET_MultiTexCoord2dv(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, const GLdouble *) = func; \
   SET_by_offset(disp, _gloffset_MultiTexCoord2dv, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_MultiTexCoord2fARB)(GLenum, GLfloat, GLfloat);
#define CALL_MultiTexCoord2fARB(disp, parameters) (* GET_MultiTexCoord2fARB(disp)) parameters
#define GET_MultiTexCoord2fARB(disp) ((_glptr_MultiTexCoord2fARB)(GET_by_offset((disp), _gloffset_MultiTexCoord2fARB)))
#define SET_MultiTexCoord2fARB(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLfloat, GLfloat) = func; \
   SET_by_offset(disp, _gloffset_MultiTexCoord2fARB, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_MultiTexCoord2fvARB)(GLenum, const GLfloat *);
#define CALL_MultiTexCoord2fvARB(disp, parameters) (* GET_MultiTexCoord2fvARB(disp)) parameters
#define GET_MultiTexCoord2fvARB(disp) ((_glptr_MultiTexCoord2fvARB)(GET_by_offset((disp), _gloffset_MultiTexCoord2fvARB)))
#define SET_MultiTexCoord2fvARB(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, const GLfloat *) = func; \
   SET_by_offset(disp, _gloffset_MultiTexCoord2fvARB, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_MultiTexCoord2i)(GLenum, GLint, GLint);
#define CALL_MultiTexCoord2i(disp, parameters) (* GET_MultiTexCoord2i(disp)) parameters
#define GET_MultiTexCoord2i(disp) ((_glptr_MultiTexCoord2i)(GET_by_offset((disp), _gloffset_MultiTexCoord2i)))
#define SET_MultiTexCoord2i(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLint, GLint) = func; \
   SET_by_offset(disp, _gloffset_MultiTexCoord2i, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_MultiTexCoord2iv)(GLenum, const GLint *);
#define CALL_MultiTexCoord2iv(disp, parameters) (* GET_MultiTexCoord2iv(disp)) parameters
#define GET_MultiTexCoord2iv(disp) ((_glptr_MultiTexCoord2iv)(GET_by_offset((disp), _gloffset_MultiTexCoord2iv)))
#define SET_MultiTexCoord2iv(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, const GLint *) = func; \
   SET_by_offset(disp, _gloffset_MultiTexCoord2iv, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_MultiTexCoord2s)(GLenum, GLshort, GLshort);
#define CALL_MultiTexCoord2s(disp, parameters) (* GET_MultiTexCoord2s(disp)) parameters
#define GET_MultiTexCoord2s(disp) ((_glptr_MultiTexCoord2s)(GET_by_offset((disp), _gloffset_MultiTexCoord2s)))
#define SET_MultiTexCoord2s(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLshort, GLshort) = func; \
   SET_by_offset(disp, _gloffset_MultiTexCoord2s, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_MultiTexCoord2sv)(GLenum, const GLshort *);
#define CALL_MultiTexCoord2sv(disp, parameters) (* GET_MultiTexCoord2sv(disp)) parameters
#define GET_MultiTexCoord2sv(disp) ((_glptr_MultiTexCoord2sv)(GET_by_offset((disp), _gloffset_MultiTexCoord2sv)))
#define SET_MultiTexCoord2sv(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, const GLshort *) = func; \
   SET_by_offset(disp, _gloffset_MultiTexCoord2sv, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_MultiTexCoord3d)(GLenum, GLdouble, GLdouble, GLdouble);
#define CALL_MultiTexCoord3d(disp, parameters) (* GET_MultiTexCoord3d(disp)) parameters
#define GET_MultiTexCoord3d(disp) ((_glptr_MultiTexCoord3d)(GET_by_offset((disp), _gloffset_MultiTexCoord3d)))
#define SET_MultiTexCoord3d(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLdouble, GLdouble, GLdouble) = func; \
   SET_by_offset(disp, _gloffset_MultiTexCoord3d, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_MultiTexCoord3dv)(GLenum, const GLdouble *);
#define CALL_MultiTexCoord3dv(disp, parameters) (* GET_MultiTexCoord3dv(disp)) parameters
#define GET_MultiTexCoord3dv(disp) ((_glptr_MultiTexCoord3dv)(GET_by_offset((disp), _gloffset_MultiTexCoord3dv)))
#define SET_MultiTexCoord3dv(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, const GLdouble *) = func; \
   SET_by_offset(disp, _gloffset_MultiTexCoord3dv, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_MultiTexCoord3fARB)(GLenum, GLfloat, GLfloat, GLfloat);
#define CALL_MultiTexCoord3fARB(disp, parameters) (* GET_MultiTexCoord3fARB(disp)) parameters
#define GET_MultiTexCoord3fARB(disp) ((_glptr_MultiTexCoord3fARB)(GET_by_offset((disp), _gloffset_MultiTexCoord3fARB)))
#define SET_MultiTexCoord3fARB(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLfloat, GLfloat, GLfloat) = func; \
   SET_by_offset(disp, _gloffset_MultiTexCoord3fARB, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_MultiTexCoord3fvARB)(GLenum, const GLfloat *);
#define CALL_MultiTexCoord3fvARB(disp, parameters) (* GET_MultiTexCoord3fvARB(disp)) parameters
#define GET_MultiTexCoord3fvARB(disp) ((_glptr_MultiTexCoord3fvARB)(GET_by_offset((disp), _gloffset_MultiTexCoord3fvARB)))
#define SET_MultiTexCoord3fvARB(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, const GLfloat *) = func; \
   SET_by_offset(disp, _gloffset_MultiTexCoord3fvARB, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_MultiTexCoord3i)(GLenum, GLint, GLint, GLint);
#define CALL_MultiTexCoord3i(disp, parameters) (* GET_MultiTexCoord3i(disp)) parameters
#define GET_MultiTexCoord3i(disp) ((_glptr_MultiTexCoord3i)(GET_by_offset((disp), _gloffset_MultiTexCoord3i)))
#define SET_MultiTexCoord3i(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLint, GLint, GLint) = func; \
   SET_by_offset(disp, _gloffset_MultiTexCoord3i, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_MultiTexCoord3iv)(GLenum, const GLint *);
#define CALL_MultiTexCoord3iv(disp, parameters) (* GET_MultiTexCoord3iv(disp)) parameters
#define GET_MultiTexCoord3iv(disp) ((_glptr_MultiTexCoord3iv)(GET_by_offset((disp), _gloffset_MultiTexCoord3iv)))
#define SET_MultiTexCoord3iv(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, const GLint *) = func; \
   SET_by_offset(disp, _gloffset_MultiTexCoord3iv, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_MultiTexCoord3s)(GLenum, GLshort, GLshort, GLshort);
#define CALL_MultiTexCoord3s(disp, parameters) (* GET_MultiTexCoord3s(disp)) parameters
#define GET_MultiTexCoord3s(disp) ((_glptr_MultiTexCoord3s)(GET_by_offset((disp), _gloffset_MultiTexCoord3s)))
#define SET_MultiTexCoord3s(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLshort, GLshort, GLshort) = func; \
   SET_by_offset(disp, _gloffset_MultiTexCoord3s, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_MultiTexCoord3sv)(GLenum, const GLshort *);
#define CALL_MultiTexCoord3sv(disp, parameters) (* GET_MultiTexCoord3sv(disp)) parameters
#define GET_MultiTexCoord3sv(disp) ((_glptr_MultiTexCoord3sv)(GET_by_offset((disp), _gloffset_MultiTexCoord3sv)))
#define SET_MultiTexCoord3sv(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, const GLshort *) = func; \
   SET_by_offset(disp, _gloffset_MultiTexCoord3sv, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_MultiTexCoord4d)(GLenum, GLdouble, GLdouble, GLdouble, GLdouble);
#define CALL_MultiTexCoord4d(disp, parameters) (* GET_MultiTexCoord4d(disp)) parameters
#define GET_MultiTexCoord4d(disp) ((_glptr_MultiTexCoord4d)(GET_by_offset((disp), _gloffset_MultiTexCoord4d)))
#define SET_MultiTexCoord4d(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLdouble, GLdouble, GLdouble, GLdouble) = func; \
   SET_by_offset(disp, _gloffset_MultiTexCoord4d, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_MultiTexCoord4dv)(GLenum, const GLdouble *);
#define CALL_MultiTexCoord4dv(disp, parameters) (* GET_MultiTexCoord4dv(disp)) parameters
#define GET_MultiTexCoord4dv(disp) ((_glptr_MultiTexCoord4dv)(GET_by_offset((disp), _gloffset_MultiTexCoord4dv)))
#define SET_MultiTexCoord4dv(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, const GLdouble *) = func; \
   SET_by_offset(disp, _gloffset_MultiTexCoord4dv, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_MultiTexCoord4fARB)(GLenum, GLfloat, GLfloat, GLfloat, GLfloat);
#define CALL_MultiTexCoord4fARB(disp, parameters) (* GET_MultiTexCoord4fARB(disp)) parameters
#define GET_MultiTexCoord4fARB(disp) ((_glptr_MultiTexCoord4fARB)(GET_by_offset((disp), _gloffset_MultiTexCoord4fARB)))
#define SET_MultiTexCoord4fARB(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLfloat, GLfloat, GLfloat, GLfloat) = func; \
   SET_by_offset(disp, _gloffset_MultiTexCoord4fARB, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_MultiTexCoord4fvARB)(GLenum, const GLfloat *);
#define CALL_MultiTexCoord4fvARB(disp, parameters) (* GET_MultiTexCoord4fvARB(disp)) parameters
#define GET_MultiTexCoord4fvARB(disp) ((_glptr_MultiTexCoord4fvARB)(GET_by_offset((disp), _gloffset_MultiTexCoord4fvARB)))
#define SET_MultiTexCoord4fvARB(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, const GLfloat *) = func; \
   SET_by_offset(disp, _gloffset_MultiTexCoord4fvARB, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_MultiTexCoord4i)(GLenum, GLint, GLint, GLint, GLint);
#define CALL_MultiTexCoord4i(disp, parameters) (* GET_MultiTexCoord4i(disp)) parameters
#define GET_MultiTexCoord4i(disp) ((_glptr_MultiTexCoord4i)(GET_by_offset((disp), _gloffset_MultiTexCoord4i)))
#define SET_MultiTexCoord4i(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLint, GLint, GLint, GLint) = func; \
   SET_by_offset(disp, _gloffset_MultiTexCoord4i, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_MultiTexCoord4iv)(GLenum, const GLint *);
#define CALL_MultiTexCoord4iv(disp, parameters) (* GET_MultiTexCoord4iv(disp)) parameters
#define GET_MultiTexCoord4iv(disp) ((_glptr_MultiTexCoord4iv)(GET_by_offset((disp), _gloffset_MultiTexCoord4iv)))
#define SET_MultiTexCoord4iv(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, const GLint *) = func; \
   SET_by_offset(disp, _gloffset_MultiTexCoord4iv, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_MultiTexCoord4s)(GLenum, GLshort, GLshort, GLshort, GLshort);
#define CALL_MultiTexCoord4s(disp, parameters) (* GET_MultiTexCoord4s(disp)) parameters
#define GET_MultiTexCoord4s(disp) ((_glptr_MultiTexCoord4s)(GET_by_offset((disp), _gloffset_MultiTexCoord4s)))
#define SET_MultiTexCoord4s(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLshort, GLshort, GLshort, GLshort) = func; \
   SET_by_offset(disp, _gloffset_MultiTexCoord4s, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_MultiTexCoord4sv)(GLenum, const GLshort *);
#define CALL_MultiTexCoord4sv(disp, parameters) (* GET_MultiTexCoord4sv(disp)) parameters
#define GET_MultiTexCoord4sv(disp) ((_glptr_MultiTexCoord4sv)(GET_by_offset((disp), _gloffset_MultiTexCoord4sv)))
#define SET_MultiTexCoord4sv(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, const GLshort *) = func; \
   SET_by_offset(disp, _gloffset_MultiTexCoord4sv, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_CompressedTexImage1D)(GLenum, GLint, GLenum, GLsizei, GLint, GLsizei, const GLvoid *);
#define CALL_CompressedTexImage1D(disp, parameters) (* GET_CompressedTexImage1D(disp)) parameters
#define GET_CompressedTexImage1D(disp) ((_glptr_CompressedTexImage1D)(GET_by_offset((disp), _gloffset_CompressedTexImage1D)))
#define SET_CompressedTexImage1D(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLint, GLenum, GLsizei, GLint, GLsizei, const GLvoid *) = func; \
   SET_by_offset(disp, _gloffset_CompressedTexImage1D, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_CompressedTexImage2D)(GLenum, GLint, GLenum, GLsizei, GLsizei, GLint, GLsizei, const GLvoid *);
#define CALL_CompressedTexImage2D(disp, parameters) (* GET_CompressedTexImage2D(disp)) parameters
#define GET_CompressedTexImage2D(disp) ((_glptr_CompressedTexImage2D)(GET_by_offset((disp), _gloffset_CompressedTexImage2D)))
#define SET_CompressedTexImage2D(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLint, GLenum, GLsizei, GLsizei, GLint, GLsizei, const GLvoid *) = func; \
   SET_by_offset(disp, _gloffset_CompressedTexImage2D, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_CompressedTexImage3D)(GLenum, GLint, GLenum, GLsizei, GLsizei, GLsizei, GLint, GLsizei, const GLvoid *);
#define CALL_CompressedTexImage3D(disp, parameters) (* GET_CompressedTexImage3D(disp)) parameters
#define GET_CompressedTexImage3D(disp) ((_glptr_CompressedTexImage3D)(GET_by_offset((disp), _gloffset_CompressedTexImage3D)))
#define SET_CompressedTexImage3D(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLint, GLenum, GLsizei, GLsizei, GLsizei, GLint, GLsizei, const GLvoid *) = func; \
   SET_by_offset(disp, _gloffset_CompressedTexImage3D, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_CompressedTexSubImage1D)(GLenum, GLint, GLint, GLsizei, GLenum, GLsizei, const GLvoid *);
#define CALL_CompressedTexSubImage1D(disp, parameters) (* GET_CompressedTexSubImage1D(disp)) parameters
#define GET_CompressedTexSubImage1D(disp) ((_glptr_CompressedTexSubImage1D)(GET_by_offset((disp), _gloffset_CompressedTexSubImage1D)))
#define SET_CompressedTexSubImage1D(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLint, GLint, GLsizei, GLenum, GLsizei, const GLvoid *) = func; \
   SET_by_offset(disp, _gloffset_CompressedTexSubImage1D, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_CompressedTexSubImage2D)(GLenum, GLint, GLint, GLint, GLsizei, GLsizei, GLenum, GLsizei, const GLvoid *);
#define CALL_CompressedTexSubImage2D(disp, parameters) (* GET_CompressedTexSubImage2D(disp)) parameters
#define GET_CompressedTexSubImage2D(disp) ((_glptr_CompressedTexSubImage2D)(GET_by_offset((disp), _gloffset_CompressedTexSubImage2D)))
#define SET_CompressedTexSubImage2D(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLint, GLint, GLint, GLsizei, GLsizei, GLenum, GLsizei, const GLvoid *) = func; \
   SET_by_offset(disp, _gloffset_CompressedTexSubImage2D, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_CompressedTexSubImage3D)(GLenum, GLint, GLint, GLint, GLint, GLsizei, GLsizei, GLsizei, GLenum, GLsizei, const GLvoid *);
#define CALL_CompressedTexSubImage3D(disp, parameters) (* GET_CompressedTexSubImage3D(disp)) parameters
#define GET_CompressedTexSubImage3D(disp) ((_glptr_CompressedTexSubImage3D)(GET_by_offset((disp), _gloffset_CompressedTexSubImage3D)))
#define SET_CompressedTexSubImage3D(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLint, GLint, GLint, GLint, GLsizei, GLsizei, GLsizei, GLenum, GLsizei, const GLvoid *) = func; \
   SET_by_offset(disp, _gloffset_CompressedTexSubImage3D, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_GetCompressedTexImage)(GLenum, GLint, GLvoid *);
#define CALL_GetCompressedTexImage(disp, parameters) (* GET_GetCompressedTexImage(disp)) parameters
#define GET_GetCompressedTexImage(disp) ((_glptr_GetCompressedTexImage)(GET_by_offset((disp), _gloffset_GetCompressedTexImage)))
#define SET_GetCompressedTexImage(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLint, GLvoid *) = func; \
   SET_by_offset(disp, _gloffset_GetCompressedTexImage, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_LoadTransposeMatrixd)(const GLdouble *);
#define CALL_LoadTransposeMatrixd(disp, parameters) (* GET_LoadTransposeMatrixd(disp)) parameters
#define GET_LoadTransposeMatrixd(disp) ((_glptr_LoadTransposeMatrixd)(GET_by_offset((disp), _gloffset_LoadTransposeMatrixd)))
#define SET_LoadTransposeMatrixd(disp, func) do { \
   void (GLAPIENTRYP fn)(const GLdouble *) = func; \
   SET_by_offset(disp, _gloffset_LoadTransposeMatrixd, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_LoadTransposeMatrixf)(const GLfloat *);
#define CALL_LoadTransposeMatrixf(disp, parameters) (* GET_LoadTransposeMatrixf(disp)) parameters
#define GET_LoadTransposeMatrixf(disp) ((_glptr_LoadTransposeMatrixf)(GET_by_offset((disp), _gloffset_LoadTransposeMatrixf)))
#define SET_LoadTransposeMatrixf(disp, func) do { \
   void (GLAPIENTRYP fn)(const GLfloat *) = func; \
   SET_by_offset(disp, _gloffset_LoadTransposeMatrixf, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_MultTransposeMatrixd)(const GLdouble *);
#define CALL_MultTransposeMatrixd(disp, parameters) (* GET_MultTransposeMatrixd(disp)) parameters
#define GET_MultTransposeMatrixd(disp) ((_glptr_MultTransposeMatrixd)(GET_by_offset((disp), _gloffset_MultTransposeMatrixd)))
#define SET_MultTransposeMatrixd(disp, func) do { \
   void (GLAPIENTRYP fn)(const GLdouble *) = func; \
   SET_by_offset(disp, _gloffset_MultTransposeMatrixd, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_MultTransposeMatrixf)(const GLfloat *);
#define CALL_MultTransposeMatrixf(disp, parameters) (* GET_MultTransposeMatrixf(disp)) parameters
#define GET_MultTransposeMatrixf(disp) ((_glptr_MultTransposeMatrixf)(GET_by_offset((disp), _gloffset_MultTransposeMatrixf)))
#define SET_MultTransposeMatrixf(disp, func) do { \
   void (GLAPIENTRYP fn)(const GLfloat *) = func; \
   SET_by_offset(disp, _gloffset_MultTransposeMatrixf, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_SampleCoverage)(GLclampf, GLboolean);
#define CALL_SampleCoverage(disp, parameters) (* GET_SampleCoverage(disp)) parameters
#define GET_SampleCoverage(disp) ((_glptr_SampleCoverage)(GET_by_offset((disp), _gloffset_SampleCoverage)))
#define SET_SampleCoverage(disp, func) do { \
   void (GLAPIENTRYP fn)(GLclampf, GLboolean) = func; \
   SET_by_offset(disp, _gloffset_SampleCoverage, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_BlendFuncSeparate)(GLenum, GLenum, GLenum, GLenum);
#define CALL_BlendFuncSeparate(disp, parameters) (* GET_BlendFuncSeparate(disp)) parameters
#define GET_BlendFuncSeparate(disp) ((_glptr_BlendFuncSeparate)(GET_by_offset((disp), _gloffset_BlendFuncSeparate)))
#define SET_BlendFuncSeparate(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLenum, GLenum, GLenum) = func; \
   SET_by_offset(disp, _gloffset_BlendFuncSeparate, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_FogCoordPointer)(GLenum, GLsizei, const GLvoid *);
#define CALL_FogCoordPointer(disp, parameters) (* GET_FogCoordPointer(disp)) parameters
#define GET_FogCoordPointer(disp) ((_glptr_FogCoordPointer)(GET_by_offset((disp), _gloffset_FogCoordPointer)))
#define SET_FogCoordPointer(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLsizei, const GLvoid *) = func; \
   SET_by_offset(disp, _gloffset_FogCoordPointer, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_FogCoordd)(GLdouble);
#define CALL_FogCoordd(disp, parameters) (* GET_FogCoordd(disp)) parameters
#define GET_FogCoordd(disp) ((_glptr_FogCoordd)(GET_by_offset((disp), _gloffset_FogCoordd)))
#define SET_FogCoordd(disp, func) do { \
   void (GLAPIENTRYP fn)(GLdouble) = func; \
   SET_by_offset(disp, _gloffset_FogCoordd, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_FogCoorddv)(const GLdouble *);
#define CALL_FogCoorddv(disp, parameters) (* GET_FogCoorddv(disp)) parameters
#define GET_FogCoorddv(disp) ((_glptr_FogCoorddv)(GET_by_offset((disp), _gloffset_FogCoorddv)))
#define SET_FogCoorddv(disp, func) do { \
   void (GLAPIENTRYP fn)(const GLdouble *) = func; \
   SET_by_offset(disp, _gloffset_FogCoorddv, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_MultiDrawArrays)(GLenum, const GLint *, const GLsizei *, GLsizei);
#define CALL_MultiDrawArrays(disp, parameters) (* GET_MultiDrawArrays(disp)) parameters
#define GET_MultiDrawArrays(disp) ((_glptr_MultiDrawArrays)(GET_by_offset((disp), _gloffset_MultiDrawArrays)))
#define SET_MultiDrawArrays(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, const GLint *, const GLsizei *, GLsizei) = func; \
   SET_by_offset(disp, _gloffset_MultiDrawArrays, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_PointParameterf)(GLenum, GLfloat);
#define CALL_PointParameterf(disp, parameters) (* GET_PointParameterf(disp)) parameters
#define GET_PointParameterf(disp) ((_glptr_PointParameterf)(GET_by_offset((disp), _gloffset_PointParameterf)))
#define SET_PointParameterf(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLfloat) = func; \
   SET_by_offset(disp, _gloffset_PointParameterf, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_PointParameterfv)(GLenum, const GLfloat *);
#define CALL_PointParameterfv(disp, parameters) (* GET_PointParameterfv(disp)) parameters
#define GET_PointParameterfv(disp) ((_glptr_PointParameterfv)(GET_by_offset((disp), _gloffset_PointParameterfv)))
#define SET_PointParameterfv(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, const GLfloat *) = func; \
   SET_by_offset(disp, _gloffset_PointParameterfv, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_PointParameteri)(GLenum, GLint);
#define CALL_PointParameteri(disp, parameters) (* GET_PointParameteri(disp)) parameters
#define GET_PointParameteri(disp) ((_glptr_PointParameteri)(GET_by_offset((disp), _gloffset_PointParameteri)))
#define SET_PointParameteri(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLint) = func; \
   SET_by_offset(disp, _gloffset_PointParameteri, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_PointParameteriv)(GLenum, const GLint *);
#define CALL_PointParameteriv(disp, parameters) (* GET_PointParameteriv(disp)) parameters
#define GET_PointParameteriv(disp) ((_glptr_PointParameteriv)(GET_by_offset((disp), _gloffset_PointParameteriv)))
#define SET_PointParameteriv(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, const GLint *) = func; \
   SET_by_offset(disp, _gloffset_PointParameteriv, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_SecondaryColor3b)(GLbyte, GLbyte, GLbyte);
#define CALL_SecondaryColor3b(disp, parameters) (* GET_SecondaryColor3b(disp)) parameters
#define GET_SecondaryColor3b(disp) ((_glptr_SecondaryColor3b)(GET_by_offset((disp), _gloffset_SecondaryColor3b)))
#define SET_SecondaryColor3b(disp, func) do { \
   void (GLAPIENTRYP fn)(GLbyte, GLbyte, GLbyte) = func; \
   SET_by_offset(disp, _gloffset_SecondaryColor3b, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_SecondaryColor3bv)(const GLbyte *);
#define CALL_SecondaryColor3bv(disp, parameters) (* GET_SecondaryColor3bv(disp)) parameters
#define GET_SecondaryColor3bv(disp) ((_glptr_SecondaryColor3bv)(GET_by_offset((disp), _gloffset_SecondaryColor3bv)))
#define SET_SecondaryColor3bv(disp, func) do { \
   void (GLAPIENTRYP fn)(const GLbyte *) = func; \
   SET_by_offset(disp, _gloffset_SecondaryColor3bv, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_SecondaryColor3d)(GLdouble, GLdouble, GLdouble);
#define CALL_SecondaryColor3d(disp, parameters) (* GET_SecondaryColor3d(disp)) parameters
#define GET_SecondaryColor3d(disp) ((_glptr_SecondaryColor3d)(GET_by_offset((disp), _gloffset_SecondaryColor3d)))
#define SET_SecondaryColor3d(disp, func) do { \
   void (GLAPIENTRYP fn)(GLdouble, GLdouble, GLdouble) = func; \
   SET_by_offset(disp, _gloffset_SecondaryColor3d, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_SecondaryColor3dv)(const GLdouble *);
#define CALL_SecondaryColor3dv(disp, parameters) (* GET_SecondaryColor3dv(disp)) parameters
#define GET_SecondaryColor3dv(disp) ((_glptr_SecondaryColor3dv)(GET_by_offset((disp), _gloffset_SecondaryColor3dv)))
#define SET_SecondaryColor3dv(disp, func) do { \
   void (GLAPIENTRYP fn)(const GLdouble *) = func; \
   SET_by_offset(disp, _gloffset_SecondaryColor3dv, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_SecondaryColor3i)(GLint, GLint, GLint);
#define CALL_SecondaryColor3i(disp, parameters) (* GET_SecondaryColor3i(disp)) parameters
#define GET_SecondaryColor3i(disp) ((_glptr_SecondaryColor3i)(GET_by_offset((disp), _gloffset_SecondaryColor3i)))
#define SET_SecondaryColor3i(disp, func) do { \
   void (GLAPIENTRYP fn)(GLint, GLint, GLint) = func; \
   SET_by_offset(disp, _gloffset_SecondaryColor3i, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_SecondaryColor3iv)(const GLint *);
#define CALL_SecondaryColor3iv(disp, parameters) (* GET_SecondaryColor3iv(disp)) parameters
#define GET_SecondaryColor3iv(disp) ((_glptr_SecondaryColor3iv)(GET_by_offset((disp), _gloffset_SecondaryColor3iv)))
#define SET_SecondaryColor3iv(disp, func) do { \
   void (GLAPIENTRYP fn)(const GLint *) = func; \
   SET_by_offset(disp, _gloffset_SecondaryColor3iv, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_SecondaryColor3s)(GLshort, GLshort, GLshort);
#define CALL_SecondaryColor3s(disp, parameters) (* GET_SecondaryColor3s(disp)) parameters
#define GET_SecondaryColor3s(disp) ((_glptr_SecondaryColor3s)(GET_by_offset((disp), _gloffset_SecondaryColor3s)))
#define SET_SecondaryColor3s(disp, func) do { \
   void (GLAPIENTRYP fn)(GLshort, GLshort, GLshort) = func; \
   SET_by_offset(disp, _gloffset_SecondaryColor3s, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_SecondaryColor3sv)(const GLshort *);
#define CALL_SecondaryColor3sv(disp, parameters) (* GET_SecondaryColor3sv(disp)) parameters
#define GET_SecondaryColor3sv(disp) ((_glptr_SecondaryColor3sv)(GET_by_offset((disp), _gloffset_SecondaryColor3sv)))
#define SET_SecondaryColor3sv(disp, func) do { \
   void (GLAPIENTRYP fn)(const GLshort *) = func; \
   SET_by_offset(disp, _gloffset_SecondaryColor3sv, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_SecondaryColor3ub)(GLubyte, GLubyte, GLubyte);
#define CALL_SecondaryColor3ub(disp, parameters) (* GET_SecondaryColor3ub(disp)) parameters
#define GET_SecondaryColor3ub(disp) ((_glptr_SecondaryColor3ub)(GET_by_offset((disp), _gloffset_SecondaryColor3ub)))
#define SET_SecondaryColor3ub(disp, func) do { \
   void (GLAPIENTRYP fn)(GLubyte, GLubyte, GLubyte) = func; \
   SET_by_offset(disp, _gloffset_SecondaryColor3ub, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_SecondaryColor3ubv)(const GLubyte *);
#define CALL_SecondaryColor3ubv(disp, parameters) (* GET_SecondaryColor3ubv(disp)) parameters
#define GET_SecondaryColor3ubv(disp) ((_glptr_SecondaryColor3ubv)(GET_by_offset((disp), _gloffset_SecondaryColor3ubv)))
#define SET_SecondaryColor3ubv(disp, func) do { \
   void (GLAPIENTRYP fn)(const GLubyte *) = func; \
   SET_by_offset(disp, _gloffset_SecondaryColor3ubv, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_SecondaryColor3ui)(GLuint, GLuint, GLuint);
#define CALL_SecondaryColor3ui(disp, parameters) (* GET_SecondaryColor3ui(disp)) parameters
#define GET_SecondaryColor3ui(disp) ((_glptr_SecondaryColor3ui)(GET_by_offset((disp), _gloffset_SecondaryColor3ui)))
#define SET_SecondaryColor3ui(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLuint, GLuint) = func; \
   SET_by_offset(disp, _gloffset_SecondaryColor3ui, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_SecondaryColor3uiv)(const GLuint *);
#define CALL_SecondaryColor3uiv(disp, parameters) (* GET_SecondaryColor3uiv(disp)) parameters
#define GET_SecondaryColor3uiv(disp) ((_glptr_SecondaryColor3uiv)(GET_by_offset((disp), _gloffset_SecondaryColor3uiv)))
#define SET_SecondaryColor3uiv(disp, func) do { \
   void (GLAPIENTRYP fn)(const GLuint *) = func; \
   SET_by_offset(disp, _gloffset_SecondaryColor3uiv, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_SecondaryColor3us)(GLushort, GLushort, GLushort);
#define CALL_SecondaryColor3us(disp, parameters) (* GET_SecondaryColor3us(disp)) parameters
#define GET_SecondaryColor3us(disp) ((_glptr_SecondaryColor3us)(GET_by_offset((disp), _gloffset_SecondaryColor3us)))
#define SET_SecondaryColor3us(disp, func) do { \
   void (GLAPIENTRYP fn)(GLushort, GLushort, GLushort) = func; \
   SET_by_offset(disp, _gloffset_SecondaryColor3us, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_SecondaryColor3usv)(const GLushort *);
#define CALL_SecondaryColor3usv(disp, parameters) (* GET_SecondaryColor3usv(disp)) parameters
#define GET_SecondaryColor3usv(disp) ((_glptr_SecondaryColor3usv)(GET_by_offset((disp), _gloffset_SecondaryColor3usv)))
#define SET_SecondaryColor3usv(disp, func) do { \
   void (GLAPIENTRYP fn)(const GLushort *) = func; \
   SET_by_offset(disp, _gloffset_SecondaryColor3usv, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_SecondaryColorPointer)(GLint, GLenum, GLsizei, const GLvoid *);
#define CALL_SecondaryColorPointer(disp, parameters) (* GET_SecondaryColorPointer(disp)) parameters
#define GET_SecondaryColorPointer(disp) ((_glptr_SecondaryColorPointer)(GET_by_offset((disp), _gloffset_SecondaryColorPointer)))
#define SET_SecondaryColorPointer(disp, func) do { \
   void (GLAPIENTRYP fn)(GLint, GLenum, GLsizei, const GLvoid *) = func; \
   SET_by_offset(disp, _gloffset_SecondaryColorPointer, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_WindowPos2d)(GLdouble, GLdouble);
#define CALL_WindowPos2d(disp, parameters) (* GET_WindowPos2d(disp)) parameters
#define GET_WindowPos2d(disp) ((_glptr_WindowPos2d)(GET_by_offset((disp), _gloffset_WindowPos2d)))
#define SET_WindowPos2d(disp, func) do { \
   void (GLAPIENTRYP fn)(GLdouble, GLdouble) = func; \
   SET_by_offset(disp, _gloffset_WindowPos2d, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_WindowPos2dv)(const GLdouble *);
#define CALL_WindowPos2dv(disp, parameters) (* GET_WindowPos2dv(disp)) parameters
#define GET_WindowPos2dv(disp) ((_glptr_WindowPos2dv)(GET_by_offset((disp), _gloffset_WindowPos2dv)))
#define SET_WindowPos2dv(disp, func) do { \
   void (GLAPIENTRYP fn)(const GLdouble *) = func; \
   SET_by_offset(disp, _gloffset_WindowPos2dv, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_WindowPos2f)(GLfloat, GLfloat);
#define CALL_WindowPos2f(disp, parameters) (* GET_WindowPos2f(disp)) parameters
#define GET_WindowPos2f(disp) ((_glptr_WindowPos2f)(GET_by_offset((disp), _gloffset_WindowPos2f)))
#define SET_WindowPos2f(disp, func) do { \
   void (GLAPIENTRYP fn)(GLfloat, GLfloat) = func; \
   SET_by_offset(disp, _gloffset_WindowPos2f, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_WindowPos2fv)(const GLfloat *);
#define CALL_WindowPos2fv(disp, parameters) (* GET_WindowPos2fv(disp)) parameters
#define GET_WindowPos2fv(disp) ((_glptr_WindowPos2fv)(GET_by_offset((disp), _gloffset_WindowPos2fv)))
#define SET_WindowPos2fv(disp, func) do { \
   void (GLAPIENTRYP fn)(const GLfloat *) = func; \
   SET_by_offset(disp, _gloffset_WindowPos2fv, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_WindowPos2i)(GLint, GLint);
#define CALL_WindowPos2i(disp, parameters) (* GET_WindowPos2i(disp)) parameters
#define GET_WindowPos2i(disp) ((_glptr_WindowPos2i)(GET_by_offset((disp), _gloffset_WindowPos2i)))
#define SET_WindowPos2i(disp, func) do { \
   void (GLAPIENTRYP fn)(GLint, GLint) = func; \
   SET_by_offset(disp, _gloffset_WindowPos2i, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_WindowPos2iv)(const GLint *);
#define CALL_WindowPos2iv(disp, parameters) (* GET_WindowPos2iv(disp)) parameters
#define GET_WindowPos2iv(disp) ((_glptr_WindowPos2iv)(GET_by_offset((disp), _gloffset_WindowPos2iv)))
#define SET_WindowPos2iv(disp, func) do { \
   void (GLAPIENTRYP fn)(const GLint *) = func; \
   SET_by_offset(disp, _gloffset_WindowPos2iv, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_WindowPos2s)(GLshort, GLshort);
#define CALL_WindowPos2s(disp, parameters) (* GET_WindowPos2s(disp)) parameters
#define GET_WindowPos2s(disp) ((_glptr_WindowPos2s)(GET_by_offset((disp), _gloffset_WindowPos2s)))
#define SET_WindowPos2s(disp, func) do { \
   void (GLAPIENTRYP fn)(GLshort, GLshort) = func; \
   SET_by_offset(disp, _gloffset_WindowPos2s, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_WindowPos2sv)(const GLshort *);
#define CALL_WindowPos2sv(disp, parameters) (* GET_WindowPos2sv(disp)) parameters
#define GET_WindowPos2sv(disp) ((_glptr_WindowPos2sv)(GET_by_offset((disp), _gloffset_WindowPos2sv)))
#define SET_WindowPos2sv(disp, func) do { \
   void (GLAPIENTRYP fn)(const GLshort *) = func; \
   SET_by_offset(disp, _gloffset_WindowPos2sv, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_WindowPos3d)(GLdouble, GLdouble, GLdouble);
#define CALL_WindowPos3d(disp, parameters) (* GET_WindowPos3d(disp)) parameters
#define GET_WindowPos3d(disp) ((_glptr_WindowPos3d)(GET_by_offset((disp), _gloffset_WindowPos3d)))
#define SET_WindowPos3d(disp, func) do { \
   void (GLAPIENTRYP fn)(GLdouble, GLdouble, GLdouble) = func; \
   SET_by_offset(disp, _gloffset_WindowPos3d, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_WindowPos3dv)(const GLdouble *);
#define CALL_WindowPos3dv(disp, parameters) (* GET_WindowPos3dv(disp)) parameters
#define GET_WindowPos3dv(disp) ((_glptr_WindowPos3dv)(GET_by_offset((disp), _gloffset_WindowPos3dv)))
#define SET_WindowPos3dv(disp, func) do { \
   void (GLAPIENTRYP fn)(const GLdouble *) = func; \
   SET_by_offset(disp, _gloffset_WindowPos3dv, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_WindowPos3f)(GLfloat, GLfloat, GLfloat);
#define CALL_WindowPos3f(disp, parameters) (* GET_WindowPos3f(disp)) parameters
#define GET_WindowPos3f(disp) ((_glptr_WindowPos3f)(GET_by_offset((disp), _gloffset_WindowPos3f)))
#define SET_WindowPos3f(disp, func) do { \
   void (GLAPIENTRYP fn)(GLfloat, GLfloat, GLfloat) = func; \
   SET_by_offset(disp, _gloffset_WindowPos3f, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_WindowPos3fv)(const GLfloat *);
#define CALL_WindowPos3fv(disp, parameters) (* GET_WindowPos3fv(disp)) parameters
#define GET_WindowPos3fv(disp) ((_glptr_WindowPos3fv)(GET_by_offset((disp), _gloffset_WindowPos3fv)))
#define SET_WindowPos3fv(disp, func) do { \
   void (GLAPIENTRYP fn)(const GLfloat *) = func; \
   SET_by_offset(disp, _gloffset_WindowPos3fv, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_WindowPos3i)(GLint, GLint, GLint);
#define CALL_WindowPos3i(disp, parameters) (* GET_WindowPos3i(disp)) parameters
#define GET_WindowPos3i(disp) ((_glptr_WindowPos3i)(GET_by_offset((disp), _gloffset_WindowPos3i)))
#define SET_WindowPos3i(disp, func) do { \
   void (GLAPIENTRYP fn)(GLint, GLint, GLint) = func; \
   SET_by_offset(disp, _gloffset_WindowPos3i, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_WindowPos3iv)(const GLint *);
#define CALL_WindowPos3iv(disp, parameters) (* GET_WindowPos3iv(disp)) parameters
#define GET_WindowPos3iv(disp) ((_glptr_WindowPos3iv)(GET_by_offset((disp), _gloffset_WindowPos3iv)))
#define SET_WindowPos3iv(disp, func) do { \
   void (GLAPIENTRYP fn)(const GLint *) = func; \
   SET_by_offset(disp, _gloffset_WindowPos3iv, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_WindowPos3s)(GLshort, GLshort, GLshort);
#define CALL_WindowPos3s(disp, parameters) (* GET_WindowPos3s(disp)) parameters
#define GET_WindowPos3s(disp) ((_glptr_WindowPos3s)(GET_by_offset((disp), _gloffset_WindowPos3s)))
#define SET_WindowPos3s(disp, func) do { \
   void (GLAPIENTRYP fn)(GLshort, GLshort, GLshort) = func; \
   SET_by_offset(disp, _gloffset_WindowPos3s, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_WindowPos3sv)(const GLshort *);
#define CALL_WindowPos3sv(disp, parameters) (* GET_WindowPos3sv(disp)) parameters
#define GET_WindowPos3sv(disp) ((_glptr_WindowPos3sv)(GET_by_offset((disp), _gloffset_WindowPos3sv)))
#define SET_WindowPos3sv(disp, func) do { \
   void (GLAPIENTRYP fn)(const GLshort *) = func; \
   SET_by_offset(disp, _gloffset_WindowPos3sv, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_BeginQuery)(GLenum, GLuint);
#define CALL_BeginQuery(disp, parameters) (* GET_BeginQuery(disp)) parameters
#define GET_BeginQuery(disp) ((_glptr_BeginQuery)(GET_by_offset((disp), _gloffset_BeginQuery)))
#define SET_BeginQuery(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLuint) = func; \
   SET_by_offset(disp, _gloffset_BeginQuery, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_BindBuffer)(GLenum, GLuint);
#define CALL_BindBuffer(disp, parameters) (* GET_BindBuffer(disp)) parameters
#define GET_BindBuffer(disp) ((_glptr_BindBuffer)(GET_by_offset((disp), _gloffset_BindBuffer)))
#define SET_BindBuffer(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLuint) = func; \
   SET_by_offset(disp, _gloffset_BindBuffer, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_BufferData)(GLenum, GLsizeiptr, const GLvoid *, GLenum);
#define CALL_BufferData(disp, parameters) (* GET_BufferData(disp)) parameters
#define GET_BufferData(disp) ((_glptr_BufferData)(GET_by_offset((disp), _gloffset_BufferData)))
#define SET_BufferData(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLsizeiptr, const GLvoid *, GLenum) = func; \
   SET_by_offset(disp, _gloffset_BufferData, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_BufferSubData)(GLenum, GLintptr, GLsizeiptr, const GLvoid *);
#define CALL_BufferSubData(disp, parameters) (* GET_BufferSubData(disp)) parameters
#define GET_BufferSubData(disp) ((_glptr_BufferSubData)(GET_by_offset((disp), _gloffset_BufferSubData)))
#define SET_BufferSubData(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLintptr, GLsizeiptr, const GLvoid *) = func; \
   SET_by_offset(disp, _gloffset_BufferSubData, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_DeleteBuffers)(GLsizei, const GLuint *);
#define CALL_DeleteBuffers(disp, parameters) (* GET_DeleteBuffers(disp)) parameters
#define GET_DeleteBuffers(disp) ((_glptr_DeleteBuffers)(GET_by_offset((disp), _gloffset_DeleteBuffers)))
#define SET_DeleteBuffers(disp, func) do { \
   void (GLAPIENTRYP fn)(GLsizei, const GLuint *) = func; \
   SET_by_offset(disp, _gloffset_DeleteBuffers, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_DeleteQueries)(GLsizei, const GLuint *);
#define CALL_DeleteQueries(disp, parameters) (* GET_DeleteQueries(disp)) parameters
#define GET_DeleteQueries(disp) ((_glptr_DeleteQueries)(GET_by_offset((disp), _gloffset_DeleteQueries)))
#define SET_DeleteQueries(disp, func) do { \
   void (GLAPIENTRYP fn)(GLsizei, const GLuint *) = func; \
   SET_by_offset(disp, _gloffset_DeleteQueries, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_EndQuery)(GLenum);
#define CALL_EndQuery(disp, parameters) (* GET_EndQuery(disp)) parameters
#define GET_EndQuery(disp) ((_glptr_EndQuery)(GET_by_offset((disp), _gloffset_EndQuery)))
#define SET_EndQuery(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum) = func; \
   SET_by_offset(disp, _gloffset_EndQuery, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_GenBuffers)(GLsizei, GLuint *);
#define CALL_GenBuffers(disp, parameters) (* GET_GenBuffers(disp)) parameters
#define GET_GenBuffers(disp) ((_glptr_GenBuffers)(GET_by_offset((disp), _gloffset_GenBuffers)))
#define SET_GenBuffers(disp, func) do { \
   void (GLAPIENTRYP fn)(GLsizei, GLuint *) = func; \
   SET_by_offset(disp, _gloffset_GenBuffers, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_GenQueries)(GLsizei, GLuint *);
#define CALL_GenQueries(disp, parameters) (* GET_GenQueries(disp)) parameters
#define GET_GenQueries(disp) ((_glptr_GenQueries)(GET_by_offset((disp), _gloffset_GenQueries)))
#define SET_GenQueries(disp, func) do { \
   void (GLAPIENTRYP fn)(GLsizei, GLuint *) = func; \
   SET_by_offset(disp, _gloffset_GenQueries, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_GetBufferParameteriv)(GLenum, GLenum, GLint *);
#define CALL_GetBufferParameteriv(disp, parameters) (* GET_GetBufferParameteriv(disp)) parameters
#define GET_GetBufferParameteriv(disp) ((_glptr_GetBufferParameteriv)(GET_by_offset((disp), _gloffset_GetBufferParameteriv)))
#define SET_GetBufferParameteriv(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLenum, GLint *) = func; \
   SET_by_offset(disp, _gloffset_GetBufferParameteriv, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_GetBufferPointerv)(GLenum, GLenum, GLvoid **);
#define CALL_GetBufferPointerv(disp, parameters) (* GET_GetBufferPointerv(disp)) parameters
#define GET_GetBufferPointerv(disp) ((_glptr_GetBufferPointerv)(GET_by_offset((disp), _gloffset_GetBufferPointerv)))
#define SET_GetBufferPointerv(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLenum, GLvoid **) = func; \
   SET_by_offset(disp, _gloffset_GetBufferPointerv, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_GetBufferSubData)(GLenum, GLintptr, GLsizeiptr, GLvoid *);
#define CALL_GetBufferSubData(disp, parameters) (* GET_GetBufferSubData(disp)) parameters
#define GET_GetBufferSubData(disp) ((_glptr_GetBufferSubData)(GET_by_offset((disp), _gloffset_GetBufferSubData)))
#define SET_GetBufferSubData(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLintptr, GLsizeiptr, GLvoid *) = func; \
   SET_by_offset(disp, _gloffset_GetBufferSubData, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_GetQueryObjectiv)(GLuint, GLenum, GLint *);
#define CALL_GetQueryObjectiv(disp, parameters) (* GET_GetQueryObjectiv(disp)) parameters
#define GET_GetQueryObjectiv(disp) ((_glptr_GetQueryObjectiv)(GET_by_offset((disp), _gloffset_GetQueryObjectiv)))
#define SET_GetQueryObjectiv(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLenum, GLint *) = func; \
   SET_by_offset(disp, _gloffset_GetQueryObjectiv, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_GetQueryObjectuiv)(GLuint, GLenum, GLuint *);
#define CALL_GetQueryObjectuiv(disp, parameters) (* GET_GetQueryObjectuiv(disp)) parameters
#define GET_GetQueryObjectuiv(disp) ((_glptr_GetQueryObjectuiv)(GET_by_offset((disp), _gloffset_GetQueryObjectuiv)))
#define SET_GetQueryObjectuiv(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLenum, GLuint *) = func; \
   SET_by_offset(disp, _gloffset_GetQueryObjectuiv, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_GetQueryiv)(GLenum, GLenum, GLint *);
#define CALL_GetQueryiv(disp, parameters) (* GET_GetQueryiv(disp)) parameters
#define GET_GetQueryiv(disp) ((_glptr_GetQueryiv)(GET_by_offset((disp), _gloffset_GetQueryiv)))
#define SET_GetQueryiv(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLenum, GLint *) = func; \
   SET_by_offset(disp, _gloffset_GetQueryiv, fn); \
} while (0)

typedef GLboolean (GLAPIENTRYP _glptr_IsBuffer)(GLuint);
#define CALL_IsBuffer(disp, parameters) (* GET_IsBuffer(disp)) parameters
#define GET_IsBuffer(disp) ((_glptr_IsBuffer)(GET_by_offset((disp), _gloffset_IsBuffer)))
#define SET_IsBuffer(disp, func) do { \
   GLboolean (GLAPIENTRYP fn)(GLuint) = func; \
   SET_by_offset(disp, _gloffset_IsBuffer, fn); \
} while (0)

typedef GLboolean (GLAPIENTRYP _glptr_IsQuery)(GLuint);
#define CALL_IsQuery(disp, parameters) (* GET_IsQuery(disp)) parameters
#define GET_IsQuery(disp) ((_glptr_IsQuery)(GET_by_offset((disp), _gloffset_IsQuery)))
#define SET_IsQuery(disp, func) do { \
   GLboolean (GLAPIENTRYP fn)(GLuint) = func; \
   SET_by_offset(disp, _gloffset_IsQuery, fn); \
} while (0)

typedef GLvoid * (GLAPIENTRYP _glptr_MapBuffer)(GLenum, GLenum);
#define CALL_MapBuffer(disp, parameters) (* GET_MapBuffer(disp)) parameters
#define GET_MapBuffer(disp) ((_glptr_MapBuffer)(GET_by_offset((disp), _gloffset_MapBuffer)))
#define SET_MapBuffer(disp, func) do { \
   GLvoid * (GLAPIENTRYP fn)(GLenum, GLenum) = func; \
   SET_by_offset(disp, _gloffset_MapBuffer, fn); \
} while (0)

typedef GLboolean (GLAPIENTRYP _glptr_UnmapBuffer)(GLenum);
#define CALL_UnmapBuffer(disp, parameters) (* GET_UnmapBuffer(disp)) parameters
#define GET_UnmapBuffer(disp) ((_glptr_UnmapBuffer)(GET_by_offset((disp), _gloffset_UnmapBuffer)))
#define SET_UnmapBuffer(disp, func) do { \
   GLboolean (GLAPIENTRYP fn)(GLenum) = func; \
   SET_by_offset(disp, _gloffset_UnmapBuffer, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_AttachShader)(GLuint, GLuint);
#define CALL_AttachShader(disp, parameters) (* GET_AttachShader(disp)) parameters
#define GET_AttachShader(disp) ((_glptr_AttachShader)(GET_by_offset((disp), _gloffset_AttachShader)))
#define SET_AttachShader(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLuint) = func; \
   SET_by_offset(disp, _gloffset_AttachShader, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_BindAttribLocation)(GLuint, GLuint, const GLchar *);
#define CALL_BindAttribLocation(disp, parameters) (* GET_BindAttribLocation(disp)) parameters
#define GET_BindAttribLocation(disp) ((_glptr_BindAttribLocation)(GET_by_offset((disp), _gloffset_BindAttribLocation)))
#define SET_BindAttribLocation(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLuint, const GLchar *) = func; \
   SET_by_offset(disp, _gloffset_BindAttribLocation, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_BlendEquationSeparate)(GLenum, GLenum);
#define CALL_BlendEquationSeparate(disp, parameters) (* GET_BlendEquationSeparate(disp)) parameters
#define GET_BlendEquationSeparate(disp) ((_glptr_BlendEquationSeparate)(GET_by_offset((disp), _gloffset_BlendEquationSeparate)))
#define SET_BlendEquationSeparate(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLenum) = func; \
   SET_by_offset(disp, _gloffset_BlendEquationSeparate, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_CompileShader)(GLuint);
#define CALL_CompileShader(disp, parameters) (* GET_CompileShader(disp)) parameters
#define GET_CompileShader(disp) ((_glptr_CompileShader)(GET_by_offset((disp), _gloffset_CompileShader)))
#define SET_CompileShader(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint) = func; \
   SET_by_offset(disp, _gloffset_CompileShader, fn); \
} while (0)

typedef GLuint (GLAPIENTRYP _glptr_CreateProgram)(void);
#define CALL_CreateProgram(disp, parameters) (* GET_CreateProgram(disp)) parameters
#define GET_CreateProgram(disp) ((_glptr_CreateProgram)(GET_by_offset((disp), _gloffset_CreateProgram)))
#define SET_CreateProgram(disp, func) do { \
   GLuint (GLAPIENTRYP fn)(void) = func; \
   SET_by_offset(disp, _gloffset_CreateProgram, fn); \
} while (0)

typedef GLuint (GLAPIENTRYP _glptr_CreateShader)(GLenum);
#define CALL_CreateShader(disp, parameters) (* GET_CreateShader(disp)) parameters
#define GET_CreateShader(disp) ((_glptr_CreateShader)(GET_by_offset((disp), _gloffset_CreateShader)))
#define SET_CreateShader(disp, func) do { \
   GLuint (GLAPIENTRYP fn)(GLenum) = func; \
   SET_by_offset(disp, _gloffset_CreateShader, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_DeleteProgram)(GLuint);
#define CALL_DeleteProgram(disp, parameters) (* GET_DeleteProgram(disp)) parameters
#define GET_DeleteProgram(disp) ((_glptr_DeleteProgram)(GET_by_offset((disp), _gloffset_DeleteProgram)))
#define SET_DeleteProgram(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint) = func; \
   SET_by_offset(disp, _gloffset_DeleteProgram, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_DeleteShader)(GLuint);
#define CALL_DeleteShader(disp, parameters) (* GET_DeleteShader(disp)) parameters
#define GET_DeleteShader(disp) ((_glptr_DeleteShader)(GET_by_offset((disp), _gloffset_DeleteShader)))
#define SET_DeleteShader(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint) = func; \
   SET_by_offset(disp, _gloffset_DeleteShader, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_DetachShader)(GLuint, GLuint);
#define CALL_DetachShader(disp, parameters) (* GET_DetachShader(disp)) parameters
#define GET_DetachShader(disp) ((_glptr_DetachShader)(GET_by_offset((disp), _gloffset_DetachShader)))
#define SET_DetachShader(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLuint) = func; \
   SET_by_offset(disp, _gloffset_DetachShader, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_DisableVertexAttribArray)(GLuint);
#define CALL_DisableVertexAttribArray(disp, parameters) (* GET_DisableVertexAttribArray(disp)) parameters
#define GET_DisableVertexAttribArray(disp) ((_glptr_DisableVertexAttribArray)(GET_by_offset((disp), _gloffset_DisableVertexAttribArray)))
#define SET_DisableVertexAttribArray(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint) = func; \
   SET_by_offset(disp, _gloffset_DisableVertexAttribArray, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_DrawBuffers)(GLsizei, const GLenum *);
#define CALL_DrawBuffers(disp, parameters) (* GET_DrawBuffers(disp)) parameters
#define GET_DrawBuffers(disp) ((_glptr_DrawBuffers)(GET_by_offset((disp), _gloffset_DrawBuffers)))
#define SET_DrawBuffers(disp, func) do { \
   void (GLAPIENTRYP fn)(GLsizei, const GLenum *) = func; \
   SET_by_offset(disp, _gloffset_DrawBuffers, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_EnableVertexAttribArray)(GLuint);
#define CALL_EnableVertexAttribArray(disp, parameters) (* GET_EnableVertexAttribArray(disp)) parameters
#define GET_EnableVertexAttribArray(disp) ((_glptr_EnableVertexAttribArray)(GET_by_offset((disp), _gloffset_EnableVertexAttribArray)))
#define SET_EnableVertexAttribArray(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint) = func; \
   SET_by_offset(disp, _gloffset_EnableVertexAttribArray, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_GetActiveAttrib)(GLuint, GLuint, GLsizei , GLsizei *, GLint *, GLenum *, GLchar *);
#define CALL_GetActiveAttrib(disp, parameters) (* GET_GetActiveAttrib(disp)) parameters
#define GET_GetActiveAttrib(disp) ((_glptr_GetActiveAttrib)(GET_by_offset((disp), _gloffset_GetActiveAttrib)))
#define SET_GetActiveAttrib(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLuint, GLsizei , GLsizei *, GLint *, GLenum *, GLchar *) = func; \
   SET_by_offset(disp, _gloffset_GetActiveAttrib, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_GetActiveUniform)(GLuint, GLuint, GLsizei, GLsizei *, GLint *, GLenum *, GLchar *);
#define CALL_GetActiveUniform(disp, parameters) (* GET_GetActiveUniform(disp)) parameters
#define GET_GetActiveUniform(disp) ((_glptr_GetActiveUniform)(GET_by_offset((disp), _gloffset_GetActiveUniform)))
#define SET_GetActiveUniform(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLuint, GLsizei, GLsizei *, GLint *, GLenum *, GLchar *) = func; \
   SET_by_offset(disp, _gloffset_GetActiveUniform, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_GetAttachedShaders)(GLuint, GLsizei, GLsizei *, GLuint *);
#define CALL_GetAttachedShaders(disp, parameters) (* GET_GetAttachedShaders(disp)) parameters
#define GET_GetAttachedShaders(disp) ((_glptr_GetAttachedShaders)(GET_by_offset((disp), _gloffset_GetAttachedShaders)))
#define SET_GetAttachedShaders(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLsizei, GLsizei *, GLuint *) = func; \
   SET_by_offset(disp, _gloffset_GetAttachedShaders, fn); \
} while (0)

typedef GLint (GLAPIENTRYP _glptr_GetAttribLocation)(GLuint, const GLchar *);
#define CALL_GetAttribLocation(disp, parameters) (* GET_GetAttribLocation(disp)) parameters
#define GET_GetAttribLocation(disp) ((_glptr_GetAttribLocation)(GET_by_offset((disp), _gloffset_GetAttribLocation)))
#define SET_GetAttribLocation(disp, func) do { \
   GLint (GLAPIENTRYP fn)(GLuint, const GLchar *) = func; \
   SET_by_offset(disp, _gloffset_GetAttribLocation, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_GetProgramInfoLog)(GLuint, GLsizei, GLsizei *, GLchar *);
#define CALL_GetProgramInfoLog(disp, parameters) (* GET_GetProgramInfoLog(disp)) parameters
#define GET_GetProgramInfoLog(disp) ((_glptr_GetProgramInfoLog)(GET_by_offset((disp), _gloffset_GetProgramInfoLog)))
#define SET_GetProgramInfoLog(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLsizei, GLsizei *, GLchar *) = func; \
   SET_by_offset(disp, _gloffset_GetProgramInfoLog, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_GetProgramiv)(GLuint, GLenum, GLint *);
#define CALL_GetProgramiv(disp, parameters) (* GET_GetProgramiv(disp)) parameters
#define GET_GetProgramiv(disp) ((_glptr_GetProgramiv)(GET_by_offset((disp), _gloffset_GetProgramiv)))
#define SET_GetProgramiv(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLenum, GLint *) = func; \
   SET_by_offset(disp, _gloffset_GetProgramiv, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_GetShaderInfoLog)(GLuint, GLsizei, GLsizei *, GLchar *);
#define CALL_GetShaderInfoLog(disp, parameters) (* GET_GetShaderInfoLog(disp)) parameters
#define GET_GetShaderInfoLog(disp) ((_glptr_GetShaderInfoLog)(GET_by_offset((disp), _gloffset_GetShaderInfoLog)))
#define SET_GetShaderInfoLog(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLsizei, GLsizei *, GLchar *) = func; \
   SET_by_offset(disp, _gloffset_GetShaderInfoLog, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_GetShaderSource)(GLuint, GLsizei, GLsizei *, GLchar *);
#define CALL_GetShaderSource(disp, parameters) (* GET_GetShaderSource(disp)) parameters
#define GET_GetShaderSource(disp) ((_glptr_GetShaderSource)(GET_by_offset((disp), _gloffset_GetShaderSource)))
#define SET_GetShaderSource(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLsizei, GLsizei *, GLchar *) = func; \
   SET_by_offset(disp, _gloffset_GetShaderSource, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_GetShaderiv)(GLuint, GLenum, GLint *);
#define CALL_GetShaderiv(disp, parameters) (* GET_GetShaderiv(disp)) parameters
#define GET_GetShaderiv(disp) ((_glptr_GetShaderiv)(GET_by_offset((disp), _gloffset_GetShaderiv)))
#define SET_GetShaderiv(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLenum, GLint *) = func; \
   SET_by_offset(disp, _gloffset_GetShaderiv, fn); \
} while (0)

typedef GLint (GLAPIENTRYP _glptr_GetUniformLocation)(GLuint, const GLchar *);
#define CALL_GetUniformLocation(disp, parameters) (* GET_GetUniformLocation(disp)) parameters
#define GET_GetUniformLocation(disp) ((_glptr_GetUniformLocation)(GET_by_offset((disp), _gloffset_GetUniformLocation)))
#define SET_GetUniformLocation(disp, func) do { \
   GLint (GLAPIENTRYP fn)(GLuint, const GLchar *) = func; \
   SET_by_offset(disp, _gloffset_GetUniformLocation, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_GetUniformfv)(GLuint, GLint, GLfloat *);
#define CALL_GetUniformfv(disp, parameters) (* GET_GetUniformfv(disp)) parameters
#define GET_GetUniformfv(disp) ((_glptr_GetUniformfv)(GET_by_offset((disp), _gloffset_GetUniformfv)))
#define SET_GetUniformfv(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLint, GLfloat *) = func; \
   SET_by_offset(disp, _gloffset_GetUniformfv, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_GetUniformiv)(GLuint, GLint, GLint *);
#define CALL_GetUniformiv(disp, parameters) (* GET_GetUniformiv(disp)) parameters
#define GET_GetUniformiv(disp) ((_glptr_GetUniformiv)(GET_by_offset((disp), _gloffset_GetUniformiv)))
#define SET_GetUniformiv(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLint, GLint *) = func; \
   SET_by_offset(disp, _gloffset_GetUniformiv, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_GetVertexAttribPointerv)(GLuint, GLenum, GLvoid **);
#define CALL_GetVertexAttribPointerv(disp, parameters) (* GET_GetVertexAttribPointerv(disp)) parameters
#define GET_GetVertexAttribPointerv(disp) ((_glptr_GetVertexAttribPointerv)(GET_by_offset((disp), _gloffset_GetVertexAttribPointerv)))
#define SET_GetVertexAttribPointerv(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLenum, GLvoid **) = func; \
   SET_by_offset(disp, _gloffset_GetVertexAttribPointerv, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_GetVertexAttribdv)(GLuint, GLenum, GLdouble *);
#define CALL_GetVertexAttribdv(disp, parameters) (* GET_GetVertexAttribdv(disp)) parameters
#define GET_GetVertexAttribdv(disp) ((_glptr_GetVertexAttribdv)(GET_by_offset((disp), _gloffset_GetVertexAttribdv)))
#define SET_GetVertexAttribdv(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLenum, GLdouble *) = func; \
   SET_by_offset(disp, _gloffset_GetVertexAttribdv, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_GetVertexAttribfv)(GLuint, GLenum, GLfloat *);
#define CALL_GetVertexAttribfv(disp, parameters) (* GET_GetVertexAttribfv(disp)) parameters
#define GET_GetVertexAttribfv(disp) ((_glptr_GetVertexAttribfv)(GET_by_offset((disp), _gloffset_GetVertexAttribfv)))
#define SET_GetVertexAttribfv(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLenum, GLfloat *) = func; \
   SET_by_offset(disp, _gloffset_GetVertexAttribfv, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_GetVertexAttribiv)(GLuint, GLenum, GLint *);
#define CALL_GetVertexAttribiv(disp, parameters) (* GET_GetVertexAttribiv(disp)) parameters
#define GET_GetVertexAttribiv(disp) ((_glptr_GetVertexAttribiv)(GET_by_offset((disp), _gloffset_GetVertexAttribiv)))
#define SET_GetVertexAttribiv(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLenum, GLint *) = func; \
   SET_by_offset(disp, _gloffset_GetVertexAttribiv, fn); \
} while (0)

typedef GLboolean (GLAPIENTRYP _glptr_IsProgram)(GLuint);
#define CALL_IsProgram(disp, parameters) (* GET_IsProgram(disp)) parameters
#define GET_IsProgram(disp) ((_glptr_IsProgram)(GET_by_offset((disp), _gloffset_IsProgram)))
#define SET_IsProgram(disp, func) do { \
   GLboolean (GLAPIENTRYP fn)(GLuint) = func; \
   SET_by_offset(disp, _gloffset_IsProgram, fn); \
} while (0)

typedef GLboolean (GLAPIENTRYP _glptr_IsShader)(GLuint);
#define CALL_IsShader(disp, parameters) (* GET_IsShader(disp)) parameters
#define GET_IsShader(disp) ((_glptr_IsShader)(GET_by_offset((disp), _gloffset_IsShader)))
#define SET_IsShader(disp, func) do { \
   GLboolean (GLAPIENTRYP fn)(GLuint) = func; \
   SET_by_offset(disp, _gloffset_IsShader, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_LinkProgram)(GLuint);
#define CALL_LinkProgram(disp, parameters) (* GET_LinkProgram(disp)) parameters
#define GET_LinkProgram(disp) ((_glptr_LinkProgram)(GET_by_offset((disp), _gloffset_LinkProgram)))
#define SET_LinkProgram(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint) = func; \
   SET_by_offset(disp, _gloffset_LinkProgram, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_ShaderSource)(GLuint, GLsizei, const GLchar * const *, const GLint *);
#define CALL_ShaderSource(disp, parameters) (* GET_ShaderSource(disp)) parameters
#define GET_ShaderSource(disp) ((_glptr_ShaderSource)(GET_by_offset((disp), _gloffset_ShaderSource)))
#define SET_ShaderSource(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLsizei, const GLchar * const *, const GLint *) = func; \
   SET_by_offset(disp, _gloffset_ShaderSource, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_StencilFuncSeparate)(GLenum, GLenum, GLint, GLuint);
#define CALL_StencilFuncSeparate(disp, parameters) (* GET_StencilFuncSeparate(disp)) parameters
#define GET_StencilFuncSeparate(disp) ((_glptr_StencilFuncSeparate)(GET_by_offset((disp), _gloffset_StencilFuncSeparate)))
#define SET_StencilFuncSeparate(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLenum, GLint, GLuint) = func; \
   SET_by_offset(disp, _gloffset_StencilFuncSeparate, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_StencilMaskSeparate)(GLenum, GLuint);
#define CALL_StencilMaskSeparate(disp, parameters) (* GET_StencilMaskSeparate(disp)) parameters
#define GET_StencilMaskSeparate(disp) ((_glptr_StencilMaskSeparate)(GET_by_offset((disp), _gloffset_StencilMaskSeparate)))
#define SET_StencilMaskSeparate(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLuint) = func; \
   SET_by_offset(disp, _gloffset_StencilMaskSeparate, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_StencilOpSeparate)(GLenum, GLenum, GLenum, GLenum);
#define CALL_StencilOpSeparate(disp, parameters) (* GET_StencilOpSeparate(disp)) parameters
#define GET_StencilOpSeparate(disp) ((_glptr_StencilOpSeparate)(GET_by_offset((disp), _gloffset_StencilOpSeparate)))
#define SET_StencilOpSeparate(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLenum, GLenum, GLenum) = func; \
   SET_by_offset(disp, _gloffset_StencilOpSeparate, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_Uniform1f)(GLint, GLfloat);
#define CALL_Uniform1f(disp, parameters) (* GET_Uniform1f(disp)) parameters
#define GET_Uniform1f(disp) ((_glptr_Uniform1f)(GET_by_offset((disp), _gloffset_Uniform1f)))
#define SET_Uniform1f(disp, func) do { \
   void (GLAPIENTRYP fn)(GLint, GLfloat) = func; \
   SET_by_offset(disp, _gloffset_Uniform1f, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_Uniform1fv)(GLint, GLsizei, const GLfloat *);
#define CALL_Uniform1fv(disp, parameters) (* GET_Uniform1fv(disp)) parameters
#define GET_Uniform1fv(disp) ((_glptr_Uniform1fv)(GET_by_offset((disp), _gloffset_Uniform1fv)))
#define SET_Uniform1fv(disp, func) do { \
   void (GLAPIENTRYP fn)(GLint, GLsizei, const GLfloat *) = func; \
   SET_by_offset(disp, _gloffset_Uniform1fv, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_Uniform1i)(GLint, GLint);
#define CALL_Uniform1i(disp, parameters) (* GET_Uniform1i(disp)) parameters
#define GET_Uniform1i(disp) ((_glptr_Uniform1i)(GET_by_offset((disp), _gloffset_Uniform1i)))
#define SET_Uniform1i(disp, func) do { \
   void (GLAPIENTRYP fn)(GLint, GLint) = func; \
   SET_by_offset(disp, _gloffset_Uniform1i, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_Uniform1iv)(GLint, GLsizei, const GLint *);
#define CALL_Uniform1iv(disp, parameters) (* GET_Uniform1iv(disp)) parameters
#define GET_Uniform1iv(disp) ((_glptr_Uniform1iv)(GET_by_offset((disp), _gloffset_Uniform1iv)))
#define SET_Uniform1iv(disp, func) do { \
   void (GLAPIENTRYP fn)(GLint, GLsizei, const GLint *) = func; \
   SET_by_offset(disp, _gloffset_Uniform1iv, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_Uniform2f)(GLint, GLfloat, GLfloat);
#define CALL_Uniform2f(disp, parameters) (* GET_Uniform2f(disp)) parameters
#define GET_Uniform2f(disp) ((_glptr_Uniform2f)(GET_by_offset((disp), _gloffset_Uniform2f)))
#define SET_Uniform2f(disp, func) do { \
   void (GLAPIENTRYP fn)(GLint, GLfloat, GLfloat) = func; \
   SET_by_offset(disp, _gloffset_Uniform2f, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_Uniform2fv)(GLint, GLsizei, const GLfloat *);
#define CALL_Uniform2fv(disp, parameters) (* GET_Uniform2fv(disp)) parameters
#define GET_Uniform2fv(disp) ((_glptr_Uniform2fv)(GET_by_offset((disp), _gloffset_Uniform2fv)))
#define SET_Uniform2fv(disp, func) do { \
   void (GLAPIENTRYP fn)(GLint, GLsizei, const GLfloat *) = func; \
   SET_by_offset(disp, _gloffset_Uniform2fv, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_Uniform2i)(GLint, GLint, GLint);
#define CALL_Uniform2i(disp, parameters) (* GET_Uniform2i(disp)) parameters
#define GET_Uniform2i(disp) ((_glptr_Uniform2i)(GET_by_offset((disp), _gloffset_Uniform2i)))
#define SET_Uniform2i(disp, func) do { \
   void (GLAPIENTRYP fn)(GLint, GLint, GLint) = func; \
   SET_by_offset(disp, _gloffset_Uniform2i, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_Uniform2iv)(GLint, GLsizei, const GLint *);
#define CALL_Uniform2iv(disp, parameters) (* GET_Uniform2iv(disp)) parameters
#define GET_Uniform2iv(disp) ((_glptr_Uniform2iv)(GET_by_offset((disp), _gloffset_Uniform2iv)))
#define SET_Uniform2iv(disp, func) do { \
   void (GLAPIENTRYP fn)(GLint, GLsizei, const GLint *) = func; \
   SET_by_offset(disp, _gloffset_Uniform2iv, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_Uniform3f)(GLint, GLfloat, GLfloat, GLfloat);
#define CALL_Uniform3f(disp, parameters) (* GET_Uniform3f(disp)) parameters
#define GET_Uniform3f(disp) ((_glptr_Uniform3f)(GET_by_offset((disp), _gloffset_Uniform3f)))
#define SET_Uniform3f(disp, func) do { \
   void (GLAPIENTRYP fn)(GLint, GLfloat, GLfloat, GLfloat) = func; \
   SET_by_offset(disp, _gloffset_Uniform3f, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_Uniform3fv)(GLint, GLsizei, const GLfloat *);
#define CALL_Uniform3fv(disp, parameters) (* GET_Uniform3fv(disp)) parameters
#define GET_Uniform3fv(disp) ((_glptr_Uniform3fv)(GET_by_offset((disp), _gloffset_Uniform3fv)))
#define SET_Uniform3fv(disp, func) do { \
   void (GLAPIENTRYP fn)(GLint, GLsizei, const GLfloat *) = func; \
   SET_by_offset(disp, _gloffset_Uniform3fv, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_Uniform3i)(GLint, GLint, GLint, GLint);
#define CALL_Uniform3i(disp, parameters) (* GET_Uniform3i(disp)) parameters
#define GET_Uniform3i(disp) ((_glptr_Uniform3i)(GET_by_offset((disp), _gloffset_Uniform3i)))
#define SET_Uniform3i(disp, func) do { \
   void (GLAPIENTRYP fn)(GLint, GLint, GLint, GLint) = func; \
   SET_by_offset(disp, _gloffset_Uniform3i, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_Uniform3iv)(GLint, GLsizei, const GLint *);
#define CALL_Uniform3iv(disp, parameters) (* GET_Uniform3iv(disp)) parameters
#define GET_Uniform3iv(disp) ((_glptr_Uniform3iv)(GET_by_offset((disp), _gloffset_Uniform3iv)))
#define SET_Uniform3iv(disp, func) do { \
   void (GLAPIENTRYP fn)(GLint, GLsizei, const GLint *) = func; \
   SET_by_offset(disp, _gloffset_Uniform3iv, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_Uniform4f)(GLint, GLfloat, GLfloat, GLfloat, GLfloat);
#define CALL_Uniform4f(disp, parameters) (* GET_Uniform4f(disp)) parameters
#define GET_Uniform4f(disp) ((_glptr_Uniform4f)(GET_by_offset((disp), _gloffset_Uniform4f)))
#define SET_Uniform4f(disp, func) do { \
   void (GLAPIENTRYP fn)(GLint, GLfloat, GLfloat, GLfloat, GLfloat) = func; \
   SET_by_offset(disp, _gloffset_Uniform4f, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_Uniform4fv)(GLint, GLsizei, const GLfloat *);
#define CALL_Uniform4fv(disp, parameters) (* GET_Uniform4fv(disp)) parameters
#define GET_Uniform4fv(disp) ((_glptr_Uniform4fv)(GET_by_offset((disp), _gloffset_Uniform4fv)))
#define SET_Uniform4fv(disp, func) do { \
   void (GLAPIENTRYP fn)(GLint, GLsizei, const GLfloat *) = func; \
   SET_by_offset(disp, _gloffset_Uniform4fv, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_Uniform4i)(GLint, GLint, GLint, GLint, GLint);
#define CALL_Uniform4i(disp, parameters) (* GET_Uniform4i(disp)) parameters
#define GET_Uniform4i(disp) ((_glptr_Uniform4i)(GET_by_offset((disp), _gloffset_Uniform4i)))
#define SET_Uniform4i(disp, func) do { \
   void (GLAPIENTRYP fn)(GLint, GLint, GLint, GLint, GLint) = func; \
   SET_by_offset(disp, _gloffset_Uniform4i, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_Uniform4iv)(GLint, GLsizei, const GLint *);
#define CALL_Uniform4iv(disp, parameters) (* GET_Uniform4iv(disp)) parameters
#define GET_Uniform4iv(disp) ((_glptr_Uniform4iv)(GET_by_offset((disp), _gloffset_Uniform4iv)))
#define SET_Uniform4iv(disp, func) do { \
   void (GLAPIENTRYP fn)(GLint, GLsizei, const GLint *) = func; \
   SET_by_offset(disp, _gloffset_Uniform4iv, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_UniformMatrix2fv)(GLint, GLsizei, GLboolean, const GLfloat *);
#define CALL_UniformMatrix2fv(disp, parameters) (* GET_UniformMatrix2fv(disp)) parameters
#define GET_UniformMatrix2fv(disp) ((_glptr_UniformMatrix2fv)(GET_by_offset((disp), _gloffset_UniformMatrix2fv)))
#define SET_UniformMatrix2fv(disp, func) do { \
   void (GLAPIENTRYP fn)(GLint, GLsizei, GLboolean, const GLfloat *) = func; \
   SET_by_offset(disp, _gloffset_UniformMatrix2fv, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_UniformMatrix3fv)(GLint, GLsizei, GLboolean, const GLfloat *);
#define CALL_UniformMatrix3fv(disp, parameters) (* GET_UniformMatrix3fv(disp)) parameters
#define GET_UniformMatrix3fv(disp) ((_glptr_UniformMatrix3fv)(GET_by_offset((disp), _gloffset_UniformMatrix3fv)))
#define SET_UniformMatrix3fv(disp, func) do { \
   void (GLAPIENTRYP fn)(GLint, GLsizei, GLboolean, const GLfloat *) = func; \
   SET_by_offset(disp, _gloffset_UniformMatrix3fv, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_UniformMatrix4fv)(GLint, GLsizei, GLboolean, const GLfloat *);
#define CALL_UniformMatrix4fv(disp, parameters) (* GET_UniformMatrix4fv(disp)) parameters
#define GET_UniformMatrix4fv(disp) ((_glptr_UniformMatrix4fv)(GET_by_offset((disp), _gloffset_UniformMatrix4fv)))
#define SET_UniformMatrix4fv(disp, func) do { \
   void (GLAPIENTRYP fn)(GLint, GLsizei, GLboolean, const GLfloat *) = func; \
   SET_by_offset(disp, _gloffset_UniformMatrix4fv, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_UseProgram)(GLuint);
#define CALL_UseProgram(disp, parameters) (* GET_UseProgram(disp)) parameters
#define GET_UseProgram(disp) ((_glptr_UseProgram)(GET_by_offset((disp), _gloffset_UseProgram)))
#define SET_UseProgram(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint) = func; \
   SET_by_offset(disp, _gloffset_UseProgram, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_ValidateProgram)(GLuint);
#define CALL_ValidateProgram(disp, parameters) (* GET_ValidateProgram(disp)) parameters
#define GET_ValidateProgram(disp) ((_glptr_ValidateProgram)(GET_by_offset((disp), _gloffset_ValidateProgram)))
#define SET_ValidateProgram(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint) = func; \
   SET_by_offset(disp, _gloffset_ValidateProgram, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_VertexAttrib1d)(GLuint, GLdouble);
#define CALL_VertexAttrib1d(disp, parameters) (* GET_VertexAttrib1d(disp)) parameters
#define GET_VertexAttrib1d(disp) ((_glptr_VertexAttrib1d)(GET_by_offset((disp), _gloffset_VertexAttrib1d)))
#define SET_VertexAttrib1d(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLdouble) = func; \
   SET_by_offset(disp, _gloffset_VertexAttrib1d, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_VertexAttrib1dv)(GLuint, const GLdouble *);
#define CALL_VertexAttrib1dv(disp, parameters) (* GET_VertexAttrib1dv(disp)) parameters
#define GET_VertexAttrib1dv(disp) ((_glptr_VertexAttrib1dv)(GET_by_offset((disp), _gloffset_VertexAttrib1dv)))
#define SET_VertexAttrib1dv(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, const GLdouble *) = func; \
   SET_by_offset(disp, _gloffset_VertexAttrib1dv, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_VertexAttrib1s)(GLuint, GLshort);
#define CALL_VertexAttrib1s(disp, parameters) (* GET_VertexAttrib1s(disp)) parameters
#define GET_VertexAttrib1s(disp) ((_glptr_VertexAttrib1s)(GET_by_offset((disp), _gloffset_VertexAttrib1s)))
#define SET_VertexAttrib1s(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLshort) = func; \
   SET_by_offset(disp, _gloffset_VertexAttrib1s, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_VertexAttrib1sv)(GLuint, const GLshort *);
#define CALL_VertexAttrib1sv(disp, parameters) (* GET_VertexAttrib1sv(disp)) parameters
#define GET_VertexAttrib1sv(disp) ((_glptr_VertexAttrib1sv)(GET_by_offset((disp), _gloffset_VertexAttrib1sv)))
#define SET_VertexAttrib1sv(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, const GLshort *) = func; \
   SET_by_offset(disp, _gloffset_VertexAttrib1sv, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_VertexAttrib2d)(GLuint, GLdouble, GLdouble);
#define CALL_VertexAttrib2d(disp, parameters) (* GET_VertexAttrib2d(disp)) parameters
#define GET_VertexAttrib2d(disp) ((_glptr_VertexAttrib2d)(GET_by_offset((disp), _gloffset_VertexAttrib2d)))
#define SET_VertexAttrib2d(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLdouble, GLdouble) = func; \
   SET_by_offset(disp, _gloffset_VertexAttrib2d, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_VertexAttrib2dv)(GLuint, const GLdouble *);
#define CALL_VertexAttrib2dv(disp, parameters) (* GET_VertexAttrib2dv(disp)) parameters
#define GET_VertexAttrib2dv(disp) ((_glptr_VertexAttrib2dv)(GET_by_offset((disp), _gloffset_VertexAttrib2dv)))
#define SET_VertexAttrib2dv(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, const GLdouble *) = func; \
   SET_by_offset(disp, _gloffset_VertexAttrib2dv, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_VertexAttrib2s)(GLuint, GLshort, GLshort);
#define CALL_VertexAttrib2s(disp, parameters) (* GET_VertexAttrib2s(disp)) parameters
#define GET_VertexAttrib2s(disp) ((_glptr_VertexAttrib2s)(GET_by_offset((disp), _gloffset_VertexAttrib2s)))
#define SET_VertexAttrib2s(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLshort, GLshort) = func; \
   SET_by_offset(disp, _gloffset_VertexAttrib2s, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_VertexAttrib2sv)(GLuint, const GLshort *);
#define CALL_VertexAttrib2sv(disp, parameters) (* GET_VertexAttrib2sv(disp)) parameters
#define GET_VertexAttrib2sv(disp) ((_glptr_VertexAttrib2sv)(GET_by_offset((disp), _gloffset_VertexAttrib2sv)))
#define SET_VertexAttrib2sv(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, const GLshort *) = func; \
   SET_by_offset(disp, _gloffset_VertexAttrib2sv, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_VertexAttrib3d)(GLuint, GLdouble, GLdouble, GLdouble);
#define CALL_VertexAttrib3d(disp, parameters) (* GET_VertexAttrib3d(disp)) parameters
#define GET_VertexAttrib3d(disp) ((_glptr_VertexAttrib3d)(GET_by_offset((disp), _gloffset_VertexAttrib3d)))
#define SET_VertexAttrib3d(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLdouble, GLdouble, GLdouble) = func; \
   SET_by_offset(disp, _gloffset_VertexAttrib3d, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_VertexAttrib3dv)(GLuint, const GLdouble *);
#define CALL_VertexAttrib3dv(disp, parameters) (* GET_VertexAttrib3dv(disp)) parameters
#define GET_VertexAttrib3dv(disp) ((_glptr_VertexAttrib3dv)(GET_by_offset((disp), _gloffset_VertexAttrib3dv)))
#define SET_VertexAttrib3dv(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, const GLdouble *) = func; \
   SET_by_offset(disp, _gloffset_VertexAttrib3dv, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_VertexAttrib3s)(GLuint, GLshort, GLshort, GLshort);
#define CALL_VertexAttrib3s(disp, parameters) (* GET_VertexAttrib3s(disp)) parameters
#define GET_VertexAttrib3s(disp) ((_glptr_VertexAttrib3s)(GET_by_offset((disp), _gloffset_VertexAttrib3s)))
#define SET_VertexAttrib3s(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLshort, GLshort, GLshort) = func; \
   SET_by_offset(disp, _gloffset_VertexAttrib3s, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_VertexAttrib3sv)(GLuint, const GLshort *);
#define CALL_VertexAttrib3sv(disp, parameters) (* GET_VertexAttrib3sv(disp)) parameters
#define GET_VertexAttrib3sv(disp) ((_glptr_VertexAttrib3sv)(GET_by_offset((disp), _gloffset_VertexAttrib3sv)))
#define SET_VertexAttrib3sv(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, const GLshort *) = func; \
   SET_by_offset(disp, _gloffset_VertexAttrib3sv, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_VertexAttrib4Nbv)(GLuint, const GLbyte *);
#define CALL_VertexAttrib4Nbv(disp, parameters) (* GET_VertexAttrib4Nbv(disp)) parameters
#define GET_VertexAttrib4Nbv(disp) ((_glptr_VertexAttrib4Nbv)(GET_by_offset((disp), _gloffset_VertexAttrib4Nbv)))
#define SET_VertexAttrib4Nbv(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, const GLbyte *) = func; \
   SET_by_offset(disp, _gloffset_VertexAttrib4Nbv, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_VertexAttrib4Niv)(GLuint, const GLint *);
#define CALL_VertexAttrib4Niv(disp, parameters) (* GET_VertexAttrib4Niv(disp)) parameters
#define GET_VertexAttrib4Niv(disp) ((_glptr_VertexAttrib4Niv)(GET_by_offset((disp), _gloffset_VertexAttrib4Niv)))
#define SET_VertexAttrib4Niv(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, const GLint *) = func; \
   SET_by_offset(disp, _gloffset_VertexAttrib4Niv, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_VertexAttrib4Nsv)(GLuint, const GLshort *);
#define CALL_VertexAttrib4Nsv(disp, parameters) (* GET_VertexAttrib4Nsv(disp)) parameters
#define GET_VertexAttrib4Nsv(disp) ((_glptr_VertexAttrib4Nsv)(GET_by_offset((disp), _gloffset_VertexAttrib4Nsv)))
#define SET_VertexAttrib4Nsv(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, const GLshort *) = func; \
   SET_by_offset(disp, _gloffset_VertexAttrib4Nsv, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_VertexAttrib4Nub)(GLuint, GLubyte, GLubyte, GLubyte, GLubyte);
#define CALL_VertexAttrib4Nub(disp, parameters) (* GET_VertexAttrib4Nub(disp)) parameters
#define GET_VertexAttrib4Nub(disp) ((_glptr_VertexAttrib4Nub)(GET_by_offset((disp), _gloffset_VertexAttrib4Nub)))
#define SET_VertexAttrib4Nub(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLubyte, GLubyte, GLubyte, GLubyte) = func; \
   SET_by_offset(disp, _gloffset_VertexAttrib4Nub, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_VertexAttrib4Nubv)(GLuint, const GLubyte *);
#define CALL_VertexAttrib4Nubv(disp, parameters) (* GET_VertexAttrib4Nubv(disp)) parameters
#define GET_VertexAttrib4Nubv(disp) ((_glptr_VertexAttrib4Nubv)(GET_by_offset((disp), _gloffset_VertexAttrib4Nubv)))
#define SET_VertexAttrib4Nubv(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, const GLubyte *) = func; \
   SET_by_offset(disp, _gloffset_VertexAttrib4Nubv, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_VertexAttrib4Nuiv)(GLuint, const GLuint *);
#define CALL_VertexAttrib4Nuiv(disp, parameters) (* GET_VertexAttrib4Nuiv(disp)) parameters
#define GET_VertexAttrib4Nuiv(disp) ((_glptr_VertexAttrib4Nuiv)(GET_by_offset((disp), _gloffset_VertexAttrib4Nuiv)))
#define SET_VertexAttrib4Nuiv(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, const GLuint *) = func; \
   SET_by_offset(disp, _gloffset_VertexAttrib4Nuiv, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_VertexAttrib4Nusv)(GLuint, const GLushort *);
#define CALL_VertexAttrib4Nusv(disp, parameters) (* GET_VertexAttrib4Nusv(disp)) parameters
#define GET_VertexAttrib4Nusv(disp) ((_glptr_VertexAttrib4Nusv)(GET_by_offset((disp), _gloffset_VertexAttrib4Nusv)))
#define SET_VertexAttrib4Nusv(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, const GLushort *) = func; \
   SET_by_offset(disp, _gloffset_VertexAttrib4Nusv, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_VertexAttrib4bv)(GLuint, const GLbyte *);
#define CALL_VertexAttrib4bv(disp, parameters) (* GET_VertexAttrib4bv(disp)) parameters
#define GET_VertexAttrib4bv(disp) ((_glptr_VertexAttrib4bv)(GET_by_offset((disp), _gloffset_VertexAttrib4bv)))
#define SET_VertexAttrib4bv(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, const GLbyte *) = func; \
   SET_by_offset(disp, _gloffset_VertexAttrib4bv, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_VertexAttrib4d)(GLuint, GLdouble, GLdouble, GLdouble, GLdouble);
#define CALL_VertexAttrib4d(disp, parameters) (* GET_VertexAttrib4d(disp)) parameters
#define GET_VertexAttrib4d(disp) ((_glptr_VertexAttrib4d)(GET_by_offset((disp), _gloffset_VertexAttrib4d)))
#define SET_VertexAttrib4d(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLdouble, GLdouble, GLdouble, GLdouble) = func; \
   SET_by_offset(disp, _gloffset_VertexAttrib4d, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_VertexAttrib4dv)(GLuint, const GLdouble *);
#define CALL_VertexAttrib4dv(disp, parameters) (* GET_VertexAttrib4dv(disp)) parameters
#define GET_VertexAttrib4dv(disp) ((_glptr_VertexAttrib4dv)(GET_by_offset((disp), _gloffset_VertexAttrib4dv)))
#define SET_VertexAttrib4dv(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, const GLdouble *) = func; \
   SET_by_offset(disp, _gloffset_VertexAttrib4dv, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_VertexAttrib4iv)(GLuint, const GLint *);
#define CALL_VertexAttrib4iv(disp, parameters) (* GET_VertexAttrib4iv(disp)) parameters
#define GET_VertexAttrib4iv(disp) ((_glptr_VertexAttrib4iv)(GET_by_offset((disp), _gloffset_VertexAttrib4iv)))
#define SET_VertexAttrib4iv(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, const GLint *) = func; \
   SET_by_offset(disp, _gloffset_VertexAttrib4iv, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_VertexAttrib4s)(GLuint, GLshort, GLshort, GLshort, GLshort);
#define CALL_VertexAttrib4s(disp, parameters) (* GET_VertexAttrib4s(disp)) parameters
#define GET_VertexAttrib4s(disp) ((_glptr_VertexAttrib4s)(GET_by_offset((disp), _gloffset_VertexAttrib4s)))
#define SET_VertexAttrib4s(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLshort, GLshort, GLshort, GLshort) = func; \
   SET_by_offset(disp, _gloffset_VertexAttrib4s, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_VertexAttrib4sv)(GLuint, const GLshort *);
#define CALL_VertexAttrib4sv(disp, parameters) (* GET_VertexAttrib4sv(disp)) parameters
#define GET_VertexAttrib4sv(disp) ((_glptr_VertexAttrib4sv)(GET_by_offset((disp), _gloffset_VertexAttrib4sv)))
#define SET_VertexAttrib4sv(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, const GLshort *) = func; \
   SET_by_offset(disp, _gloffset_VertexAttrib4sv, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_VertexAttrib4ubv)(GLuint, const GLubyte *);
#define CALL_VertexAttrib4ubv(disp, parameters) (* GET_VertexAttrib4ubv(disp)) parameters
#define GET_VertexAttrib4ubv(disp) ((_glptr_VertexAttrib4ubv)(GET_by_offset((disp), _gloffset_VertexAttrib4ubv)))
#define SET_VertexAttrib4ubv(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, const GLubyte *) = func; \
   SET_by_offset(disp, _gloffset_VertexAttrib4ubv, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_VertexAttrib4uiv)(GLuint, const GLuint *);
#define CALL_VertexAttrib4uiv(disp, parameters) (* GET_VertexAttrib4uiv(disp)) parameters
#define GET_VertexAttrib4uiv(disp) ((_glptr_VertexAttrib4uiv)(GET_by_offset((disp), _gloffset_VertexAttrib4uiv)))
#define SET_VertexAttrib4uiv(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, const GLuint *) = func; \
   SET_by_offset(disp, _gloffset_VertexAttrib4uiv, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_VertexAttrib4usv)(GLuint, const GLushort *);
#define CALL_VertexAttrib4usv(disp, parameters) (* GET_VertexAttrib4usv(disp)) parameters
#define GET_VertexAttrib4usv(disp) ((_glptr_VertexAttrib4usv)(GET_by_offset((disp), _gloffset_VertexAttrib4usv)))
#define SET_VertexAttrib4usv(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, const GLushort *) = func; \
   SET_by_offset(disp, _gloffset_VertexAttrib4usv, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_VertexAttribPointer)(GLuint, GLint, GLenum, GLboolean, GLsizei, const GLvoid *);
#define CALL_VertexAttribPointer(disp, parameters) (* GET_VertexAttribPointer(disp)) parameters
#define GET_VertexAttribPointer(disp) ((_glptr_VertexAttribPointer)(GET_by_offset((disp), _gloffset_VertexAttribPointer)))
#define SET_VertexAttribPointer(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLint, GLenum, GLboolean, GLsizei, const GLvoid *) = func; \
   SET_by_offset(disp, _gloffset_VertexAttribPointer, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_UniformMatrix2x3fv)(GLint, GLsizei, GLboolean, const GLfloat *);
#define CALL_UniformMatrix2x3fv(disp, parameters) (* GET_UniformMatrix2x3fv(disp)) parameters
#define GET_UniformMatrix2x3fv(disp) ((_glptr_UniformMatrix2x3fv)(GET_by_offset((disp), _gloffset_UniformMatrix2x3fv)))
#define SET_UniformMatrix2x3fv(disp, func) do { \
   void (GLAPIENTRYP fn)(GLint, GLsizei, GLboolean, const GLfloat *) = func; \
   SET_by_offset(disp, _gloffset_UniformMatrix2x3fv, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_UniformMatrix2x4fv)(GLint, GLsizei, GLboolean, const GLfloat *);
#define CALL_UniformMatrix2x4fv(disp, parameters) (* GET_UniformMatrix2x4fv(disp)) parameters
#define GET_UniformMatrix2x4fv(disp) ((_glptr_UniformMatrix2x4fv)(GET_by_offset((disp), _gloffset_UniformMatrix2x4fv)))
#define SET_UniformMatrix2x4fv(disp, func) do { \
   void (GLAPIENTRYP fn)(GLint, GLsizei, GLboolean, const GLfloat *) = func; \
   SET_by_offset(disp, _gloffset_UniformMatrix2x4fv, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_UniformMatrix3x2fv)(GLint, GLsizei, GLboolean, const GLfloat *);
#define CALL_UniformMatrix3x2fv(disp, parameters) (* GET_UniformMatrix3x2fv(disp)) parameters
#define GET_UniformMatrix3x2fv(disp) ((_glptr_UniformMatrix3x2fv)(GET_by_offset((disp), _gloffset_UniformMatrix3x2fv)))
#define SET_UniformMatrix3x2fv(disp, func) do { \
   void (GLAPIENTRYP fn)(GLint, GLsizei, GLboolean, const GLfloat *) = func; \
   SET_by_offset(disp, _gloffset_UniformMatrix3x2fv, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_UniformMatrix3x4fv)(GLint, GLsizei, GLboolean, const GLfloat *);
#define CALL_UniformMatrix3x4fv(disp, parameters) (* GET_UniformMatrix3x4fv(disp)) parameters
#define GET_UniformMatrix3x4fv(disp) ((_glptr_UniformMatrix3x4fv)(GET_by_offset((disp), _gloffset_UniformMatrix3x4fv)))
#define SET_UniformMatrix3x4fv(disp, func) do { \
   void (GLAPIENTRYP fn)(GLint, GLsizei, GLboolean, const GLfloat *) = func; \
   SET_by_offset(disp, _gloffset_UniformMatrix3x4fv, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_UniformMatrix4x2fv)(GLint, GLsizei, GLboolean, const GLfloat *);
#define CALL_UniformMatrix4x2fv(disp, parameters) (* GET_UniformMatrix4x2fv(disp)) parameters
#define GET_UniformMatrix4x2fv(disp) ((_glptr_UniformMatrix4x2fv)(GET_by_offset((disp), _gloffset_UniformMatrix4x2fv)))
#define SET_UniformMatrix4x2fv(disp, func) do { \
   void (GLAPIENTRYP fn)(GLint, GLsizei, GLboolean, const GLfloat *) = func; \
   SET_by_offset(disp, _gloffset_UniformMatrix4x2fv, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_UniformMatrix4x3fv)(GLint, GLsizei, GLboolean, const GLfloat *);
#define CALL_UniformMatrix4x3fv(disp, parameters) (* GET_UniformMatrix4x3fv(disp)) parameters
#define GET_UniformMatrix4x3fv(disp) ((_glptr_UniformMatrix4x3fv)(GET_by_offset((disp), _gloffset_UniformMatrix4x3fv)))
#define SET_UniformMatrix4x3fv(disp, func) do { \
   void (GLAPIENTRYP fn)(GLint, GLsizei, GLboolean, const GLfloat *) = func; \
   SET_by_offset(disp, _gloffset_UniformMatrix4x3fv, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_BeginConditionalRender)(GLuint, GLenum);
#define CALL_BeginConditionalRender(disp, parameters) (* GET_BeginConditionalRender(disp)) parameters
#define GET_BeginConditionalRender(disp) ((_glptr_BeginConditionalRender)(GET_by_offset((disp), _gloffset_BeginConditionalRender)))
#define SET_BeginConditionalRender(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLenum) = func; \
   SET_by_offset(disp, _gloffset_BeginConditionalRender, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_BeginTransformFeedback)(GLenum);
#define CALL_BeginTransformFeedback(disp, parameters) (* GET_BeginTransformFeedback(disp)) parameters
#define GET_BeginTransformFeedback(disp) ((_glptr_BeginTransformFeedback)(GET_by_offset((disp), _gloffset_BeginTransformFeedback)))
#define SET_BeginTransformFeedback(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum) = func; \
   SET_by_offset(disp, _gloffset_BeginTransformFeedback, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_BindBufferBase)(GLenum, GLuint, GLuint);
#define CALL_BindBufferBase(disp, parameters) (* GET_BindBufferBase(disp)) parameters
#define GET_BindBufferBase(disp) ((_glptr_BindBufferBase)(GET_by_offset((disp), _gloffset_BindBufferBase)))
#define SET_BindBufferBase(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLuint, GLuint) = func; \
   SET_by_offset(disp, _gloffset_BindBufferBase, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_BindBufferRange)(GLenum, GLuint, GLuint, GLintptr, GLsizeiptr);
#define CALL_BindBufferRange(disp, parameters) (* GET_BindBufferRange(disp)) parameters
#define GET_BindBufferRange(disp) ((_glptr_BindBufferRange)(GET_by_offset((disp), _gloffset_BindBufferRange)))
#define SET_BindBufferRange(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLuint, GLuint, GLintptr, GLsizeiptr) = func; \
   SET_by_offset(disp, _gloffset_BindBufferRange, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_BindFragDataLocation)(GLuint, GLuint, const GLchar *);
#define CALL_BindFragDataLocation(disp, parameters) (* GET_BindFragDataLocation(disp)) parameters
#define GET_BindFragDataLocation(disp) ((_glptr_BindFragDataLocation)(GET_by_offset((disp), _gloffset_BindFragDataLocation)))
#define SET_BindFragDataLocation(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLuint, const GLchar *) = func; \
   SET_by_offset(disp, _gloffset_BindFragDataLocation, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_ClampColor)(GLenum, GLenum);
#define CALL_ClampColor(disp, parameters) (* GET_ClampColor(disp)) parameters
#define GET_ClampColor(disp) ((_glptr_ClampColor)(GET_by_offset((disp), _gloffset_ClampColor)))
#define SET_ClampColor(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLenum) = func; \
   SET_by_offset(disp, _gloffset_ClampColor, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_ClearBufferfi)(GLenum, GLint, GLfloat, GLint);
#define CALL_ClearBufferfi(disp, parameters) (* GET_ClearBufferfi(disp)) parameters
#define GET_ClearBufferfi(disp) ((_glptr_ClearBufferfi)(GET_by_offset((disp), _gloffset_ClearBufferfi)))
#define SET_ClearBufferfi(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLint, GLfloat, GLint) = func; \
   SET_by_offset(disp, _gloffset_ClearBufferfi, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_ClearBufferfv)(GLenum, GLint, const GLfloat *);
#define CALL_ClearBufferfv(disp, parameters) (* GET_ClearBufferfv(disp)) parameters
#define GET_ClearBufferfv(disp) ((_glptr_ClearBufferfv)(GET_by_offset((disp), _gloffset_ClearBufferfv)))
#define SET_ClearBufferfv(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLint, const GLfloat *) = func; \
   SET_by_offset(disp, _gloffset_ClearBufferfv, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_ClearBufferiv)(GLenum, GLint, const GLint *);
#define CALL_ClearBufferiv(disp, parameters) (* GET_ClearBufferiv(disp)) parameters
#define GET_ClearBufferiv(disp) ((_glptr_ClearBufferiv)(GET_by_offset((disp), _gloffset_ClearBufferiv)))
#define SET_ClearBufferiv(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLint, const GLint *) = func; \
   SET_by_offset(disp, _gloffset_ClearBufferiv, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_ClearBufferuiv)(GLenum, GLint, const GLuint *);
#define CALL_ClearBufferuiv(disp, parameters) (* GET_ClearBufferuiv(disp)) parameters
#define GET_ClearBufferuiv(disp) ((_glptr_ClearBufferuiv)(GET_by_offset((disp), _gloffset_ClearBufferuiv)))
#define SET_ClearBufferuiv(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLint, const GLuint *) = func; \
   SET_by_offset(disp, _gloffset_ClearBufferuiv, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_ColorMaski)(GLuint, GLboolean, GLboolean, GLboolean, GLboolean);
#define CALL_ColorMaski(disp, parameters) (* GET_ColorMaski(disp)) parameters
#define GET_ColorMaski(disp) ((_glptr_ColorMaski)(GET_by_offset((disp), _gloffset_ColorMaski)))
#define SET_ColorMaski(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLboolean, GLboolean, GLboolean, GLboolean) = func; \
   SET_by_offset(disp, _gloffset_ColorMaski, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_Disablei)(GLenum, GLuint);
#define CALL_Disablei(disp, parameters) (* GET_Disablei(disp)) parameters
#define GET_Disablei(disp) ((_glptr_Disablei)(GET_by_offset((disp), _gloffset_Disablei)))
#define SET_Disablei(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLuint) = func; \
   SET_by_offset(disp, _gloffset_Disablei, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_Enablei)(GLenum, GLuint);
#define CALL_Enablei(disp, parameters) (* GET_Enablei(disp)) parameters
#define GET_Enablei(disp) ((_glptr_Enablei)(GET_by_offset((disp), _gloffset_Enablei)))
#define SET_Enablei(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLuint) = func; \
   SET_by_offset(disp, _gloffset_Enablei, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_EndConditionalRender)(void);
#define CALL_EndConditionalRender(disp, parameters) (* GET_EndConditionalRender(disp)) parameters
#define GET_EndConditionalRender(disp) ((_glptr_EndConditionalRender)(GET_by_offset((disp), _gloffset_EndConditionalRender)))
#define SET_EndConditionalRender(disp, func) do { \
   void (GLAPIENTRYP fn)(void) = func; \
   SET_by_offset(disp, _gloffset_EndConditionalRender, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_EndTransformFeedback)(void);
#define CALL_EndTransformFeedback(disp, parameters) (* GET_EndTransformFeedback(disp)) parameters
#define GET_EndTransformFeedback(disp) ((_glptr_EndTransformFeedback)(GET_by_offset((disp), _gloffset_EndTransformFeedback)))
#define SET_EndTransformFeedback(disp, func) do { \
   void (GLAPIENTRYP fn)(void) = func; \
   SET_by_offset(disp, _gloffset_EndTransformFeedback, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_GetBooleani_v)(GLenum, GLuint, GLboolean *);
#define CALL_GetBooleani_v(disp, parameters) (* GET_GetBooleani_v(disp)) parameters
#define GET_GetBooleani_v(disp) ((_glptr_GetBooleani_v)(GET_by_offset((disp), _gloffset_GetBooleani_v)))
#define SET_GetBooleani_v(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLuint, GLboolean *) = func; \
   SET_by_offset(disp, _gloffset_GetBooleani_v, fn); \
} while (0)

typedef GLint (GLAPIENTRYP _glptr_GetFragDataLocation)(GLuint, const GLchar *);
#define CALL_GetFragDataLocation(disp, parameters) (* GET_GetFragDataLocation(disp)) parameters
#define GET_GetFragDataLocation(disp) ((_glptr_GetFragDataLocation)(GET_by_offset((disp), _gloffset_GetFragDataLocation)))
#define SET_GetFragDataLocation(disp, func) do { \
   GLint (GLAPIENTRYP fn)(GLuint, const GLchar *) = func; \
   SET_by_offset(disp, _gloffset_GetFragDataLocation, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_GetIntegeri_v)(GLenum, GLuint, GLint *);
#define CALL_GetIntegeri_v(disp, parameters) (* GET_GetIntegeri_v(disp)) parameters
#define GET_GetIntegeri_v(disp) ((_glptr_GetIntegeri_v)(GET_by_offset((disp), _gloffset_GetIntegeri_v)))
#define SET_GetIntegeri_v(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLuint, GLint *) = func; \
   SET_by_offset(disp, _gloffset_GetIntegeri_v, fn); \
} while (0)

typedef const GLubyte * (GLAPIENTRYP _glptr_GetStringi)(GLenum, GLuint);
#define CALL_GetStringi(disp, parameters) (* GET_GetStringi(disp)) parameters
#define GET_GetStringi(disp) ((_glptr_GetStringi)(GET_by_offset((disp), _gloffset_GetStringi)))
#define SET_GetStringi(disp, func) do { \
   const GLubyte * (GLAPIENTRYP fn)(GLenum, GLuint) = func; \
   SET_by_offset(disp, _gloffset_GetStringi, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_GetTexParameterIiv)(GLenum, GLenum, GLint *);
#define CALL_GetTexParameterIiv(disp, parameters) (* GET_GetTexParameterIiv(disp)) parameters
#define GET_GetTexParameterIiv(disp) ((_glptr_GetTexParameterIiv)(GET_by_offset((disp), _gloffset_GetTexParameterIiv)))
#define SET_GetTexParameterIiv(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLenum, GLint *) = func; \
   SET_by_offset(disp, _gloffset_GetTexParameterIiv, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_GetTexParameterIuiv)(GLenum, GLenum, GLuint *);
#define CALL_GetTexParameterIuiv(disp, parameters) (* GET_GetTexParameterIuiv(disp)) parameters
#define GET_GetTexParameterIuiv(disp) ((_glptr_GetTexParameterIuiv)(GET_by_offset((disp), _gloffset_GetTexParameterIuiv)))
#define SET_GetTexParameterIuiv(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLenum, GLuint *) = func; \
   SET_by_offset(disp, _gloffset_GetTexParameterIuiv, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_GetTransformFeedbackVarying)(GLuint, GLuint, GLsizei, GLsizei *, GLsizei *, GLenum *, GLchar *);
#define CALL_GetTransformFeedbackVarying(disp, parameters) (* GET_GetTransformFeedbackVarying(disp)) parameters
#define GET_GetTransformFeedbackVarying(disp) ((_glptr_GetTransformFeedbackVarying)(GET_by_offset((disp), _gloffset_GetTransformFeedbackVarying)))
#define SET_GetTransformFeedbackVarying(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLuint, GLsizei, GLsizei *, GLsizei *, GLenum *, GLchar *) = func; \
   SET_by_offset(disp, _gloffset_GetTransformFeedbackVarying, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_GetUniformuiv)(GLuint, GLint, GLuint *);
#define CALL_GetUniformuiv(disp, parameters) (* GET_GetUniformuiv(disp)) parameters
#define GET_GetUniformuiv(disp) ((_glptr_GetUniformuiv)(GET_by_offset((disp), _gloffset_GetUniformuiv)))
#define SET_GetUniformuiv(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLint, GLuint *) = func; \
   SET_by_offset(disp, _gloffset_GetUniformuiv, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_GetVertexAttribIiv)(GLuint, GLenum, GLint *);
#define CALL_GetVertexAttribIiv(disp, parameters) (* GET_GetVertexAttribIiv(disp)) parameters
#define GET_GetVertexAttribIiv(disp) ((_glptr_GetVertexAttribIiv)(GET_by_offset((disp), _gloffset_GetVertexAttribIiv)))
#define SET_GetVertexAttribIiv(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLenum, GLint *) = func; \
   SET_by_offset(disp, _gloffset_GetVertexAttribIiv, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_GetVertexAttribIuiv)(GLuint, GLenum, GLuint *);
#define CALL_GetVertexAttribIuiv(disp, parameters) (* GET_GetVertexAttribIuiv(disp)) parameters
#define GET_GetVertexAttribIuiv(disp) ((_glptr_GetVertexAttribIuiv)(GET_by_offset((disp), _gloffset_GetVertexAttribIuiv)))
#define SET_GetVertexAttribIuiv(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLenum, GLuint *) = func; \
   SET_by_offset(disp, _gloffset_GetVertexAttribIuiv, fn); \
} while (0)

typedef GLboolean (GLAPIENTRYP _glptr_IsEnabledi)(GLenum, GLuint);
#define CALL_IsEnabledi(disp, parameters) (* GET_IsEnabledi(disp)) parameters
#define GET_IsEnabledi(disp) ((_glptr_IsEnabledi)(GET_by_offset((disp), _gloffset_IsEnabledi)))
#define SET_IsEnabledi(disp, func) do { \
   GLboolean (GLAPIENTRYP fn)(GLenum, GLuint) = func; \
   SET_by_offset(disp, _gloffset_IsEnabledi, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_TexParameterIiv)(GLenum, GLenum, const GLint *);
#define CALL_TexParameterIiv(disp, parameters) (* GET_TexParameterIiv(disp)) parameters
#define GET_TexParameterIiv(disp) ((_glptr_TexParameterIiv)(GET_by_offset((disp), _gloffset_TexParameterIiv)))
#define SET_TexParameterIiv(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLenum, const GLint *) = func; \
   SET_by_offset(disp, _gloffset_TexParameterIiv, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_TexParameterIuiv)(GLenum, GLenum, const GLuint *);
#define CALL_TexParameterIuiv(disp, parameters) (* GET_TexParameterIuiv(disp)) parameters
#define GET_TexParameterIuiv(disp) ((_glptr_TexParameterIuiv)(GET_by_offset((disp), _gloffset_TexParameterIuiv)))
#define SET_TexParameterIuiv(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLenum, const GLuint *) = func; \
   SET_by_offset(disp, _gloffset_TexParameterIuiv, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_TransformFeedbackVaryings)(GLuint, GLsizei, const GLchar * const *, GLenum);
#define CALL_TransformFeedbackVaryings(disp, parameters) (* GET_TransformFeedbackVaryings(disp)) parameters
#define GET_TransformFeedbackVaryings(disp) ((_glptr_TransformFeedbackVaryings)(GET_by_offset((disp), _gloffset_TransformFeedbackVaryings)))
#define SET_TransformFeedbackVaryings(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLsizei, const GLchar * const *, GLenum) = func; \
   SET_by_offset(disp, _gloffset_TransformFeedbackVaryings, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_Uniform1ui)(GLint, GLuint);
#define CALL_Uniform1ui(disp, parameters) (* GET_Uniform1ui(disp)) parameters
#define GET_Uniform1ui(disp) ((_glptr_Uniform1ui)(GET_by_offset((disp), _gloffset_Uniform1ui)))
#define SET_Uniform1ui(disp, func) do { \
   void (GLAPIENTRYP fn)(GLint, GLuint) = func; \
   SET_by_offset(disp, _gloffset_Uniform1ui, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_Uniform1uiv)(GLint, GLsizei, const GLuint *);
#define CALL_Uniform1uiv(disp, parameters) (* GET_Uniform1uiv(disp)) parameters
#define GET_Uniform1uiv(disp) ((_glptr_Uniform1uiv)(GET_by_offset((disp), _gloffset_Uniform1uiv)))
#define SET_Uniform1uiv(disp, func) do { \
   void (GLAPIENTRYP fn)(GLint, GLsizei, const GLuint *) = func; \
   SET_by_offset(disp, _gloffset_Uniform1uiv, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_Uniform2ui)(GLint, GLuint, GLuint);
#define CALL_Uniform2ui(disp, parameters) (* GET_Uniform2ui(disp)) parameters
#define GET_Uniform2ui(disp) ((_glptr_Uniform2ui)(GET_by_offset((disp), _gloffset_Uniform2ui)))
#define SET_Uniform2ui(disp, func) do { \
   void (GLAPIENTRYP fn)(GLint, GLuint, GLuint) = func; \
   SET_by_offset(disp, _gloffset_Uniform2ui, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_Uniform2uiv)(GLint, GLsizei, const GLuint *);
#define CALL_Uniform2uiv(disp, parameters) (* GET_Uniform2uiv(disp)) parameters
#define GET_Uniform2uiv(disp) ((_glptr_Uniform2uiv)(GET_by_offset((disp), _gloffset_Uniform2uiv)))
#define SET_Uniform2uiv(disp, func) do { \
   void (GLAPIENTRYP fn)(GLint, GLsizei, const GLuint *) = func; \
   SET_by_offset(disp, _gloffset_Uniform2uiv, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_Uniform3ui)(GLint, GLuint, GLuint, GLuint);
#define CALL_Uniform3ui(disp, parameters) (* GET_Uniform3ui(disp)) parameters
#define GET_Uniform3ui(disp) ((_glptr_Uniform3ui)(GET_by_offset((disp), _gloffset_Uniform3ui)))
#define SET_Uniform3ui(disp, func) do { \
   void (GLAPIENTRYP fn)(GLint, GLuint, GLuint, GLuint) = func; \
   SET_by_offset(disp, _gloffset_Uniform3ui, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_Uniform3uiv)(GLint, GLsizei, const GLuint *);
#define CALL_Uniform3uiv(disp, parameters) (* GET_Uniform3uiv(disp)) parameters
#define GET_Uniform3uiv(disp) ((_glptr_Uniform3uiv)(GET_by_offset((disp), _gloffset_Uniform3uiv)))
#define SET_Uniform3uiv(disp, func) do { \
   void (GLAPIENTRYP fn)(GLint, GLsizei, const GLuint *) = func; \
   SET_by_offset(disp, _gloffset_Uniform3uiv, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_Uniform4ui)(GLint, GLuint, GLuint, GLuint, GLuint);
#define CALL_Uniform4ui(disp, parameters) (* GET_Uniform4ui(disp)) parameters
#define GET_Uniform4ui(disp) ((_glptr_Uniform4ui)(GET_by_offset((disp), _gloffset_Uniform4ui)))
#define SET_Uniform4ui(disp, func) do { \
   void (GLAPIENTRYP fn)(GLint, GLuint, GLuint, GLuint, GLuint) = func; \
   SET_by_offset(disp, _gloffset_Uniform4ui, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_Uniform4uiv)(GLint, GLsizei, const GLuint *);
#define CALL_Uniform4uiv(disp, parameters) (* GET_Uniform4uiv(disp)) parameters
#define GET_Uniform4uiv(disp) ((_glptr_Uniform4uiv)(GET_by_offset((disp), _gloffset_Uniform4uiv)))
#define SET_Uniform4uiv(disp, func) do { \
   void (GLAPIENTRYP fn)(GLint, GLsizei, const GLuint *) = func; \
   SET_by_offset(disp, _gloffset_Uniform4uiv, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_VertexAttribI1iv)(GLuint, const GLint *);
#define CALL_VertexAttribI1iv(disp, parameters) (* GET_VertexAttribI1iv(disp)) parameters
#define GET_VertexAttribI1iv(disp) ((_glptr_VertexAttribI1iv)(GET_by_offset((disp), _gloffset_VertexAttribI1iv)))
#define SET_VertexAttribI1iv(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, const GLint *) = func; \
   SET_by_offset(disp, _gloffset_VertexAttribI1iv, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_VertexAttribI1uiv)(GLuint, const GLuint *);
#define CALL_VertexAttribI1uiv(disp, parameters) (* GET_VertexAttribI1uiv(disp)) parameters
#define GET_VertexAttribI1uiv(disp) ((_glptr_VertexAttribI1uiv)(GET_by_offset((disp), _gloffset_VertexAttribI1uiv)))
#define SET_VertexAttribI1uiv(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, const GLuint *) = func; \
   SET_by_offset(disp, _gloffset_VertexAttribI1uiv, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_VertexAttribI4bv)(GLuint, const GLbyte *);
#define CALL_VertexAttribI4bv(disp, parameters) (* GET_VertexAttribI4bv(disp)) parameters
#define GET_VertexAttribI4bv(disp) ((_glptr_VertexAttribI4bv)(GET_by_offset((disp), _gloffset_VertexAttribI4bv)))
#define SET_VertexAttribI4bv(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, const GLbyte *) = func; \
   SET_by_offset(disp, _gloffset_VertexAttribI4bv, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_VertexAttribI4sv)(GLuint, const GLshort *);
#define CALL_VertexAttribI4sv(disp, parameters) (* GET_VertexAttribI4sv(disp)) parameters
#define GET_VertexAttribI4sv(disp) ((_glptr_VertexAttribI4sv)(GET_by_offset((disp), _gloffset_VertexAttribI4sv)))
#define SET_VertexAttribI4sv(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, const GLshort *) = func; \
   SET_by_offset(disp, _gloffset_VertexAttribI4sv, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_VertexAttribI4ubv)(GLuint, const GLubyte *);
#define CALL_VertexAttribI4ubv(disp, parameters) (* GET_VertexAttribI4ubv(disp)) parameters
#define GET_VertexAttribI4ubv(disp) ((_glptr_VertexAttribI4ubv)(GET_by_offset((disp), _gloffset_VertexAttribI4ubv)))
#define SET_VertexAttribI4ubv(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, const GLubyte *) = func; \
   SET_by_offset(disp, _gloffset_VertexAttribI4ubv, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_VertexAttribI4usv)(GLuint, const GLushort *);
#define CALL_VertexAttribI4usv(disp, parameters) (* GET_VertexAttribI4usv(disp)) parameters
#define GET_VertexAttribI4usv(disp) ((_glptr_VertexAttribI4usv)(GET_by_offset((disp), _gloffset_VertexAttribI4usv)))
#define SET_VertexAttribI4usv(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, const GLushort *) = func; \
   SET_by_offset(disp, _gloffset_VertexAttribI4usv, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_VertexAttribIPointer)(GLuint, GLint, GLenum, GLsizei, const GLvoid *);
#define CALL_VertexAttribIPointer(disp, parameters) (* GET_VertexAttribIPointer(disp)) parameters
#define GET_VertexAttribIPointer(disp) ((_glptr_VertexAttribIPointer)(GET_by_offset((disp), _gloffset_VertexAttribIPointer)))
#define SET_VertexAttribIPointer(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLint, GLenum, GLsizei, const GLvoid *) = func; \
   SET_by_offset(disp, _gloffset_VertexAttribIPointer, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_PrimitiveRestartIndex)(GLuint);
#define CALL_PrimitiveRestartIndex(disp, parameters) (* GET_PrimitiveRestartIndex(disp)) parameters
#define GET_PrimitiveRestartIndex(disp) ((_glptr_PrimitiveRestartIndex)(GET_by_offset((disp), _gloffset_PrimitiveRestartIndex)))
#define SET_PrimitiveRestartIndex(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint) = func; \
   SET_by_offset(disp, _gloffset_PrimitiveRestartIndex, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_TexBuffer)(GLenum, GLenum, GLuint);
#define CALL_TexBuffer(disp, parameters) (* GET_TexBuffer(disp)) parameters
#define GET_TexBuffer(disp) ((_glptr_TexBuffer)(GET_by_offset((disp), _gloffset_TexBuffer)))
#define SET_TexBuffer(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLenum, GLuint) = func; \
   SET_by_offset(disp, _gloffset_TexBuffer, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_FramebufferTexture)(GLenum, GLenum, GLuint, GLint);
#define CALL_FramebufferTexture(disp, parameters) (* GET_FramebufferTexture(disp)) parameters
#define GET_FramebufferTexture(disp) ((_glptr_FramebufferTexture)(GET_by_offset((disp), _gloffset_FramebufferTexture)))
#define SET_FramebufferTexture(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLenum, GLuint, GLint) = func; \
   SET_by_offset(disp, _gloffset_FramebufferTexture, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_GetBufferParameteri64v)(GLenum, GLenum, GLint64 *);
#define CALL_GetBufferParameteri64v(disp, parameters) (* GET_GetBufferParameteri64v(disp)) parameters
#define GET_GetBufferParameteri64v(disp) ((_glptr_GetBufferParameteri64v)(GET_by_offset((disp), _gloffset_GetBufferParameteri64v)))
#define SET_GetBufferParameteri64v(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLenum, GLint64 *) = func; \
   SET_by_offset(disp, _gloffset_GetBufferParameteri64v, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_GetInteger64i_v)(GLenum, GLuint, GLint64 *);
#define CALL_GetInteger64i_v(disp, parameters) (* GET_GetInteger64i_v(disp)) parameters
#define GET_GetInteger64i_v(disp) ((_glptr_GetInteger64i_v)(GET_by_offset((disp), _gloffset_GetInteger64i_v)))
#define SET_GetInteger64i_v(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLuint, GLint64 *) = func; \
   SET_by_offset(disp, _gloffset_GetInteger64i_v, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_VertexAttribDivisor)(GLuint, GLuint);
#define CALL_VertexAttribDivisor(disp, parameters) (* GET_VertexAttribDivisor(disp)) parameters
#define GET_VertexAttribDivisor(disp) ((_glptr_VertexAttribDivisor)(GET_by_offset((disp), _gloffset_VertexAttribDivisor)))
#define SET_VertexAttribDivisor(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLuint) = func; \
   SET_by_offset(disp, _gloffset_VertexAttribDivisor, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_MinSampleShading)(GLfloat);
#define CALL_MinSampleShading(disp, parameters) (* GET_MinSampleShading(disp)) parameters
#define GET_MinSampleShading(disp) ((_glptr_MinSampleShading)(GET_by_offset((disp), _gloffset_MinSampleShading)))
#define SET_MinSampleShading(disp, func) do { \
   void (GLAPIENTRYP fn)(GLfloat) = func; \
   SET_by_offset(disp, _gloffset_MinSampleShading, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_MemoryBarrierByRegion)(GLbitfield);
#define CALL_MemoryBarrierByRegion(disp, parameters) (* GET_MemoryBarrierByRegion(disp)) parameters
#define GET_MemoryBarrierByRegion(disp) ((_glptr_MemoryBarrierByRegion)(GET_by_offset((disp), _gloffset_MemoryBarrierByRegion)))
#define SET_MemoryBarrierByRegion(disp, func) do { \
   void (GLAPIENTRYP fn)(GLbitfield) = func; \
   SET_by_offset(disp, _gloffset_MemoryBarrierByRegion, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_BindProgramARB)(GLenum, GLuint);
#define CALL_BindProgramARB(disp, parameters) (* GET_BindProgramARB(disp)) parameters
#define GET_BindProgramARB(disp) ((_glptr_BindProgramARB)(GET_by_offset((disp), _gloffset_BindProgramARB)))
#define SET_BindProgramARB(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLuint) = func; \
   SET_by_offset(disp, _gloffset_BindProgramARB, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_DeleteProgramsARB)(GLsizei, const GLuint *);
#define CALL_DeleteProgramsARB(disp, parameters) (* GET_DeleteProgramsARB(disp)) parameters
#define GET_DeleteProgramsARB(disp) ((_glptr_DeleteProgramsARB)(GET_by_offset((disp), _gloffset_DeleteProgramsARB)))
#define SET_DeleteProgramsARB(disp, func) do { \
   void (GLAPIENTRYP fn)(GLsizei, const GLuint *) = func; \
   SET_by_offset(disp, _gloffset_DeleteProgramsARB, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_GenProgramsARB)(GLsizei, GLuint *);
#define CALL_GenProgramsARB(disp, parameters) (* GET_GenProgramsARB(disp)) parameters
#define GET_GenProgramsARB(disp) ((_glptr_GenProgramsARB)(GET_by_offset((disp), _gloffset_GenProgramsARB)))
#define SET_GenProgramsARB(disp, func) do { \
   void (GLAPIENTRYP fn)(GLsizei, GLuint *) = func; \
   SET_by_offset(disp, _gloffset_GenProgramsARB, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_GetProgramEnvParameterdvARB)(GLenum, GLuint, GLdouble *);
#define CALL_GetProgramEnvParameterdvARB(disp, parameters) (* GET_GetProgramEnvParameterdvARB(disp)) parameters
#define GET_GetProgramEnvParameterdvARB(disp) ((_glptr_GetProgramEnvParameterdvARB)(GET_by_offset((disp), _gloffset_GetProgramEnvParameterdvARB)))
#define SET_GetProgramEnvParameterdvARB(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLuint, GLdouble *) = func; \
   SET_by_offset(disp, _gloffset_GetProgramEnvParameterdvARB, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_GetProgramEnvParameterfvARB)(GLenum, GLuint, GLfloat *);
#define CALL_GetProgramEnvParameterfvARB(disp, parameters) (* GET_GetProgramEnvParameterfvARB(disp)) parameters
#define GET_GetProgramEnvParameterfvARB(disp) ((_glptr_GetProgramEnvParameterfvARB)(GET_by_offset((disp), _gloffset_GetProgramEnvParameterfvARB)))
#define SET_GetProgramEnvParameterfvARB(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLuint, GLfloat *) = func; \
   SET_by_offset(disp, _gloffset_GetProgramEnvParameterfvARB, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_GetProgramLocalParameterdvARB)(GLenum, GLuint, GLdouble *);
#define CALL_GetProgramLocalParameterdvARB(disp, parameters) (* GET_GetProgramLocalParameterdvARB(disp)) parameters
#define GET_GetProgramLocalParameterdvARB(disp) ((_glptr_GetProgramLocalParameterdvARB)(GET_by_offset((disp), _gloffset_GetProgramLocalParameterdvARB)))
#define SET_GetProgramLocalParameterdvARB(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLuint, GLdouble *) = func; \
   SET_by_offset(disp, _gloffset_GetProgramLocalParameterdvARB, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_GetProgramLocalParameterfvARB)(GLenum, GLuint, GLfloat *);
#define CALL_GetProgramLocalParameterfvARB(disp, parameters) (* GET_GetProgramLocalParameterfvARB(disp)) parameters
#define GET_GetProgramLocalParameterfvARB(disp) ((_glptr_GetProgramLocalParameterfvARB)(GET_by_offset((disp), _gloffset_GetProgramLocalParameterfvARB)))
#define SET_GetProgramLocalParameterfvARB(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLuint, GLfloat *) = func; \
   SET_by_offset(disp, _gloffset_GetProgramLocalParameterfvARB, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_GetProgramStringARB)(GLenum, GLenum, GLvoid *);
#define CALL_GetProgramStringARB(disp, parameters) (* GET_GetProgramStringARB(disp)) parameters
#define GET_GetProgramStringARB(disp) ((_glptr_GetProgramStringARB)(GET_by_offset((disp), _gloffset_GetProgramStringARB)))
#define SET_GetProgramStringARB(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLenum, GLvoid *) = func; \
   SET_by_offset(disp, _gloffset_GetProgramStringARB, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_GetProgramivARB)(GLenum, GLenum, GLint *);
#define CALL_GetProgramivARB(disp, parameters) (* GET_GetProgramivARB(disp)) parameters
#define GET_GetProgramivARB(disp) ((_glptr_GetProgramivARB)(GET_by_offset((disp), _gloffset_GetProgramivARB)))
#define SET_GetProgramivARB(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLenum, GLint *) = func; \
   SET_by_offset(disp, _gloffset_GetProgramivARB, fn); \
} while (0)

typedef GLboolean (GLAPIENTRYP _glptr_IsProgramARB)(GLuint);
#define CALL_IsProgramARB(disp, parameters) (* GET_IsProgramARB(disp)) parameters
#define GET_IsProgramARB(disp) ((_glptr_IsProgramARB)(GET_by_offset((disp), _gloffset_IsProgramARB)))
#define SET_IsProgramARB(disp, func) do { \
   GLboolean (GLAPIENTRYP fn)(GLuint) = func; \
   SET_by_offset(disp, _gloffset_IsProgramARB, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_ProgramEnvParameter4dARB)(GLenum, GLuint, GLdouble, GLdouble, GLdouble, GLdouble);
#define CALL_ProgramEnvParameter4dARB(disp, parameters) (* GET_ProgramEnvParameter4dARB(disp)) parameters
#define GET_ProgramEnvParameter4dARB(disp) ((_glptr_ProgramEnvParameter4dARB)(GET_by_offset((disp), _gloffset_ProgramEnvParameter4dARB)))
#define SET_ProgramEnvParameter4dARB(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLuint, GLdouble, GLdouble, GLdouble, GLdouble) = func; \
   SET_by_offset(disp, _gloffset_ProgramEnvParameter4dARB, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_ProgramEnvParameter4dvARB)(GLenum, GLuint, const GLdouble *);
#define CALL_ProgramEnvParameter4dvARB(disp, parameters) (* GET_ProgramEnvParameter4dvARB(disp)) parameters
#define GET_ProgramEnvParameter4dvARB(disp) ((_glptr_ProgramEnvParameter4dvARB)(GET_by_offset((disp), _gloffset_ProgramEnvParameter4dvARB)))
#define SET_ProgramEnvParameter4dvARB(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLuint, const GLdouble *) = func; \
   SET_by_offset(disp, _gloffset_ProgramEnvParameter4dvARB, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_ProgramEnvParameter4fARB)(GLenum, GLuint, GLfloat, GLfloat, GLfloat, GLfloat);
#define CALL_ProgramEnvParameter4fARB(disp, parameters) (* GET_ProgramEnvParameter4fARB(disp)) parameters
#define GET_ProgramEnvParameter4fARB(disp) ((_glptr_ProgramEnvParameter4fARB)(GET_by_offset((disp), _gloffset_ProgramEnvParameter4fARB)))
#define SET_ProgramEnvParameter4fARB(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLuint, GLfloat, GLfloat, GLfloat, GLfloat) = func; \
   SET_by_offset(disp, _gloffset_ProgramEnvParameter4fARB, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_ProgramEnvParameter4fvARB)(GLenum, GLuint, const GLfloat *);
#define CALL_ProgramEnvParameter4fvARB(disp, parameters) (* GET_ProgramEnvParameter4fvARB(disp)) parameters
#define GET_ProgramEnvParameter4fvARB(disp) ((_glptr_ProgramEnvParameter4fvARB)(GET_by_offset((disp), _gloffset_ProgramEnvParameter4fvARB)))
#define SET_ProgramEnvParameter4fvARB(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLuint, const GLfloat *) = func; \
   SET_by_offset(disp, _gloffset_ProgramEnvParameter4fvARB, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_ProgramLocalParameter4dARB)(GLenum, GLuint, GLdouble, GLdouble, GLdouble, GLdouble);
#define CALL_ProgramLocalParameter4dARB(disp, parameters) (* GET_ProgramLocalParameter4dARB(disp)) parameters
#define GET_ProgramLocalParameter4dARB(disp) ((_glptr_ProgramLocalParameter4dARB)(GET_by_offset((disp), _gloffset_ProgramLocalParameter4dARB)))
#define SET_ProgramLocalParameter4dARB(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLuint, GLdouble, GLdouble, GLdouble, GLdouble) = func; \
   SET_by_offset(disp, _gloffset_ProgramLocalParameter4dARB, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_ProgramLocalParameter4dvARB)(GLenum, GLuint, const GLdouble *);
#define CALL_ProgramLocalParameter4dvARB(disp, parameters) (* GET_ProgramLocalParameter4dvARB(disp)) parameters
#define GET_ProgramLocalParameter4dvARB(disp) ((_glptr_ProgramLocalParameter4dvARB)(GET_by_offset((disp), _gloffset_ProgramLocalParameter4dvARB)))
#define SET_ProgramLocalParameter4dvARB(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLuint, const GLdouble *) = func; \
   SET_by_offset(disp, _gloffset_ProgramLocalParameter4dvARB, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_ProgramLocalParameter4fARB)(GLenum, GLuint, GLfloat, GLfloat, GLfloat, GLfloat);
#define CALL_ProgramLocalParameter4fARB(disp, parameters) (* GET_ProgramLocalParameter4fARB(disp)) parameters
#define GET_ProgramLocalParameter4fARB(disp) ((_glptr_ProgramLocalParameter4fARB)(GET_by_offset((disp), _gloffset_ProgramLocalParameter4fARB)))
#define SET_ProgramLocalParameter4fARB(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLuint, GLfloat, GLfloat, GLfloat, GLfloat) = func; \
   SET_by_offset(disp, _gloffset_ProgramLocalParameter4fARB, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_ProgramLocalParameter4fvARB)(GLenum, GLuint, const GLfloat *);
#define CALL_ProgramLocalParameter4fvARB(disp, parameters) (* GET_ProgramLocalParameter4fvARB(disp)) parameters
#define GET_ProgramLocalParameter4fvARB(disp) ((_glptr_ProgramLocalParameter4fvARB)(GET_by_offset((disp), _gloffset_ProgramLocalParameter4fvARB)))
#define SET_ProgramLocalParameter4fvARB(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLuint, const GLfloat *) = func; \
   SET_by_offset(disp, _gloffset_ProgramLocalParameter4fvARB, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_ProgramStringARB)(GLenum, GLenum, GLsizei, const GLvoid *);
#define CALL_ProgramStringARB(disp, parameters) (* GET_ProgramStringARB(disp)) parameters
#define GET_ProgramStringARB(disp) ((_glptr_ProgramStringARB)(GET_by_offset((disp), _gloffset_ProgramStringARB)))
#define SET_ProgramStringARB(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLenum, GLsizei, const GLvoid *) = func; \
   SET_by_offset(disp, _gloffset_ProgramStringARB, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_VertexAttrib1fARB)(GLuint, GLfloat);
#define CALL_VertexAttrib1fARB(disp, parameters) (* GET_VertexAttrib1fARB(disp)) parameters
#define GET_VertexAttrib1fARB(disp) ((_glptr_VertexAttrib1fARB)(GET_by_offset((disp), _gloffset_VertexAttrib1fARB)))
#define SET_VertexAttrib1fARB(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLfloat) = func; \
   SET_by_offset(disp, _gloffset_VertexAttrib1fARB, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_VertexAttrib1fvARB)(GLuint, const GLfloat *);
#define CALL_VertexAttrib1fvARB(disp, parameters) (* GET_VertexAttrib1fvARB(disp)) parameters
#define GET_VertexAttrib1fvARB(disp) ((_glptr_VertexAttrib1fvARB)(GET_by_offset((disp), _gloffset_VertexAttrib1fvARB)))
#define SET_VertexAttrib1fvARB(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, const GLfloat *) = func; \
   SET_by_offset(disp, _gloffset_VertexAttrib1fvARB, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_VertexAttrib2fARB)(GLuint, GLfloat, GLfloat);
#define CALL_VertexAttrib2fARB(disp, parameters) (* GET_VertexAttrib2fARB(disp)) parameters
#define GET_VertexAttrib2fARB(disp) ((_glptr_VertexAttrib2fARB)(GET_by_offset((disp), _gloffset_VertexAttrib2fARB)))
#define SET_VertexAttrib2fARB(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLfloat, GLfloat) = func; \
   SET_by_offset(disp, _gloffset_VertexAttrib2fARB, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_VertexAttrib2fvARB)(GLuint, const GLfloat *);
#define CALL_VertexAttrib2fvARB(disp, parameters) (* GET_VertexAttrib2fvARB(disp)) parameters
#define GET_VertexAttrib2fvARB(disp) ((_glptr_VertexAttrib2fvARB)(GET_by_offset((disp), _gloffset_VertexAttrib2fvARB)))
#define SET_VertexAttrib2fvARB(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, const GLfloat *) = func; \
   SET_by_offset(disp, _gloffset_VertexAttrib2fvARB, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_VertexAttrib3fARB)(GLuint, GLfloat, GLfloat, GLfloat);
#define CALL_VertexAttrib3fARB(disp, parameters) (* GET_VertexAttrib3fARB(disp)) parameters
#define GET_VertexAttrib3fARB(disp) ((_glptr_VertexAttrib3fARB)(GET_by_offset((disp), _gloffset_VertexAttrib3fARB)))
#define SET_VertexAttrib3fARB(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLfloat, GLfloat, GLfloat) = func; \
   SET_by_offset(disp, _gloffset_VertexAttrib3fARB, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_VertexAttrib3fvARB)(GLuint, const GLfloat *);
#define CALL_VertexAttrib3fvARB(disp, parameters) (* GET_VertexAttrib3fvARB(disp)) parameters
#define GET_VertexAttrib3fvARB(disp) ((_glptr_VertexAttrib3fvARB)(GET_by_offset((disp), _gloffset_VertexAttrib3fvARB)))
#define SET_VertexAttrib3fvARB(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, const GLfloat *) = func; \
   SET_by_offset(disp, _gloffset_VertexAttrib3fvARB, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_VertexAttrib4fARB)(GLuint, GLfloat, GLfloat, GLfloat, GLfloat);
#define CALL_VertexAttrib4fARB(disp, parameters) (* GET_VertexAttrib4fARB(disp)) parameters
#define GET_VertexAttrib4fARB(disp) ((_glptr_VertexAttrib4fARB)(GET_by_offset((disp), _gloffset_VertexAttrib4fARB)))
#define SET_VertexAttrib4fARB(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLfloat, GLfloat, GLfloat, GLfloat) = func; \
   SET_by_offset(disp, _gloffset_VertexAttrib4fARB, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_VertexAttrib4fvARB)(GLuint, const GLfloat *);
#define CALL_VertexAttrib4fvARB(disp, parameters) (* GET_VertexAttrib4fvARB(disp)) parameters
#define GET_VertexAttrib4fvARB(disp) ((_glptr_VertexAttrib4fvARB)(GET_by_offset((disp), _gloffset_VertexAttrib4fvARB)))
#define SET_VertexAttrib4fvARB(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, const GLfloat *) = func; \
   SET_by_offset(disp, _gloffset_VertexAttrib4fvARB, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_AttachObjectARB)(GLhandleARB, GLhandleARB);
#define CALL_AttachObjectARB(disp, parameters) (* GET_AttachObjectARB(disp)) parameters
#define GET_AttachObjectARB(disp) ((_glptr_AttachObjectARB)(GET_by_offset((disp), _gloffset_AttachObjectARB)))
#define SET_AttachObjectARB(disp, func) do { \
   void (GLAPIENTRYP fn)(GLhandleARB, GLhandleARB) = func; \
   SET_by_offset(disp, _gloffset_AttachObjectARB, fn); \
} while (0)

typedef GLhandleARB (GLAPIENTRYP _glptr_CreateProgramObjectARB)(void);
#define CALL_CreateProgramObjectARB(disp, parameters) (* GET_CreateProgramObjectARB(disp)) parameters
#define GET_CreateProgramObjectARB(disp) ((_glptr_CreateProgramObjectARB)(GET_by_offset((disp), _gloffset_CreateProgramObjectARB)))
#define SET_CreateProgramObjectARB(disp, func) do { \
   GLhandleARB (GLAPIENTRYP fn)(void) = func; \
   SET_by_offset(disp, _gloffset_CreateProgramObjectARB, fn); \
} while (0)

typedef GLhandleARB (GLAPIENTRYP _glptr_CreateShaderObjectARB)(GLenum);
#define CALL_CreateShaderObjectARB(disp, parameters) (* GET_CreateShaderObjectARB(disp)) parameters
#define GET_CreateShaderObjectARB(disp) ((_glptr_CreateShaderObjectARB)(GET_by_offset((disp), _gloffset_CreateShaderObjectARB)))
#define SET_CreateShaderObjectARB(disp, func) do { \
   GLhandleARB (GLAPIENTRYP fn)(GLenum) = func; \
   SET_by_offset(disp, _gloffset_CreateShaderObjectARB, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_DeleteObjectARB)(GLhandleARB);
#define CALL_DeleteObjectARB(disp, parameters) (* GET_DeleteObjectARB(disp)) parameters
#define GET_DeleteObjectARB(disp) ((_glptr_DeleteObjectARB)(GET_by_offset((disp), _gloffset_DeleteObjectARB)))
#define SET_DeleteObjectARB(disp, func) do { \
   void (GLAPIENTRYP fn)(GLhandleARB) = func; \
   SET_by_offset(disp, _gloffset_DeleteObjectARB, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_DetachObjectARB)(GLhandleARB, GLhandleARB);
#define CALL_DetachObjectARB(disp, parameters) (* GET_DetachObjectARB(disp)) parameters
#define GET_DetachObjectARB(disp) ((_glptr_DetachObjectARB)(GET_by_offset((disp), _gloffset_DetachObjectARB)))
#define SET_DetachObjectARB(disp, func) do { \
   void (GLAPIENTRYP fn)(GLhandleARB, GLhandleARB) = func; \
   SET_by_offset(disp, _gloffset_DetachObjectARB, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_GetAttachedObjectsARB)(GLhandleARB, GLsizei, GLsizei *, GLhandleARB *);
#define CALL_GetAttachedObjectsARB(disp, parameters) (* GET_GetAttachedObjectsARB(disp)) parameters
#define GET_GetAttachedObjectsARB(disp) ((_glptr_GetAttachedObjectsARB)(GET_by_offset((disp), _gloffset_GetAttachedObjectsARB)))
#define SET_GetAttachedObjectsARB(disp, func) do { \
   void (GLAPIENTRYP fn)(GLhandleARB, GLsizei, GLsizei *, GLhandleARB *) = func; \
   SET_by_offset(disp, _gloffset_GetAttachedObjectsARB, fn); \
} while (0)

typedef GLhandleARB (GLAPIENTRYP _glptr_GetHandleARB)(GLenum);
#define CALL_GetHandleARB(disp, parameters) (* GET_GetHandleARB(disp)) parameters
#define GET_GetHandleARB(disp) ((_glptr_GetHandleARB)(GET_by_offset((disp), _gloffset_GetHandleARB)))
#define SET_GetHandleARB(disp, func) do { \
   GLhandleARB (GLAPIENTRYP fn)(GLenum) = func; \
   SET_by_offset(disp, _gloffset_GetHandleARB, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_GetInfoLogARB)(GLhandleARB, GLsizei, GLsizei *, GLcharARB *);
#define CALL_GetInfoLogARB(disp, parameters) (* GET_GetInfoLogARB(disp)) parameters
#define GET_GetInfoLogARB(disp) ((_glptr_GetInfoLogARB)(GET_by_offset((disp), _gloffset_GetInfoLogARB)))
#define SET_GetInfoLogARB(disp, func) do { \
   void (GLAPIENTRYP fn)(GLhandleARB, GLsizei, GLsizei *, GLcharARB *) = func; \
   SET_by_offset(disp, _gloffset_GetInfoLogARB, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_GetObjectParameterfvARB)(GLhandleARB, GLenum, GLfloat *);
#define CALL_GetObjectParameterfvARB(disp, parameters) (* GET_GetObjectParameterfvARB(disp)) parameters
#define GET_GetObjectParameterfvARB(disp) ((_glptr_GetObjectParameterfvARB)(GET_by_offset((disp), _gloffset_GetObjectParameterfvARB)))
#define SET_GetObjectParameterfvARB(disp, func) do { \
   void (GLAPIENTRYP fn)(GLhandleARB, GLenum, GLfloat *) = func; \
   SET_by_offset(disp, _gloffset_GetObjectParameterfvARB, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_GetObjectParameterivARB)(GLhandleARB, GLenum, GLint *);
#define CALL_GetObjectParameterivARB(disp, parameters) (* GET_GetObjectParameterivARB(disp)) parameters
#define GET_GetObjectParameterivARB(disp) ((_glptr_GetObjectParameterivARB)(GET_by_offset((disp), _gloffset_GetObjectParameterivARB)))
#define SET_GetObjectParameterivARB(disp, func) do { \
   void (GLAPIENTRYP fn)(GLhandleARB, GLenum, GLint *) = func; \
   SET_by_offset(disp, _gloffset_GetObjectParameterivARB, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_DrawArraysInstancedARB)(GLenum, GLint, GLsizei, GLsizei);
#define CALL_DrawArraysInstancedARB(disp, parameters) (* GET_DrawArraysInstancedARB(disp)) parameters
#define GET_DrawArraysInstancedARB(disp) ((_glptr_DrawArraysInstancedARB)(GET_by_offset((disp), _gloffset_DrawArraysInstancedARB)))
#define SET_DrawArraysInstancedARB(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLint, GLsizei, GLsizei) = func; \
   SET_by_offset(disp, _gloffset_DrawArraysInstancedARB, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_DrawElementsInstancedARB)(GLenum, GLsizei, GLenum, const GLvoid *, GLsizei);
#define CALL_DrawElementsInstancedARB(disp, parameters) (* GET_DrawElementsInstancedARB(disp)) parameters
#define GET_DrawElementsInstancedARB(disp) ((_glptr_DrawElementsInstancedARB)(GET_by_offset((disp), _gloffset_DrawElementsInstancedARB)))
#define SET_DrawElementsInstancedARB(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLsizei, GLenum, const GLvoid *, GLsizei) = func; \
   SET_by_offset(disp, _gloffset_DrawElementsInstancedARB, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_BindFramebuffer)(GLenum, GLuint);
#define CALL_BindFramebuffer(disp, parameters) (* GET_BindFramebuffer(disp)) parameters
#define GET_BindFramebuffer(disp) ((_glptr_BindFramebuffer)(GET_by_offset((disp), _gloffset_BindFramebuffer)))
#define SET_BindFramebuffer(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLuint) = func; \
   SET_by_offset(disp, _gloffset_BindFramebuffer, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_BindRenderbuffer)(GLenum, GLuint);
#define CALL_BindRenderbuffer(disp, parameters) (* GET_BindRenderbuffer(disp)) parameters
#define GET_BindRenderbuffer(disp) ((_glptr_BindRenderbuffer)(GET_by_offset((disp), _gloffset_BindRenderbuffer)))
#define SET_BindRenderbuffer(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLuint) = func; \
   SET_by_offset(disp, _gloffset_BindRenderbuffer, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_BlitFramebuffer)(GLint, GLint, GLint, GLint, GLint, GLint, GLint, GLint, GLbitfield, GLenum);
#define CALL_BlitFramebuffer(disp, parameters) (* GET_BlitFramebuffer(disp)) parameters
#define GET_BlitFramebuffer(disp) ((_glptr_BlitFramebuffer)(GET_by_offset((disp), _gloffset_BlitFramebuffer)))
#define SET_BlitFramebuffer(disp, func) do { \
   void (GLAPIENTRYP fn)(GLint, GLint, GLint, GLint, GLint, GLint, GLint, GLint, GLbitfield, GLenum) = func; \
   SET_by_offset(disp, _gloffset_BlitFramebuffer, fn); \
} while (0)

typedef GLenum (GLAPIENTRYP _glptr_CheckFramebufferStatus)(GLenum);
#define CALL_CheckFramebufferStatus(disp, parameters) (* GET_CheckFramebufferStatus(disp)) parameters
#define GET_CheckFramebufferStatus(disp) ((_glptr_CheckFramebufferStatus)(GET_by_offset((disp), _gloffset_CheckFramebufferStatus)))
#define SET_CheckFramebufferStatus(disp, func) do { \
   GLenum (GLAPIENTRYP fn)(GLenum) = func; \
   SET_by_offset(disp, _gloffset_CheckFramebufferStatus, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_DeleteFramebuffers)(GLsizei, const GLuint *);
#define CALL_DeleteFramebuffers(disp, parameters) (* GET_DeleteFramebuffers(disp)) parameters
#define GET_DeleteFramebuffers(disp) ((_glptr_DeleteFramebuffers)(GET_by_offset((disp), _gloffset_DeleteFramebuffers)))
#define SET_DeleteFramebuffers(disp, func) do { \
   void (GLAPIENTRYP fn)(GLsizei, const GLuint *) = func; \
   SET_by_offset(disp, _gloffset_DeleteFramebuffers, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_DeleteRenderbuffers)(GLsizei, const GLuint *);
#define CALL_DeleteRenderbuffers(disp, parameters) (* GET_DeleteRenderbuffers(disp)) parameters
#define GET_DeleteRenderbuffers(disp) ((_glptr_DeleteRenderbuffers)(GET_by_offset((disp), _gloffset_DeleteRenderbuffers)))
#define SET_DeleteRenderbuffers(disp, func) do { \
   void (GLAPIENTRYP fn)(GLsizei, const GLuint *) = func; \
   SET_by_offset(disp, _gloffset_DeleteRenderbuffers, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_FramebufferRenderbuffer)(GLenum, GLenum, GLenum, GLuint);
#define CALL_FramebufferRenderbuffer(disp, parameters) (* GET_FramebufferRenderbuffer(disp)) parameters
#define GET_FramebufferRenderbuffer(disp) ((_glptr_FramebufferRenderbuffer)(GET_by_offset((disp), _gloffset_FramebufferRenderbuffer)))
#define SET_FramebufferRenderbuffer(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLenum, GLenum, GLuint) = func; \
   SET_by_offset(disp, _gloffset_FramebufferRenderbuffer, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_FramebufferTexture1D)(GLenum, GLenum, GLenum, GLuint, GLint);
#define CALL_FramebufferTexture1D(disp, parameters) (* GET_FramebufferTexture1D(disp)) parameters
#define GET_FramebufferTexture1D(disp) ((_glptr_FramebufferTexture1D)(GET_by_offset((disp), _gloffset_FramebufferTexture1D)))
#define SET_FramebufferTexture1D(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLenum, GLenum, GLuint, GLint) = func; \
   SET_by_offset(disp, _gloffset_FramebufferTexture1D, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_FramebufferTexture2D)(GLenum, GLenum, GLenum, GLuint, GLint);
#define CALL_FramebufferTexture2D(disp, parameters) (* GET_FramebufferTexture2D(disp)) parameters
#define GET_FramebufferTexture2D(disp) ((_glptr_FramebufferTexture2D)(GET_by_offset((disp), _gloffset_FramebufferTexture2D)))
#define SET_FramebufferTexture2D(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLenum, GLenum, GLuint, GLint) = func; \
   SET_by_offset(disp, _gloffset_FramebufferTexture2D, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_FramebufferTexture3D)(GLenum, GLenum, GLenum, GLuint, GLint, GLint);
#define CALL_FramebufferTexture3D(disp, parameters) (* GET_FramebufferTexture3D(disp)) parameters
#define GET_FramebufferTexture3D(disp) ((_glptr_FramebufferTexture3D)(GET_by_offset((disp), _gloffset_FramebufferTexture3D)))
#define SET_FramebufferTexture3D(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLenum, GLenum, GLuint, GLint, GLint) = func; \
   SET_by_offset(disp, _gloffset_FramebufferTexture3D, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_FramebufferTextureLayer)(GLenum, GLenum, GLuint, GLint, GLint);
#define CALL_FramebufferTextureLayer(disp, parameters) (* GET_FramebufferTextureLayer(disp)) parameters
#define GET_FramebufferTextureLayer(disp) ((_glptr_FramebufferTextureLayer)(GET_by_offset((disp), _gloffset_FramebufferTextureLayer)))
#define SET_FramebufferTextureLayer(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLenum, GLuint, GLint, GLint) = func; \
   SET_by_offset(disp, _gloffset_FramebufferTextureLayer, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_GenFramebuffers)(GLsizei, GLuint *);
#define CALL_GenFramebuffers(disp, parameters) (* GET_GenFramebuffers(disp)) parameters
#define GET_GenFramebuffers(disp) ((_glptr_GenFramebuffers)(GET_by_offset((disp), _gloffset_GenFramebuffers)))
#define SET_GenFramebuffers(disp, func) do { \
   void (GLAPIENTRYP fn)(GLsizei, GLuint *) = func; \
   SET_by_offset(disp, _gloffset_GenFramebuffers, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_GenRenderbuffers)(GLsizei, GLuint *);
#define CALL_GenRenderbuffers(disp, parameters) (* GET_GenRenderbuffers(disp)) parameters
#define GET_GenRenderbuffers(disp) ((_glptr_GenRenderbuffers)(GET_by_offset((disp), _gloffset_GenRenderbuffers)))
#define SET_GenRenderbuffers(disp, func) do { \
   void (GLAPIENTRYP fn)(GLsizei, GLuint *) = func; \
   SET_by_offset(disp, _gloffset_GenRenderbuffers, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_GenerateMipmap)(GLenum);
#define CALL_GenerateMipmap(disp, parameters) (* GET_GenerateMipmap(disp)) parameters
#define GET_GenerateMipmap(disp) ((_glptr_GenerateMipmap)(GET_by_offset((disp), _gloffset_GenerateMipmap)))
#define SET_GenerateMipmap(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum) = func; \
   SET_by_offset(disp, _gloffset_GenerateMipmap, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_GetFramebufferAttachmentParameteriv)(GLenum, GLenum, GLenum, GLint *);
#define CALL_GetFramebufferAttachmentParameteriv(disp, parameters) (* GET_GetFramebufferAttachmentParameteriv(disp)) parameters
#define GET_GetFramebufferAttachmentParameteriv(disp) ((_glptr_GetFramebufferAttachmentParameteriv)(GET_by_offset((disp), _gloffset_GetFramebufferAttachmentParameteriv)))
#define SET_GetFramebufferAttachmentParameteriv(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLenum, GLenum, GLint *) = func; \
   SET_by_offset(disp, _gloffset_GetFramebufferAttachmentParameteriv, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_GetRenderbufferParameteriv)(GLenum, GLenum, GLint *);
#define CALL_GetRenderbufferParameteriv(disp, parameters) (* GET_GetRenderbufferParameteriv(disp)) parameters
#define GET_GetRenderbufferParameteriv(disp) ((_glptr_GetRenderbufferParameteriv)(GET_by_offset((disp), _gloffset_GetRenderbufferParameteriv)))
#define SET_GetRenderbufferParameteriv(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLenum, GLint *) = func; \
   SET_by_offset(disp, _gloffset_GetRenderbufferParameteriv, fn); \
} while (0)

typedef GLboolean (GLAPIENTRYP _glptr_IsFramebuffer)(GLuint);
#define CALL_IsFramebuffer(disp, parameters) (* GET_IsFramebuffer(disp)) parameters
#define GET_IsFramebuffer(disp) ((_glptr_IsFramebuffer)(GET_by_offset((disp), _gloffset_IsFramebuffer)))
#define SET_IsFramebuffer(disp, func) do { \
   GLboolean (GLAPIENTRYP fn)(GLuint) = func; \
   SET_by_offset(disp, _gloffset_IsFramebuffer, fn); \
} while (0)

typedef GLboolean (GLAPIENTRYP _glptr_IsRenderbuffer)(GLuint);
#define CALL_IsRenderbuffer(disp, parameters) (* GET_IsRenderbuffer(disp)) parameters
#define GET_IsRenderbuffer(disp) ((_glptr_IsRenderbuffer)(GET_by_offset((disp), _gloffset_IsRenderbuffer)))
#define SET_IsRenderbuffer(disp, func) do { \
   GLboolean (GLAPIENTRYP fn)(GLuint) = func; \
   SET_by_offset(disp, _gloffset_IsRenderbuffer, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_RenderbufferStorage)(GLenum, GLenum, GLsizei, GLsizei);
#define CALL_RenderbufferStorage(disp, parameters) (* GET_RenderbufferStorage(disp)) parameters
#define GET_RenderbufferStorage(disp) ((_glptr_RenderbufferStorage)(GET_by_offset((disp), _gloffset_RenderbufferStorage)))
#define SET_RenderbufferStorage(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLenum, GLsizei, GLsizei) = func; \
   SET_by_offset(disp, _gloffset_RenderbufferStorage, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_RenderbufferStorageMultisample)(GLenum, GLsizei, GLenum, GLsizei, GLsizei);
#define CALL_RenderbufferStorageMultisample(disp, parameters) (* GET_RenderbufferStorageMultisample(disp)) parameters
#define GET_RenderbufferStorageMultisample(disp) ((_glptr_RenderbufferStorageMultisample)(GET_by_offset((disp), _gloffset_RenderbufferStorageMultisample)))
#define SET_RenderbufferStorageMultisample(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLsizei, GLenum, GLsizei, GLsizei) = func; \
   SET_by_offset(disp, _gloffset_RenderbufferStorageMultisample, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_FlushMappedBufferRange)(GLenum, GLintptr, GLsizeiptr);
#define CALL_FlushMappedBufferRange(disp, parameters) (* GET_FlushMappedBufferRange(disp)) parameters
#define GET_FlushMappedBufferRange(disp) ((_glptr_FlushMappedBufferRange)(GET_by_offset((disp), _gloffset_FlushMappedBufferRange)))
#define SET_FlushMappedBufferRange(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLintptr, GLsizeiptr) = func; \
   SET_by_offset(disp, _gloffset_FlushMappedBufferRange, fn); \
} while (0)

typedef GLvoid * (GLAPIENTRYP _glptr_MapBufferRange)(GLenum, GLintptr, GLsizeiptr, GLbitfield);
#define CALL_MapBufferRange(disp, parameters) (* GET_MapBufferRange(disp)) parameters
#define GET_MapBufferRange(disp) ((_glptr_MapBufferRange)(GET_by_offset((disp), _gloffset_MapBufferRange)))
#define SET_MapBufferRange(disp, func) do { \
   GLvoid * (GLAPIENTRYP fn)(GLenum, GLintptr, GLsizeiptr, GLbitfield) = func; \
   SET_by_offset(disp, _gloffset_MapBufferRange, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_BindVertexArray)(GLuint);
#define CALL_BindVertexArray(disp, parameters) (* GET_BindVertexArray(disp)) parameters
#define GET_BindVertexArray(disp) ((_glptr_BindVertexArray)(GET_by_offset((disp), _gloffset_BindVertexArray)))
#define SET_BindVertexArray(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint) = func; \
   SET_by_offset(disp, _gloffset_BindVertexArray, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_DeleteVertexArrays)(GLsizei, const GLuint *);
#define CALL_DeleteVertexArrays(disp, parameters) (* GET_DeleteVertexArrays(disp)) parameters
#define GET_DeleteVertexArrays(disp) ((_glptr_DeleteVertexArrays)(GET_by_offset((disp), _gloffset_DeleteVertexArrays)))
#define SET_DeleteVertexArrays(disp, func) do { \
   void (GLAPIENTRYP fn)(GLsizei, const GLuint *) = func; \
   SET_by_offset(disp, _gloffset_DeleteVertexArrays, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_GenVertexArrays)(GLsizei, GLuint *);
#define CALL_GenVertexArrays(disp, parameters) (* GET_GenVertexArrays(disp)) parameters
#define GET_GenVertexArrays(disp) ((_glptr_GenVertexArrays)(GET_by_offset((disp), _gloffset_GenVertexArrays)))
#define SET_GenVertexArrays(disp, func) do { \
   void (GLAPIENTRYP fn)(GLsizei, GLuint *) = func; \
   SET_by_offset(disp, _gloffset_GenVertexArrays, fn); \
} while (0)

typedef GLboolean (GLAPIENTRYP _glptr_IsVertexArray)(GLuint);
#define CALL_IsVertexArray(disp, parameters) (* GET_IsVertexArray(disp)) parameters
#define GET_IsVertexArray(disp) ((_glptr_IsVertexArray)(GET_by_offset((disp), _gloffset_IsVertexArray)))
#define SET_IsVertexArray(disp, func) do { \
   GLboolean (GLAPIENTRYP fn)(GLuint) = func; \
   SET_by_offset(disp, _gloffset_IsVertexArray, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_GetActiveUniformBlockName)(GLuint, GLuint, GLsizei, GLsizei *, GLchar *);
#define CALL_GetActiveUniformBlockName(disp, parameters) (* GET_GetActiveUniformBlockName(disp)) parameters
#define GET_GetActiveUniformBlockName(disp) ((_glptr_GetActiveUniformBlockName)(GET_by_offset((disp), _gloffset_GetActiveUniformBlockName)))
#define SET_GetActiveUniformBlockName(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLuint, GLsizei, GLsizei *, GLchar *) = func; \
   SET_by_offset(disp, _gloffset_GetActiveUniformBlockName, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_GetActiveUniformBlockiv)(GLuint, GLuint, GLenum, GLint *);
#define CALL_GetActiveUniformBlockiv(disp, parameters) (* GET_GetActiveUniformBlockiv(disp)) parameters
#define GET_GetActiveUniformBlockiv(disp) ((_glptr_GetActiveUniformBlockiv)(GET_by_offset((disp), _gloffset_GetActiveUniformBlockiv)))
#define SET_GetActiveUniformBlockiv(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLuint, GLenum, GLint *) = func; \
   SET_by_offset(disp, _gloffset_GetActiveUniformBlockiv, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_GetActiveUniformName)(GLuint, GLuint, GLsizei, GLsizei *, GLchar *);
#define CALL_GetActiveUniformName(disp, parameters) (* GET_GetActiveUniformName(disp)) parameters
#define GET_GetActiveUniformName(disp) ((_glptr_GetActiveUniformName)(GET_by_offset((disp), _gloffset_GetActiveUniformName)))
#define SET_GetActiveUniformName(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLuint, GLsizei, GLsizei *, GLchar *) = func; \
   SET_by_offset(disp, _gloffset_GetActiveUniformName, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_GetActiveUniformsiv)(GLuint, GLsizei, const GLuint *, GLenum, GLint *);
#define CALL_GetActiveUniformsiv(disp, parameters) (* GET_GetActiveUniformsiv(disp)) parameters
#define GET_GetActiveUniformsiv(disp) ((_glptr_GetActiveUniformsiv)(GET_by_offset((disp), _gloffset_GetActiveUniformsiv)))
#define SET_GetActiveUniformsiv(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLsizei, const GLuint *, GLenum, GLint *) = func; \
   SET_by_offset(disp, _gloffset_GetActiveUniformsiv, fn); \
} while (0)

typedef GLuint (GLAPIENTRYP _glptr_GetUniformBlockIndex)(GLuint, const GLchar *);
#define CALL_GetUniformBlockIndex(disp, parameters) (* GET_GetUniformBlockIndex(disp)) parameters
#define GET_GetUniformBlockIndex(disp) ((_glptr_GetUniformBlockIndex)(GET_by_offset((disp), _gloffset_GetUniformBlockIndex)))
#define SET_GetUniformBlockIndex(disp, func) do { \
   GLuint (GLAPIENTRYP fn)(GLuint, const GLchar *) = func; \
   SET_by_offset(disp, _gloffset_GetUniformBlockIndex, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_GetUniformIndices)(GLuint, GLsizei, const GLchar * const *, GLuint *);
#define CALL_GetUniformIndices(disp, parameters) (* GET_GetUniformIndices(disp)) parameters
#define GET_GetUniformIndices(disp) ((_glptr_GetUniformIndices)(GET_by_offset((disp), _gloffset_GetUniformIndices)))
#define SET_GetUniformIndices(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLsizei, const GLchar * const *, GLuint *) = func; \
   SET_by_offset(disp, _gloffset_GetUniformIndices, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_UniformBlockBinding)(GLuint, GLuint, GLuint);
#define CALL_UniformBlockBinding(disp, parameters) (* GET_UniformBlockBinding(disp)) parameters
#define GET_UniformBlockBinding(disp) ((_glptr_UniformBlockBinding)(GET_by_offset((disp), _gloffset_UniformBlockBinding)))
#define SET_UniformBlockBinding(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLuint, GLuint) = func; \
   SET_by_offset(disp, _gloffset_UniformBlockBinding, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_CopyBufferSubData)(GLenum, GLenum, GLintptr, GLintptr, GLsizeiptr);
#define CALL_CopyBufferSubData(disp, parameters) (* GET_CopyBufferSubData(disp)) parameters
#define GET_CopyBufferSubData(disp) ((_glptr_CopyBufferSubData)(GET_by_offset((disp), _gloffset_CopyBufferSubData)))
#define SET_CopyBufferSubData(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLenum, GLintptr, GLintptr, GLsizeiptr) = func; \
   SET_by_offset(disp, _gloffset_CopyBufferSubData, fn); \
} while (0)

typedef GLenum (GLAPIENTRYP _glptr_ClientWaitSync)(GLsync, GLbitfield, GLuint64);
#define CALL_ClientWaitSync(disp, parameters) (* GET_ClientWaitSync(disp)) parameters
#define GET_ClientWaitSync(disp) ((_glptr_ClientWaitSync)(GET_by_offset((disp), _gloffset_ClientWaitSync)))
#define SET_ClientWaitSync(disp, func) do { \
   GLenum (GLAPIENTRYP fn)(GLsync, GLbitfield, GLuint64) = func; \
   SET_by_offset(disp, _gloffset_ClientWaitSync, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_DeleteSync)(GLsync);
#define CALL_DeleteSync(disp, parameters) (* GET_DeleteSync(disp)) parameters
#define GET_DeleteSync(disp) ((_glptr_DeleteSync)(GET_by_offset((disp), _gloffset_DeleteSync)))
#define SET_DeleteSync(disp, func) do { \
   void (GLAPIENTRYP fn)(GLsync) = func; \
   SET_by_offset(disp, _gloffset_DeleteSync, fn); \
} while (0)

typedef GLsync (GLAPIENTRYP _glptr_FenceSync)(GLenum, GLbitfield);
#define CALL_FenceSync(disp, parameters) (* GET_FenceSync(disp)) parameters
#define GET_FenceSync(disp) ((_glptr_FenceSync)(GET_by_offset((disp), _gloffset_FenceSync)))
#define SET_FenceSync(disp, func) do { \
   GLsync (GLAPIENTRYP fn)(GLenum, GLbitfield) = func; \
   SET_by_offset(disp, _gloffset_FenceSync, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_GetInteger64v)(GLenum, GLint64 *);
#define CALL_GetInteger64v(disp, parameters) (* GET_GetInteger64v(disp)) parameters
#define GET_GetInteger64v(disp) ((_glptr_GetInteger64v)(GET_by_offset((disp), _gloffset_GetInteger64v)))
#define SET_GetInteger64v(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLint64 *) = func; \
   SET_by_offset(disp, _gloffset_GetInteger64v, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_GetSynciv)(GLsync, GLenum, GLsizei, GLsizei *, GLint *);
#define CALL_GetSynciv(disp, parameters) (* GET_GetSynciv(disp)) parameters
#define GET_GetSynciv(disp) ((_glptr_GetSynciv)(GET_by_offset((disp), _gloffset_GetSynciv)))
#define SET_GetSynciv(disp, func) do { \
   void (GLAPIENTRYP fn)(GLsync, GLenum, GLsizei, GLsizei *, GLint *) = func; \
   SET_by_offset(disp, _gloffset_GetSynciv, fn); \
} while (0)

typedef GLboolean (GLAPIENTRYP _glptr_IsSync)(GLsync);
#define CALL_IsSync(disp, parameters) (* GET_IsSync(disp)) parameters
#define GET_IsSync(disp) ((_glptr_IsSync)(GET_by_offset((disp), _gloffset_IsSync)))
#define SET_IsSync(disp, func) do { \
   GLboolean (GLAPIENTRYP fn)(GLsync) = func; \
   SET_by_offset(disp, _gloffset_IsSync, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_WaitSync)(GLsync, GLbitfield, GLuint64);
#define CALL_WaitSync(disp, parameters) (* GET_WaitSync(disp)) parameters
#define GET_WaitSync(disp) ((_glptr_WaitSync)(GET_by_offset((disp), _gloffset_WaitSync)))
#define SET_WaitSync(disp, func) do { \
   void (GLAPIENTRYP fn)(GLsync, GLbitfield, GLuint64) = func; \
   SET_by_offset(disp, _gloffset_WaitSync, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_DrawElementsBaseVertex)(GLenum, GLsizei, GLenum, const GLvoid *, GLint);
#define CALL_DrawElementsBaseVertex(disp, parameters) (* GET_DrawElementsBaseVertex(disp)) parameters
#define GET_DrawElementsBaseVertex(disp) ((_glptr_DrawElementsBaseVertex)(GET_by_offset((disp), _gloffset_DrawElementsBaseVertex)))
#define SET_DrawElementsBaseVertex(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLsizei, GLenum, const GLvoid *, GLint) = func; \
   SET_by_offset(disp, _gloffset_DrawElementsBaseVertex, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_DrawElementsInstancedBaseVertex)(GLenum, GLsizei, GLenum, const GLvoid *, GLsizei, GLint);
#define CALL_DrawElementsInstancedBaseVertex(disp, parameters) (* GET_DrawElementsInstancedBaseVertex(disp)) parameters
#define GET_DrawElementsInstancedBaseVertex(disp) ((_glptr_DrawElementsInstancedBaseVertex)(GET_by_offset((disp), _gloffset_DrawElementsInstancedBaseVertex)))
#define SET_DrawElementsInstancedBaseVertex(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLsizei, GLenum, const GLvoid *, GLsizei, GLint) = func; \
   SET_by_offset(disp, _gloffset_DrawElementsInstancedBaseVertex, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_DrawRangeElementsBaseVertex)(GLenum, GLuint, GLuint, GLsizei, GLenum, const GLvoid *, GLint);
#define CALL_DrawRangeElementsBaseVertex(disp, parameters) (* GET_DrawRangeElementsBaseVertex(disp)) parameters
#define GET_DrawRangeElementsBaseVertex(disp) ((_glptr_DrawRangeElementsBaseVertex)(GET_by_offset((disp), _gloffset_DrawRangeElementsBaseVertex)))
#define SET_DrawRangeElementsBaseVertex(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLuint, GLuint, GLsizei, GLenum, const GLvoid *, GLint) = func; \
   SET_by_offset(disp, _gloffset_DrawRangeElementsBaseVertex, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_MultiDrawElementsBaseVertex)(GLenum, const GLsizei *, GLenum, const GLvoid * const *, GLsizei, const GLint *);
#define CALL_MultiDrawElementsBaseVertex(disp, parameters) (* GET_MultiDrawElementsBaseVertex(disp)) parameters
#define GET_MultiDrawElementsBaseVertex(disp) ((_glptr_MultiDrawElementsBaseVertex)(GET_by_offset((disp), _gloffset_MultiDrawElementsBaseVertex)))
#define SET_MultiDrawElementsBaseVertex(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, const GLsizei *, GLenum, const GLvoid * const *, GLsizei, const GLint *) = func; \
   SET_by_offset(disp, _gloffset_MultiDrawElementsBaseVertex, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_ProvokingVertex)(GLenum);
#define CALL_ProvokingVertex(disp, parameters) (* GET_ProvokingVertex(disp)) parameters
#define GET_ProvokingVertex(disp) ((_glptr_ProvokingVertex)(GET_by_offset((disp), _gloffset_ProvokingVertex)))
#define SET_ProvokingVertex(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum) = func; \
   SET_by_offset(disp, _gloffset_ProvokingVertex, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_GetMultisamplefv)(GLenum, GLuint, GLfloat *);
#define CALL_GetMultisamplefv(disp, parameters) (* GET_GetMultisamplefv(disp)) parameters
#define GET_GetMultisamplefv(disp) ((_glptr_GetMultisamplefv)(GET_by_offset((disp), _gloffset_GetMultisamplefv)))
#define SET_GetMultisamplefv(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLuint, GLfloat *) = func; \
   SET_by_offset(disp, _gloffset_GetMultisamplefv, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_SampleMaski)(GLuint, GLbitfield);
#define CALL_SampleMaski(disp, parameters) (* GET_SampleMaski(disp)) parameters
#define GET_SampleMaski(disp) ((_glptr_SampleMaski)(GET_by_offset((disp), _gloffset_SampleMaski)))
#define SET_SampleMaski(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLbitfield) = func; \
   SET_by_offset(disp, _gloffset_SampleMaski, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_TexImage2DMultisample)(GLenum, GLsizei, GLenum, GLsizei, GLsizei, GLboolean);
#define CALL_TexImage2DMultisample(disp, parameters) (* GET_TexImage2DMultisample(disp)) parameters
#define GET_TexImage2DMultisample(disp) ((_glptr_TexImage2DMultisample)(GET_by_offset((disp), _gloffset_TexImage2DMultisample)))
#define SET_TexImage2DMultisample(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLsizei, GLenum, GLsizei, GLsizei, GLboolean) = func; \
   SET_by_offset(disp, _gloffset_TexImage2DMultisample, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_TexImage3DMultisample)(GLenum, GLsizei, GLenum, GLsizei, GLsizei, GLsizei, GLboolean);
#define CALL_TexImage3DMultisample(disp, parameters) (* GET_TexImage3DMultisample(disp)) parameters
#define GET_TexImage3DMultisample(disp) ((_glptr_TexImage3DMultisample)(GET_by_offset((disp), _gloffset_TexImage3DMultisample)))
#define SET_TexImage3DMultisample(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLsizei, GLenum, GLsizei, GLsizei, GLsizei, GLboolean) = func; \
   SET_by_offset(disp, _gloffset_TexImage3DMultisample, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_BlendEquationSeparateiARB)(GLuint, GLenum, GLenum);
#define CALL_BlendEquationSeparateiARB(disp, parameters) (* GET_BlendEquationSeparateiARB(disp)) parameters
#define GET_BlendEquationSeparateiARB(disp) ((_glptr_BlendEquationSeparateiARB)(GET_by_offset((disp), _gloffset_BlendEquationSeparateiARB)))
#define SET_BlendEquationSeparateiARB(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLenum, GLenum) = func; \
   SET_by_offset(disp, _gloffset_BlendEquationSeparateiARB, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_BlendEquationiARB)(GLuint, GLenum);
#define CALL_BlendEquationiARB(disp, parameters) (* GET_BlendEquationiARB(disp)) parameters
#define GET_BlendEquationiARB(disp) ((_glptr_BlendEquationiARB)(GET_by_offset((disp), _gloffset_BlendEquationiARB)))
#define SET_BlendEquationiARB(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLenum) = func; \
   SET_by_offset(disp, _gloffset_BlendEquationiARB, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_BlendFuncSeparateiARB)(GLuint, GLenum, GLenum, GLenum, GLenum);
#define CALL_BlendFuncSeparateiARB(disp, parameters) (* GET_BlendFuncSeparateiARB(disp)) parameters
#define GET_BlendFuncSeparateiARB(disp) ((_glptr_BlendFuncSeparateiARB)(GET_by_offset((disp), _gloffset_BlendFuncSeparateiARB)))
#define SET_BlendFuncSeparateiARB(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLenum, GLenum, GLenum, GLenum) = func; \
   SET_by_offset(disp, _gloffset_BlendFuncSeparateiARB, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_BlendFunciARB)(GLuint, GLenum, GLenum);
#define CALL_BlendFunciARB(disp, parameters) (* GET_BlendFunciARB(disp)) parameters
#define GET_BlendFunciARB(disp) ((_glptr_BlendFunciARB)(GET_by_offset((disp), _gloffset_BlendFunciARB)))
#define SET_BlendFunciARB(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLenum, GLenum) = func; \
   SET_by_offset(disp, _gloffset_BlendFunciARB, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_BindFragDataLocationIndexed)(GLuint, GLuint, GLuint, const GLchar *);
#define CALL_BindFragDataLocationIndexed(disp, parameters) (* GET_BindFragDataLocationIndexed(disp)) parameters
#define GET_BindFragDataLocationIndexed(disp) ((_glptr_BindFragDataLocationIndexed)(GET_by_offset((disp), _gloffset_BindFragDataLocationIndexed)))
#define SET_BindFragDataLocationIndexed(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLuint, GLuint, const GLchar *) = func; \
   SET_by_offset(disp, _gloffset_BindFragDataLocationIndexed, fn); \
} while (0)

typedef GLint (GLAPIENTRYP _glptr_GetFragDataIndex)(GLuint, const GLchar *);
#define CALL_GetFragDataIndex(disp, parameters) (* GET_GetFragDataIndex(disp)) parameters
#define GET_GetFragDataIndex(disp) ((_glptr_GetFragDataIndex)(GET_by_offset((disp), _gloffset_GetFragDataIndex)))
#define SET_GetFragDataIndex(disp, func) do { \
   GLint (GLAPIENTRYP fn)(GLuint, const GLchar *) = func; \
   SET_by_offset(disp, _gloffset_GetFragDataIndex, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_BindSampler)(GLuint, GLuint);
#define CALL_BindSampler(disp, parameters) (* GET_BindSampler(disp)) parameters
#define GET_BindSampler(disp) ((_glptr_BindSampler)(GET_by_offset((disp), _gloffset_BindSampler)))
#define SET_BindSampler(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLuint) = func; \
   SET_by_offset(disp, _gloffset_BindSampler, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_DeleteSamplers)(GLsizei, const GLuint *);
#define CALL_DeleteSamplers(disp, parameters) (* GET_DeleteSamplers(disp)) parameters
#define GET_DeleteSamplers(disp) ((_glptr_DeleteSamplers)(GET_by_offset((disp), _gloffset_DeleteSamplers)))
#define SET_DeleteSamplers(disp, func) do { \
   void (GLAPIENTRYP fn)(GLsizei, const GLuint *) = func; \
   SET_by_offset(disp, _gloffset_DeleteSamplers, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_GenSamplers)(GLsizei, GLuint *);
#define CALL_GenSamplers(disp, parameters) (* GET_GenSamplers(disp)) parameters
#define GET_GenSamplers(disp) ((_glptr_GenSamplers)(GET_by_offset((disp), _gloffset_GenSamplers)))
#define SET_GenSamplers(disp, func) do { \
   void (GLAPIENTRYP fn)(GLsizei, GLuint *) = func; \
   SET_by_offset(disp, _gloffset_GenSamplers, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_GetSamplerParameterIiv)(GLuint, GLenum, GLint *);
#define CALL_GetSamplerParameterIiv(disp, parameters) (* GET_GetSamplerParameterIiv(disp)) parameters
#define GET_GetSamplerParameterIiv(disp) ((_glptr_GetSamplerParameterIiv)(GET_by_offset((disp), _gloffset_GetSamplerParameterIiv)))
#define SET_GetSamplerParameterIiv(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLenum, GLint *) = func; \
   SET_by_offset(disp, _gloffset_GetSamplerParameterIiv, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_GetSamplerParameterIuiv)(GLuint, GLenum, GLuint *);
#define CALL_GetSamplerParameterIuiv(disp, parameters) (* GET_GetSamplerParameterIuiv(disp)) parameters
#define GET_GetSamplerParameterIuiv(disp) ((_glptr_GetSamplerParameterIuiv)(GET_by_offset((disp), _gloffset_GetSamplerParameterIuiv)))
#define SET_GetSamplerParameterIuiv(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLenum, GLuint *) = func; \
   SET_by_offset(disp, _gloffset_GetSamplerParameterIuiv, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_GetSamplerParameterfv)(GLuint, GLenum, GLfloat *);
#define CALL_GetSamplerParameterfv(disp, parameters) (* GET_GetSamplerParameterfv(disp)) parameters
#define GET_GetSamplerParameterfv(disp) ((_glptr_GetSamplerParameterfv)(GET_by_offset((disp), _gloffset_GetSamplerParameterfv)))
#define SET_GetSamplerParameterfv(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLenum, GLfloat *) = func; \
   SET_by_offset(disp, _gloffset_GetSamplerParameterfv, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_GetSamplerParameteriv)(GLuint, GLenum, GLint *);
#define CALL_GetSamplerParameteriv(disp, parameters) (* GET_GetSamplerParameteriv(disp)) parameters
#define GET_GetSamplerParameteriv(disp) ((_glptr_GetSamplerParameteriv)(GET_by_offset((disp), _gloffset_GetSamplerParameteriv)))
#define SET_GetSamplerParameteriv(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLenum, GLint *) = func; \
   SET_by_offset(disp, _gloffset_GetSamplerParameteriv, fn); \
} while (0)

typedef GLboolean (GLAPIENTRYP _glptr_IsSampler)(GLuint);
#define CALL_IsSampler(disp, parameters) (* GET_IsSampler(disp)) parameters
#define GET_IsSampler(disp) ((_glptr_IsSampler)(GET_by_offset((disp), _gloffset_IsSampler)))
#define SET_IsSampler(disp, func) do { \
   GLboolean (GLAPIENTRYP fn)(GLuint) = func; \
   SET_by_offset(disp, _gloffset_IsSampler, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_SamplerParameterIiv)(GLuint, GLenum, const GLint *);
#define CALL_SamplerParameterIiv(disp, parameters) (* GET_SamplerParameterIiv(disp)) parameters
#define GET_SamplerParameterIiv(disp) ((_glptr_SamplerParameterIiv)(GET_by_offset((disp), _gloffset_SamplerParameterIiv)))
#define SET_SamplerParameterIiv(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLenum, const GLint *) = func; \
   SET_by_offset(disp, _gloffset_SamplerParameterIiv, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_SamplerParameterIuiv)(GLuint, GLenum, const GLuint *);
#define CALL_SamplerParameterIuiv(disp, parameters) (* GET_SamplerParameterIuiv(disp)) parameters
#define GET_SamplerParameterIuiv(disp) ((_glptr_SamplerParameterIuiv)(GET_by_offset((disp), _gloffset_SamplerParameterIuiv)))
#define SET_SamplerParameterIuiv(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLenum, const GLuint *) = func; \
   SET_by_offset(disp, _gloffset_SamplerParameterIuiv, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_SamplerParameterf)(GLuint, GLenum, GLfloat);
#define CALL_SamplerParameterf(disp, parameters) (* GET_SamplerParameterf(disp)) parameters
#define GET_SamplerParameterf(disp) ((_glptr_SamplerParameterf)(GET_by_offset((disp), _gloffset_SamplerParameterf)))
#define SET_SamplerParameterf(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLenum, GLfloat) = func; \
   SET_by_offset(disp, _gloffset_SamplerParameterf, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_SamplerParameterfv)(GLuint, GLenum, const GLfloat *);
#define CALL_SamplerParameterfv(disp, parameters) (* GET_SamplerParameterfv(disp)) parameters
#define GET_SamplerParameterfv(disp) ((_glptr_SamplerParameterfv)(GET_by_offset((disp), _gloffset_SamplerParameterfv)))
#define SET_SamplerParameterfv(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLenum, const GLfloat *) = func; \
   SET_by_offset(disp, _gloffset_SamplerParameterfv, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_SamplerParameteri)(GLuint, GLenum, GLint);
#define CALL_SamplerParameteri(disp, parameters) (* GET_SamplerParameteri(disp)) parameters
#define GET_SamplerParameteri(disp) ((_glptr_SamplerParameteri)(GET_by_offset((disp), _gloffset_SamplerParameteri)))
#define SET_SamplerParameteri(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLenum, GLint) = func; \
   SET_by_offset(disp, _gloffset_SamplerParameteri, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_SamplerParameteriv)(GLuint, GLenum, const GLint *);
#define CALL_SamplerParameteriv(disp, parameters) (* GET_SamplerParameteriv(disp)) parameters
#define GET_SamplerParameteriv(disp) ((_glptr_SamplerParameteriv)(GET_by_offset((disp), _gloffset_SamplerParameteriv)))
#define SET_SamplerParameteriv(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLenum, const GLint *) = func; \
   SET_by_offset(disp, _gloffset_SamplerParameteriv, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_GetQueryObjecti64v)(GLuint, GLenum, GLint64 *);
#define CALL_GetQueryObjecti64v(disp, parameters) (* GET_GetQueryObjecti64v(disp)) parameters
#define GET_GetQueryObjecti64v(disp) ((_glptr_GetQueryObjecti64v)(GET_by_offset((disp), _gloffset_GetQueryObjecti64v)))
#define SET_GetQueryObjecti64v(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLenum, GLint64 *) = func; \
   SET_by_offset(disp, _gloffset_GetQueryObjecti64v, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_GetQueryObjectui64v)(GLuint, GLenum, GLuint64 *);
#define CALL_GetQueryObjectui64v(disp, parameters) (* GET_GetQueryObjectui64v(disp)) parameters
#define GET_GetQueryObjectui64v(disp) ((_glptr_GetQueryObjectui64v)(GET_by_offset((disp), _gloffset_GetQueryObjectui64v)))
#define SET_GetQueryObjectui64v(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLenum, GLuint64 *) = func; \
   SET_by_offset(disp, _gloffset_GetQueryObjectui64v, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_QueryCounter)(GLuint, GLenum);
#define CALL_QueryCounter(disp, parameters) (* GET_QueryCounter(disp)) parameters
#define GET_QueryCounter(disp) ((_glptr_QueryCounter)(GET_by_offset((disp), _gloffset_QueryCounter)))
#define SET_QueryCounter(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLenum) = func; \
   SET_by_offset(disp, _gloffset_QueryCounter, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_ColorP3ui)(GLenum, GLuint);
#define CALL_ColorP3ui(disp, parameters) (* GET_ColorP3ui(disp)) parameters
#define GET_ColorP3ui(disp) ((_glptr_ColorP3ui)(GET_by_offset((disp), _gloffset_ColorP3ui)))
#define SET_ColorP3ui(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLuint) = func; \
   SET_by_offset(disp, _gloffset_ColorP3ui, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_ColorP3uiv)(GLenum, const GLuint *);
#define CALL_ColorP3uiv(disp, parameters) (* GET_ColorP3uiv(disp)) parameters
#define GET_ColorP3uiv(disp) ((_glptr_ColorP3uiv)(GET_by_offset((disp), _gloffset_ColorP3uiv)))
#define SET_ColorP3uiv(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, const GLuint *) = func; \
   SET_by_offset(disp, _gloffset_ColorP3uiv, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_ColorP4ui)(GLenum, GLuint);
#define CALL_ColorP4ui(disp, parameters) (* GET_ColorP4ui(disp)) parameters
#define GET_ColorP4ui(disp) ((_glptr_ColorP4ui)(GET_by_offset((disp), _gloffset_ColorP4ui)))
#define SET_ColorP4ui(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLuint) = func; \
   SET_by_offset(disp, _gloffset_ColorP4ui, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_ColorP4uiv)(GLenum, const GLuint *);
#define CALL_ColorP4uiv(disp, parameters) (* GET_ColorP4uiv(disp)) parameters
#define GET_ColorP4uiv(disp) ((_glptr_ColorP4uiv)(GET_by_offset((disp), _gloffset_ColorP4uiv)))
#define SET_ColorP4uiv(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, const GLuint *) = func; \
   SET_by_offset(disp, _gloffset_ColorP4uiv, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_MultiTexCoordP1ui)(GLenum, GLenum, GLuint);
#define CALL_MultiTexCoordP1ui(disp, parameters) (* GET_MultiTexCoordP1ui(disp)) parameters
#define GET_MultiTexCoordP1ui(disp) ((_glptr_MultiTexCoordP1ui)(GET_by_offset((disp), _gloffset_MultiTexCoordP1ui)))
#define SET_MultiTexCoordP1ui(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLenum, GLuint) = func; \
   SET_by_offset(disp, _gloffset_MultiTexCoordP1ui, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_MultiTexCoordP1uiv)(GLenum, GLenum, const GLuint *);
#define CALL_MultiTexCoordP1uiv(disp, parameters) (* GET_MultiTexCoordP1uiv(disp)) parameters
#define GET_MultiTexCoordP1uiv(disp) ((_glptr_MultiTexCoordP1uiv)(GET_by_offset((disp), _gloffset_MultiTexCoordP1uiv)))
#define SET_MultiTexCoordP1uiv(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLenum, const GLuint *) = func; \
   SET_by_offset(disp, _gloffset_MultiTexCoordP1uiv, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_MultiTexCoordP2ui)(GLenum, GLenum, GLuint);
#define CALL_MultiTexCoordP2ui(disp, parameters) (* GET_MultiTexCoordP2ui(disp)) parameters
#define GET_MultiTexCoordP2ui(disp) ((_glptr_MultiTexCoordP2ui)(GET_by_offset((disp), _gloffset_MultiTexCoordP2ui)))
#define SET_MultiTexCoordP2ui(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLenum, GLuint) = func; \
   SET_by_offset(disp, _gloffset_MultiTexCoordP2ui, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_MultiTexCoordP2uiv)(GLenum, GLenum, const GLuint *);
#define CALL_MultiTexCoordP2uiv(disp, parameters) (* GET_MultiTexCoordP2uiv(disp)) parameters
#define GET_MultiTexCoordP2uiv(disp) ((_glptr_MultiTexCoordP2uiv)(GET_by_offset((disp), _gloffset_MultiTexCoordP2uiv)))
#define SET_MultiTexCoordP2uiv(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLenum, const GLuint *) = func; \
   SET_by_offset(disp, _gloffset_MultiTexCoordP2uiv, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_MultiTexCoordP3ui)(GLenum, GLenum, GLuint);
#define CALL_MultiTexCoordP3ui(disp, parameters) (* GET_MultiTexCoordP3ui(disp)) parameters
#define GET_MultiTexCoordP3ui(disp) ((_glptr_MultiTexCoordP3ui)(GET_by_offset((disp), _gloffset_MultiTexCoordP3ui)))
#define SET_MultiTexCoordP3ui(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLenum, GLuint) = func; \
   SET_by_offset(disp, _gloffset_MultiTexCoordP3ui, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_MultiTexCoordP3uiv)(GLenum, GLenum, const GLuint *);
#define CALL_MultiTexCoordP3uiv(disp, parameters) (* GET_MultiTexCoordP3uiv(disp)) parameters
#define GET_MultiTexCoordP3uiv(disp) ((_glptr_MultiTexCoordP3uiv)(GET_by_offset((disp), _gloffset_MultiTexCoordP3uiv)))
#define SET_MultiTexCoordP3uiv(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLenum, const GLuint *) = func; \
   SET_by_offset(disp, _gloffset_MultiTexCoordP3uiv, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_MultiTexCoordP4ui)(GLenum, GLenum, GLuint);
#define CALL_MultiTexCoordP4ui(disp, parameters) (* GET_MultiTexCoordP4ui(disp)) parameters
#define GET_MultiTexCoordP4ui(disp) ((_glptr_MultiTexCoordP4ui)(GET_by_offset((disp), _gloffset_MultiTexCoordP4ui)))
#define SET_MultiTexCoordP4ui(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLenum, GLuint) = func; \
   SET_by_offset(disp, _gloffset_MultiTexCoordP4ui, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_MultiTexCoordP4uiv)(GLenum, GLenum, const GLuint *);
#define CALL_MultiTexCoordP4uiv(disp, parameters) (* GET_MultiTexCoordP4uiv(disp)) parameters
#define GET_MultiTexCoordP4uiv(disp) ((_glptr_MultiTexCoordP4uiv)(GET_by_offset((disp), _gloffset_MultiTexCoordP4uiv)))
#define SET_MultiTexCoordP4uiv(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLenum, const GLuint *) = func; \
   SET_by_offset(disp, _gloffset_MultiTexCoordP4uiv, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_NormalP3ui)(GLenum, GLuint);
#define CALL_NormalP3ui(disp, parameters) (* GET_NormalP3ui(disp)) parameters
#define GET_NormalP3ui(disp) ((_glptr_NormalP3ui)(GET_by_offset((disp), _gloffset_NormalP3ui)))
#define SET_NormalP3ui(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLuint) = func; \
   SET_by_offset(disp, _gloffset_NormalP3ui, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_NormalP3uiv)(GLenum, const GLuint *);
#define CALL_NormalP3uiv(disp, parameters) (* GET_NormalP3uiv(disp)) parameters
#define GET_NormalP3uiv(disp) ((_glptr_NormalP3uiv)(GET_by_offset((disp), _gloffset_NormalP3uiv)))
#define SET_NormalP3uiv(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, const GLuint *) = func; \
   SET_by_offset(disp, _gloffset_NormalP3uiv, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_SecondaryColorP3ui)(GLenum, GLuint);
#define CALL_SecondaryColorP3ui(disp, parameters) (* GET_SecondaryColorP3ui(disp)) parameters
#define GET_SecondaryColorP3ui(disp) ((_glptr_SecondaryColorP3ui)(GET_by_offset((disp), _gloffset_SecondaryColorP3ui)))
#define SET_SecondaryColorP3ui(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLuint) = func; \
   SET_by_offset(disp, _gloffset_SecondaryColorP3ui, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_SecondaryColorP3uiv)(GLenum, const GLuint *);
#define CALL_SecondaryColorP3uiv(disp, parameters) (* GET_SecondaryColorP3uiv(disp)) parameters
#define GET_SecondaryColorP3uiv(disp) ((_glptr_SecondaryColorP3uiv)(GET_by_offset((disp), _gloffset_SecondaryColorP3uiv)))
#define SET_SecondaryColorP3uiv(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, const GLuint *) = func; \
   SET_by_offset(disp, _gloffset_SecondaryColorP3uiv, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_TexCoordP1ui)(GLenum, GLuint);
#define CALL_TexCoordP1ui(disp, parameters) (* GET_TexCoordP1ui(disp)) parameters
#define GET_TexCoordP1ui(disp) ((_glptr_TexCoordP1ui)(GET_by_offset((disp), _gloffset_TexCoordP1ui)))
#define SET_TexCoordP1ui(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLuint) = func; \
   SET_by_offset(disp, _gloffset_TexCoordP1ui, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_TexCoordP1uiv)(GLenum, const GLuint *);
#define CALL_TexCoordP1uiv(disp, parameters) (* GET_TexCoordP1uiv(disp)) parameters
#define GET_TexCoordP1uiv(disp) ((_glptr_TexCoordP1uiv)(GET_by_offset((disp), _gloffset_TexCoordP1uiv)))
#define SET_TexCoordP1uiv(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, const GLuint *) = func; \
   SET_by_offset(disp, _gloffset_TexCoordP1uiv, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_TexCoordP2ui)(GLenum, GLuint);
#define CALL_TexCoordP2ui(disp, parameters) (* GET_TexCoordP2ui(disp)) parameters
#define GET_TexCoordP2ui(disp) ((_glptr_TexCoordP2ui)(GET_by_offset((disp), _gloffset_TexCoordP2ui)))
#define SET_TexCoordP2ui(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLuint) = func; \
   SET_by_offset(disp, _gloffset_TexCoordP2ui, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_TexCoordP2uiv)(GLenum, const GLuint *);
#define CALL_TexCoordP2uiv(disp, parameters) (* GET_TexCoordP2uiv(disp)) parameters
#define GET_TexCoordP2uiv(disp) ((_glptr_TexCoordP2uiv)(GET_by_offset((disp), _gloffset_TexCoordP2uiv)))
#define SET_TexCoordP2uiv(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, const GLuint *) = func; \
   SET_by_offset(disp, _gloffset_TexCoordP2uiv, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_TexCoordP3ui)(GLenum, GLuint);
#define CALL_TexCoordP3ui(disp, parameters) (* GET_TexCoordP3ui(disp)) parameters
#define GET_TexCoordP3ui(disp) ((_glptr_TexCoordP3ui)(GET_by_offset((disp), _gloffset_TexCoordP3ui)))
#define SET_TexCoordP3ui(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLuint) = func; \
   SET_by_offset(disp, _gloffset_TexCoordP3ui, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_TexCoordP3uiv)(GLenum, const GLuint *);
#define CALL_TexCoordP3uiv(disp, parameters) (* GET_TexCoordP3uiv(disp)) parameters
#define GET_TexCoordP3uiv(disp) ((_glptr_TexCoordP3uiv)(GET_by_offset((disp), _gloffset_TexCoordP3uiv)))
#define SET_TexCoordP3uiv(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, const GLuint *) = func; \
   SET_by_offset(disp, _gloffset_TexCoordP3uiv, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_TexCoordP4ui)(GLenum, GLuint);
#define CALL_TexCoordP4ui(disp, parameters) (* GET_TexCoordP4ui(disp)) parameters
#define GET_TexCoordP4ui(disp) ((_glptr_TexCoordP4ui)(GET_by_offset((disp), _gloffset_TexCoordP4ui)))
#define SET_TexCoordP4ui(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLuint) = func; \
   SET_by_offset(disp, _gloffset_TexCoordP4ui, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_TexCoordP4uiv)(GLenum, const GLuint *);
#define CALL_TexCoordP4uiv(disp, parameters) (* GET_TexCoordP4uiv(disp)) parameters
#define GET_TexCoordP4uiv(disp) ((_glptr_TexCoordP4uiv)(GET_by_offset((disp), _gloffset_TexCoordP4uiv)))
#define SET_TexCoordP4uiv(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, const GLuint *) = func; \
   SET_by_offset(disp, _gloffset_TexCoordP4uiv, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_VertexAttribP1ui)(GLuint, GLenum, GLboolean, GLuint);
#define CALL_VertexAttribP1ui(disp, parameters) (* GET_VertexAttribP1ui(disp)) parameters
#define GET_VertexAttribP1ui(disp) ((_glptr_VertexAttribP1ui)(GET_by_offset((disp), _gloffset_VertexAttribP1ui)))
#define SET_VertexAttribP1ui(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLenum, GLboolean, GLuint) = func; \
   SET_by_offset(disp, _gloffset_VertexAttribP1ui, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_VertexAttribP1uiv)(GLuint, GLenum, GLboolean, const GLuint *);
#define CALL_VertexAttribP1uiv(disp, parameters) (* GET_VertexAttribP1uiv(disp)) parameters
#define GET_VertexAttribP1uiv(disp) ((_glptr_VertexAttribP1uiv)(GET_by_offset((disp), _gloffset_VertexAttribP1uiv)))
#define SET_VertexAttribP1uiv(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLenum, GLboolean, const GLuint *) = func; \
   SET_by_offset(disp, _gloffset_VertexAttribP1uiv, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_VertexAttribP2ui)(GLuint, GLenum, GLboolean, GLuint);
#define CALL_VertexAttribP2ui(disp, parameters) (* GET_VertexAttribP2ui(disp)) parameters
#define GET_VertexAttribP2ui(disp) ((_glptr_VertexAttribP2ui)(GET_by_offset((disp), _gloffset_VertexAttribP2ui)))
#define SET_VertexAttribP2ui(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLenum, GLboolean, GLuint) = func; \
   SET_by_offset(disp, _gloffset_VertexAttribP2ui, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_VertexAttribP2uiv)(GLuint, GLenum, GLboolean, const GLuint *);
#define CALL_VertexAttribP2uiv(disp, parameters) (* GET_VertexAttribP2uiv(disp)) parameters
#define GET_VertexAttribP2uiv(disp) ((_glptr_VertexAttribP2uiv)(GET_by_offset((disp), _gloffset_VertexAttribP2uiv)))
#define SET_VertexAttribP2uiv(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLenum, GLboolean, const GLuint *) = func; \
   SET_by_offset(disp, _gloffset_VertexAttribP2uiv, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_VertexAttribP3ui)(GLuint, GLenum, GLboolean, GLuint);
#define CALL_VertexAttribP3ui(disp, parameters) (* GET_VertexAttribP3ui(disp)) parameters
#define GET_VertexAttribP3ui(disp) ((_glptr_VertexAttribP3ui)(GET_by_offset((disp), _gloffset_VertexAttribP3ui)))
#define SET_VertexAttribP3ui(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLenum, GLboolean, GLuint) = func; \
   SET_by_offset(disp, _gloffset_VertexAttribP3ui, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_VertexAttribP3uiv)(GLuint, GLenum, GLboolean, const GLuint *);
#define CALL_VertexAttribP3uiv(disp, parameters) (* GET_VertexAttribP3uiv(disp)) parameters
#define GET_VertexAttribP3uiv(disp) ((_glptr_VertexAttribP3uiv)(GET_by_offset((disp), _gloffset_VertexAttribP3uiv)))
#define SET_VertexAttribP3uiv(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLenum, GLboolean, const GLuint *) = func; \
   SET_by_offset(disp, _gloffset_VertexAttribP3uiv, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_VertexAttribP4ui)(GLuint, GLenum, GLboolean, GLuint);
#define CALL_VertexAttribP4ui(disp, parameters) (* GET_VertexAttribP4ui(disp)) parameters
#define GET_VertexAttribP4ui(disp) ((_glptr_VertexAttribP4ui)(GET_by_offset((disp), _gloffset_VertexAttribP4ui)))
#define SET_VertexAttribP4ui(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLenum, GLboolean, GLuint) = func; \
   SET_by_offset(disp, _gloffset_VertexAttribP4ui, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_VertexAttribP4uiv)(GLuint, GLenum, GLboolean, const GLuint *);
#define CALL_VertexAttribP4uiv(disp, parameters) (* GET_VertexAttribP4uiv(disp)) parameters
#define GET_VertexAttribP4uiv(disp) ((_glptr_VertexAttribP4uiv)(GET_by_offset((disp), _gloffset_VertexAttribP4uiv)))
#define SET_VertexAttribP4uiv(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLenum, GLboolean, const GLuint *) = func; \
   SET_by_offset(disp, _gloffset_VertexAttribP4uiv, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_VertexP2ui)(GLenum, GLuint);
#define CALL_VertexP2ui(disp, parameters) (* GET_VertexP2ui(disp)) parameters
#define GET_VertexP2ui(disp) ((_glptr_VertexP2ui)(GET_by_offset((disp), _gloffset_VertexP2ui)))
#define SET_VertexP2ui(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLuint) = func; \
   SET_by_offset(disp, _gloffset_VertexP2ui, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_VertexP2uiv)(GLenum, const GLuint *);
#define CALL_VertexP2uiv(disp, parameters) (* GET_VertexP2uiv(disp)) parameters
#define GET_VertexP2uiv(disp) ((_glptr_VertexP2uiv)(GET_by_offset((disp), _gloffset_VertexP2uiv)))
#define SET_VertexP2uiv(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, const GLuint *) = func; \
   SET_by_offset(disp, _gloffset_VertexP2uiv, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_VertexP3ui)(GLenum, GLuint);
#define CALL_VertexP3ui(disp, parameters) (* GET_VertexP3ui(disp)) parameters
#define GET_VertexP3ui(disp) ((_glptr_VertexP3ui)(GET_by_offset((disp), _gloffset_VertexP3ui)))
#define SET_VertexP3ui(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLuint) = func; \
   SET_by_offset(disp, _gloffset_VertexP3ui, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_VertexP3uiv)(GLenum, const GLuint *);
#define CALL_VertexP3uiv(disp, parameters) (* GET_VertexP3uiv(disp)) parameters
#define GET_VertexP3uiv(disp) ((_glptr_VertexP3uiv)(GET_by_offset((disp), _gloffset_VertexP3uiv)))
#define SET_VertexP3uiv(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, const GLuint *) = func; \
   SET_by_offset(disp, _gloffset_VertexP3uiv, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_VertexP4ui)(GLenum, GLuint);
#define CALL_VertexP4ui(disp, parameters) (* GET_VertexP4ui(disp)) parameters
#define GET_VertexP4ui(disp) ((_glptr_VertexP4ui)(GET_by_offset((disp), _gloffset_VertexP4ui)))
#define SET_VertexP4ui(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLuint) = func; \
   SET_by_offset(disp, _gloffset_VertexP4ui, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_VertexP4uiv)(GLenum, const GLuint *);
#define CALL_VertexP4uiv(disp, parameters) (* GET_VertexP4uiv(disp)) parameters
#define GET_VertexP4uiv(disp) ((_glptr_VertexP4uiv)(GET_by_offset((disp), _gloffset_VertexP4uiv)))
#define SET_VertexP4uiv(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, const GLuint *) = func; \
   SET_by_offset(disp, _gloffset_VertexP4uiv, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_DrawArraysIndirect)(GLenum, const GLvoid *);
#define CALL_DrawArraysIndirect(disp, parameters) (* GET_DrawArraysIndirect(disp)) parameters
#define GET_DrawArraysIndirect(disp) ((_glptr_DrawArraysIndirect)(GET_by_offset((disp), _gloffset_DrawArraysIndirect)))
#define SET_DrawArraysIndirect(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, const GLvoid *) = func; \
   SET_by_offset(disp, _gloffset_DrawArraysIndirect, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_DrawElementsIndirect)(GLenum, GLenum, const GLvoid *);
#define CALL_DrawElementsIndirect(disp, parameters) (* GET_DrawElementsIndirect(disp)) parameters
#define GET_DrawElementsIndirect(disp) ((_glptr_DrawElementsIndirect)(GET_by_offset((disp), _gloffset_DrawElementsIndirect)))
#define SET_DrawElementsIndirect(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLenum, const GLvoid *) = func; \
   SET_by_offset(disp, _gloffset_DrawElementsIndirect, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_GetUniformdv)(GLuint, GLint, GLdouble *);
#define CALL_GetUniformdv(disp, parameters) (* GET_GetUniformdv(disp)) parameters
#define GET_GetUniformdv(disp) ((_glptr_GetUniformdv)(GET_by_offset((disp), _gloffset_GetUniformdv)))
#define SET_GetUniformdv(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLint, GLdouble *) = func; \
   SET_by_offset(disp, _gloffset_GetUniformdv, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_Uniform1d)(GLint, GLdouble);
#define CALL_Uniform1d(disp, parameters) (* GET_Uniform1d(disp)) parameters
#define GET_Uniform1d(disp) ((_glptr_Uniform1d)(GET_by_offset((disp), _gloffset_Uniform1d)))
#define SET_Uniform1d(disp, func) do { \
   void (GLAPIENTRYP fn)(GLint, GLdouble) = func; \
   SET_by_offset(disp, _gloffset_Uniform1d, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_Uniform1dv)(GLint, GLsizei, const GLdouble *);
#define CALL_Uniform1dv(disp, parameters) (* GET_Uniform1dv(disp)) parameters
#define GET_Uniform1dv(disp) ((_glptr_Uniform1dv)(GET_by_offset((disp), _gloffset_Uniform1dv)))
#define SET_Uniform1dv(disp, func) do { \
   void (GLAPIENTRYP fn)(GLint, GLsizei, const GLdouble *) = func; \
   SET_by_offset(disp, _gloffset_Uniform1dv, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_Uniform2d)(GLint, GLdouble, GLdouble);
#define CALL_Uniform2d(disp, parameters) (* GET_Uniform2d(disp)) parameters
#define GET_Uniform2d(disp) ((_glptr_Uniform2d)(GET_by_offset((disp), _gloffset_Uniform2d)))
#define SET_Uniform2d(disp, func) do { \
   void (GLAPIENTRYP fn)(GLint, GLdouble, GLdouble) = func; \
   SET_by_offset(disp, _gloffset_Uniform2d, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_Uniform2dv)(GLint, GLsizei, const GLdouble *);
#define CALL_Uniform2dv(disp, parameters) (* GET_Uniform2dv(disp)) parameters
#define GET_Uniform2dv(disp) ((_glptr_Uniform2dv)(GET_by_offset((disp), _gloffset_Uniform2dv)))
#define SET_Uniform2dv(disp, func) do { \
   void (GLAPIENTRYP fn)(GLint, GLsizei, const GLdouble *) = func; \
   SET_by_offset(disp, _gloffset_Uniform2dv, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_Uniform3d)(GLint, GLdouble, GLdouble, GLdouble);
#define CALL_Uniform3d(disp, parameters) (* GET_Uniform3d(disp)) parameters
#define GET_Uniform3d(disp) ((_glptr_Uniform3d)(GET_by_offset((disp), _gloffset_Uniform3d)))
#define SET_Uniform3d(disp, func) do { \
   void (GLAPIENTRYP fn)(GLint, GLdouble, GLdouble, GLdouble) = func; \
   SET_by_offset(disp, _gloffset_Uniform3d, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_Uniform3dv)(GLint, GLsizei, const GLdouble *);
#define CALL_Uniform3dv(disp, parameters) (* GET_Uniform3dv(disp)) parameters
#define GET_Uniform3dv(disp) ((_glptr_Uniform3dv)(GET_by_offset((disp), _gloffset_Uniform3dv)))
#define SET_Uniform3dv(disp, func) do { \
   void (GLAPIENTRYP fn)(GLint, GLsizei, const GLdouble *) = func; \
   SET_by_offset(disp, _gloffset_Uniform3dv, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_Uniform4d)(GLint, GLdouble, GLdouble, GLdouble, GLdouble);
#define CALL_Uniform4d(disp, parameters) (* GET_Uniform4d(disp)) parameters
#define GET_Uniform4d(disp) ((_glptr_Uniform4d)(GET_by_offset((disp), _gloffset_Uniform4d)))
#define SET_Uniform4d(disp, func) do { \
   void (GLAPIENTRYP fn)(GLint, GLdouble, GLdouble, GLdouble, GLdouble) = func; \
   SET_by_offset(disp, _gloffset_Uniform4d, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_Uniform4dv)(GLint, GLsizei, const GLdouble *);
#define CALL_Uniform4dv(disp, parameters) (* GET_Uniform4dv(disp)) parameters
#define GET_Uniform4dv(disp) ((_glptr_Uniform4dv)(GET_by_offset((disp), _gloffset_Uniform4dv)))
#define SET_Uniform4dv(disp, func) do { \
   void (GLAPIENTRYP fn)(GLint, GLsizei, const GLdouble *) = func; \
   SET_by_offset(disp, _gloffset_Uniform4dv, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_UniformMatrix2dv)(GLint, GLsizei, GLboolean, const GLdouble *);
#define CALL_UniformMatrix2dv(disp, parameters) (* GET_UniformMatrix2dv(disp)) parameters
#define GET_UniformMatrix2dv(disp) ((_glptr_UniformMatrix2dv)(GET_by_offset((disp), _gloffset_UniformMatrix2dv)))
#define SET_UniformMatrix2dv(disp, func) do { \
   void (GLAPIENTRYP fn)(GLint, GLsizei, GLboolean, const GLdouble *) = func; \
   SET_by_offset(disp, _gloffset_UniformMatrix2dv, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_UniformMatrix2x3dv)(GLint, GLsizei, GLboolean, const GLdouble *);
#define CALL_UniformMatrix2x3dv(disp, parameters) (* GET_UniformMatrix2x3dv(disp)) parameters
#define GET_UniformMatrix2x3dv(disp) ((_glptr_UniformMatrix2x3dv)(GET_by_offset((disp), _gloffset_UniformMatrix2x3dv)))
#define SET_UniformMatrix2x3dv(disp, func) do { \
   void (GLAPIENTRYP fn)(GLint, GLsizei, GLboolean, const GLdouble *) = func; \
   SET_by_offset(disp, _gloffset_UniformMatrix2x3dv, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_UniformMatrix2x4dv)(GLint, GLsizei, GLboolean, const GLdouble *);
#define CALL_UniformMatrix2x4dv(disp, parameters) (* GET_UniformMatrix2x4dv(disp)) parameters
#define GET_UniformMatrix2x4dv(disp) ((_glptr_UniformMatrix2x4dv)(GET_by_offset((disp), _gloffset_UniformMatrix2x4dv)))
#define SET_UniformMatrix2x4dv(disp, func) do { \
   void (GLAPIENTRYP fn)(GLint, GLsizei, GLboolean, const GLdouble *) = func; \
   SET_by_offset(disp, _gloffset_UniformMatrix2x4dv, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_UniformMatrix3dv)(GLint, GLsizei, GLboolean, const GLdouble *);
#define CALL_UniformMatrix3dv(disp, parameters) (* GET_UniformMatrix3dv(disp)) parameters
#define GET_UniformMatrix3dv(disp) ((_glptr_UniformMatrix3dv)(GET_by_offset((disp), _gloffset_UniformMatrix3dv)))
#define SET_UniformMatrix3dv(disp, func) do { \
   void (GLAPIENTRYP fn)(GLint, GLsizei, GLboolean, const GLdouble *) = func; \
   SET_by_offset(disp, _gloffset_UniformMatrix3dv, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_UniformMatrix3x2dv)(GLint, GLsizei, GLboolean, const GLdouble *);
#define CALL_UniformMatrix3x2dv(disp, parameters) (* GET_UniformMatrix3x2dv(disp)) parameters
#define GET_UniformMatrix3x2dv(disp) ((_glptr_UniformMatrix3x2dv)(GET_by_offset((disp), _gloffset_UniformMatrix3x2dv)))
#define SET_UniformMatrix3x2dv(disp, func) do { \
   void (GLAPIENTRYP fn)(GLint, GLsizei, GLboolean, const GLdouble *) = func; \
   SET_by_offset(disp, _gloffset_UniformMatrix3x2dv, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_UniformMatrix3x4dv)(GLint, GLsizei, GLboolean, const GLdouble *);
#define CALL_UniformMatrix3x4dv(disp, parameters) (* GET_UniformMatrix3x4dv(disp)) parameters
#define GET_UniformMatrix3x4dv(disp) ((_glptr_UniformMatrix3x4dv)(GET_by_offset((disp), _gloffset_UniformMatrix3x4dv)))
#define SET_UniformMatrix3x4dv(disp, func) do { \
   void (GLAPIENTRYP fn)(GLint, GLsizei, GLboolean, const GLdouble *) = func; \
   SET_by_offset(disp, _gloffset_UniformMatrix3x4dv, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_UniformMatrix4dv)(GLint, GLsizei, GLboolean, const GLdouble *);
#define CALL_UniformMatrix4dv(disp, parameters) (* GET_UniformMatrix4dv(disp)) parameters
#define GET_UniformMatrix4dv(disp) ((_glptr_UniformMatrix4dv)(GET_by_offset((disp), _gloffset_UniformMatrix4dv)))
#define SET_UniformMatrix4dv(disp, func) do { \
   void (GLAPIENTRYP fn)(GLint, GLsizei, GLboolean, const GLdouble *) = func; \
   SET_by_offset(disp, _gloffset_UniformMatrix4dv, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_UniformMatrix4x2dv)(GLint, GLsizei, GLboolean, const GLdouble *);
#define CALL_UniformMatrix4x2dv(disp, parameters) (* GET_UniformMatrix4x2dv(disp)) parameters
#define GET_UniformMatrix4x2dv(disp) ((_glptr_UniformMatrix4x2dv)(GET_by_offset((disp), _gloffset_UniformMatrix4x2dv)))
#define SET_UniformMatrix4x2dv(disp, func) do { \
   void (GLAPIENTRYP fn)(GLint, GLsizei, GLboolean, const GLdouble *) = func; \
   SET_by_offset(disp, _gloffset_UniformMatrix4x2dv, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_UniformMatrix4x3dv)(GLint, GLsizei, GLboolean, const GLdouble *);
#define CALL_UniformMatrix4x3dv(disp, parameters) (* GET_UniformMatrix4x3dv(disp)) parameters
#define GET_UniformMatrix4x3dv(disp) ((_glptr_UniformMatrix4x3dv)(GET_by_offset((disp), _gloffset_UniformMatrix4x3dv)))
#define SET_UniformMatrix4x3dv(disp, func) do { \
   void (GLAPIENTRYP fn)(GLint, GLsizei, GLboolean, const GLdouble *) = func; \
   SET_by_offset(disp, _gloffset_UniformMatrix4x3dv, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_GetActiveSubroutineName)(GLuint, GLenum, GLuint, GLsizei, GLsizei *, GLchar *);
#define CALL_GetActiveSubroutineName(disp, parameters) (* GET_GetActiveSubroutineName(disp)) parameters
#define GET_GetActiveSubroutineName(disp) ((_glptr_GetActiveSubroutineName)(GET_by_offset((disp), _gloffset_GetActiveSubroutineName)))
#define SET_GetActiveSubroutineName(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLenum, GLuint, GLsizei, GLsizei *, GLchar *) = func; \
   SET_by_offset(disp, _gloffset_GetActiveSubroutineName, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_GetActiveSubroutineUniformName)(GLuint, GLenum, GLuint, GLsizei, GLsizei *, GLchar *);
#define CALL_GetActiveSubroutineUniformName(disp, parameters) (* GET_GetActiveSubroutineUniformName(disp)) parameters
#define GET_GetActiveSubroutineUniformName(disp) ((_glptr_GetActiveSubroutineUniformName)(GET_by_offset((disp), _gloffset_GetActiveSubroutineUniformName)))
#define SET_GetActiveSubroutineUniformName(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLenum, GLuint, GLsizei, GLsizei *, GLchar *) = func; \
   SET_by_offset(disp, _gloffset_GetActiveSubroutineUniformName, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_GetActiveSubroutineUniformiv)(GLuint, GLenum, GLuint, GLenum, GLint *);
#define CALL_GetActiveSubroutineUniformiv(disp, parameters) (* GET_GetActiveSubroutineUniformiv(disp)) parameters
#define GET_GetActiveSubroutineUniformiv(disp) ((_glptr_GetActiveSubroutineUniformiv)(GET_by_offset((disp), _gloffset_GetActiveSubroutineUniformiv)))
#define SET_GetActiveSubroutineUniformiv(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLenum, GLuint, GLenum, GLint *) = func; \
   SET_by_offset(disp, _gloffset_GetActiveSubroutineUniformiv, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_GetProgramStageiv)(GLuint, GLenum, GLenum, GLint *);
#define CALL_GetProgramStageiv(disp, parameters) (* GET_GetProgramStageiv(disp)) parameters
#define GET_GetProgramStageiv(disp) ((_glptr_GetProgramStageiv)(GET_by_offset((disp), _gloffset_GetProgramStageiv)))
#define SET_GetProgramStageiv(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLenum, GLenum, GLint *) = func; \
   SET_by_offset(disp, _gloffset_GetProgramStageiv, fn); \
} while (0)

typedef GLuint (GLAPIENTRYP _glptr_GetSubroutineIndex)(GLuint, GLenum, const GLchar *);
#define CALL_GetSubroutineIndex(disp, parameters) (* GET_GetSubroutineIndex(disp)) parameters
#define GET_GetSubroutineIndex(disp) ((_glptr_GetSubroutineIndex)(GET_by_offset((disp), _gloffset_GetSubroutineIndex)))
#define SET_GetSubroutineIndex(disp, func) do { \
   GLuint (GLAPIENTRYP fn)(GLuint, GLenum, const GLchar *) = func; \
   SET_by_offset(disp, _gloffset_GetSubroutineIndex, fn); \
} while (0)

typedef GLint (GLAPIENTRYP _glptr_GetSubroutineUniformLocation)(GLuint, GLenum, const GLchar *);
#define CALL_GetSubroutineUniformLocation(disp, parameters) (* GET_GetSubroutineUniformLocation(disp)) parameters
#define GET_GetSubroutineUniformLocation(disp) ((_glptr_GetSubroutineUniformLocation)(GET_by_offset((disp), _gloffset_GetSubroutineUniformLocation)))
#define SET_GetSubroutineUniformLocation(disp, func) do { \
   GLint (GLAPIENTRYP fn)(GLuint, GLenum, const GLchar *) = func; \
   SET_by_offset(disp, _gloffset_GetSubroutineUniformLocation, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_GetUniformSubroutineuiv)(GLenum, GLint, GLuint *);
#define CALL_GetUniformSubroutineuiv(disp, parameters) (* GET_GetUniformSubroutineuiv(disp)) parameters
#define GET_GetUniformSubroutineuiv(disp) ((_glptr_GetUniformSubroutineuiv)(GET_by_offset((disp), _gloffset_GetUniformSubroutineuiv)))
#define SET_GetUniformSubroutineuiv(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLint, GLuint *) = func; \
   SET_by_offset(disp, _gloffset_GetUniformSubroutineuiv, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_UniformSubroutinesuiv)(GLenum, GLsizei, const GLuint *);
#define CALL_UniformSubroutinesuiv(disp, parameters) (* GET_UniformSubroutinesuiv(disp)) parameters
#define GET_UniformSubroutinesuiv(disp) ((_glptr_UniformSubroutinesuiv)(GET_by_offset((disp), _gloffset_UniformSubroutinesuiv)))
#define SET_UniformSubroutinesuiv(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLsizei, const GLuint *) = func; \
   SET_by_offset(disp, _gloffset_UniformSubroutinesuiv, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_PatchParameterfv)(GLenum, const GLfloat *);
#define CALL_PatchParameterfv(disp, parameters) (* GET_PatchParameterfv(disp)) parameters
#define GET_PatchParameterfv(disp) ((_glptr_PatchParameterfv)(GET_by_offset((disp), _gloffset_PatchParameterfv)))
#define SET_PatchParameterfv(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, const GLfloat *) = func; \
   SET_by_offset(disp, _gloffset_PatchParameterfv, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_PatchParameteri)(GLenum, GLint);
#define CALL_PatchParameteri(disp, parameters) (* GET_PatchParameteri(disp)) parameters
#define GET_PatchParameteri(disp) ((_glptr_PatchParameteri)(GET_by_offset((disp), _gloffset_PatchParameteri)))
#define SET_PatchParameteri(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLint) = func; \
   SET_by_offset(disp, _gloffset_PatchParameteri, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_BindTransformFeedback)(GLenum, GLuint);
#define CALL_BindTransformFeedback(disp, parameters) (* GET_BindTransformFeedback(disp)) parameters
#define GET_BindTransformFeedback(disp) ((_glptr_BindTransformFeedback)(GET_by_offset((disp), _gloffset_BindTransformFeedback)))
#define SET_BindTransformFeedback(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLuint) = func; \
   SET_by_offset(disp, _gloffset_BindTransformFeedback, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_DeleteTransformFeedbacks)(GLsizei, const GLuint *);
#define CALL_DeleteTransformFeedbacks(disp, parameters) (* GET_DeleteTransformFeedbacks(disp)) parameters
#define GET_DeleteTransformFeedbacks(disp) ((_glptr_DeleteTransformFeedbacks)(GET_by_offset((disp), _gloffset_DeleteTransformFeedbacks)))
#define SET_DeleteTransformFeedbacks(disp, func) do { \
   void (GLAPIENTRYP fn)(GLsizei, const GLuint *) = func; \
   SET_by_offset(disp, _gloffset_DeleteTransformFeedbacks, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_DrawTransformFeedback)(GLenum, GLuint);
#define CALL_DrawTransformFeedback(disp, parameters) (* GET_DrawTransformFeedback(disp)) parameters
#define GET_DrawTransformFeedback(disp) ((_glptr_DrawTransformFeedback)(GET_by_offset((disp), _gloffset_DrawTransformFeedback)))
#define SET_DrawTransformFeedback(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLuint) = func; \
   SET_by_offset(disp, _gloffset_DrawTransformFeedback, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_GenTransformFeedbacks)(GLsizei, GLuint *);
#define CALL_GenTransformFeedbacks(disp, parameters) (* GET_GenTransformFeedbacks(disp)) parameters
#define GET_GenTransformFeedbacks(disp) ((_glptr_GenTransformFeedbacks)(GET_by_offset((disp), _gloffset_GenTransformFeedbacks)))
#define SET_GenTransformFeedbacks(disp, func) do { \
   void (GLAPIENTRYP fn)(GLsizei, GLuint *) = func; \
   SET_by_offset(disp, _gloffset_GenTransformFeedbacks, fn); \
} while (0)

typedef GLboolean (GLAPIENTRYP _glptr_IsTransformFeedback)(GLuint);
#define CALL_IsTransformFeedback(disp, parameters) (* GET_IsTransformFeedback(disp)) parameters
#define GET_IsTransformFeedback(disp) ((_glptr_IsTransformFeedback)(GET_by_offset((disp), _gloffset_IsTransformFeedback)))
#define SET_IsTransformFeedback(disp, func) do { \
   GLboolean (GLAPIENTRYP fn)(GLuint) = func; \
   SET_by_offset(disp, _gloffset_IsTransformFeedback, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_PauseTransformFeedback)(void);
#define CALL_PauseTransformFeedback(disp, parameters) (* GET_PauseTransformFeedback(disp)) parameters
#define GET_PauseTransformFeedback(disp) ((_glptr_PauseTransformFeedback)(GET_by_offset((disp), _gloffset_PauseTransformFeedback)))
#define SET_PauseTransformFeedback(disp, func) do { \
   void (GLAPIENTRYP fn)(void) = func; \
   SET_by_offset(disp, _gloffset_PauseTransformFeedback, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_ResumeTransformFeedback)(void);
#define CALL_ResumeTransformFeedback(disp, parameters) (* GET_ResumeTransformFeedback(disp)) parameters
#define GET_ResumeTransformFeedback(disp) ((_glptr_ResumeTransformFeedback)(GET_by_offset((disp), _gloffset_ResumeTransformFeedback)))
#define SET_ResumeTransformFeedback(disp, func) do { \
   void (GLAPIENTRYP fn)(void) = func; \
   SET_by_offset(disp, _gloffset_ResumeTransformFeedback, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_BeginQueryIndexed)(GLenum, GLuint, GLuint);
#define CALL_BeginQueryIndexed(disp, parameters) (* GET_BeginQueryIndexed(disp)) parameters
#define GET_BeginQueryIndexed(disp) ((_glptr_BeginQueryIndexed)(GET_by_offset((disp), _gloffset_BeginQueryIndexed)))
#define SET_BeginQueryIndexed(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLuint, GLuint) = func; \
   SET_by_offset(disp, _gloffset_BeginQueryIndexed, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_DrawTransformFeedbackStream)(GLenum, GLuint, GLuint);
#define CALL_DrawTransformFeedbackStream(disp, parameters) (* GET_DrawTransformFeedbackStream(disp)) parameters
#define GET_DrawTransformFeedbackStream(disp) ((_glptr_DrawTransformFeedbackStream)(GET_by_offset((disp), _gloffset_DrawTransformFeedbackStream)))
#define SET_DrawTransformFeedbackStream(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLuint, GLuint) = func; \
   SET_by_offset(disp, _gloffset_DrawTransformFeedbackStream, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_EndQueryIndexed)(GLenum, GLuint);
#define CALL_EndQueryIndexed(disp, parameters) (* GET_EndQueryIndexed(disp)) parameters
#define GET_EndQueryIndexed(disp) ((_glptr_EndQueryIndexed)(GET_by_offset((disp), _gloffset_EndQueryIndexed)))
#define SET_EndQueryIndexed(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLuint) = func; \
   SET_by_offset(disp, _gloffset_EndQueryIndexed, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_GetQueryIndexediv)(GLenum, GLuint, GLenum, GLint *);
#define CALL_GetQueryIndexediv(disp, parameters) (* GET_GetQueryIndexediv(disp)) parameters
#define GET_GetQueryIndexediv(disp) ((_glptr_GetQueryIndexediv)(GET_by_offset((disp), _gloffset_GetQueryIndexediv)))
#define SET_GetQueryIndexediv(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLuint, GLenum, GLint *) = func; \
   SET_by_offset(disp, _gloffset_GetQueryIndexediv, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_ClearDepthf)(GLclampf);
#define CALL_ClearDepthf(disp, parameters) (* GET_ClearDepthf(disp)) parameters
#define GET_ClearDepthf(disp) ((_glptr_ClearDepthf)(GET_by_offset((disp), _gloffset_ClearDepthf)))
#define SET_ClearDepthf(disp, func) do { \
   void (GLAPIENTRYP fn)(GLclampf) = func; \
   SET_by_offset(disp, _gloffset_ClearDepthf, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_DepthRangef)(GLclampf, GLclampf);
#define CALL_DepthRangef(disp, parameters) (* GET_DepthRangef(disp)) parameters
#define GET_DepthRangef(disp) ((_glptr_DepthRangef)(GET_by_offset((disp), _gloffset_DepthRangef)))
#define SET_DepthRangef(disp, func) do { \
   void (GLAPIENTRYP fn)(GLclampf, GLclampf) = func; \
   SET_by_offset(disp, _gloffset_DepthRangef, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_GetShaderPrecisionFormat)(GLenum, GLenum, GLint *, GLint *);
#define CALL_GetShaderPrecisionFormat(disp, parameters) (* GET_GetShaderPrecisionFormat(disp)) parameters
#define GET_GetShaderPrecisionFormat(disp) ((_glptr_GetShaderPrecisionFormat)(GET_by_offset((disp), _gloffset_GetShaderPrecisionFormat)))
#define SET_GetShaderPrecisionFormat(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLenum, GLint *, GLint *) = func; \
   SET_by_offset(disp, _gloffset_GetShaderPrecisionFormat, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_ReleaseShaderCompiler)(void);
#define CALL_ReleaseShaderCompiler(disp, parameters) (* GET_ReleaseShaderCompiler(disp)) parameters
#define GET_ReleaseShaderCompiler(disp) ((_glptr_ReleaseShaderCompiler)(GET_by_offset((disp), _gloffset_ReleaseShaderCompiler)))
#define SET_ReleaseShaderCompiler(disp, func) do { \
   void (GLAPIENTRYP fn)(void) = func; \
   SET_by_offset(disp, _gloffset_ReleaseShaderCompiler, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_ShaderBinary)(GLsizei, const GLuint *, GLenum, const GLvoid *, GLsizei);
#define CALL_ShaderBinary(disp, parameters) (* GET_ShaderBinary(disp)) parameters
#define GET_ShaderBinary(disp) ((_glptr_ShaderBinary)(GET_by_offset((disp), _gloffset_ShaderBinary)))
#define SET_ShaderBinary(disp, func) do { \
   void (GLAPIENTRYP fn)(GLsizei, const GLuint *, GLenum, const GLvoid *, GLsizei) = func; \
   SET_by_offset(disp, _gloffset_ShaderBinary, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_GetProgramBinary)(GLuint, GLsizei, GLsizei *, GLenum *, GLvoid *);
#define CALL_GetProgramBinary(disp, parameters) (* GET_GetProgramBinary(disp)) parameters
#define GET_GetProgramBinary(disp) ((_glptr_GetProgramBinary)(GET_by_offset((disp), _gloffset_GetProgramBinary)))
#define SET_GetProgramBinary(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLsizei, GLsizei *, GLenum *, GLvoid *) = func; \
   SET_by_offset(disp, _gloffset_GetProgramBinary, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_ProgramBinary)(GLuint, GLenum, const GLvoid *, GLsizei);
#define CALL_ProgramBinary(disp, parameters) (* GET_ProgramBinary(disp)) parameters
#define GET_ProgramBinary(disp) ((_glptr_ProgramBinary)(GET_by_offset((disp), _gloffset_ProgramBinary)))
#define SET_ProgramBinary(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLenum, const GLvoid *, GLsizei) = func; \
   SET_by_offset(disp, _gloffset_ProgramBinary, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_ProgramParameteri)(GLuint, GLenum, GLint);
#define CALL_ProgramParameteri(disp, parameters) (* GET_ProgramParameteri(disp)) parameters
#define GET_ProgramParameteri(disp) ((_glptr_ProgramParameteri)(GET_by_offset((disp), _gloffset_ProgramParameteri)))
#define SET_ProgramParameteri(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLenum, GLint) = func; \
   SET_by_offset(disp, _gloffset_ProgramParameteri, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_GetVertexAttribLdv)(GLuint, GLenum, GLdouble *);
#define CALL_GetVertexAttribLdv(disp, parameters) (* GET_GetVertexAttribLdv(disp)) parameters
#define GET_GetVertexAttribLdv(disp) ((_glptr_GetVertexAttribLdv)(GET_by_offset((disp), _gloffset_GetVertexAttribLdv)))
#define SET_GetVertexAttribLdv(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLenum, GLdouble *) = func; \
   SET_by_offset(disp, _gloffset_GetVertexAttribLdv, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_VertexAttribL1d)(GLuint, GLdouble);
#define CALL_VertexAttribL1d(disp, parameters) (* GET_VertexAttribL1d(disp)) parameters
#define GET_VertexAttribL1d(disp) ((_glptr_VertexAttribL1d)(GET_by_offset((disp), _gloffset_VertexAttribL1d)))
#define SET_VertexAttribL1d(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLdouble) = func; \
   SET_by_offset(disp, _gloffset_VertexAttribL1d, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_VertexAttribL1dv)(GLuint, const GLdouble *);
#define CALL_VertexAttribL1dv(disp, parameters) (* GET_VertexAttribL1dv(disp)) parameters
#define GET_VertexAttribL1dv(disp) ((_glptr_VertexAttribL1dv)(GET_by_offset((disp), _gloffset_VertexAttribL1dv)))
#define SET_VertexAttribL1dv(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, const GLdouble *) = func; \
   SET_by_offset(disp, _gloffset_VertexAttribL1dv, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_VertexAttribL2d)(GLuint, GLdouble, GLdouble);
#define CALL_VertexAttribL2d(disp, parameters) (* GET_VertexAttribL2d(disp)) parameters
#define GET_VertexAttribL2d(disp) ((_glptr_VertexAttribL2d)(GET_by_offset((disp), _gloffset_VertexAttribL2d)))
#define SET_VertexAttribL2d(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLdouble, GLdouble) = func; \
   SET_by_offset(disp, _gloffset_VertexAttribL2d, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_VertexAttribL2dv)(GLuint, const GLdouble *);
#define CALL_VertexAttribL2dv(disp, parameters) (* GET_VertexAttribL2dv(disp)) parameters
#define GET_VertexAttribL2dv(disp) ((_glptr_VertexAttribL2dv)(GET_by_offset((disp), _gloffset_VertexAttribL2dv)))
#define SET_VertexAttribL2dv(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, const GLdouble *) = func; \
   SET_by_offset(disp, _gloffset_VertexAttribL2dv, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_VertexAttribL3d)(GLuint, GLdouble, GLdouble, GLdouble);
#define CALL_VertexAttribL3d(disp, parameters) (* GET_VertexAttribL3d(disp)) parameters
#define GET_VertexAttribL3d(disp) ((_glptr_VertexAttribL3d)(GET_by_offset((disp), _gloffset_VertexAttribL3d)))
#define SET_VertexAttribL3d(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLdouble, GLdouble, GLdouble) = func; \
   SET_by_offset(disp, _gloffset_VertexAttribL3d, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_VertexAttribL3dv)(GLuint, const GLdouble *);
#define CALL_VertexAttribL3dv(disp, parameters) (* GET_VertexAttribL3dv(disp)) parameters
#define GET_VertexAttribL3dv(disp) ((_glptr_VertexAttribL3dv)(GET_by_offset((disp), _gloffset_VertexAttribL3dv)))
#define SET_VertexAttribL3dv(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, const GLdouble *) = func; \
   SET_by_offset(disp, _gloffset_VertexAttribL3dv, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_VertexAttribL4d)(GLuint, GLdouble, GLdouble, GLdouble, GLdouble);
#define CALL_VertexAttribL4d(disp, parameters) (* GET_VertexAttribL4d(disp)) parameters
#define GET_VertexAttribL4d(disp) ((_glptr_VertexAttribL4d)(GET_by_offset((disp), _gloffset_VertexAttribL4d)))
#define SET_VertexAttribL4d(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLdouble, GLdouble, GLdouble, GLdouble) = func; \
   SET_by_offset(disp, _gloffset_VertexAttribL4d, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_VertexAttribL4dv)(GLuint, const GLdouble *);
#define CALL_VertexAttribL4dv(disp, parameters) (* GET_VertexAttribL4dv(disp)) parameters
#define GET_VertexAttribL4dv(disp) ((_glptr_VertexAttribL4dv)(GET_by_offset((disp), _gloffset_VertexAttribL4dv)))
#define SET_VertexAttribL4dv(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, const GLdouble *) = func; \
   SET_by_offset(disp, _gloffset_VertexAttribL4dv, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_VertexAttribLPointer)(GLuint, GLint, GLenum, GLsizei, const GLvoid *);
#define CALL_VertexAttribLPointer(disp, parameters) (* GET_VertexAttribLPointer(disp)) parameters
#define GET_VertexAttribLPointer(disp) ((_glptr_VertexAttribLPointer)(GET_by_offset((disp), _gloffset_VertexAttribLPointer)))
#define SET_VertexAttribLPointer(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLint, GLenum, GLsizei, const GLvoid *) = func; \
   SET_by_offset(disp, _gloffset_VertexAttribLPointer, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_DepthRangeArrayv)(GLuint, GLsizei, const GLclampd *);
#define CALL_DepthRangeArrayv(disp, parameters) (* GET_DepthRangeArrayv(disp)) parameters
#define GET_DepthRangeArrayv(disp) ((_glptr_DepthRangeArrayv)(GET_by_offset((disp), _gloffset_DepthRangeArrayv)))
#define SET_DepthRangeArrayv(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLsizei, const GLclampd *) = func; \
   SET_by_offset(disp, _gloffset_DepthRangeArrayv, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_DepthRangeIndexed)(GLuint, GLclampd, GLclampd);
#define CALL_DepthRangeIndexed(disp, parameters) (* GET_DepthRangeIndexed(disp)) parameters
#define GET_DepthRangeIndexed(disp) ((_glptr_DepthRangeIndexed)(GET_by_offset((disp), _gloffset_DepthRangeIndexed)))
#define SET_DepthRangeIndexed(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLclampd, GLclampd) = func; \
   SET_by_offset(disp, _gloffset_DepthRangeIndexed, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_GetDoublei_v)(GLenum, GLuint, GLdouble *);
#define CALL_GetDoublei_v(disp, parameters) (* GET_GetDoublei_v(disp)) parameters
#define GET_GetDoublei_v(disp) ((_glptr_GetDoublei_v)(GET_by_offset((disp), _gloffset_GetDoublei_v)))
#define SET_GetDoublei_v(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLuint, GLdouble *) = func; \
   SET_by_offset(disp, _gloffset_GetDoublei_v, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_GetFloati_v)(GLenum, GLuint, GLfloat *);
#define CALL_GetFloati_v(disp, parameters) (* GET_GetFloati_v(disp)) parameters
#define GET_GetFloati_v(disp) ((_glptr_GetFloati_v)(GET_by_offset((disp), _gloffset_GetFloati_v)))
#define SET_GetFloati_v(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLuint, GLfloat *) = func; \
   SET_by_offset(disp, _gloffset_GetFloati_v, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_ScissorArrayv)(GLuint, GLsizei, const int *);
#define CALL_ScissorArrayv(disp, parameters) (* GET_ScissorArrayv(disp)) parameters
#define GET_ScissorArrayv(disp) ((_glptr_ScissorArrayv)(GET_by_offset((disp), _gloffset_ScissorArrayv)))
#define SET_ScissorArrayv(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLsizei, const int *) = func; \
   SET_by_offset(disp, _gloffset_ScissorArrayv, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_ScissorIndexed)(GLuint, GLint, GLint, GLsizei, GLsizei);
#define CALL_ScissorIndexed(disp, parameters) (* GET_ScissorIndexed(disp)) parameters
#define GET_ScissorIndexed(disp) ((_glptr_ScissorIndexed)(GET_by_offset((disp), _gloffset_ScissorIndexed)))
#define SET_ScissorIndexed(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLint, GLint, GLsizei, GLsizei) = func; \
   SET_by_offset(disp, _gloffset_ScissorIndexed, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_ScissorIndexedv)(GLuint, const GLint *);
#define CALL_ScissorIndexedv(disp, parameters) (* GET_ScissorIndexedv(disp)) parameters
#define GET_ScissorIndexedv(disp) ((_glptr_ScissorIndexedv)(GET_by_offset((disp), _gloffset_ScissorIndexedv)))
#define SET_ScissorIndexedv(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, const GLint *) = func; \
   SET_by_offset(disp, _gloffset_ScissorIndexedv, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_ViewportArrayv)(GLuint, GLsizei, const GLfloat *);
#define CALL_ViewportArrayv(disp, parameters) (* GET_ViewportArrayv(disp)) parameters
#define GET_ViewportArrayv(disp) ((_glptr_ViewportArrayv)(GET_by_offset((disp), _gloffset_ViewportArrayv)))
#define SET_ViewportArrayv(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLsizei, const GLfloat *) = func; \
   SET_by_offset(disp, _gloffset_ViewportArrayv, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_ViewportIndexedf)(GLuint, GLfloat, GLfloat, GLfloat, GLfloat);
#define CALL_ViewportIndexedf(disp, parameters) (* GET_ViewportIndexedf(disp)) parameters
#define GET_ViewportIndexedf(disp) ((_glptr_ViewportIndexedf)(GET_by_offset((disp), _gloffset_ViewportIndexedf)))
#define SET_ViewportIndexedf(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLfloat, GLfloat, GLfloat, GLfloat) = func; \
   SET_by_offset(disp, _gloffset_ViewportIndexedf, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_ViewportIndexedfv)(GLuint, const GLfloat *);
#define CALL_ViewportIndexedfv(disp, parameters) (* GET_ViewportIndexedfv(disp)) parameters
#define GET_ViewportIndexedfv(disp) ((_glptr_ViewportIndexedfv)(GET_by_offset((disp), _gloffset_ViewportIndexedfv)))
#define SET_ViewportIndexedfv(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, const GLfloat *) = func; \
   SET_by_offset(disp, _gloffset_ViewportIndexedfv, fn); \
} while (0)

typedef GLenum (GLAPIENTRYP _glptr_GetGraphicsResetStatusARB)(void);
#define CALL_GetGraphicsResetStatusARB(disp, parameters) (* GET_GetGraphicsResetStatusARB(disp)) parameters
#define GET_GetGraphicsResetStatusARB(disp) ((_glptr_GetGraphicsResetStatusARB)(GET_by_offset((disp), _gloffset_GetGraphicsResetStatusARB)))
#define SET_GetGraphicsResetStatusARB(disp, func) do { \
   GLenum (GLAPIENTRYP fn)(void) = func; \
   SET_by_offset(disp, _gloffset_GetGraphicsResetStatusARB, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_GetnColorTableARB)(GLenum, GLenum, GLenum, GLsizei, GLvoid *);
#define CALL_GetnColorTableARB(disp, parameters) (* GET_GetnColorTableARB(disp)) parameters
#define GET_GetnColorTableARB(disp) ((_glptr_GetnColorTableARB)(GET_by_offset((disp), _gloffset_GetnColorTableARB)))
#define SET_GetnColorTableARB(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLenum, GLenum, GLsizei, GLvoid *) = func; \
   SET_by_offset(disp, _gloffset_GetnColorTableARB, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_GetnCompressedTexImageARB)(GLenum, GLint, GLsizei, GLvoid *);
#define CALL_GetnCompressedTexImageARB(disp, parameters) (* GET_GetnCompressedTexImageARB(disp)) parameters
#define GET_GetnCompressedTexImageARB(disp) ((_glptr_GetnCompressedTexImageARB)(GET_by_offset((disp), _gloffset_GetnCompressedTexImageARB)))
#define SET_GetnCompressedTexImageARB(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLint, GLsizei, GLvoid *) = func; \
   SET_by_offset(disp, _gloffset_GetnCompressedTexImageARB, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_GetnConvolutionFilterARB)(GLenum, GLenum, GLenum, GLsizei, GLvoid *);
#define CALL_GetnConvolutionFilterARB(disp, parameters) (* GET_GetnConvolutionFilterARB(disp)) parameters
#define GET_GetnConvolutionFilterARB(disp) ((_glptr_GetnConvolutionFilterARB)(GET_by_offset((disp), _gloffset_GetnConvolutionFilterARB)))
#define SET_GetnConvolutionFilterARB(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLenum, GLenum, GLsizei, GLvoid *) = func; \
   SET_by_offset(disp, _gloffset_GetnConvolutionFilterARB, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_GetnHistogramARB)(GLenum, GLboolean, GLenum, GLenum, GLsizei, GLvoid *);
#define CALL_GetnHistogramARB(disp, parameters) (* GET_GetnHistogramARB(disp)) parameters
#define GET_GetnHistogramARB(disp) ((_glptr_GetnHistogramARB)(GET_by_offset((disp), _gloffset_GetnHistogramARB)))
#define SET_GetnHistogramARB(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLboolean, GLenum, GLenum, GLsizei, GLvoid *) = func; \
   SET_by_offset(disp, _gloffset_GetnHistogramARB, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_GetnMapdvARB)(GLenum, GLenum, GLsizei, GLdouble *);
#define CALL_GetnMapdvARB(disp, parameters) (* GET_GetnMapdvARB(disp)) parameters
#define GET_GetnMapdvARB(disp) ((_glptr_GetnMapdvARB)(GET_by_offset((disp), _gloffset_GetnMapdvARB)))
#define SET_GetnMapdvARB(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLenum, GLsizei, GLdouble *) = func; \
   SET_by_offset(disp, _gloffset_GetnMapdvARB, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_GetnMapfvARB)(GLenum, GLenum, GLsizei, GLfloat *);
#define CALL_GetnMapfvARB(disp, parameters) (* GET_GetnMapfvARB(disp)) parameters
#define GET_GetnMapfvARB(disp) ((_glptr_GetnMapfvARB)(GET_by_offset((disp), _gloffset_GetnMapfvARB)))
#define SET_GetnMapfvARB(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLenum, GLsizei, GLfloat *) = func; \
   SET_by_offset(disp, _gloffset_GetnMapfvARB, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_GetnMapivARB)(GLenum, GLenum, GLsizei, GLint *);
#define CALL_GetnMapivARB(disp, parameters) (* GET_GetnMapivARB(disp)) parameters
#define GET_GetnMapivARB(disp) ((_glptr_GetnMapivARB)(GET_by_offset((disp), _gloffset_GetnMapivARB)))
#define SET_GetnMapivARB(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLenum, GLsizei, GLint *) = func; \
   SET_by_offset(disp, _gloffset_GetnMapivARB, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_GetnMinmaxARB)(GLenum, GLboolean, GLenum, GLenum, GLsizei, GLvoid *);
#define CALL_GetnMinmaxARB(disp, parameters) (* GET_GetnMinmaxARB(disp)) parameters
#define GET_GetnMinmaxARB(disp) ((_glptr_GetnMinmaxARB)(GET_by_offset((disp), _gloffset_GetnMinmaxARB)))
#define SET_GetnMinmaxARB(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLboolean, GLenum, GLenum, GLsizei, GLvoid *) = func; \
   SET_by_offset(disp, _gloffset_GetnMinmaxARB, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_GetnPixelMapfvARB)(GLenum, GLsizei, GLfloat *);
#define CALL_GetnPixelMapfvARB(disp, parameters) (* GET_GetnPixelMapfvARB(disp)) parameters
#define GET_GetnPixelMapfvARB(disp) ((_glptr_GetnPixelMapfvARB)(GET_by_offset((disp), _gloffset_GetnPixelMapfvARB)))
#define SET_GetnPixelMapfvARB(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLsizei, GLfloat *) = func; \
   SET_by_offset(disp, _gloffset_GetnPixelMapfvARB, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_GetnPixelMapuivARB)(GLenum, GLsizei, GLuint *);
#define CALL_GetnPixelMapuivARB(disp, parameters) (* GET_GetnPixelMapuivARB(disp)) parameters
#define GET_GetnPixelMapuivARB(disp) ((_glptr_GetnPixelMapuivARB)(GET_by_offset((disp), _gloffset_GetnPixelMapuivARB)))
#define SET_GetnPixelMapuivARB(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLsizei, GLuint *) = func; \
   SET_by_offset(disp, _gloffset_GetnPixelMapuivARB, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_GetnPixelMapusvARB)(GLenum, GLsizei, GLushort *);
#define CALL_GetnPixelMapusvARB(disp, parameters) (* GET_GetnPixelMapusvARB(disp)) parameters
#define GET_GetnPixelMapusvARB(disp) ((_glptr_GetnPixelMapusvARB)(GET_by_offset((disp), _gloffset_GetnPixelMapusvARB)))
#define SET_GetnPixelMapusvARB(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLsizei, GLushort *) = func; \
   SET_by_offset(disp, _gloffset_GetnPixelMapusvARB, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_GetnPolygonStippleARB)(GLsizei, GLubyte *);
#define CALL_GetnPolygonStippleARB(disp, parameters) (* GET_GetnPolygonStippleARB(disp)) parameters
#define GET_GetnPolygonStippleARB(disp) ((_glptr_GetnPolygonStippleARB)(GET_by_offset((disp), _gloffset_GetnPolygonStippleARB)))
#define SET_GetnPolygonStippleARB(disp, func) do { \
   void (GLAPIENTRYP fn)(GLsizei, GLubyte *) = func; \
   SET_by_offset(disp, _gloffset_GetnPolygonStippleARB, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_GetnSeparableFilterARB)(GLenum, GLenum, GLenum, GLsizei, GLvoid *, GLsizei, GLvoid *, GLvoid *);
#define CALL_GetnSeparableFilterARB(disp, parameters) (* GET_GetnSeparableFilterARB(disp)) parameters
#define GET_GetnSeparableFilterARB(disp) ((_glptr_GetnSeparableFilterARB)(GET_by_offset((disp), _gloffset_GetnSeparableFilterARB)))
#define SET_GetnSeparableFilterARB(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLenum, GLenum, GLsizei, GLvoid *, GLsizei, GLvoid *, GLvoid *) = func; \
   SET_by_offset(disp, _gloffset_GetnSeparableFilterARB, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_GetnTexImageARB)(GLenum, GLint, GLenum, GLenum, GLsizei, GLvoid *);
#define CALL_GetnTexImageARB(disp, parameters) (* GET_GetnTexImageARB(disp)) parameters
#define GET_GetnTexImageARB(disp) ((_glptr_GetnTexImageARB)(GET_by_offset((disp), _gloffset_GetnTexImageARB)))
#define SET_GetnTexImageARB(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLint, GLenum, GLenum, GLsizei, GLvoid *) = func; \
   SET_by_offset(disp, _gloffset_GetnTexImageARB, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_GetnUniformdvARB)(GLuint, GLint, GLsizei, GLdouble *);
#define CALL_GetnUniformdvARB(disp, parameters) (* GET_GetnUniformdvARB(disp)) parameters
#define GET_GetnUniformdvARB(disp) ((_glptr_GetnUniformdvARB)(GET_by_offset((disp), _gloffset_GetnUniformdvARB)))
#define SET_GetnUniformdvARB(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLint, GLsizei, GLdouble *) = func; \
   SET_by_offset(disp, _gloffset_GetnUniformdvARB, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_GetnUniformfvARB)(GLuint, GLint, GLsizei, GLfloat *);
#define CALL_GetnUniformfvARB(disp, parameters) (* GET_GetnUniformfvARB(disp)) parameters
#define GET_GetnUniformfvARB(disp) ((_glptr_GetnUniformfvARB)(GET_by_offset((disp), _gloffset_GetnUniformfvARB)))
#define SET_GetnUniformfvARB(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLint, GLsizei, GLfloat *) = func; \
   SET_by_offset(disp, _gloffset_GetnUniformfvARB, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_GetnUniformivARB)(GLuint, GLint, GLsizei, GLint *);
#define CALL_GetnUniformivARB(disp, parameters) (* GET_GetnUniformivARB(disp)) parameters
#define GET_GetnUniformivARB(disp) ((_glptr_GetnUniformivARB)(GET_by_offset((disp), _gloffset_GetnUniformivARB)))
#define SET_GetnUniformivARB(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLint, GLsizei, GLint *) = func; \
   SET_by_offset(disp, _gloffset_GetnUniformivARB, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_GetnUniformuivARB)(GLuint, GLint, GLsizei, GLuint *);
#define CALL_GetnUniformuivARB(disp, parameters) (* GET_GetnUniformuivARB(disp)) parameters
#define GET_GetnUniformuivARB(disp) ((_glptr_GetnUniformuivARB)(GET_by_offset((disp), _gloffset_GetnUniformuivARB)))
#define SET_GetnUniformuivARB(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLint, GLsizei, GLuint *) = func; \
   SET_by_offset(disp, _gloffset_GetnUniformuivARB, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_ReadnPixelsARB)(GLint, GLint, GLsizei, GLsizei, GLenum, GLenum, GLsizei, GLvoid *);
#define CALL_ReadnPixelsARB(disp, parameters) (* GET_ReadnPixelsARB(disp)) parameters
#define GET_ReadnPixelsARB(disp) ((_glptr_ReadnPixelsARB)(GET_by_offset((disp), _gloffset_ReadnPixelsARB)))
#define SET_ReadnPixelsARB(disp, func) do { \
   void (GLAPIENTRYP fn)(GLint, GLint, GLsizei, GLsizei, GLenum, GLenum, GLsizei, GLvoid *) = func; \
   SET_by_offset(disp, _gloffset_ReadnPixelsARB, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_DrawArraysInstancedBaseInstance)(GLenum, GLint, GLsizei, GLsizei, GLuint);
#define CALL_DrawArraysInstancedBaseInstance(disp, parameters) (* GET_DrawArraysInstancedBaseInstance(disp)) parameters
#define GET_DrawArraysInstancedBaseInstance(disp) ((_glptr_DrawArraysInstancedBaseInstance)(GET_by_offset((disp), _gloffset_DrawArraysInstancedBaseInstance)))
#define SET_DrawArraysInstancedBaseInstance(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLint, GLsizei, GLsizei, GLuint) = func; \
   SET_by_offset(disp, _gloffset_DrawArraysInstancedBaseInstance, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_DrawElementsInstancedBaseInstance)(GLenum, GLsizei, GLenum, const GLvoid *, GLsizei, GLuint);
#define CALL_DrawElementsInstancedBaseInstance(disp, parameters) (* GET_DrawElementsInstancedBaseInstance(disp)) parameters
#define GET_DrawElementsInstancedBaseInstance(disp) ((_glptr_DrawElementsInstancedBaseInstance)(GET_by_offset((disp), _gloffset_DrawElementsInstancedBaseInstance)))
#define SET_DrawElementsInstancedBaseInstance(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLsizei, GLenum, const GLvoid *, GLsizei, GLuint) = func; \
   SET_by_offset(disp, _gloffset_DrawElementsInstancedBaseInstance, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_DrawElementsInstancedBaseVertexBaseInstance)(GLenum, GLsizei, GLenum, const GLvoid *, GLsizei, GLint, GLuint);
#define CALL_DrawElementsInstancedBaseVertexBaseInstance(disp, parameters) (* GET_DrawElementsInstancedBaseVertexBaseInstance(disp)) parameters
#define GET_DrawElementsInstancedBaseVertexBaseInstance(disp) ((_glptr_DrawElementsInstancedBaseVertexBaseInstance)(GET_by_offset((disp), _gloffset_DrawElementsInstancedBaseVertexBaseInstance)))
#define SET_DrawElementsInstancedBaseVertexBaseInstance(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLsizei, GLenum, const GLvoid *, GLsizei, GLint, GLuint) = func; \
   SET_by_offset(disp, _gloffset_DrawElementsInstancedBaseVertexBaseInstance, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_DrawTransformFeedbackInstanced)(GLenum, GLuint, GLsizei);
#define CALL_DrawTransformFeedbackInstanced(disp, parameters) (* GET_DrawTransformFeedbackInstanced(disp)) parameters
#define GET_DrawTransformFeedbackInstanced(disp) ((_glptr_DrawTransformFeedbackInstanced)(GET_by_offset((disp), _gloffset_DrawTransformFeedbackInstanced)))
#define SET_DrawTransformFeedbackInstanced(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLuint, GLsizei) = func; \
   SET_by_offset(disp, _gloffset_DrawTransformFeedbackInstanced, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_DrawTransformFeedbackStreamInstanced)(GLenum, GLuint, GLuint, GLsizei);
#define CALL_DrawTransformFeedbackStreamInstanced(disp, parameters) (* GET_DrawTransformFeedbackStreamInstanced(disp)) parameters
#define GET_DrawTransformFeedbackStreamInstanced(disp) ((_glptr_DrawTransformFeedbackStreamInstanced)(GET_by_offset((disp), _gloffset_DrawTransformFeedbackStreamInstanced)))
#define SET_DrawTransformFeedbackStreamInstanced(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLuint, GLuint, GLsizei) = func; \
   SET_by_offset(disp, _gloffset_DrawTransformFeedbackStreamInstanced, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_GetInternalformativ)(GLenum, GLenum, GLenum, GLsizei, GLint *);
#define CALL_GetInternalformativ(disp, parameters) (* GET_GetInternalformativ(disp)) parameters
#define GET_GetInternalformativ(disp) ((_glptr_GetInternalformativ)(GET_by_offset((disp), _gloffset_GetInternalformativ)))
#define SET_GetInternalformativ(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLenum, GLenum, GLsizei, GLint *) = func; \
   SET_by_offset(disp, _gloffset_GetInternalformativ, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_GetActiveAtomicCounterBufferiv)(GLuint, GLuint, GLenum, GLint *);
#define CALL_GetActiveAtomicCounterBufferiv(disp, parameters) (* GET_GetActiveAtomicCounterBufferiv(disp)) parameters
#define GET_GetActiveAtomicCounterBufferiv(disp) ((_glptr_GetActiveAtomicCounterBufferiv)(GET_by_offset((disp), _gloffset_GetActiveAtomicCounterBufferiv)))
#define SET_GetActiveAtomicCounterBufferiv(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLuint, GLenum, GLint *) = func; \
   SET_by_offset(disp, _gloffset_GetActiveAtomicCounterBufferiv, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_BindImageTexture)(GLuint, GLuint, GLint, GLboolean, GLint, GLenum, GLenum);
#define CALL_BindImageTexture(disp, parameters) (* GET_BindImageTexture(disp)) parameters
#define GET_BindImageTexture(disp) ((_glptr_BindImageTexture)(GET_by_offset((disp), _gloffset_BindImageTexture)))
#define SET_BindImageTexture(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLuint, GLint, GLboolean, GLint, GLenum, GLenum) = func; \
   SET_by_offset(disp, _gloffset_BindImageTexture, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_MemoryBarrier)(GLbitfield);
#define CALL_MemoryBarrier(disp, parameters) (* GET_MemoryBarrier(disp)) parameters
#define GET_MemoryBarrier(disp) ((_glptr_MemoryBarrier)(GET_by_offset((disp), _gloffset_MemoryBarrier)))
#define SET_MemoryBarrier(disp, func) do { \
   void (GLAPIENTRYP fn)(GLbitfield) = func; \
   SET_by_offset(disp, _gloffset_MemoryBarrier, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_TexStorage1D)(GLenum, GLsizei, GLenum, GLsizei);
#define CALL_TexStorage1D(disp, parameters) (* GET_TexStorage1D(disp)) parameters
#define GET_TexStorage1D(disp) ((_glptr_TexStorage1D)(GET_by_offset((disp), _gloffset_TexStorage1D)))
#define SET_TexStorage1D(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLsizei, GLenum, GLsizei) = func; \
   SET_by_offset(disp, _gloffset_TexStorage1D, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_TexStorage2D)(GLenum, GLsizei, GLenum, GLsizei, GLsizei);
#define CALL_TexStorage2D(disp, parameters) (* GET_TexStorage2D(disp)) parameters
#define GET_TexStorage2D(disp) ((_glptr_TexStorage2D)(GET_by_offset((disp), _gloffset_TexStorage2D)))
#define SET_TexStorage2D(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLsizei, GLenum, GLsizei, GLsizei) = func; \
   SET_by_offset(disp, _gloffset_TexStorage2D, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_TexStorage3D)(GLenum, GLsizei, GLenum, GLsizei, GLsizei, GLsizei);
#define CALL_TexStorage3D(disp, parameters) (* GET_TexStorage3D(disp)) parameters
#define GET_TexStorage3D(disp) ((_glptr_TexStorage3D)(GET_by_offset((disp), _gloffset_TexStorage3D)))
#define SET_TexStorage3D(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLsizei, GLenum, GLsizei, GLsizei, GLsizei) = func; \
   SET_by_offset(disp, _gloffset_TexStorage3D, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_TextureStorage1DEXT)(GLuint, GLenum, GLsizei, GLenum, GLsizei);
#define CALL_TextureStorage1DEXT(disp, parameters) (* GET_TextureStorage1DEXT(disp)) parameters
#define GET_TextureStorage1DEXT(disp) ((_glptr_TextureStorage1DEXT)(GET_by_offset((disp), _gloffset_TextureStorage1DEXT)))
#define SET_TextureStorage1DEXT(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLenum, GLsizei, GLenum, GLsizei) = func; \
   SET_by_offset(disp, _gloffset_TextureStorage1DEXT, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_TextureStorage2DEXT)(GLuint, GLenum, GLsizei, GLenum, GLsizei, GLsizei);
#define CALL_TextureStorage2DEXT(disp, parameters) (* GET_TextureStorage2DEXT(disp)) parameters
#define GET_TextureStorage2DEXT(disp) ((_glptr_TextureStorage2DEXT)(GET_by_offset((disp), _gloffset_TextureStorage2DEXT)))
#define SET_TextureStorage2DEXT(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLenum, GLsizei, GLenum, GLsizei, GLsizei) = func; \
   SET_by_offset(disp, _gloffset_TextureStorage2DEXT, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_TextureStorage3DEXT)(GLuint, GLenum, GLsizei, GLenum, GLsizei, GLsizei, GLsizei);
#define CALL_TextureStorage3DEXT(disp, parameters) (* GET_TextureStorage3DEXT(disp)) parameters
#define GET_TextureStorage3DEXT(disp) ((_glptr_TextureStorage3DEXT)(GET_by_offset((disp), _gloffset_TextureStorage3DEXT)))
#define SET_TextureStorage3DEXT(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLenum, GLsizei, GLenum, GLsizei, GLsizei, GLsizei) = func; \
   SET_by_offset(disp, _gloffset_TextureStorage3DEXT, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_ClearBufferData)(GLenum, GLenum, GLenum, GLenum, const GLvoid *);
#define CALL_ClearBufferData(disp, parameters) (* GET_ClearBufferData(disp)) parameters
#define GET_ClearBufferData(disp) ((_glptr_ClearBufferData)(GET_by_offset((disp), _gloffset_ClearBufferData)))
#define SET_ClearBufferData(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLenum, GLenum, GLenum, const GLvoid *) = func; \
   SET_by_offset(disp, _gloffset_ClearBufferData, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_ClearBufferSubData)(GLenum, GLenum, GLintptr, GLsizeiptr, GLenum, GLenum, const GLvoid *);
#define CALL_ClearBufferSubData(disp, parameters) (* GET_ClearBufferSubData(disp)) parameters
#define GET_ClearBufferSubData(disp) ((_glptr_ClearBufferSubData)(GET_by_offset((disp), _gloffset_ClearBufferSubData)))
#define SET_ClearBufferSubData(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLenum, GLintptr, GLsizeiptr, GLenum, GLenum, const GLvoid *) = func; \
   SET_by_offset(disp, _gloffset_ClearBufferSubData, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_DispatchCompute)(GLuint, GLuint, GLuint);
#define CALL_DispatchCompute(disp, parameters) (* GET_DispatchCompute(disp)) parameters
#define GET_DispatchCompute(disp) ((_glptr_DispatchCompute)(GET_by_offset((disp), _gloffset_DispatchCompute)))
#define SET_DispatchCompute(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLuint, GLuint) = func; \
   SET_by_offset(disp, _gloffset_DispatchCompute, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_DispatchComputeIndirect)(GLintptr);
#define CALL_DispatchComputeIndirect(disp, parameters) (* GET_DispatchComputeIndirect(disp)) parameters
#define GET_DispatchComputeIndirect(disp) ((_glptr_DispatchComputeIndirect)(GET_by_offset((disp), _gloffset_DispatchComputeIndirect)))
#define SET_DispatchComputeIndirect(disp, func) do { \
   void (GLAPIENTRYP fn)(GLintptr) = func; \
   SET_by_offset(disp, _gloffset_DispatchComputeIndirect, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_CopyImageSubData)(GLuint, GLenum, GLint, GLint, GLint, GLint, GLuint, GLenum, GLint, GLint, GLint, GLint, GLsizei, GLsizei, GLsizei);
#define CALL_CopyImageSubData(disp, parameters) (* GET_CopyImageSubData(disp)) parameters
#define GET_CopyImageSubData(disp) ((_glptr_CopyImageSubData)(GET_by_offset((disp), _gloffset_CopyImageSubData)))
#define SET_CopyImageSubData(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLenum, GLint, GLint, GLint, GLint, GLuint, GLenum, GLint, GLint, GLint, GLint, GLsizei, GLsizei, GLsizei) = func; \
   SET_by_offset(disp, _gloffset_CopyImageSubData, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_TextureView)(GLuint, GLenum, GLuint, GLenum, GLuint, GLuint, GLuint, GLuint);
#define CALL_TextureView(disp, parameters) (* GET_TextureView(disp)) parameters
#define GET_TextureView(disp) ((_glptr_TextureView)(GET_by_offset((disp), _gloffset_TextureView)))
#define SET_TextureView(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLenum, GLuint, GLenum, GLuint, GLuint, GLuint, GLuint) = func; \
   SET_by_offset(disp, _gloffset_TextureView, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_BindVertexBuffer)(GLuint, GLuint, GLintptr, GLsizei);
#define CALL_BindVertexBuffer(disp, parameters) (* GET_BindVertexBuffer(disp)) parameters
#define GET_BindVertexBuffer(disp) ((_glptr_BindVertexBuffer)(GET_by_offset((disp), _gloffset_BindVertexBuffer)))
#define SET_BindVertexBuffer(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLuint, GLintptr, GLsizei) = func; \
   SET_by_offset(disp, _gloffset_BindVertexBuffer, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_VertexAttribBinding)(GLuint, GLuint);
#define CALL_VertexAttribBinding(disp, parameters) (* GET_VertexAttribBinding(disp)) parameters
#define GET_VertexAttribBinding(disp) ((_glptr_VertexAttribBinding)(GET_by_offset((disp), _gloffset_VertexAttribBinding)))
#define SET_VertexAttribBinding(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLuint) = func; \
   SET_by_offset(disp, _gloffset_VertexAttribBinding, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_VertexAttribFormat)(GLuint, GLint, GLenum, GLboolean, GLuint);
#define CALL_VertexAttribFormat(disp, parameters) (* GET_VertexAttribFormat(disp)) parameters
#define GET_VertexAttribFormat(disp) ((_glptr_VertexAttribFormat)(GET_by_offset((disp), _gloffset_VertexAttribFormat)))
#define SET_VertexAttribFormat(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLint, GLenum, GLboolean, GLuint) = func; \
   SET_by_offset(disp, _gloffset_VertexAttribFormat, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_VertexAttribIFormat)(GLuint, GLint, GLenum, GLuint);
#define CALL_VertexAttribIFormat(disp, parameters) (* GET_VertexAttribIFormat(disp)) parameters
#define GET_VertexAttribIFormat(disp) ((_glptr_VertexAttribIFormat)(GET_by_offset((disp), _gloffset_VertexAttribIFormat)))
#define SET_VertexAttribIFormat(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLint, GLenum, GLuint) = func; \
   SET_by_offset(disp, _gloffset_VertexAttribIFormat, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_VertexAttribLFormat)(GLuint, GLint, GLenum, GLuint);
#define CALL_VertexAttribLFormat(disp, parameters) (* GET_VertexAttribLFormat(disp)) parameters
#define GET_VertexAttribLFormat(disp) ((_glptr_VertexAttribLFormat)(GET_by_offset((disp), _gloffset_VertexAttribLFormat)))
#define SET_VertexAttribLFormat(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLint, GLenum, GLuint) = func; \
   SET_by_offset(disp, _gloffset_VertexAttribLFormat, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_VertexBindingDivisor)(GLuint, GLuint);
#define CALL_VertexBindingDivisor(disp, parameters) (* GET_VertexBindingDivisor(disp)) parameters
#define GET_VertexBindingDivisor(disp) ((_glptr_VertexBindingDivisor)(GET_by_offset((disp), _gloffset_VertexBindingDivisor)))
#define SET_VertexBindingDivisor(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLuint) = func; \
   SET_by_offset(disp, _gloffset_VertexBindingDivisor, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_FramebufferParameteri)(GLenum, GLenum, GLint);
#define CALL_FramebufferParameteri(disp, parameters) (* GET_FramebufferParameteri(disp)) parameters
#define GET_FramebufferParameteri(disp) ((_glptr_FramebufferParameteri)(GET_by_offset((disp), _gloffset_FramebufferParameteri)))
#define SET_FramebufferParameteri(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLenum, GLint) = func; \
   SET_by_offset(disp, _gloffset_FramebufferParameteri, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_GetFramebufferParameteriv)(GLenum, GLenum, GLint *);
#define CALL_GetFramebufferParameteriv(disp, parameters) (* GET_GetFramebufferParameteriv(disp)) parameters
#define GET_GetFramebufferParameteriv(disp) ((_glptr_GetFramebufferParameteriv)(GET_by_offset((disp), _gloffset_GetFramebufferParameteriv)))
#define SET_GetFramebufferParameteriv(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLenum, GLint *) = func; \
   SET_by_offset(disp, _gloffset_GetFramebufferParameteriv, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_GetInternalformati64v)(GLenum, GLenum, GLenum, GLsizei, GLint64 *);
#define CALL_GetInternalformati64v(disp, parameters) (* GET_GetInternalformati64v(disp)) parameters
#define GET_GetInternalformati64v(disp) ((_glptr_GetInternalformati64v)(GET_by_offset((disp), _gloffset_GetInternalformati64v)))
#define SET_GetInternalformati64v(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLenum, GLenum, GLsizei, GLint64 *) = func; \
   SET_by_offset(disp, _gloffset_GetInternalformati64v, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_MultiDrawArraysIndirect)(GLenum, const GLvoid *, GLsizei, GLsizei);
#define CALL_MultiDrawArraysIndirect(disp, parameters) (* GET_MultiDrawArraysIndirect(disp)) parameters
#define GET_MultiDrawArraysIndirect(disp) ((_glptr_MultiDrawArraysIndirect)(GET_by_offset((disp), _gloffset_MultiDrawArraysIndirect)))
#define SET_MultiDrawArraysIndirect(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, const GLvoid *, GLsizei, GLsizei) = func; \
   SET_by_offset(disp, _gloffset_MultiDrawArraysIndirect, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_MultiDrawElementsIndirect)(GLenum, GLenum, const GLvoid *, GLsizei, GLsizei);
#define CALL_MultiDrawElementsIndirect(disp, parameters) (* GET_MultiDrawElementsIndirect(disp)) parameters
#define GET_MultiDrawElementsIndirect(disp) ((_glptr_MultiDrawElementsIndirect)(GET_by_offset((disp), _gloffset_MultiDrawElementsIndirect)))
#define SET_MultiDrawElementsIndirect(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLenum, const GLvoid *, GLsizei, GLsizei) = func; \
   SET_by_offset(disp, _gloffset_MultiDrawElementsIndirect, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_GetProgramInterfaceiv)(GLuint, GLenum, GLenum, GLint *);
#define CALL_GetProgramInterfaceiv(disp, parameters) (* GET_GetProgramInterfaceiv(disp)) parameters
#define GET_GetProgramInterfaceiv(disp) ((_glptr_GetProgramInterfaceiv)(GET_by_offset((disp), _gloffset_GetProgramInterfaceiv)))
#define SET_GetProgramInterfaceiv(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLenum, GLenum, GLint *) = func; \
   SET_by_offset(disp, _gloffset_GetProgramInterfaceiv, fn); \
} while (0)

typedef GLuint (GLAPIENTRYP _glptr_GetProgramResourceIndex)(GLuint, GLenum, const GLchar *);
#define CALL_GetProgramResourceIndex(disp, parameters) (* GET_GetProgramResourceIndex(disp)) parameters
#define GET_GetProgramResourceIndex(disp) ((_glptr_GetProgramResourceIndex)(GET_by_offset((disp), _gloffset_GetProgramResourceIndex)))
#define SET_GetProgramResourceIndex(disp, func) do { \
   GLuint (GLAPIENTRYP fn)(GLuint, GLenum, const GLchar *) = func; \
   SET_by_offset(disp, _gloffset_GetProgramResourceIndex, fn); \
} while (0)

typedef GLint (GLAPIENTRYP _glptr_GetProgramResourceLocation)(GLuint, GLenum, const GLchar *);
#define CALL_GetProgramResourceLocation(disp, parameters) (* GET_GetProgramResourceLocation(disp)) parameters
#define GET_GetProgramResourceLocation(disp) ((_glptr_GetProgramResourceLocation)(GET_by_offset((disp), _gloffset_GetProgramResourceLocation)))
#define SET_GetProgramResourceLocation(disp, func) do { \
   GLint (GLAPIENTRYP fn)(GLuint, GLenum, const GLchar *) = func; \
   SET_by_offset(disp, _gloffset_GetProgramResourceLocation, fn); \
} while (0)

typedef GLint (GLAPIENTRYP _glptr_GetProgramResourceLocationIndex)(GLuint, GLenum, const GLchar *);
#define CALL_GetProgramResourceLocationIndex(disp, parameters) (* GET_GetProgramResourceLocationIndex(disp)) parameters
#define GET_GetProgramResourceLocationIndex(disp) ((_glptr_GetProgramResourceLocationIndex)(GET_by_offset((disp), _gloffset_GetProgramResourceLocationIndex)))
#define SET_GetProgramResourceLocationIndex(disp, func) do { \
   GLint (GLAPIENTRYP fn)(GLuint, GLenum, const GLchar *) = func; \
   SET_by_offset(disp, _gloffset_GetProgramResourceLocationIndex, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_GetProgramResourceName)(GLuint, GLenum, GLuint, GLsizei , GLsizei *, GLchar *);
#define CALL_GetProgramResourceName(disp, parameters) (* GET_GetProgramResourceName(disp)) parameters
#define GET_GetProgramResourceName(disp) ((_glptr_GetProgramResourceName)(GET_by_offset((disp), _gloffset_GetProgramResourceName)))
#define SET_GetProgramResourceName(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLenum, GLuint, GLsizei , GLsizei *, GLchar *) = func; \
   SET_by_offset(disp, _gloffset_GetProgramResourceName, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_GetProgramResourceiv)(GLuint, GLenum, GLuint, GLsizei , const GLenum *, GLsizei , GLsizei *, GLint *);
#define CALL_GetProgramResourceiv(disp, parameters) (* GET_GetProgramResourceiv(disp)) parameters
#define GET_GetProgramResourceiv(disp) ((_glptr_GetProgramResourceiv)(GET_by_offset((disp), _gloffset_GetProgramResourceiv)))
#define SET_GetProgramResourceiv(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLenum, GLuint, GLsizei , const GLenum *, GLsizei , GLsizei *, GLint *) = func; \
   SET_by_offset(disp, _gloffset_GetProgramResourceiv, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_ShaderStorageBlockBinding)(GLuint, GLuint, GLuint);
#define CALL_ShaderStorageBlockBinding(disp, parameters) (* GET_ShaderStorageBlockBinding(disp)) parameters
#define GET_ShaderStorageBlockBinding(disp) ((_glptr_ShaderStorageBlockBinding)(GET_by_offset((disp), _gloffset_ShaderStorageBlockBinding)))
#define SET_ShaderStorageBlockBinding(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLuint, GLuint) = func; \
   SET_by_offset(disp, _gloffset_ShaderStorageBlockBinding, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_TexBufferRange)(GLenum, GLenum, GLuint, GLintptr, GLsizeiptr);
#define CALL_TexBufferRange(disp, parameters) (* GET_TexBufferRange(disp)) parameters
#define GET_TexBufferRange(disp) ((_glptr_TexBufferRange)(GET_by_offset((disp), _gloffset_TexBufferRange)))
#define SET_TexBufferRange(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLenum, GLuint, GLintptr, GLsizeiptr) = func; \
   SET_by_offset(disp, _gloffset_TexBufferRange, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_TexStorage2DMultisample)(GLenum, GLsizei, GLenum, GLsizei, GLsizei, GLboolean);
#define CALL_TexStorage2DMultisample(disp, parameters) (* GET_TexStorage2DMultisample(disp)) parameters
#define GET_TexStorage2DMultisample(disp) ((_glptr_TexStorage2DMultisample)(GET_by_offset((disp), _gloffset_TexStorage2DMultisample)))
#define SET_TexStorage2DMultisample(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLsizei, GLenum, GLsizei, GLsizei, GLboolean) = func; \
   SET_by_offset(disp, _gloffset_TexStorage2DMultisample, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_TexStorage3DMultisample)(GLenum, GLsizei, GLenum, GLsizei, GLsizei, GLsizei, GLboolean);
#define CALL_TexStorage3DMultisample(disp, parameters) (* GET_TexStorage3DMultisample(disp)) parameters
#define GET_TexStorage3DMultisample(disp) ((_glptr_TexStorage3DMultisample)(GET_by_offset((disp), _gloffset_TexStorage3DMultisample)))
#define SET_TexStorage3DMultisample(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLsizei, GLenum, GLsizei, GLsizei, GLsizei, GLboolean) = func; \
   SET_by_offset(disp, _gloffset_TexStorage3DMultisample, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_BufferStorage)(GLenum, GLsizeiptr, const GLvoid *, GLbitfield);
#define CALL_BufferStorage(disp, parameters) (* GET_BufferStorage(disp)) parameters
#define GET_BufferStorage(disp) ((_glptr_BufferStorage)(GET_by_offset((disp), _gloffset_BufferStorage)))
#define SET_BufferStorage(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLsizeiptr, const GLvoid *, GLbitfield) = func; \
   SET_by_offset(disp, _gloffset_BufferStorage, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_ClearTexImage)(GLuint, GLint, GLenum, GLenum, const GLvoid *);
#define CALL_ClearTexImage(disp, parameters) (* GET_ClearTexImage(disp)) parameters
#define GET_ClearTexImage(disp) ((_glptr_ClearTexImage)(GET_by_offset((disp), _gloffset_ClearTexImage)))
#define SET_ClearTexImage(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLint, GLenum, GLenum, const GLvoid *) = func; \
   SET_by_offset(disp, _gloffset_ClearTexImage, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_ClearTexSubImage)(GLuint, GLint, GLint, GLint, GLint, GLsizei, GLsizei, GLsizei, GLenum, GLenum, const GLvoid *);
#define CALL_ClearTexSubImage(disp, parameters) (* GET_ClearTexSubImage(disp)) parameters
#define GET_ClearTexSubImage(disp) ((_glptr_ClearTexSubImage)(GET_by_offset((disp), _gloffset_ClearTexSubImage)))
#define SET_ClearTexSubImage(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLint, GLint, GLint, GLint, GLsizei, GLsizei, GLsizei, GLenum, GLenum, const GLvoid *) = func; \
   SET_by_offset(disp, _gloffset_ClearTexSubImage, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_BindBuffersBase)(GLenum, GLuint, GLsizei, const GLuint *);
#define CALL_BindBuffersBase(disp, parameters) (* GET_BindBuffersBase(disp)) parameters
#define GET_BindBuffersBase(disp) ((_glptr_BindBuffersBase)(GET_by_offset((disp), _gloffset_BindBuffersBase)))
#define SET_BindBuffersBase(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLuint, GLsizei, const GLuint *) = func; \
   SET_by_offset(disp, _gloffset_BindBuffersBase, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_BindBuffersRange)(GLenum, GLuint, GLsizei, const GLuint *, const GLintptr *, const GLsizeiptr *);
#define CALL_BindBuffersRange(disp, parameters) (* GET_BindBuffersRange(disp)) parameters
#define GET_BindBuffersRange(disp) ((_glptr_BindBuffersRange)(GET_by_offset((disp), _gloffset_BindBuffersRange)))
#define SET_BindBuffersRange(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLuint, GLsizei, const GLuint *, const GLintptr *, const GLsizeiptr *) = func; \
   SET_by_offset(disp, _gloffset_BindBuffersRange, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_BindImageTextures)(GLuint, GLsizei, const GLuint *);
#define CALL_BindImageTextures(disp, parameters) (* GET_BindImageTextures(disp)) parameters
#define GET_BindImageTextures(disp) ((_glptr_BindImageTextures)(GET_by_offset((disp), _gloffset_BindImageTextures)))
#define SET_BindImageTextures(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLsizei, const GLuint *) = func; \
   SET_by_offset(disp, _gloffset_BindImageTextures, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_BindSamplers)(GLuint, GLsizei, const GLuint *);
#define CALL_BindSamplers(disp, parameters) (* GET_BindSamplers(disp)) parameters
#define GET_BindSamplers(disp) ((_glptr_BindSamplers)(GET_by_offset((disp), _gloffset_BindSamplers)))
#define SET_BindSamplers(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLsizei, const GLuint *) = func; \
   SET_by_offset(disp, _gloffset_BindSamplers, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_BindTextures)(GLuint, GLsizei, const GLuint *);
#define CALL_BindTextures(disp, parameters) (* GET_BindTextures(disp)) parameters
#define GET_BindTextures(disp) ((_glptr_BindTextures)(GET_by_offset((disp), _gloffset_BindTextures)))
#define SET_BindTextures(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLsizei, const GLuint *) = func; \
   SET_by_offset(disp, _gloffset_BindTextures, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_BindVertexBuffers)(GLuint, GLsizei, const GLuint *, const GLintptr *, const GLsizei *);
#define CALL_BindVertexBuffers(disp, parameters) (* GET_BindVertexBuffers(disp)) parameters
#define GET_BindVertexBuffers(disp) ((_glptr_BindVertexBuffers)(GET_by_offset((disp), _gloffset_BindVertexBuffers)))
#define SET_BindVertexBuffers(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLsizei, const GLuint *, const GLintptr *, const GLsizei *) = func; \
   SET_by_offset(disp, _gloffset_BindVertexBuffers, fn); \
} while (0)

typedef GLuint64 (GLAPIENTRYP _glptr_GetImageHandleARB)(GLuint, GLint, GLboolean, GLint, GLenum);
#define CALL_GetImageHandleARB(disp, parameters) (* GET_GetImageHandleARB(disp)) parameters
#define GET_GetImageHandleARB(disp) ((_glptr_GetImageHandleARB)(GET_by_offset((disp), _gloffset_GetImageHandleARB)))
#define SET_GetImageHandleARB(disp, func) do { \
   GLuint64 (GLAPIENTRYP fn)(GLuint, GLint, GLboolean, GLint, GLenum) = func; \
   SET_by_offset(disp, _gloffset_GetImageHandleARB, fn); \
} while (0)

typedef GLuint64 (GLAPIENTRYP _glptr_GetTextureHandleARB)(GLuint);
#define CALL_GetTextureHandleARB(disp, parameters) (* GET_GetTextureHandleARB(disp)) parameters
#define GET_GetTextureHandleARB(disp) ((_glptr_GetTextureHandleARB)(GET_by_offset((disp), _gloffset_GetTextureHandleARB)))
#define SET_GetTextureHandleARB(disp, func) do { \
   GLuint64 (GLAPIENTRYP fn)(GLuint) = func; \
   SET_by_offset(disp, _gloffset_GetTextureHandleARB, fn); \
} while (0)

typedef GLuint64 (GLAPIENTRYP _glptr_GetTextureSamplerHandleARB)(GLuint, GLuint);
#define CALL_GetTextureSamplerHandleARB(disp, parameters) (* GET_GetTextureSamplerHandleARB(disp)) parameters
#define GET_GetTextureSamplerHandleARB(disp) ((_glptr_GetTextureSamplerHandleARB)(GET_by_offset((disp), _gloffset_GetTextureSamplerHandleARB)))
#define SET_GetTextureSamplerHandleARB(disp, func) do { \
   GLuint64 (GLAPIENTRYP fn)(GLuint, GLuint) = func; \
   SET_by_offset(disp, _gloffset_GetTextureSamplerHandleARB, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_GetVertexAttribLui64vARB)(GLuint, GLenum, GLuint64EXT *);
#define CALL_GetVertexAttribLui64vARB(disp, parameters) (* GET_GetVertexAttribLui64vARB(disp)) parameters
#define GET_GetVertexAttribLui64vARB(disp) ((_glptr_GetVertexAttribLui64vARB)(GET_by_offset((disp), _gloffset_GetVertexAttribLui64vARB)))
#define SET_GetVertexAttribLui64vARB(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLenum, GLuint64EXT *) = func; \
   SET_by_offset(disp, _gloffset_GetVertexAttribLui64vARB, fn); \
} while (0)

typedef GLboolean (GLAPIENTRYP _glptr_IsImageHandleResidentARB)(GLuint64);
#define CALL_IsImageHandleResidentARB(disp, parameters) (* GET_IsImageHandleResidentARB(disp)) parameters
#define GET_IsImageHandleResidentARB(disp) ((_glptr_IsImageHandleResidentARB)(GET_by_offset((disp), _gloffset_IsImageHandleResidentARB)))
#define SET_IsImageHandleResidentARB(disp, func) do { \
   GLboolean (GLAPIENTRYP fn)(GLuint64) = func; \
   SET_by_offset(disp, _gloffset_IsImageHandleResidentARB, fn); \
} while (0)

typedef GLboolean (GLAPIENTRYP _glptr_IsTextureHandleResidentARB)(GLuint64);
#define CALL_IsTextureHandleResidentARB(disp, parameters) (* GET_IsTextureHandleResidentARB(disp)) parameters
#define GET_IsTextureHandleResidentARB(disp) ((_glptr_IsTextureHandleResidentARB)(GET_by_offset((disp), _gloffset_IsTextureHandleResidentARB)))
#define SET_IsTextureHandleResidentARB(disp, func) do { \
   GLboolean (GLAPIENTRYP fn)(GLuint64) = func; \
   SET_by_offset(disp, _gloffset_IsTextureHandleResidentARB, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_MakeImageHandleNonResidentARB)(GLuint64);
#define CALL_MakeImageHandleNonResidentARB(disp, parameters) (* GET_MakeImageHandleNonResidentARB(disp)) parameters
#define GET_MakeImageHandleNonResidentARB(disp) ((_glptr_MakeImageHandleNonResidentARB)(GET_by_offset((disp), _gloffset_MakeImageHandleNonResidentARB)))
#define SET_MakeImageHandleNonResidentARB(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint64) = func; \
   SET_by_offset(disp, _gloffset_MakeImageHandleNonResidentARB, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_MakeImageHandleResidentARB)(GLuint64, GLenum);
#define CALL_MakeImageHandleResidentARB(disp, parameters) (* GET_MakeImageHandleResidentARB(disp)) parameters
#define GET_MakeImageHandleResidentARB(disp) ((_glptr_MakeImageHandleResidentARB)(GET_by_offset((disp), _gloffset_MakeImageHandleResidentARB)))
#define SET_MakeImageHandleResidentARB(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint64, GLenum) = func; \
   SET_by_offset(disp, _gloffset_MakeImageHandleResidentARB, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_MakeTextureHandleNonResidentARB)(GLuint64);
#define CALL_MakeTextureHandleNonResidentARB(disp, parameters) (* GET_MakeTextureHandleNonResidentARB(disp)) parameters
#define GET_MakeTextureHandleNonResidentARB(disp) ((_glptr_MakeTextureHandleNonResidentARB)(GET_by_offset((disp), _gloffset_MakeTextureHandleNonResidentARB)))
#define SET_MakeTextureHandleNonResidentARB(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint64) = func; \
   SET_by_offset(disp, _gloffset_MakeTextureHandleNonResidentARB, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_MakeTextureHandleResidentARB)(GLuint64);
#define CALL_MakeTextureHandleResidentARB(disp, parameters) (* GET_MakeTextureHandleResidentARB(disp)) parameters
#define GET_MakeTextureHandleResidentARB(disp) ((_glptr_MakeTextureHandleResidentARB)(GET_by_offset((disp), _gloffset_MakeTextureHandleResidentARB)))
#define SET_MakeTextureHandleResidentARB(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint64) = func; \
   SET_by_offset(disp, _gloffset_MakeTextureHandleResidentARB, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_ProgramUniformHandleui64ARB)(GLuint, GLint, GLuint64);
#define CALL_ProgramUniformHandleui64ARB(disp, parameters) (* GET_ProgramUniformHandleui64ARB(disp)) parameters
#define GET_ProgramUniformHandleui64ARB(disp) ((_glptr_ProgramUniformHandleui64ARB)(GET_by_offset((disp), _gloffset_ProgramUniformHandleui64ARB)))
#define SET_ProgramUniformHandleui64ARB(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLint, GLuint64) = func; \
   SET_by_offset(disp, _gloffset_ProgramUniformHandleui64ARB, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_ProgramUniformHandleui64vARB)(GLuint, GLint, GLsizei, const GLuint64 *);
#define CALL_ProgramUniformHandleui64vARB(disp, parameters) (* GET_ProgramUniformHandleui64vARB(disp)) parameters
#define GET_ProgramUniformHandleui64vARB(disp) ((_glptr_ProgramUniformHandleui64vARB)(GET_by_offset((disp), _gloffset_ProgramUniformHandleui64vARB)))
#define SET_ProgramUniformHandleui64vARB(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLint, GLsizei, const GLuint64 *) = func; \
   SET_by_offset(disp, _gloffset_ProgramUniformHandleui64vARB, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_UniformHandleui64ARB)(GLint, GLuint64);
#define CALL_UniformHandleui64ARB(disp, parameters) (* GET_UniformHandleui64ARB(disp)) parameters
#define GET_UniformHandleui64ARB(disp) ((_glptr_UniformHandleui64ARB)(GET_by_offset((disp), _gloffset_UniformHandleui64ARB)))
#define SET_UniformHandleui64ARB(disp, func) do { \
   void (GLAPIENTRYP fn)(GLint, GLuint64) = func; \
   SET_by_offset(disp, _gloffset_UniformHandleui64ARB, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_UniformHandleui64vARB)(GLint, GLsizei, const GLuint64 *);
#define CALL_UniformHandleui64vARB(disp, parameters) (* GET_UniformHandleui64vARB(disp)) parameters
#define GET_UniformHandleui64vARB(disp) ((_glptr_UniformHandleui64vARB)(GET_by_offset((disp), _gloffset_UniformHandleui64vARB)))
#define SET_UniformHandleui64vARB(disp, func) do { \
   void (GLAPIENTRYP fn)(GLint, GLsizei, const GLuint64 *) = func; \
   SET_by_offset(disp, _gloffset_UniformHandleui64vARB, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_VertexAttribL1ui64ARB)(GLuint, GLuint64EXT);
#define CALL_VertexAttribL1ui64ARB(disp, parameters) (* GET_VertexAttribL1ui64ARB(disp)) parameters
#define GET_VertexAttribL1ui64ARB(disp) ((_glptr_VertexAttribL1ui64ARB)(GET_by_offset((disp), _gloffset_VertexAttribL1ui64ARB)))
#define SET_VertexAttribL1ui64ARB(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLuint64EXT) = func; \
   SET_by_offset(disp, _gloffset_VertexAttribL1ui64ARB, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_VertexAttribL1ui64vARB)(GLuint, const GLuint64EXT *);
#define CALL_VertexAttribL1ui64vARB(disp, parameters) (* GET_VertexAttribL1ui64vARB(disp)) parameters
#define GET_VertexAttribL1ui64vARB(disp) ((_glptr_VertexAttribL1ui64vARB)(GET_by_offset((disp), _gloffset_VertexAttribL1ui64vARB)))
#define SET_VertexAttribL1ui64vARB(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, const GLuint64EXT *) = func; \
   SET_by_offset(disp, _gloffset_VertexAttribL1ui64vARB, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_DispatchComputeGroupSizeARB)(GLuint, GLuint, GLuint, GLuint, GLuint, GLuint);
#define CALL_DispatchComputeGroupSizeARB(disp, parameters) (* GET_DispatchComputeGroupSizeARB(disp)) parameters
#define GET_DispatchComputeGroupSizeARB(disp) ((_glptr_DispatchComputeGroupSizeARB)(GET_by_offset((disp), _gloffset_DispatchComputeGroupSizeARB)))
#define SET_DispatchComputeGroupSizeARB(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLuint, GLuint, GLuint, GLuint, GLuint) = func; \
   SET_by_offset(disp, _gloffset_DispatchComputeGroupSizeARB, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_MultiDrawArraysIndirectCountARB)(GLenum, GLintptr, GLintptr, GLsizei, GLsizei);
#define CALL_MultiDrawArraysIndirectCountARB(disp, parameters) (* GET_MultiDrawArraysIndirectCountARB(disp)) parameters
#define GET_MultiDrawArraysIndirectCountARB(disp) ((_glptr_MultiDrawArraysIndirectCountARB)(GET_by_offset((disp), _gloffset_MultiDrawArraysIndirectCountARB)))
#define SET_MultiDrawArraysIndirectCountARB(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLintptr, GLintptr, GLsizei, GLsizei) = func; \
   SET_by_offset(disp, _gloffset_MultiDrawArraysIndirectCountARB, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_MultiDrawElementsIndirectCountARB)(GLenum, GLenum, GLintptr, GLintptr, GLsizei, GLsizei);
#define CALL_MultiDrawElementsIndirectCountARB(disp, parameters) (* GET_MultiDrawElementsIndirectCountARB(disp)) parameters
#define GET_MultiDrawElementsIndirectCountARB(disp) ((_glptr_MultiDrawElementsIndirectCountARB)(GET_by_offset((disp), _gloffset_MultiDrawElementsIndirectCountARB)))
#define SET_MultiDrawElementsIndirectCountARB(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLenum, GLintptr, GLintptr, GLsizei, GLsizei) = func; \
   SET_by_offset(disp, _gloffset_MultiDrawElementsIndirectCountARB, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_ClipControl)(GLenum, GLenum);
#define CALL_ClipControl(disp, parameters) (* GET_ClipControl(disp)) parameters
#define GET_ClipControl(disp) ((_glptr_ClipControl)(GET_by_offset((disp), _gloffset_ClipControl)))
#define SET_ClipControl(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLenum) = func; \
   SET_by_offset(disp, _gloffset_ClipControl, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_BindTextureUnit)(GLuint, GLuint);
#define CALL_BindTextureUnit(disp, parameters) (* GET_BindTextureUnit(disp)) parameters
#define GET_BindTextureUnit(disp) ((_glptr_BindTextureUnit)(GET_by_offset((disp), _gloffset_BindTextureUnit)))
#define SET_BindTextureUnit(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLuint) = func; \
   SET_by_offset(disp, _gloffset_BindTextureUnit, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_BlitNamedFramebuffer)(GLuint, GLuint, GLint, GLint, GLint, GLint, GLint, GLint, GLint, GLint, GLbitfield, GLenum);
#define CALL_BlitNamedFramebuffer(disp, parameters) (* GET_BlitNamedFramebuffer(disp)) parameters
#define GET_BlitNamedFramebuffer(disp) ((_glptr_BlitNamedFramebuffer)(GET_by_offset((disp), _gloffset_BlitNamedFramebuffer)))
#define SET_BlitNamedFramebuffer(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLuint, GLint, GLint, GLint, GLint, GLint, GLint, GLint, GLint, GLbitfield, GLenum) = func; \
   SET_by_offset(disp, _gloffset_BlitNamedFramebuffer, fn); \
} while (0)

typedef GLenum (GLAPIENTRYP _glptr_CheckNamedFramebufferStatus)(GLuint, GLenum);
#define CALL_CheckNamedFramebufferStatus(disp, parameters) (* GET_CheckNamedFramebufferStatus(disp)) parameters
#define GET_CheckNamedFramebufferStatus(disp) ((_glptr_CheckNamedFramebufferStatus)(GET_by_offset((disp), _gloffset_CheckNamedFramebufferStatus)))
#define SET_CheckNamedFramebufferStatus(disp, func) do { \
   GLenum (GLAPIENTRYP fn)(GLuint, GLenum) = func; \
   SET_by_offset(disp, _gloffset_CheckNamedFramebufferStatus, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_ClearNamedBufferData)(GLuint, GLenum, GLenum, GLenum, const GLvoid *);
#define CALL_ClearNamedBufferData(disp, parameters) (* GET_ClearNamedBufferData(disp)) parameters
#define GET_ClearNamedBufferData(disp) ((_glptr_ClearNamedBufferData)(GET_by_offset((disp), _gloffset_ClearNamedBufferData)))
#define SET_ClearNamedBufferData(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLenum, GLenum, GLenum, const GLvoid *) = func; \
   SET_by_offset(disp, _gloffset_ClearNamedBufferData, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_ClearNamedBufferSubData)(GLuint, GLenum, GLintptr, GLsizeiptr, GLenum, GLenum, const GLvoid *);
#define CALL_ClearNamedBufferSubData(disp, parameters) (* GET_ClearNamedBufferSubData(disp)) parameters
#define GET_ClearNamedBufferSubData(disp) ((_glptr_ClearNamedBufferSubData)(GET_by_offset((disp), _gloffset_ClearNamedBufferSubData)))
#define SET_ClearNamedBufferSubData(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLenum, GLintptr, GLsizeiptr, GLenum, GLenum, const GLvoid *) = func; \
   SET_by_offset(disp, _gloffset_ClearNamedBufferSubData, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_ClearNamedFramebufferfi)(GLuint, GLenum, GLint, GLfloat, GLint);
#define CALL_ClearNamedFramebufferfi(disp, parameters) (* GET_ClearNamedFramebufferfi(disp)) parameters
#define GET_ClearNamedFramebufferfi(disp) ((_glptr_ClearNamedFramebufferfi)(GET_by_offset((disp), _gloffset_ClearNamedFramebufferfi)))
#define SET_ClearNamedFramebufferfi(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLenum, GLint, GLfloat, GLint) = func; \
   SET_by_offset(disp, _gloffset_ClearNamedFramebufferfi, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_ClearNamedFramebufferfv)(GLuint, GLenum, GLint, const GLfloat *);
#define CALL_ClearNamedFramebufferfv(disp, parameters) (* GET_ClearNamedFramebufferfv(disp)) parameters
#define GET_ClearNamedFramebufferfv(disp) ((_glptr_ClearNamedFramebufferfv)(GET_by_offset((disp), _gloffset_ClearNamedFramebufferfv)))
#define SET_ClearNamedFramebufferfv(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLenum, GLint, const GLfloat *) = func; \
   SET_by_offset(disp, _gloffset_ClearNamedFramebufferfv, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_ClearNamedFramebufferiv)(GLuint, GLenum, GLint, const GLint *);
#define CALL_ClearNamedFramebufferiv(disp, parameters) (* GET_ClearNamedFramebufferiv(disp)) parameters
#define GET_ClearNamedFramebufferiv(disp) ((_glptr_ClearNamedFramebufferiv)(GET_by_offset((disp), _gloffset_ClearNamedFramebufferiv)))
#define SET_ClearNamedFramebufferiv(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLenum, GLint, const GLint *) = func; \
   SET_by_offset(disp, _gloffset_ClearNamedFramebufferiv, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_ClearNamedFramebufferuiv)(GLuint, GLenum, GLint, const GLuint *);
#define CALL_ClearNamedFramebufferuiv(disp, parameters) (* GET_ClearNamedFramebufferuiv(disp)) parameters
#define GET_ClearNamedFramebufferuiv(disp) ((_glptr_ClearNamedFramebufferuiv)(GET_by_offset((disp), _gloffset_ClearNamedFramebufferuiv)))
#define SET_ClearNamedFramebufferuiv(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLenum, GLint, const GLuint *) = func; \
   SET_by_offset(disp, _gloffset_ClearNamedFramebufferuiv, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_CompressedTextureSubImage1D)(GLuint, GLint, GLint, GLsizei, GLenum, GLsizei, const GLvoid *);
#define CALL_CompressedTextureSubImage1D(disp, parameters) (* GET_CompressedTextureSubImage1D(disp)) parameters
#define GET_CompressedTextureSubImage1D(disp) ((_glptr_CompressedTextureSubImage1D)(GET_by_offset((disp), _gloffset_CompressedTextureSubImage1D)))
#define SET_CompressedTextureSubImage1D(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLint, GLint, GLsizei, GLenum, GLsizei, const GLvoid *) = func; \
   SET_by_offset(disp, _gloffset_CompressedTextureSubImage1D, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_CompressedTextureSubImage2D)(GLuint, GLint, GLint, GLint, GLsizei, GLsizei, GLenum, GLsizei, const GLvoid *);
#define CALL_CompressedTextureSubImage2D(disp, parameters) (* GET_CompressedTextureSubImage2D(disp)) parameters
#define GET_CompressedTextureSubImage2D(disp) ((_glptr_CompressedTextureSubImage2D)(GET_by_offset((disp), _gloffset_CompressedTextureSubImage2D)))
#define SET_CompressedTextureSubImage2D(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLint, GLint, GLint, GLsizei, GLsizei, GLenum, GLsizei, const GLvoid *) = func; \
   SET_by_offset(disp, _gloffset_CompressedTextureSubImage2D, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_CompressedTextureSubImage3D)(GLuint, GLint, GLint, GLint, GLint, GLsizei, GLsizei, GLsizei, GLenum, GLsizei, const GLvoid *);
#define CALL_CompressedTextureSubImage3D(disp, parameters) (* GET_CompressedTextureSubImage3D(disp)) parameters
#define GET_CompressedTextureSubImage3D(disp) ((_glptr_CompressedTextureSubImage3D)(GET_by_offset((disp), _gloffset_CompressedTextureSubImage3D)))
#define SET_CompressedTextureSubImage3D(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLint, GLint, GLint, GLint, GLsizei, GLsizei, GLsizei, GLenum, GLsizei, const GLvoid *) = func; \
   SET_by_offset(disp, _gloffset_CompressedTextureSubImage3D, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_CopyNamedBufferSubData)(GLuint, GLuint, GLintptr, GLintptr, GLsizeiptr);
#define CALL_CopyNamedBufferSubData(disp, parameters) (* GET_CopyNamedBufferSubData(disp)) parameters
#define GET_CopyNamedBufferSubData(disp) ((_glptr_CopyNamedBufferSubData)(GET_by_offset((disp), _gloffset_CopyNamedBufferSubData)))
#define SET_CopyNamedBufferSubData(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLuint, GLintptr, GLintptr, GLsizeiptr) = func; \
   SET_by_offset(disp, _gloffset_CopyNamedBufferSubData, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_CopyTextureSubImage1D)(GLuint, GLint, GLint, GLint, GLint, GLsizei);
#define CALL_CopyTextureSubImage1D(disp, parameters) (* GET_CopyTextureSubImage1D(disp)) parameters
#define GET_CopyTextureSubImage1D(disp) ((_glptr_CopyTextureSubImage1D)(GET_by_offset((disp), _gloffset_CopyTextureSubImage1D)))
#define SET_CopyTextureSubImage1D(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLint, GLint, GLint, GLint, GLsizei) = func; \
   SET_by_offset(disp, _gloffset_CopyTextureSubImage1D, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_CopyTextureSubImage2D)(GLuint, GLint, GLint, GLint, GLint, GLint, GLsizei, GLsizei);
#define CALL_CopyTextureSubImage2D(disp, parameters) (* GET_CopyTextureSubImage2D(disp)) parameters
#define GET_CopyTextureSubImage2D(disp) ((_glptr_CopyTextureSubImage2D)(GET_by_offset((disp), _gloffset_CopyTextureSubImage2D)))
#define SET_CopyTextureSubImage2D(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLint, GLint, GLint, GLint, GLint, GLsizei, GLsizei) = func; \
   SET_by_offset(disp, _gloffset_CopyTextureSubImage2D, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_CopyTextureSubImage3D)(GLuint, GLint, GLint, GLint, GLint, GLint, GLint, GLsizei, GLsizei);
#define CALL_CopyTextureSubImage3D(disp, parameters) (* GET_CopyTextureSubImage3D(disp)) parameters
#define GET_CopyTextureSubImage3D(disp) ((_glptr_CopyTextureSubImage3D)(GET_by_offset((disp), _gloffset_CopyTextureSubImage3D)))
#define SET_CopyTextureSubImage3D(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLint, GLint, GLint, GLint, GLint, GLint, GLsizei, GLsizei) = func; \
   SET_by_offset(disp, _gloffset_CopyTextureSubImage3D, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_CreateBuffers)(GLsizei, GLuint *);
#define CALL_CreateBuffers(disp, parameters) (* GET_CreateBuffers(disp)) parameters
#define GET_CreateBuffers(disp) ((_glptr_CreateBuffers)(GET_by_offset((disp), _gloffset_CreateBuffers)))
#define SET_CreateBuffers(disp, func) do { \
   void (GLAPIENTRYP fn)(GLsizei, GLuint *) = func; \
   SET_by_offset(disp, _gloffset_CreateBuffers, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_CreateFramebuffers)(GLsizei, GLuint *);
#define CALL_CreateFramebuffers(disp, parameters) (* GET_CreateFramebuffers(disp)) parameters
#define GET_CreateFramebuffers(disp) ((_glptr_CreateFramebuffers)(GET_by_offset((disp), _gloffset_CreateFramebuffers)))
#define SET_CreateFramebuffers(disp, func) do { \
   void (GLAPIENTRYP fn)(GLsizei, GLuint *) = func; \
   SET_by_offset(disp, _gloffset_CreateFramebuffers, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_CreateProgramPipelines)(GLsizei, GLuint *);
#define CALL_CreateProgramPipelines(disp, parameters) (* GET_CreateProgramPipelines(disp)) parameters
#define GET_CreateProgramPipelines(disp) ((_glptr_CreateProgramPipelines)(GET_by_offset((disp), _gloffset_CreateProgramPipelines)))
#define SET_CreateProgramPipelines(disp, func) do { \
   void (GLAPIENTRYP fn)(GLsizei, GLuint *) = func; \
   SET_by_offset(disp, _gloffset_CreateProgramPipelines, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_CreateQueries)(GLenum, GLsizei, GLuint *);
#define CALL_CreateQueries(disp, parameters) (* GET_CreateQueries(disp)) parameters
#define GET_CreateQueries(disp) ((_glptr_CreateQueries)(GET_by_offset((disp), _gloffset_CreateQueries)))
#define SET_CreateQueries(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLsizei, GLuint *) = func; \
   SET_by_offset(disp, _gloffset_CreateQueries, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_CreateRenderbuffers)(GLsizei, GLuint *);
#define CALL_CreateRenderbuffers(disp, parameters) (* GET_CreateRenderbuffers(disp)) parameters
#define GET_CreateRenderbuffers(disp) ((_glptr_CreateRenderbuffers)(GET_by_offset((disp), _gloffset_CreateRenderbuffers)))
#define SET_CreateRenderbuffers(disp, func) do { \
   void (GLAPIENTRYP fn)(GLsizei, GLuint *) = func; \
   SET_by_offset(disp, _gloffset_CreateRenderbuffers, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_CreateSamplers)(GLsizei, GLuint *);
#define CALL_CreateSamplers(disp, parameters) (* GET_CreateSamplers(disp)) parameters
#define GET_CreateSamplers(disp) ((_glptr_CreateSamplers)(GET_by_offset((disp), _gloffset_CreateSamplers)))
#define SET_CreateSamplers(disp, func) do { \
   void (GLAPIENTRYP fn)(GLsizei, GLuint *) = func; \
   SET_by_offset(disp, _gloffset_CreateSamplers, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_CreateTextures)(GLenum, GLsizei, GLuint *);
#define CALL_CreateTextures(disp, parameters) (* GET_CreateTextures(disp)) parameters
#define GET_CreateTextures(disp) ((_glptr_CreateTextures)(GET_by_offset((disp), _gloffset_CreateTextures)))
#define SET_CreateTextures(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLsizei, GLuint *) = func; \
   SET_by_offset(disp, _gloffset_CreateTextures, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_CreateTransformFeedbacks)(GLsizei, GLuint *);
#define CALL_CreateTransformFeedbacks(disp, parameters) (* GET_CreateTransformFeedbacks(disp)) parameters
#define GET_CreateTransformFeedbacks(disp) ((_glptr_CreateTransformFeedbacks)(GET_by_offset((disp), _gloffset_CreateTransformFeedbacks)))
#define SET_CreateTransformFeedbacks(disp, func) do { \
   void (GLAPIENTRYP fn)(GLsizei, GLuint *) = func; \
   SET_by_offset(disp, _gloffset_CreateTransformFeedbacks, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_CreateVertexArrays)(GLsizei, GLuint *);
#define CALL_CreateVertexArrays(disp, parameters) (* GET_CreateVertexArrays(disp)) parameters
#define GET_CreateVertexArrays(disp) ((_glptr_CreateVertexArrays)(GET_by_offset((disp), _gloffset_CreateVertexArrays)))
#define SET_CreateVertexArrays(disp, func) do { \
   void (GLAPIENTRYP fn)(GLsizei, GLuint *) = func; \
   SET_by_offset(disp, _gloffset_CreateVertexArrays, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_DisableVertexArrayAttrib)(GLuint, GLuint);
#define CALL_DisableVertexArrayAttrib(disp, parameters) (* GET_DisableVertexArrayAttrib(disp)) parameters
#define GET_DisableVertexArrayAttrib(disp) ((_glptr_DisableVertexArrayAttrib)(GET_by_offset((disp), _gloffset_DisableVertexArrayAttrib)))
#define SET_DisableVertexArrayAttrib(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLuint) = func; \
   SET_by_offset(disp, _gloffset_DisableVertexArrayAttrib, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_EnableVertexArrayAttrib)(GLuint, GLuint);
#define CALL_EnableVertexArrayAttrib(disp, parameters) (* GET_EnableVertexArrayAttrib(disp)) parameters
#define GET_EnableVertexArrayAttrib(disp) ((_glptr_EnableVertexArrayAttrib)(GET_by_offset((disp), _gloffset_EnableVertexArrayAttrib)))
#define SET_EnableVertexArrayAttrib(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLuint) = func; \
   SET_by_offset(disp, _gloffset_EnableVertexArrayAttrib, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_FlushMappedNamedBufferRange)(GLuint, GLintptr, GLsizeiptr);
#define CALL_FlushMappedNamedBufferRange(disp, parameters) (* GET_FlushMappedNamedBufferRange(disp)) parameters
#define GET_FlushMappedNamedBufferRange(disp) ((_glptr_FlushMappedNamedBufferRange)(GET_by_offset((disp), _gloffset_FlushMappedNamedBufferRange)))
#define SET_FlushMappedNamedBufferRange(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLintptr, GLsizeiptr) = func; \
   SET_by_offset(disp, _gloffset_FlushMappedNamedBufferRange, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_GenerateTextureMipmap)(GLuint);
#define CALL_GenerateTextureMipmap(disp, parameters) (* GET_GenerateTextureMipmap(disp)) parameters
#define GET_GenerateTextureMipmap(disp) ((_glptr_GenerateTextureMipmap)(GET_by_offset((disp), _gloffset_GenerateTextureMipmap)))
#define SET_GenerateTextureMipmap(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint) = func; \
   SET_by_offset(disp, _gloffset_GenerateTextureMipmap, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_GetCompressedTextureImage)(GLuint, GLint, GLsizei, GLvoid *);
#define CALL_GetCompressedTextureImage(disp, parameters) (* GET_GetCompressedTextureImage(disp)) parameters
#define GET_GetCompressedTextureImage(disp) ((_glptr_GetCompressedTextureImage)(GET_by_offset((disp), _gloffset_GetCompressedTextureImage)))
#define SET_GetCompressedTextureImage(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLint, GLsizei, GLvoid *) = func; \
   SET_by_offset(disp, _gloffset_GetCompressedTextureImage, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_GetNamedBufferParameteri64v)(GLuint, GLenum, GLint64 *);
#define CALL_GetNamedBufferParameteri64v(disp, parameters) (* GET_GetNamedBufferParameteri64v(disp)) parameters
#define GET_GetNamedBufferParameteri64v(disp) ((_glptr_GetNamedBufferParameteri64v)(GET_by_offset((disp), _gloffset_GetNamedBufferParameteri64v)))
#define SET_GetNamedBufferParameteri64v(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLenum, GLint64 *) = func; \
   SET_by_offset(disp, _gloffset_GetNamedBufferParameteri64v, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_GetNamedBufferParameteriv)(GLuint, GLenum, GLint *);
#define CALL_GetNamedBufferParameteriv(disp, parameters) (* GET_GetNamedBufferParameteriv(disp)) parameters
#define GET_GetNamedBufferParameteriv(disp) ((_glptr_GetNamedBufferParameteriv)(GET_by_offset((disp), _gloffset_GetNamedBufferParameteriv)))
#define SET_GetNamedBufferParameteriv(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLenum, GLint *) = func; \
   SET_by_offset(disp, _gloffset_GetNamedBufferParameteriv, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_GetNamedBufferPointerv)(GLuint, GLenum, GLvoid **);
#define CALL_GetNamedBufferPointerv(disp, parameters) (* GET_GetNamedBufferPointerv(disp)) parameters
#define GET_GetNamedBufferPointerv(disp) ((_glptr_GetNamedBufferPointerv)(GET_by_offset((disp), _gloffset_GetNamedBufferPointerv)))
#define SET_GetNamedBufferPointerv(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLenum, GLvoid **) = func; \
   SET_by_offset(disp, _gloffset_GetNamedBufferPointerv, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_GetNamedBufferSubData)(GLuint, GLintptr, GLsizeiptr, GLvoid *);
#define CALL_GetNamedBufferSubData(disp, parameters) (* GET_GetNamedBufferSubData(disp)) parameters
#define GET_GetNamedBufferSubData(disp) ((_glptr_GetNamedBufferSubData)(GET_by_offset((disp), _gloffset_GetNamedBufferSubData)))
#define SET_GetNamedBufferSubData(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLintptr, GLsizeiptr, GLvoid *) = func; \
   SET_by_offset(disp, _gloffset_GetNamedBufferSubData, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_GetNamedFramebufferAttachmentParameteriv)(GLuint, GLenum, GLenum, GLint *);
#define CALL_GetNamedFramebufferAttachmentParameteriv(disp, parameters) (* GET_GetNamedFramebufferAttachmentParameteriv(disp)) parameters
#define GET_GetNamedFramebufferAttachmentParameteriv(disp) ((_glptr_GetNamedFramebufferAttachmentParameteriv)(GET_by_offset((disp), _gloffset_GetNamedFramebufferAttachmentParameteriv)))
#define SET_GetNamedFramebufferAttachmentParameteriv(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLenum, GLenum, GLint *) = func; \
   SET_by_offset(disp, _gloffset_GetNamedFramebufferAttachmentParameteriv, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_GetNamedFramebufferParameteriv)(GLuint, GLenum, GLint *);
#define CALL_GetNamedFramebufferParameteriv(disp, parameters) (* GET_GetNamedFramebufferParameteriv(disp)) parameters
#define GET_GetNamedFramebufferParameteriv(disp) ((_glptr_GetNamedFramebufferParameteriv)(GET_by_offset((disp), _gloffset_GetNamedFramebufferParameteriv)))
#define SET_GetNamedFramebufferParameteriv(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLenum, GLint *) = func; \
   SET_by_offset(disp, _gloffset_GetNamedFramebufferParameteriv, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_GetNamedRenderbufferParameteriv)(GLuint, GLenum, GLint *);
#define CALL_GetNamedRenderbufferParameteriv(disp, parameters) (* GET_GetNamedRenderbufferParameteriv(disp)) parameters
#define GET_GetNamedRenderbufferParameteriv(disp) ((_glptr_GetNamedRenderbufferParameteriv)(GET_by_offset((disp), _gloffset_GetNamedRenderbufferParameteriv)))
#define SET_GetNamedRenderbufferParameteriv(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLenum, GLint *) = func; \
   SET_by_offset(disp, _gloffset_GetNamedRenderbufferParameteriv, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_GetQueryBufferObjecti64v)(GLuint, GLuint, GLenum, GLintptr);
#define CALL_GetQueryBufferObjecti64v(disp, parameters) (* GET_GetQueryBufferObjecti64v(disp)) parameters
#define GET_GetQueryBufferObjecti64v(disp) ((_glptr_GetQueryBufferObjecti64v)(GET_by_offset((disp), _gloffset_GetQueryBufferObjecti64v)))
#define SET_GetQueryBufferObjecti64v(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLuint, GLenum, GLintptr) = func; \
   SET_by_offset(disp, _gloffset_GetQueryBufferObjecti64v, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_GetQueryBufferObjectiv)(GLuint, GLuint, GLenum, GLintptr);
#define CALL_GetQueryBufferObjectiv(disp, parameters) (* GET_GetQueryBufferObjectiv(disp)) parameters
#define GET_GetQueryBufferObjectiv(disp) ((_glptr_GetQueryBufferObjectiv)(GET_by_offset((disp), _gloffset_GetQueryBufferObjectiv)))
#define SET_GetQueryBufferObjectiv(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLuint, GLenum, GLintptr) = func; \
   SET_by_offset(disp, _gloffset_GetQueryBufferObjectiv, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_GetQueryBufferObjectui64v)(GLuint, GLuint, GLenum, GLintptr);
#define CALL_GetQueryBufferObjectui64v(disp, parameters) (* GET_GetQueryBufferObjectui64v(disp)) parameters
#define GET_GetQueryBufferObjectui64v(disp) ((_glptr_GetQueryBufferObjectui64v)(GET_by_offset((disp), _gloffset_GetQueryBufferObjectui64v)))
#define SET_GetQueryBufferObjectui64v(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLuint, GLenum, GLintptr) = func; \
   SET_by_offset(disp, _gloffset_GetQueryBufferObjectui64v, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_GetQueryBufferObjectuiv)(GLuint, GLuint, GLenum, GLintptr);
#define CALL_GetQueryBufferObjectuiv(disp, parameters) (* GET_GetQueryBufferObjectuiv(disp)) parameters
#define GET_GetQueryBufferObjectuiv(disp) ((_glptr_GetQueryBufferObjectuiv)(GET_by_offset((disp), _gloffset_GetQueryBufferObjectuiv)))
#define SET_GetQueryBufferObjectuiv(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLuint, GLenum, GLintptr) = func; \
   SET_by_offset(disp, _gloffset_GetQueryBufferObjectuiv, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_GetTextureImage)(GLuint, GLint, GLenum, GLenum, GLsizei, GLvoid *);
#define CALL_GetTextureImage(disp, parameters) (* GET_GetTextureImage(disp)) parameters
#define GET_GetTextureImage(disp) ((_glptr_GetTextureImage)(GET_by_offset((disp), _gloffset_GetTextureImage)))
#define SET_GetTextureImage(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLint, GLenum, GLenum, GLsizei, GLvoid *) = func; \
   SET_by_offset(disp, _gloffset_GetTextureImage, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_GetTextureLevelParameterfv)(GLuint, GLint, GLenum, GLfloat *);
#define CALL_GetTextureLevelParameterfv(disp, parameters) (* GET_GetTextureLevelParameterfv(disp)) parameters
#define GET_GetTextureLevelParameterfv(disp) ((_glptr_GetTextureLevelParameterfv)(GET_by_offset((disp), _gloffset_GetTextureLevelParameterfv)))
#define SET_GetTextureLevelParameterfv(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLint, GLenum, GLfloat *) = func; \
   SET_by_offset(disp, _gloffset_GetTextureLevelParameterfv, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_GetTextureLevelParameteriv)(GLuint, GLint, GLenum, GLint *);
#define CALL_GetTextureLevelParameteriv(disp, parameters) (* GET_GetTextureLevelParameteriv(disp)) parameters
#define GET_GetTextureLevelParameteriv(disp) ((_glptr_GetTextureLevelParameteriv)(GET_by_offset((disp), _gloffset_GetTextureLevelParameteriv)))
#define SET_GetTextureLevelParameteriv(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLint, GLenum, GLint *) = func; \
   SET_by_offset(disp, _gloffset_GetTextureLevelParameteriv, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_GetTextureParameterIiv)(GLuint, GLenum, GLint *);
#define CALL_GetTextureParameterIiv(disp, parameters) (* GET_GetTextureParameterIiv(disp)) parameters
#define GET_GetTextureParameterIiv(disp) ((_glptr_GetTextureParameterIiv)(GET_by_offset((disp), _gloffset_GetTextureParameterIiv)))
#define SET_GetTextureParameterIiv(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLenum, GLint *) = func; \
   SET_by_offset(disp, _gloffset_GetTextureParameterIiv, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_GetTextureParameterIuiv)(GLuint, GLenum, GLuint *);
#define CALL_GetTextureParameterIuiv(disp, parameters) (* GET_GetTextureParameterIuiv(disp)) parameters
#define GET_GetTextureParameterIuiv(disp) ((_glptr_GetTextureParameterIuiv)(GET_by_offset((disp), _gloffset_GetTextureParameterIuiv)))
#define SET_GetTextureParameterIuiv(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLenum, GLuint *) = func; \
   SET_by_offset(disp, _gloffset_GetTextureParameterIuiv, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_GetTextureParameterfv)(GLuint, GLenum, GLfloat *);
#define CALL_GetTextureParameterfv(disp, parameters) (* GET_GetTextureParameterfv(disp)) parameters
#define GET_GetTextureParameterfv(disp) ((_glptr_GetTextureParameterfv)(GET_by_offset((disp), _gloffset_GetTextureParameterfv)))
#define SET_GetTextureParameterfv(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLenum, GLfloat *) = func; \
   SET_by_offset(disp, _gloffset_GetTextureParameterfv, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_GetTextureParameteriv)(GLuint, GLenum, GLint *);
#define CALL_GetTextureParameteriv(disp, parameters) (* GET_GetTextureParameteriv(disp)) parameters
#define GET_GetTextureParameteriv(disp) ((_glptr_GetTextureParameteriv)(GET_by_offset((disp), _gloffset_GetTextureParameteriv)))
#define SET_GetTextureParameteriv(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLenum, GLint *) = func; \
   SET_by_offset(disp, _gloffset_GetTextureParameteriv, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_GetTransformFeedbacki64_v)(GLuint, GLenum, GLuint, GLint64 *);
#define CALL_GetTransformFeedbacki64_v(disp, parameters) (* GET_GetTransformFeedbacki64_v(disp)) parameters
#define GET_GetTransformFeedbacki64_v(disp) ((_glptr_GetTransformFeedbacki64_v)(GET_by_offset((disp), _gloffset_GetTransformFeedbacki64_v)))
#define SET_GetTransformFeedbacki64_v(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLenum, GLuint, GLint64 *) = func; \
   SET_by_offset(disp, _gloffset_GetTransformFeedbacki64_v, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_GetTransformFeedbacki_v)(GLuint, GLenum, GLuint, GLint *);
#define CALL_GetTransformFeedbacki_v(disp, parameters) (* GET_GetTransformFeedbacki_v(disp)) parameters
#define GET_GetTransformFeedbacki_v(disp) ((_glptr_GetTransformFeedbacki_v)(GET_by_offset((disp), _gloffset_GetTransformFeedbacki_v)))
#define SET_GetTransformFeedbacki_v(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLenum, GLuint, GLint *) = func; \
   SET_by_offset(disp, _gloffset_GetTransformFeedbacki_v, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_GetTransformFeedbackiv)(GLuint, GLenum, GLint *);
#define CALL_GetTransformFeedbackiv(disp, parameters) (* GET_GetTransformFeedbackiv(disp)) parameters
#define GET_GetTransformFeedbackiv(disp) ((_glptr_GetTransformFeedbackiv)(GET_by_offset((disp), _gloffset_GetTransformFeedbackiv)))
#define SET_GetTransformFeedbackiv(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLenum, GLint *) = func; \
   SET_by_offset(disp, _gloffset_GetTransformFeedbackiv, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_GetVertexArrayIndexed64iv)(GLuint, GLuint, GLenum, GLint64 *);
#define CALL_GetVertexArrayIndexed64iv(disp, parameters) (* GET_GetVertexArrayIndexed64iv(disp)) parameters
#define GET_GetVertexArrayIndexed64iv(disp) ((_glptr_GetVertexArrayIndexed64iv)(GET_by_offset((disp), _gloffset_GetVertexArrayIndexed64iv)))
#define SET_GetVertexArrayIndexed64iv(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLuint, GLenum, GLint64 *) = func; \
   SET_by_offset(disp, _gloffset_GetVertexArrayIndexed64iv, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_GetVertexArrayIndexediv)(GLuint, GLuint, GLenum, GLint *);
#define CALL_GetVertexArrayIndexediv(disp, parameters) (* GET_GetVertexArrayIndexediv(disp)) parameters
#define GET_GetVertexArrayIndexediv(disp) ((_glptr_GetVertexArrayIndexediv)(GET_by_offset((disp), _gloffset_GetVertexArrayIndexediv)))
#define SET_GetVertexArrayIndexediv(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLuint, GLenum, GLint *) = func; \
   SET_by_offset(disp, _gloffset_GetVertexArrayIndexediv, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_GetVertexArrayiv)(GLuint, GLenum, GLint *);
#define CALL_GetVertexArrayiv(disp, parameters) (* GET_GetVertexArrayiv(disp)) parameters
#define GET_GetVertexArrayiv(disp) ((_glptr_GetVertexArrayiv)(GET_by_offset((disp), _gloffset_GetVertexArrayiv)))
#define SET_GetVertexArrayiv(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLenum, GLint *) = func; \
   SET_by_offset(disp, _gloffset_GetVertexArrayiv, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_InvalidateNamedFramebufferData)(GLuint, GLsizei, const GLenum *);
#define CALL_InvalidateNamedFramebufferData(disp, parameters) (* GET_InvalidateNamedFramebufferData(disp)) parameters
#define GET_InvalidateNamedFramebufferData(disp) ((_glptr_InvalidateNamedFramebufferData)(GET_by_offset((disp), _gloffset_InvalidateNamedFramebufferData)))
#define SET_InvalidateNamedFramebufferData(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLsizei, const GLenum *) = func; \
   SET_by_offset(disp, _gloffset_InvalidateNamedFramebufferData, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_InvalidateNamedFramebufferSubData)(GLuint, GLsizei, const GLenum *, GLint, GLint, GLsizei, GLsizei);
#define CALL_InvalidateNamedFramebufferSubData(disp, parameters) (* GET_InvalidateNamedFramebufferSubData(disp)) parameters
#define GET_InvalidateNamedFramebufferSubData(disp) ((_glptr_InvalidateNamedFramebufferSubData)(GET_by_offset((disp), _gloffset_InvalidateNamedFramebufferSubData)))
#define SET_InvalidateNamedFramebufferSubData(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLsizei, const GLenum *, GLint, GLint, GLsizei, GLsizei) = func; \
   SET_by_offset(disp, _gloffset_InvalidateNamedFramebufferSubData, fn); \
} while (0)

typedef GLvoid * (GLAPIENTRYP _glptr_MapNamedBuffer)(GLuint, GLenum);
#define CALL_MapNamedBuffer(disp, parameters) (* GET_MapNamedBuffer(disp)) parameters
#define GET_MapNamedBuffer(disp) ((_glptr_MapNamedBuffer)(GET_by_offset((disp), _gloffset_MapNamedBuffer)))
#define SET_MapNamedBuffer(disp, func) do { \
   GLvoid * (GLAPIENTRYP fn)(GLuint, GLenum) = func; \
   SET_by_offset(disp, _gloffset_MapNamedBuffer, fn); \
} while (0)

typedef GLvoid * (GLAPIENTRYP _glptr_MapNamedBufferRange)(GLuint, GLintptr, GLsizeiptr, GLbitfield);
#define CALL_MapNamedBufferRange(disp, parameters) (* GET_MapNamedBufferRange(disp)) parameters
#define GET_MapNamedBufferRange(disp) ((_glptr_MapNamedBufferRange)(GET_by_offset((disp), _gloffset_MapNamedBufferRange)))
#define SET_MapNamedBufferRange(disp, func) do { \
   GLvoid * (GLAPIENTRYP fn)(GLuint, GLintptr, GLsizeiptr, GLbitfield) = func; \
   SET_by_offset(disp, _gloffset_MapNamedBufferRange, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_NamedBufferData)(GLuint, GLsizeiptr, const GLvoid *, GLenum);
#define CALL_NamedBufferData(disp, parameters) (* GET_NamedBufferData(disp)) parameters
#define GET_NamedBufferData(disp) ((_glptr_NamedBufferData)(GET_by_offset((disp), _gloffset_NamedBufferData)))
#define SET_NamedBufferData(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLsizeiptr, const GLvoid *, GLenum) = func; \
   SET_by_offset(disp, _gloffset_NamedBufferData, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_NamedBufferStorage)(GLuint, GLsizeiptr, const GLvoid *, GLbitfield);
#define CALL_NamedBufferStorage(disp, parameters) (* GET_NamedBufferStorage(disp)) parameters
#define GET_NamedBufferStorage(disp) ((_glptr_NamedBufferStorage)(GET_by_offset((disp), _gloffset_NamedBufferStorage)))
#define SET_NamedBufferStorage(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLsizeiptr, const GLvoid *, GLbitfield) = func; \
   SET_by_offset(disp, _gloffset_NamedBufferStorage, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_NamedBufferSubData)(GLuint, GLintptr, GLsizeiptr, const GLvoid *);
#define CALL_NamedBufferSubData(disp, parameters) (* GET_NamedBufferSubData(disp)) parameters
#define GET_NamedBufferSubData(disp) ((_glptr_NamedBufferSubData)(GET_by_offset((disp), _gloffset_NamedBufferSubData)))
#define SET_NamedBufferSubData(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLintptr, GLsizeiptr, const GLvoid *) = func; \
   SET_by_offset(disp, _gloffset_NamedBufferSubData, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_NamedFramebufferDrawBuffer)(GLuint, GLenum);
#define CALL_NamedFramebufferDrawBuffer(disp, parameters) (* GET_NamedFramebufferDrawBuffer(disp)) parameters
#define GET_NamedFramebufferDrawBuffer(disp) ((_glptr_NamedFramebufferDrawBuffer)(GET_by_offset((disp), _gloffset_NamedFramebufferDrawBuffer)))
#define SET_NamedFramebufferDrawBuffer(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLenum) = func; \
   SET_by_offset(disp, _gloffset_NamedFramebufferDrawBuffer, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_NamedFramebufferDrawBuffers)(GLuint, GLsizei, const GLenum *);
#define CALL_NamedFramebufferDrawBuffers(disp, parameters) (* GET_NamedFramebufferDrawBuffers(disp)) parameters
#define GET_NamedFramebufferDrawBuffers(disp) ((_glptr_NamedFramebufferDrawBuffers)(GET_by_offset((disp), _gloffset_NamedFramebufferDrawBuffers)))
#define SET_NamedFramebufferDrawBuffers(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLsizei, const GLenum *) = func; \
   SET_by_offset(disp, _gloffset_NamedFramebufferDrawBuffers, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_NamedFramebufferParameteri)(GLuint, GLenum, GLint);
#define CALL_NamedFramebufferParameteri(disp, parameters) (* GET_NamedFramebufferParameteri(disp)) parameters
#define GET_NamedFramebufferParameteri(disp) ((_glptr_NamedFramebufferParameteri)(GET_by_offset((disp), _gloffset_NamedFramebufferParameteri)))
#define SET_NamedFramebufferParameteri(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLenum, GLint) = func; \
   SET_by_offset(disp, _gloffset_NamedFramebufferParameteri, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_NamedFramebufferReadBuffer)(GLuint, GLenum);
#define CALL_NamedFramebufferReadBuffer(disp, parameters) (* GET_NamedFramebufferReadBuffer(disp)) parameters
#define GET_NamedFramebufferReadBuffer(disp) ((_glptr_NamedFramebufferReadBuffer)(GET_by_offset((disp), _gloffset_NamedFramebufferReadBuffer)))
#define SET_NamedFramebufferReadBuffer(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLenum) = func; \
   SET_by_offset(disp, _gloffset_NamedFramebufferReadBuffer, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_NamedFramebufferRenderbuffer)(GLuint, GLenum, GLenum, GLuint);
#define CALL_NamedFramebufferRenderbuffer(disp, parameters) (* GET_NamedFramebufferRenderbuffer(disp)) parameters
#define GET_NamedFramebufferRenderbuffer(disp) ((_glptr_NamedFramebufferRenderbuffer)(GET_by_offset((disp), _gloffset_NamedFramebufferRenderbuffer)))
#define SET_NamedFramebufferRenderbuffer(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLenum, GLenum, GLuint) = func; \
   SET_by_offset(disp, _gloffset_NamedFramebufferRenderbuffer, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_NamedFramebufferTexture)(GLuint, GLenum, GLuint, GLint);
#define CALL_NamedFramebufferTexture(disp, parameters) (* GET_NamedFramebufferTexture(disp)) parameters
#define GET_NamedFramebufferTexture(disp) ((_glptr_NamedFramebufferTexture)(GET_by_offset((disp), _gloffset_NamedFramebufferTexture)))
#define SET_NamedFramebufferTexture(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLenum, GLuint, GLint) = func; \
   SET_by_offset(disp, _gloffset_NamedFramebufferTexture, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_NamedFramebufferTextureLayer)(GLuint, GLenum, GLuint, GLint, GLint);
#define CALL_NamedFramebufferTextureLayer(disp, parameters) (* GET_NamedFramebufferTextureLayer(disp)) parameters
#define GET_NamedFramebufferTextureLayer(disp) ((_glptr_NamedFramebufferTextureLayer)(GET_by_offset((disp), _gloffset_NamedFramebufferTextureLayer)))
#define SET_NamedFramebufferTextureLayer(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLenum, GLuint, GLint, GLint) = func; \
   SET_by_offset(disp, _gloffset_NamedFramebufferTextureLayer, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_NamedRenderbufferStorage)(GLuint, GLenum, GLsizei, GLsizei);
#define CALL_NamedRenderbufferStorage(disp, parameters) (* GET_NamedRenderbufferStorage(disp)) parameters
#define GET_NamedRenderbufferStorage(disp) ((_glptr_NamedRenderbufferStorage)(GET_by_offset((disp), _gloffset_NamedRenderbufferStorage)))
#define SET_NamedRenderbufferStorage(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLenum, GLsizei, GLsizei) = func; \
   SET_by_offset(disp, _gloffset_NamedRenderbufferStorage, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_NamedRenderbufferStorageMultisample)(GLuint, GLsizei, GLenum, GLsizei, GLsizei);
#define CALL_NamedRenderbufferStorageMultisample(disp, parameters) (* GET_NamedRenderbufferStorageMultisample(disp)) parameters
#define GET_NamedRenderbufferStorageMultisample(disp) ((_glptr_NamedRenderbufferStorageMultisample)(GET_by_offset((disp), _gloffset_NamedRenderbufferStorageMultisample)))
#define SET_NamedRenderbufferStorageMultisample(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLsizei, GLenum, GLsizei, GLsizei) = func; \
   SET_by_offset(disp, _gloffset_NamedRenderbufferStorageMultisample, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_TextureBuffer)(GLuint, GLenum, GLuint);
#define CALL_TextureBuffer(disp, parameters) (* GET_TextureBuffer(disp)) parameters
#define GET_TextureBuffer(disp) ((_glptr_TextureBuffer)(GET_by_offset((disp), _gloffset_TextureBuffer)))
#define SET_TextureBuffer(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLenum, GLuint) = func; \
   SET_by_offset(disp, _gloffset_TextureBuffer, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_TextureBufferRange)(GLuint, GLenum, GLuint, GLintptr, GLsizeiptr);
#define CALL_TextureBufferRange(disp, parameters) (* GET_TextureBufferRange(disp)) parameters
#define GET_TextureBufferRange(disp) ((_glptr_TextureBufferRange)(GET_by_offset((disp), _gloffset_TextureBufferRange)))
#define SET_TextureBufferRange(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLenum, GLuint, GLintptr, GLsizeiptr) = func; \
   SET_by_offset(disp, _gloffset_TextureBufferRange, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_TextureParameterIiv)(GLuint, GLenum, const GLint *);
#define CALL_TextureParameterIiv(disp, parameters) (* GET_TextureParameterIiv(disp)) parameters
#define GET_TextureParameterIiv(disp) ((_glptr_TextureParameterIiv)(GET_by_offset((disp), _gloffset_TextureParameterIiv)))
#define SET_TextureParameterIiv(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLenum, const GLint *) = func; \
   SET_by_offset(disp, _gloffset_TextureParameterIiv, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_TextureParameterIuiv)(GLuint, GLenum, const GLuint *);
#define CALL_TextureParameterIuiv(disp, parameters) (* GET_TextureParameterIuiv(disp)) parameters
#define GET_TextureParameterIuiv(disp) ((_glptr_TextureParameterIuiv)(GET_by_offset((disp), _gloffset_TextureParameterIuiv)))
#define SET_TextureParameterIuiv(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLenum, const GLuint *) = func; \
   SET_by_offset(disp, _gloffset_TextureParameterIuiv, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_TextureParameterf)(GLuint, GLenum, GLfloat);
#define CALL_TextureParameterf(disp, parameters) (* GET_TextureParameterf(disp)) parameters
#define GET_TextureParameterf(disp) ((_glptr_TextureParameterf)(GET_by_offset((disp), _gloffset_TextureParameterf)))
#define SET_TextureParameterf(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLenum, GLfloat) = func; \
   SET_by_offset(disp, _gloffset_TextureParameterf, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_TextureParameterfv)(GLuint, GLenum, const GLfloat *);
#define CALL_TextureParameterfv(disp, parameters) (* GET_TextureParameterfv(disp)) parameters
#define GET_TextureParameterfv(disp) ((_glptr_TextureParameterfv)(GET_by_offset((disp), _gloffset_TextureParameterfv)))
#define SET_TextureParameterfv(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLenum, const GLfloat *) = func; \
   SET_by_offset(disp, _gloffset_TextureParameterfv, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_TextureParameteri)(GLuint, GLenum, GLint);
#define CALL_TextureParameteri(disp, parameters) (* GET_TextureParameteri(disp)) parameters
#define GET_TextureParameteri(disp) ((_glptr_TextureParameteri)(GET_by_offset((disp), _gloffset_TextureParameteri)))
#define SET_TextureParameteri(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLenum, GLint) = func; \
   SET_by_offset(disp, _gloffset_TextureParameteri, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_TextureParameteriv)(GLuint, GLenum, const GLint *);
#define CALL_TextureParameteriv(disp, parameters) (* GET_TextureParameteriv(disp)) parameters
#define GET_TextureParameteriv(disp) ((_glptr_TextureParameteriv)(GET_by_offset((disp), _gloffset_TextureParameteriv)))
#define SET_TextureParameteriv(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLenum, const GLint *) = func; \
   SET_by_offset(disp, _gloffset_TextureParameteriv, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_TextureStorage1D)(GLuint, GLsizei, GLenum, GLsizei);
#define CALL_TextureStorage1D(disp, parameters) (* GET_TextureStorage1D(disp)) parameters
#define GET_TextureStorage1D(disp) ((_glptr_TextureStorage1D)(GET_by_offset((disp), _gloffset_TextureStorage1D)))
#define SET_TextureStorage1D(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLsizei, GLenum, GLsizei) = func; \
   SET_by_offset(disp, _gloffset_TextureStorage1D, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_TextureStorage2D)(GLuint, GLsizei, GLenum, GLsizei, GLsizei);
#define CALL_TextureStorage2D(disp, parameters) (* GET_TextureStorage2D(disp)) parameters
#define GET_TextureStorage2D(disp) ((_glptr_TextureStorage2D)(GET_by_offset((disp), _gloffset_TextureStorage2D)))
#define SET_TextureStorage2D(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLsizei, GLenum, GLsizei, GLsizei) = func; \
   SET_by_offset(disp, _gloffset_TextureStorage2D, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_TextureStorage2DMultisample)(GLuint, GLsizei, GLenum, GLsizei, GLsizei, GLboolean);
#define CALL_TextureStorage2DMultisample(disp, parameters) (* GET_TextureStorage2DMultisample(disp)) parameters
#define GET_TextureStorage2DMultisample(disp) ((_glptr_TextureStorage2DMultisample)(GET_by_offset((disp), _gloffset_TextureStorage2DMultisample)))
#define SET_TextureStorage2DMultisample(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLsizei, GLenum, GLsizei, GLsizei, GLboolean) = func; \
   SET_by_offset(disp, _gloffset_TextureStorage2DMultisample, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_TextureStorage3D)(GLuint, GLsizei, GLenum, GLsizei, GLsizei, GLsizei);
#define CALL_TextureStorage3D(disp, parameters) (* GET_TextureStorage3D(disp)) parameters
#define GET_TextureStorage3D(disp) ((_glptr_TextureStorage3D)(GET_by_offset((disp), _gloffset_TextureStorage3D)))
#define SET_TextureStorage3D(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLsizei, GLenum, GLsizei, GLsizei, GLsizei) = func; \
   SET_by_offset(disp, _gloffset_TextureStorage3D, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_TextureStorage3DMultisample)(GLuint, GLsizei, GLenum, GLsizei, GLsizei, GLsizei, GLboolean);
#define CALL_TextureStorage3DMultisample(disp, parameters) (* GET_TextureStorage3DMultisample(disp)) parameters
#define GET_TextureStorage3DMultisample(disp) ((_glptr_TextureStorage3DMultisample)(GET_by_offset((disp), _gloffset_TextureStorage3DMultisample)))
#define SET_TextureStorage3DMultisample(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLsizei, GLenum, GLsizei, GLsizei, GLsizei, GLboolean) = func; \
   SET_by_offset(disp, _gloffset_TextureStorage3DMultisample, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_TextureSubImage1D)(GLuint, GLint, GLint, GLsizei, GLenum, GLenum, const GLvoid *);
#define CALL_TextureSubImage1D(disp, parameters) (* GET_TextureSubImage1D(disp)) parameters
#define GET_TextureSubImage1D(disp) ((_glptr_TextureSubImage1D)(GET_by_offset((disp), _gloffset_TextureSubImage1D)))
#define SET_TextureSubImage1D(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLint, GLint, GLsizei, GLenum, GLenum, const GLvoid *) = func; \
   SET_by_offset(disp, _gloffset_TextureSubImage1D, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_TextureSubImage2D)(GLuint, GLint, GLint, GLint, GLsizei, GLsizei, GLenum, GLenum, const GLvoid *);
#define CALL_TextureSubImage2D(disp, parameters) (* GET_TextureSubImage2D(disp)) parameters
#define GET_TextureSubImage2D(disp) ((_glptr_TextureSubImage2D)(GET_by_offset((disp), _gloffset_TextureSubImage2D)))
#define SET_TextureSubImage2D(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLint, GLint, GLint, GLsizei, GLsizei, GLenum, GLenum, const GLvoid *) = func; \
   SET_by_offset(disp, _gloffset_TextureSubImage2D, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_TextureSubImage3D)(GLuint, GLint, GLint, GLint, GLint, GLsizei, GLsizei, GLsizei, GLenum, GLenum, const GLvoid *);
#define CALL_TextureSubImage3D(disp, parameters) (* GET_TextureSubImage3D(disp)) parameters
#define GET_TextureSubImage3D(disp) ((_glptr_TextureSubImage3D)(GET_by_offset((disp), _gloffset_TextureSubImage3D)))
#define SET_TextureSubImage3D(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLint, GLint, GLint, GLint, GLsizei, GLsizei, GLsizei, GLenum, GLenum, const GLvoid *) = func; \
   SET_by_offset(disp, _gloffset_TextureSubImage3D, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_TransformFeedbackBufferBase)(GLuint, GLuint, GLuint);
#define CALL_TransformFeedbackBufferBase(disp, parameters) (* GET_TransformFeedbackBufferBase(disp)) parameters
#define GET_TransformFeedbackBufferBase(disp) ((_glptr_TransformFeedbackBufferBase)(GET_by_offset((disp), _gloffset_TransformFeedbackBufferBase)))
#define SET_TransformFeedbackBufferBase(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLuint, GLuint) = func; \
   SET_by_offset(disp, _gloffset_TransformFeedbackBufferBase, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_TransformFeedbackBufferRange)(GLuint, GLuint, GLuint, GLintptr, GLsizeiptr);
#define CALL_TransformFeedbackBufferRange(disp, parameters) (* GET_TransformFeedbackBufferRange(disp)) parameters
#define GET_TransformFeedbackBufferRange(disp) ((_glptr_TransformFeedbackBufferRange)(GET_by_offset((disp), _gloffset_TransformFeedbackBufferRange)))
#define SET_TransformFeedbackBufferRange(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLuint, GLuint, GLintptr, GLsizeiptr) = func; \
   SET_by_offset(disp, _gloffset_TransformFeedbackBufferRange, fn); \
} while (0)

typedef GLboolean (GLAPIENTRYP _glptr_UnmapNamedBufferEXT)(GLuint);
#define CALL_UnmapNamedBufferEXT(disp, parameters) (* GET_UnmapNamedBufferEXT(disp)) parameters
#define GET_UnmapNamedBufferEXT(disp) ((_glptr_UnmapNamedBufferEXT)(GET_by_offset((disp), _gloffset_UnmapNamedBufferEXT)))
#define SET_UnmapNamedBufferEXT(disp, func) do { \
   GLboolean (GLAPIENTRYP fn)(GLuint) = func; \
   SET_by_offset(disp, _gloffset_UnmapNamedBufferEXT, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_VertexArrayAttribBinding)(GLuint, GLuint, GLuint);
#define CALL_VertexArrayAttribBinding(disp, parameters) (* GET_VertexArrayAttribBinding(disp)) parameters
#define GET_VertexArrayAttribBinding(disp) ((_glptr_VertexArrayAttribBinding)(GET_by_offset((disp), _gloffset_VertexArrayAttribBinding)))
#define SET_VertexArrayAttribBinding(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLuint, GLuint) = func; \
   SET_by_offset(disp, _gloffset_VertexArrayAttribBinding, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_VertexArrayAttribFormat)(GLuint, GLuint, GLint, GLenum, GLboolean, GLuint);
#define CALL_VertexArrayAttribFormat(disp, parameters) (* GET_VertexArrayAttribFormat(disp)) parameters
#define GET_VertexArrayAttribFormat(disp) ((_glptr_VertexArrayAttribFormat)(GET_by_offset((disp), _gloffset_VertexArrayAttribFormat)))
#define SET_VertexArrayAttribFormat(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLuint, GLint, GLenum, GLboolean, GLuint) = func; \
   SET_by_offset(disp, _gloffset_VertexArrayAttribFormat, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_VertexArrayAttribIFormat)(GLuint, GLuint, GLint, GLenum, GLuint);
#define CALL_VertexArrayAttribIFormat(disp, parameters) (* GET_VertexArrayAttribIFormat(disp)) parameters
#define GET_VertexArrayAttribIFormat(disp) ((_glptr_VertexArrayAttribIFormat)(GET_by_offset((disp), _gloffset_VertexArrayAttribIFormat)))
#define SET_VertexArrayAttribIFormat(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLuint, GLint, GLenum, GLuint) = func; \
   SET_by_offset(disp, _gloffset_VertexArrayAttribIFormat, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_VertexArrayAttribLFormat)(GLuint, GLuint, GLint, GLenum, GLuint);
#define CALL_VertexArrayAttribLFormat(disp, parameters) (* GET_VertexArrayAttribLFormat(disp)) parameters
#define GET_VertexArrayAttribLFormat(disp) ((_glptr_VertexArrayAttribLFormat)(GET_by_offset((disp), _gloffset_VertexArrayAttribLFormat)))
#define SET_VertexArrayAttribLFormat(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLuint, GLint, GLenum, GLuint) = func; \
   SET_by_offset(disp, _gloffset_VertexArrayAttribLFormat, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_VertexArrayBindingDivisor)(GLuint, GLuint, GLuint);
#define CALL_VertexArrayBindingDivisor(disp, parameters) (* GET_VertexArrayBindingDivisor(disp)) parameters
#define GET_VertexArrayBindingDivisor(disp) ((_glptr_VertexArrayBindingDivisor)(GET_by_offset((disp), _gloffset_VertexArrayBindingDivisor)))
#define SET_VertexArrayBindingDivisor(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLuint, GLuint) = func; \
   SET_by_offset(disp, _gloffset_VertexArrayBindingDivisor, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_VertexArrayElementBuffer)(GLuint, GLuint);
#define CALL_VertexArrayElementBuffer(disp, parameters) (* GET_VertexArrayElementBuffer(disp)) parameters
#define GET_VertexArrayElementBuffer(disp) ((_glptr_VertexArrayElementBuffer)(GET_by_offset((disp), _gloffset_VertexArrayElementBuffer)))
#define SET_VertexArrayElementBuffer(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLuint) = func; \
   SET_by_offset(disp, _gloffset_VertexArrayElementBuffer, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_VertexArrayVertexBuffer)(GLuint, GLuint, GLuint, GLintptr, GLsizei);
#define CALL_VertexArrayVertexBuffer(disp, parameters) (* GET_VertexArrayVertexBuffer(disp)) parameters
#define GET_VertexArrayVertexBuffer(disp) ((_glptr_VertexArrayVertexBuffer)(GET_by_offset((disp), _gloffset_VertexArrayVertexBuffer)))
#define SET_VertexArrayVertexBuffer(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLuint, GLuint, GLintptr, GLsizei) = func; \
   SET_by_offset(disp, _gloffset_VertexArrayVertexBuffer, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_VertexArrayVertexBuffers)(GLuint, GLuint, GLsizei, const GLuint *, const GLintptr *, const GLsizei *);
#define CALL_VertexArrayVertexBuffers(disp, parameters) (* GET_VertexArrayVertexBuffers(disp)) parameters
#define GET_VertexArrayVertexBuffers(disp) ((_glptr_VertexArrayVertexBuffers)(GET_by_offset((disp), _gloffset_VertexArrayVertexBuffers)))
#define SET_VertexArrayVertexBuffers(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLuint, GLsizei, const GLuint *, const GLintptr *, const GLsizei *) = func; \
   SET_by_offset(disp, _gloffset_VertexArrayVertexBuffers, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_GetCompressedTextureSubImage)(GLuint, GLint, GLint, GLint, GLint, GLsizei, GLsizei, GLsizei, GLsizei, GLvoid *);
#define CALL_GetCompressedTextureSubImage(disp, parameters) (* GET_GetCompressedTextureSubImage(disp)) parameters
#define GET_GetCompressedTextureSubImage(disp) ((_glptr_GetCompressedTextureSubImage)(GET_by_offset((disp), _gloffset_GetCompressedTextureSubImage)))
#define SET_GetCompressedTextureSubImage(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLint, GLint, GLint, GLint, GLsizei, GLsizei, GLsizei, GLsizei, GLvoid *) = func; \
   SET_by_offset(disp, _gloffset_GetCompressedTextureSubImage, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_GetTextureSubImage)(GLuint, GLint, GLint, GLint, GLint, GLsizei, GLsizei, GLsizei, GLenum, GLenum, GLsizei, GLvoid *);
#define CALL_GetTextureSubImage(disp, parameters) (* GET_GetTextureSubImage(disp)) parameters
#define GET_GetTextureSubImage(disp) ((_glptr_GetTextureSubImage)(GET_by_offset((disp), _gloffset_GetTextureSubImage)))
#define SET_GetTextureSubImage(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLint, GLint, GLint, GLint, GLsizei, GLsizei, GLsizei, GLenum, GLenum, GLsizei, GLvoid *) = func; \
   SET_by_offset(disp, _gloffset_GetTextureSubImage, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_BufferPageCommitmentARB)(GLenum, GLintptr, GLsizeiptr, GLboolean);
#define CALL_BufferPageCommitmentARB(disp, parameters) (* GET_BufferPageCommitmentARB(disp)) parameters
#define GET_BufferPageCommitmentARB(disp) ((_glptr_BufferPageCommitmentARB)(GET_by_offset((disp), _gloffset_BufferPageCommitmentARB)))
#define SET_BufferPageCommitmentARB(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLintptr, GLsizeiptr, GLboolean) = func; \
   SET_by_offset(disp, _gloffset_BufferPageCommitmentARB, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_NamedBufferPageCommitmentARB)(GLuint, GLintptr, GLsizeiptr, GLboolean);
#define CALL_NamedBufferPageCommitmentARB(disp, parameters) (* GET_NamedBufferPageCommitmentARB(disp)) parameters
#define GET_NamedBufferPageCommitmentARB(disp) ((_glptr_NamedBufferPageCommitmentARB)(GET_by_offset((disp), _gloffset_NamedBufferPageCommitmentARB)))
#define SET_NamedBufferPageCommitmentARB(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLintptr, GLsizeiptr, GLboolean) = func; \
   SET_by_offset(disp, _gloffset_NamedBufferPageCommitmentARB, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_GetUniformi64vARB)(GLuint, GLint, GLint64 *);
#define CALL_GetUniformi64vARB(disp, parameters) (* GET_GetUniformi64vARB(disp)) parameters
#define GET_GetUniformi64vARB(disp) ((_glptr_GetUniformi64vARB)(GET_by_offset((disp), _gloffset_GetUniformi64vARB)))
#define SET_GetUniformi64vARB(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLint, GLint64 *) = func; \
   SET_by_offset(disp, _gloffset_GetUniformi64vARB, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_GetUniformui64vARB)(GLuint, GLint, GLuint64 *);
#define CALL_GetUniformui64vARB(disp, parameters) (* GET_GetUniformui64vARB(disp)) parameters
#define GET_GetUniformui64vARB(disp) ((_glptr_GetUniformui64vARB)(GET_by_offset((disp), _gloffset_GetUniformui64vARB)))
#define SET_GetUniformui64vARB(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLint, GLuint64 *) = func; \
   SET_by_offset(disp, _gloffset_GetUniformui64vARB, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_GetnUniformi64vARB)(GLuint, GLint, GLsizei, GLint64 *);
#define CALL_GetnUniformi64vARB(disp, parameters) (* GET_GetnUniformi64vARB(disp)) parameters
#define GET_GetnUniformi64vARB(disp) ((_glptr_GetnUniformi64vARB)(GET_by_offset((disp), _gloffset_GetnUniformi64vARB)))
#define SET_GetnUniformi64vARB(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLint, GLsizei, GLint64 *) = func; \
   SET_by_offset(disp, _gloffset_GetnUniformi64vARB, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_GetnUniformui64vARB)(GLuint, GLint, GLsizei, GLuint64 *);
#define CALL_GetnUniformui64vARB(disp, parameters) (* GET_GetnUniformui64vARB(disp)) parameters
#define GET_GetnUniformui64vARB(disp) ((_glptr_GetnUniformui64vARB)(GET_by_offset((disp), _gloffset_GetnUniformui64vARB)))
#define SET_GetnUniformui64vARB(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLint, GLsizei, GLuint64 *) = func; \
   SET_by_offset(disp, _gloffset_GetnUniformui64vARB, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_ProgramUniform1i64ARB)(GLuint, GLint, GLint64);
#define CALL_ProgramUniform1i64ARB(disp, parameters) (* GET_ProgramUniform1i64ARB(disp)) parameters
#define GET_ProgramUniform1i64ARB(disp) ((_glptr_ProgramUniform1i64ARB)(GET_by_offset((disp), _gloffset_ProgramUniform1i64ARB)))
#define SET_ProgramUniform1i64ARB(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLint, GLint64) = func; \
   SET_by_offset(disp, _gloffset_ProgramUniform1i64ARB, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_ProgramUniform1i64vARB)(GLuint, GLint, GLsizei, const GLint64 *);
#define CALL_ProgramUniform1i64vARB(disp, parameters) (* GET_ProgramUniform1i64vARB(disp)) parameters
#define GET_ProgramUniform1i64vARB(disp) ((_glptr_ProgramUniform1i64vARB)(GET_by_offset((disp), _gloffset_ProgramUniform1i64vARB)))
#define SET_ProgramUniform1i64vARB(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLint, GLsizei, const GLint64 *) = func; \
   SET_by_offset(disp, _gloffset_ProgramUniform1i64vARB, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_ProgramUniform1ui64ARB)(GLuint, GLint, GLuint64);
#define CALL_ProgramUniform1ui64ARB(disp, parameters) (* GET_ProgramUniform1ui64ARB(disp)) parameters
#define GET_ProgramUniform1ui64ARB(disp) ((_glptr_ProgramUniform1ui64ARB)(GET_by_offset((disp), _gloffset_ProgramUniform1ui64ARB)))
#define SET_ProgramUniform1ui64ARB(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLint, GLuint64) = func; \
   SET_by_offset(disp, _gloffset_ProgramUniform1ui64ARB, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_ProgramUniform1ui64vARB)(GLuint, GLint, GLsizei, const GLuint64 *);
#define CALL_ProgramUniform1ui64vARB(disp, parameters) (* GET_ProgramUniform1ui64vARB(disp)) parameters
#define GET_ProgramUniform1ui64vARB(disp) ((_glptr_ProgramUniform1ui64vARB)(GET_by_offset((disp), _gloffset_ProgramUniform1ui64vARB)))
#define SET_ProgramUniform1ui64vARB(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLint, GLsizei, const GLuint64 *) = func; \
   SET_by_offset(disp, _gloffset_ProgramUniform1ui64vARB, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_ProgramUniform2i64ARB)(GLuint, GLint, GLint64, GLint64);
#define CALL_ProgramUniform2i64ARB(disp, parameters) (* GET_ProgramUniform2i64ARB(disp)) parameters
#define GET_ProgramUniform2i64ARB(disp) ((_glptr_ProgramUniform2i64ARB)(GET_by_offset((disp), _gloffset_ProgramUniform2i64ARB)))
#define SET_ProgramUniform2i64ARB(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLint, GLint64, GLint64) = func; \
   SET_by_offset(disp, _gloffset_ProgramUniform2i64ARB, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_ProgramUniform2i64vARB)(GLuint, GLint, GLsizei, const GLint64 *);
#define CALL_ProgramUniform2i64vARB(disp, parameters) (* GET_ProgramUniform2i64vARB(disp)) parameters
#define GET_ProgramUniform2i64vARB(disp) ((_glptr_ProgramUniform2i64vARB)(GET_by_offset((disp), _gloffset_ProgramUniform2i64vARB)))
#define SET_ProgramUniform2i64vARB(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLint, GLsizei, const GLint64 *) = func; \
   SET_by_offset(disp, _gloffset_ProgramUniform2i64vARB, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_ProgramUniform2ui64ARB)(GLuint, GLint, GLuint64, GLuint64);
#define CALL_ProgramUniform2ui64ARB(disp, parameters) (* GET_ProgramUniform2ui64ARB(disp)) parameters
#define GET_ProgramUniform2ui64ARB(disp) ((_glptr_ProgramUniform2ui64ARB)(GET_by_offset((disp), _gloffset_ProgramUniform2ui64ARB)))
#define SET_ProgramUniform2ui64ARB(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLint, GLuint64, GLuint64) = func; \
   SET_by_offset(disp, _gloffset_ProgramUniform2ui64ARB, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_ProgramUniform2ui64vARB)(GLuint, GLint, GLsizei, const GLuint64 *);
#define CALL_ProgramUniform2ui64vARB(disp, parameters) (* GET_ProgramUniform2ui64vARB(disp)) parameters
#define GET_ProgramUniform2ui64vARB(disp) ((_glptr_ProgramUniform2ui64vARB)(GET_by_offset((disp), _gloffset_ProgramUniform2ui64vARB)))
#define SET_ProgramUniform2ui64vARB(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLint, GLsizei, const GLuint64 *) = func; \
   SET_by_offset(disp, _gloffset_ProgramUniform2ui64vARB, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_ProgramUniform3i64ARB)(GLuint, GLint, GLint64, GLint64, GLint64);
#define CALL_ProgramUniform3i64ARB(disp, parameters) (* GET_ProgramUniform3i64ARB(disp)) parameters
#define GET_ProgramUniform3i64ARB(disp) ((_glptr_ProgramUniform3i64ARB)(GET_by_offset((disp), _gloffset_ProgramUniform3i64ARB)))
#define SET_ProgramUniform3i64ARB(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLint, GLint64, GLint64, GLint64) = func; \
   SET_by_offset(disp, _gloffset_ProgramUniform3i64ARB, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_ProgramUniform3i64vARB)(GLuint, GLint, GLsizei, const GLint64 *);
#define CALL_ProgramUniform3i64vARB(disp, parameters) (* GET_ProgramUniform3i64vARB(disp)) parameters
#define GET_ProgramUniform3i64vARB(disp) ((_glptr_ProgramUniform3i64vARB)(GET_by_offset((disp), _gloffset_ProgramUniform3i64vARB)))
#define SET_ProgramUniform3i64vARB(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLint, GLsizei, const GLint64 *) = func; \
   SET_by_offset(disp, _gloffset_ProgramUniform3i64vARB, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_ProgramUniform3ui64ARB)(GLuint, GLint, GLuint64, GLuint64, GLuint64);
#define CALL_ProgramUniform3ui64ARB(disp, parameters) (* GET_ProgramUniform3ui64ARB(disp)) parameters
#define GET_ProgramUniform3ui64ARB(disp) ((_glptr_ProgramUniform3ui64ARB)(GET_by_offset((disp), _gloffset_ProgramUniform3ui64ARB)))
#define SET_ProgramUniform3ui64ARB(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLint, GLuint64, GLuint64, GLuint64) = func; \
   SET_by_offset(disp, _gloffset_ProgramUniform3ui64ARB, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_ProgramUniform3ui64vARB)(GLuint, GLint, GLsizei, const GLuint64 *);
#define CALL_ProgramUniform3ui64vARB(disp, parameters) (* GET_ProgramUniform3ui64vARB(disp)) parameters
#define GET_ProgramUniform3ui64vARB(disp) ((_glptr_ProgramUniform3ui64vARB)(GET_by_offset((disp), _gloffset_ProgramUniform3ui64vARB)))
#define SET_ProgramUniform3ui64vARB(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLint, GLsizei, const GLuint64 *) = func; \
   SET_by_offset(disp, _gloffset_ProgramUniform3ui64vARB, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_ProgramUniform4i64ARB)(GLuint, GLint, GLint64, GLint64, GLint64, GLint64);
#define CALL_ProgramUniform4i64ARB(disp, parameters) (* GET_ProgramUniform4i64ARB(disp)) parameters
#define GET_ProgramUniform4i64ARB(disp) ((_glptr_ProgramUniform4i64ARB)(GET_by_offset((disp), _gloffset_ProgramUniform4i64ARB)))
#define SET_ProgramUniform4i64ARB(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLint, GLint64, GLint64, GLint64, GLint64) = func; \
   SET_by_offset(disp, _gloffset_ProgramUniform4i64ARB, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_ProgramUniform4i64vARB)(GLuint, GLint, GLsizei, const GLint64 *);
#define CALL_ProgramUniform4i64vARB(disp, parameters) (* GET_ProgramUniform4i64vARB(disp)) parameters
#define GET_ProgramUniform4i64vARB(disp) ((_glptr_ProgramUniform4i64vARB)(GET_by_offset((disp), _gloffset_ProgramUniform4i64vARB)))
#define SET_ProgramUniform4i64vARB(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLint, GLsizei, const GLint64 *) = func; \
   SET_by_offset(disp, _gloffset_ProgramUniform4i64vARB, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_ProgramUniform4ui64ARB)(GLuint, GLint, GLuint64, GLuint64, GLuint64, GLuint64);
#define CALL_ProgramUniform4ui64ARB(disp, parameters) (* GET_ProgramUniform4ui64ARB(disp)) parameters
#define GET_ProgramUniform4ui64ARB(disp) ((_glptr_ProgramUniform4ui64ARB)(GET_by_offset((disp), _gloffset_ProgramUniform4ui64ARB)))
#define SET_ProgramUniform4ui64ARB(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLint, GLuint64, GLuint64, GLuint64, GLuint64) = func; \
   SET_by_offset(disp, _gloffset_ProgramUniform4ui64ARB, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_ProgramUniform4ui64vARB)(GLuint, GLint, GLsizei, const GLuint64 *);
#define CALL_ProgramUniform4ui64vARB(disp, parameters) (* GET_ProgramUniform4ui64vARB(disp)) parameters
#define GET_ProgramUniform4ui64vARB(disp) ((_glptr_ProgramUniform4ui64vARB)(GET_by_offset((disp), _gloffset_ProgramUniform4ui64vARB)))
#define SET_ProgramUniform4ui64vARB(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLint, GLsizei, const GLuint64 *) = func; \
   SET_by_offset(disp, _gloffset_ProgramUniform4ui64vARB, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_Uniform1i64ARB)(GLint, GLint64);
#define CALL_Uniform1i64ARB(disp, parameters) (* GET_Uniform1i64ARB(disp)) parameters
#define GET_Uniform1i64ARB(disp) ((_glptr_Uniform1i64ARB)(GET_by_offset((disp), _gloffset_Uniform1i64ARB)))
#define SET_Uniform1i64ARB(disp, func) do { \
   void (GLAPIENTRYP fn)(GLint, GLint64) = func; \
   SET_by_offset(disp, _gloffset_Uniform1i64ARB, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_Uniform1i64vARB)(GLint, GLsizei, const GLint64 *);
#define CALL_Uniform1i64vARB(disp, parameters) (* GET_Uniform1i64vARB(disp)) parameters
#define GET_Uniform1i64vARB(disp) ((_glptr_Uniform1i64vARB)(GET_by_offset((disp), _gloffset_Uniform1i64vARB)))
#define SET_Uniform1i64vARB(disp, func) do { \
   void (GLAPIENTRYP fn)(GLint, GLsizei, const GLint64 *) = func; \
   SET_by_offset(disp, _gloffset_Uniform1i64vARB, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_Uniform1ui64ARB)(GLint, GLuint64);
#define CALL_Uniform1ui64ARB(disp, parameters) (* GET_Uniform1ui64ARB(disp)) parameters
#define GET_Uniform1ui64ARB(disp) ((_glptr_Uniform1ui64ARB)(GET_by_offset((disp), _gloffset_Uniform1ui64ARB)))
#define SET_Uniform1ui64ARB(disp, func) do { \
   void (GLAPIENTRYP fn)(GLint, GLuint64) = func; \
   SET_by_offset(disp, _gloffset_Uniform1ui64ARB, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_Uniform1ui64vARB)(GLint, GLsizei, const GLuint64 *);
#define CALL_Uniform1ui64vARB(disp, parameters) (* GET_Uniform1ui64vARB(disp)) parameters
#define GET_Uniform1ui64vARB(disp) ((_glptr_Uniform1ui64vARB)(GET_by_offset((disp), _gloffset_Uniform1ui64vARB)))
#define SET_Uniform1ui64vARB(disp, func) do { \
   void (GLAPIENTRYP fn)(GLint, GLsizei, const GLuint64 *) = func; \
   SET_by_offset(disp, _gloffset_Uniform1ui64vARB, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_Uniform2i64ARB)(GLint, GLint64, GLint64);
#define CALL_Uniform2i64ARB(disp, parameters) (* GET_Uniform2i64ARB(disp)) parameters
#define GET_Uniform2i64ARB(disp) ((_glptr_Uniform2i64ARB)(GET_by_offset((disp), _gloffset_Uniform2i64ARB)))
#define SET_Uniform2i64ARB(disp, func) do { \
   void (GLAPIENTRYP fn)(GLint, GLint64, GLint64) = func; \
   SET_by_offset(disp, _gloffset_Uniform2i64ARB, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_Uniform2i64vARB)(GLint, GLsizei, const GLint64 *);
#define CALL_Uniform2i64vARB(disp, parameters) (* GET_Uniform2i64vARB(disp)) parameters
#define GET_Uniform2i64vARB(disp) ((_glptr_Uniform2i64vARB)(GET_by_offset((disp), _gloffset_Uniform2i64vARB)))
#define SET_Uniform2i64vARB(disp, func) do { \
   void (GLAPIENTRYP fn)(GLint, GLsizei, const GLint64 *) = func; \
   SET_by_offset(disp, _gloffset_Uniform2i64vARB, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_Uniform2ui64ARB)(GLint, GLuint64, GLuint64);
#define CALL_Uniform2ui64ARB(disp, parameters) (* GET_Uniform2ui64ARB(disp)) parameters
#define GET_Uniform2ui64ARB(disp) ((_glptr_Uniform2ui64ARB)(GET_by_offset((disp), _gloffset_Uniform2ui64ARB)))
#define SET_Uniform2ui64ARB(disp, func) do { \
   void (GLAPIENTRYP fn)(GLint, GLuint64, GLuint64) = func; \
   SET_by_offset(disp, _gloffset_Uniform2ui64ARB, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_Uniform2ui64vARB)(GLint, GLsizei, const GLuint64 *);
#define CALL_Uniform2ui64vARB(disp, parameters) (* GET_Uniform2ui64vARB(disp)) parameters
#define GET_Uniform2ui64vARB(disp) ((_glptr_Uniform2ui64vARB)(GET_by_offset((disp), _gloffset_Uniform2ui64vARB)))
#define SET_Uniform2ui64vARB(disp, func) do { \
   void (GLAPIENTRYP fn)(GLint, GLsizei, const GLuint64 *) = func; \
   SET_by_offset(disp, _gloffset_Uniform2ui64vARB, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_Uniform3i64ARB)(GLint, GLint64, GLint64, GLint64);
#define CALL_Uniform3i64ARB(disp, parameters) (* GET_Uniform3i64ARB(disp)) parameters
#define GET_Uniform3i64ARB(disp) ((_glptr_Uniform3i64ARB)(GET_by_offset((disp), _gloffset_Uniform3i64ARB)))
#define SET_Uniform3i64ARB(disp, func) do { \
   void (GLAPIENTRYP fn)(GLint, GLint64, GLint64, GLint64) = func; \
   SET_by_offset(disp, _gloffset_Uniform3i64ARB, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_Uniform3i64vARB)(GLint, GLsizei, const GLint64 *);
#define CALL_Uniform3i64vARB(disp, parameters) (* GET_Uniform3i64vARB(disp)) parameters
#define GET_Uniform3i64vARB(disp) ((_glptr_Uniform3i64vARB)(GET_by_offset((disp), _gloffset_Uniform3i64vARB)))
#define SET_Uniform3i64vARB(disp, func) do { \
   void (GLAPIENTRYP fn)(GLint, GLsizei, const GLint64 *) = func; \
   SET_by_offset(disp, _gloffset_Uniform3i64vARB, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_Uniform3ui64ARB)(GLint, GLuint64, GLuint64, GLuint64);
#define CALL_Uniform3ui64ARB(disp, parameters) (* GET_Uniform3ui64ARB(disp)) parameters
#define GET_Uniform3ui64ARB(disp) ((_glptr_Uniform3ui64ARB)(GET_by_offset((disp), _gloffset_Uniform3ui64ARB)))
#define SET_Uniform3ui64ARB(disp, func) do { \
   void (GLAPIENTRYP fn)(GLint, GLuint64, GLuint64, GLuint64) = func; \
   SET_by_offset(disp, _gloffset_Uniform3ui64ARB, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_Uniform3ui64vARB)(GLint, GLsizei, const GLuint64 *);
#define CALL_Uniform3ui64vARB(disp, parameters) (* GET_Uniform3ui64vARB(disp)) parameters
#define GET_Uniform3ui64vARB(disp) ((_glptr_Uniform3ui64vARB)(GET_by_offset((disp), _gloffset_Uniform3ui64vARB)))
#define SET_Uniform3ui64vARB(disp, func) do { \
   void (GLAPIENTRYP fn)(GLint, GLsizei, const GLuint64 *) = func; \
   SET_by_offset(disp, _gloffset_Uniform3ui64vARB, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_Uniform4i64ARB)(GLint, GLint64, GLint64, GLint64, GLint64);
#define CALL_Uniform4i64ARB(disp, parameters) (* GET_Uniform4i64ARB(disp)) parameters
#define GET_Uniform4i64ARB(disp) ((_glptr_Uniform4i64ARB)(GET_by_offset((disp), _gloffset_Uniform4i64ARB)))
#define SET_Uniform4i64ARB(disp, func) do { \
   void (GLAPIENTRYP fn)(GLint, GLint64, GLint64, GLint64, GLint64) = func; \
   SET_by_offset(disp, _gloffset_Uniform4i64ARB, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_Uniform4i64vARB)(GLint, GLsizei, const GLint64 *);
#define CALL_Uniform4i64vARB(disp, parameters) (* GET_Uniform4i64vARB(disp)) parameters
#define GET_Uniform4i64vARB(disp) ((_glptr_Uniform4i64vARB)(GET_by_offset((disp), _gloffset_Uniform4i64vARB)))
#define SET_Uniform4i64vARB(disp, func) do { \
   void (GLAPIENTRYP fn)(GLint, GLsizei, const GLint64 *) = func; \
   SET_by_offset(disp, _gloffset_Uniform4i64vARB, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_Uniform4ui64ARB)(GLint, GLuint64, GLuint64, GLuint64, GLuint64);
#define CALL_Uniform4ui64ARB(disp, parameters) (* GET_Uniform4ui64ARB(disp)) parameters
#define GET_Uniform4ui64ARB(disp) ((_glptr_Uniform4ui64ARB)(GET_by_offset((disp), _gloffset_Uniform4ui64ARB)))
#define SET_Uniform4ui64ARB(disp, func) do { \
   void (GLAPIENTRYP fn)(GLint, GLuint64, GLuint64, GLuint64, GLuint64) = func; \
   SET_by_offset(disp, _gloffset_Uniform4ui64ARB, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_Uniform4ui64vARB)(GLint, GLsizei, const GLuint64 *);
#define CALL_Uniform4ui64vARB(disp, parameters) (* GET_Uniform4ui64vARB(disp)) parameters
#define GET_Uniform4ui64vARB(disp) ((_glptr_Uniform4ui64vARB)(GET_by_offset((disp), _gloffset_Uniform4ui64vARB)))
#define SET_Uniform4ui64vARB(disp, func) do { \
   void (GLAPIENTRYP fn)(GLint, GLsizei, const GLuint64 *) = func; \
   SET_by_offset(disp, _gloffset_Uniform4ui64vARB, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_EvaluateDepthValuesARB)(void);
#define CALL_EvaluateDepthValuesARB(disp, parameters) (* GET_EvaluateDepthValuesARB(disp)) parameters
#define GET_EvaluateDepthValuesARB(disp) ((_glptr_EvaluateDepthValuesARB)(GET_by_offset((disp), _gloffset_EvaluateDepthValuesARB)))
#define SET_EvaluateDepthValuesARB(disp, func) do { \
   void (GLAPIENTRYP fn)(void) = func; \
   SET_by_offset(disp, _gloffset_EvaluateDepthValuesARB, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_FramebufferSampleLocationsfvARB)(GLenum, GLuint, GLsizei, const GLfloat *);
#define CALL_FramebufferSampleLocationsfvARB(disp, parameters) (* GET_FramebufferSampleLocationsfvARB(disp)) parameters
#define GET_FramebufferSampleLocationsfvARB(disp) ((_glptr_FramebufferSampleLocationsfvARB)(GET_by_offset((disp), _gloffset_FramebufferSampleLocationsfvARB)))
#define SET_FramebufferSampleLocationsfvARB(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLuint, GLsizei, const GLfloat *) = func; \
   SET_by_offset(disp, _gloffset_FramebufferSampleLocationsfvARB, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_NamedFramebufferSampleLocationsfvARB)(GLuint, GLuint, GLsizei, const GLfloat *);
#define CALL_NamedFramebufferSampleLocationsfvARB(disp, parameters) (* GET_NamedFramebufferSampleLocationsfvARB(disp)) parameters
#define GET_NamedFramebufferSampleLocationsfvARB(disp) ((_glptr_NamedFramebufferSampleLocationsfvARB)(GET_by_offset((disp), _gloffset_NamedFramebufferSampleLocationsfvARB)))
#define SET_NamedFramebufferSampleLocationsfvARB(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLuint, GLsizei, const GLfloat *) = func; \
   SET_by_offset(disp, _gloffset_NamedFramebufferSampleLocationsfvARB, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_SpecializeShaderARB)(GLuint, const GLchar *, GLuint, const GLuint *, const GLuint *);
#define CALL_SpecializeShaderARB(disp, parameters) (* GET_SpecializeShaderARB(disp)) parameters
#define GET_SpecializeShaderARB(disp) ((_glptr_SpecializeShaderARB)(GET_by_offset((disp), _gloffset_SpecializeShaderARB)))
#define SET_SpecializeShaderARB(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, const GLchar *, GLuint, const GLuint *, const GLuint *) = func; \
   SET_by_offset(disp, _gloffset_SpecializeShaderARB, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_InvalidateBufferData)(GLuint);
#define CALL_InvalidateBufferData(disp, parameters) (* GET_InvalidateBufferData(disp)) parameters
#define GET_InvalidateBufferData(disp) ((_glptr_InvalidateBufferData)(GET_by_offset((disp), _gloffset_InvalidateBufferData)))
#define SET_InvalidateBufferData(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint) = func; \
   SET_by_offset(disp, _gloffset_InvalidateBufferData, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_InvalidateBufferSubData)(GLuint, GLintptr, GLsizeiptr);
#define CALL_InvalidateBufferSubData(disp, parameters) (* GET_InvalidateBufferSubData(disp)) parameters
#define GET_InvalidateBufferSubData(disp) ((_glptr_InvalidateBufferSubData)(GET_by_offset((disp), _gloffset_InvalidateBufferSubData)))
#define SET_InvalidateBufferSubData(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLintptr, GLsizeiptr) = func; \
   SET_by_offset(disp, _gloffset_InvalidateBufferSubData, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_InvalidateFramebuffer)(GLenum, GLsizei, const GLenum *);
#define CALL_InvalidateFramebuffer(disp, parameters) (* GET_InvalidateFramebuffer(disp)) parameters
#define GET_InvalidateFramebuffer(disp) ((_glptr_InvalidateFramebuffer)(GET_by_offset((disp), _gloffset_InvalidateFramebuffer)))
#define SET_InvalidateFramebuffer(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLsizei, const GLenum *) = func; \
   SET_by_offset(disp, _gloffset_InvalidateFramebuffer, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_InvalidateSubFramebuffer)(GLenum, GLsizei, const GLenum *, GLint, GLint, GLsizei, GLsizei);
#define CALL_InvalidateSubFramebuffer(disp, parameters) (* GET_InvalidateSubFramebuffer(disp)) parameters
#define GET_InvalidateSubFramebuffer(disp) ((_glptr_InvalidateSubFramebuffer)(GET_by_offset((disp), _gloffset_InvalidateSubFramebuffer)))
#define SET_InvalidateSubFramebuffer(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLsizei, const GLenum *, GLint, GLint, GLsizei, GLsizei) = func; \
   SET_by_offset(disp, _gloffset_InvalidateSubFramebuffer, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_InvalidateTexImage)(GLuint, GLint);
#define CALL_InvalidateTexImage(disp, parameters) (* GET_InvalidateTexImage(disp)) parameters
#define GET_InvalidateTexImage(disp) ((_glptr_InvalidateTexImage)(GET_by_offset((disp), _gloffset_InvalidateTexImage)))
#define SET_InvalidateTexImage(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLint) = func; \
   SET_by_offset(disp, _gloffset_InvalidateTexImage, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_InvalidateTexSubImage)(GLuint, GLint, GLint, GLint, GLint, GLsizei, GLsizei, GLsizei);
#define CALL_InvalidateTexSubImage(disp, parameters) (* GET_InvalidateTexSubImage(disp)) parameters
#define GET_InvalidateTexSubImage(disp) ((_glptr_InvalidateTexSubImage)(GET_by_offset((disp), _gloffset_InvalidateTexSubImage)))
#define SET_InvalidateTexSubImage(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLint, GLint, GLint, GLint, GLsizei, GLsizei, GLsizei) = func; \
   SET_by_offset(disp, _gloffset_InvalidateTexSubImage, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_DrawTexfOES)(GLfloat, GLfloat, GLfloat, GLfloat, GLfloat);
#define CALL_DrawTexfOES(disp, parameters) (* GET_DrawTexfOES(disp)) parameters
#define GET_DrawTexfOES(disp) ((_glptr_DrawTexfOES)(GET_by_offset((disp), _gloffset_DrawTexfOES)))
#define SET_DrawTexfOES(disp, func) do { \
   void (GLAPIENTRYP fn)(GLfloat, GLfloat, GLfloat, GLfloat, GLfloat) = func; \
   SET_by_offset(disp, _gloffset_DrawTexfOES, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_DrawTexfvOES)(const GLfloat *);
#define CALL_DrawTexfvOES(disp, parameters) (* GET_DrawTexfvOES(disp)) parameters
#define GET_DrawTexfvOES(disp) ((_glptr_DrawTexfvOES)(GET_by_offset((disp), _gloffset_DrawTexfvOES)))
#define SET_DrawTexfvOES(disp, func) do { \
   void (GLAPIENTRYP fn)(const GLfloat *) = func; \
   SET_by_offset(disp, _gloffset_DrawTexfvOES, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_DrawTexiOES)(GLint, GLint, GLint, GLint, GLint);
#define CALL_DrawTexiOES(disp, parameters) (* GET_DrawTexiOES(disp)) parameters
#define GET_DrawTexiOES(disp) ((_glptr_DrawTexiOES)(GET_by_offset((disp), _gloffset_DrawTexiOES)))
#define SET_DrawTexiOES(disp, func) do { \
   void (GLAPIENTRYP fn)(GLint, GLint, GLint, GLint, GLint) = func; \
   SET_by_offset(disp, _gloffset_DrawTexiOES, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_DrawTexivOES)(const GLint *);
#define CALL_DrawTexivOES(disp, parameters) (* GET_DrawTexivOES(disp)) parameters
#define GET_DrawTexivOES(disp) ((_glptr_DrawTexivOES)(GET_by_offset((disp), _gloffset_DrawTexivOES)))
#define SET_DrawTexivOES(disp, func) do { \
   void (GLAPIENTRYP fn)(const GLint *) = func; \
   SET_by_offset(disp, _gloffset_DrawTexivOES, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_DrawTexsOES)(GLshort, GLshort, GLshort, GLshort, GLshort);
#define CALL_DrawTexsOES(disp, parameters) (* GET_DrawTexsOES(disp)) parameters
#define GET_DrawTexsOES(disp) ((_glptr_DrawTexsOES)(GET_by_offset((disp), _gloffset_DrawTexsOES)))
#define SET_DrawTexsOES(disp, func) do { \
   void (GLAPIENTRYP fn)(GLshort, GLshort, GLshort, GLshort, GLshort) = func; \
   SET_by_offset(disp, _gloffset_DrawTexsOES, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_DrawTexsvOES)(const GLshort *);
#define CALL_DrawTexsvOES(disp, parameters) (* GET_DrawTexsvOES(disp)) parameters
#define GET_DrawTexsvOES(disp) ((_glptr_DrawTexsvOES)(GET_by_offset((disp), _gloffset_DrawTexsvOES)))
#define SET_DrawTexsvOES(disp, func) do { \
   void (GLAPIENTRYP fn)(const GLshort *) = func; \
   SET_by_offset(disp, _gloffset_DrawTexsvOES, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_DrawTexxOES)(GLfixed, GLfixed, GLfixed, GLfixed, GLfixed);
#define CALL_DrawTexxOES(disp, parameters) (* GET_DrawTexxOES(disp)) parameters
#define GET_DrawTexxOES(disp) ((_glptr_DrawTexxOES)(GET_by_offset((disp), _gloffset_DrawTexxOES)))
#define SET_DrawTexxOES(disp, func) do { \
   void (GLAPIENTRYP fn)(GLfixed, GLfixed, GLfixed, GLfixed, GLfixed) = func; \
   SET_by_offset(disp, _gloffset_DrawTexxOES, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_DrawTexxvOES)(const GLfixed *);
#define CALL_DrawTexxvOES(disp, parameters) (* GET_DrawTexxvOES(disp)) parameters
#define GET_DrawTexxvOES(disp) ((_glptr_DrawTexxvOES)(GET_by_offset((disp), _gloffset_DrawTexxvOES)))
#define SET_DrawTexxvOES(disp, func) do { \
   void (GLAPIENTRYP fn)(const GLfixed *) = func; \
   SET_by_offset(disp, _gloffset_DrawTexxvOES, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_PointSizePointerOES)(GLenum, GLsizei, const GLvoid *);
#define CALL_PointSizePointerOES(disp, parameters) (* GET_PointSizePointerOES(disp)) parameters
#define GET_PointSizePointerOES(disp) ((_glptr_PointSizePointerOES)(GET_by_offset((disp), _gloffset_PointSizePointerOES)))
#define SET_PointSizePointerOES(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLsizei, const GLvoid *) = func; \
   SET_by_offset(disp, _gloffset_PointSizePointerOES, fn); \
} while (0)

typedef GLbitfield (GLAPIENTRYP _glptr_QueryMatrixxOES)(GLfixed *, GLint *);
#define CALL_QueryMatrixxOES(disp, parameters) (* GET_QueryMatrixxOES(disp)) parameters
#define GET_QueryMatrixxOES(disp) ((_glptr_QueryMatrixxOES)(GET_by_offset((disp), _gloffset_QueryMatrixxOES)))
#define SET_QueryMatrixxOES(disp, func) do { \
   GLbitfield (GLAPIENTRYP fn)(GLfixed *, GLint *) = func; \
   SET_by_offset(disp, _gloffset_QueryMatrixxOES, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_SampleMaskSGIS)(GLclampf, GLboolean);
#define CALL_SampleMaskSGIS(disp, parameters) (* GET_SampleMaskSGIS(disp)) parameters
#define GET_SampleMaskSGIS(disp) ((_glptr_SampleMaskSGIS)(GET_by_offset((disp), _gloffset_SampleMaskSGIS)))
#define SET_SampleMaskSGIS(disp, func) do { \
   void (GLAPIENTRYP fn)(GLclampf, GLboolean) = func; \
   SET_by_offset(disp, _gloffset_SampleMaskSGIS, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_SamplePatternSGIS)(GLenum);
#define CALL_SamplePatternSGIS(disp, parameters) (* GET_SamplePatternSGIS(disp)) parameters
#define GET_SamplePatternSGIS(disp) ((_glptr_SamplePatternSGIS)(GET_by_offset((disp), _gloffset_SamplePatternSGIS)))
#define SET_SamplePatternSGIS(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum) = func; \
   SET_by_offset(disp, _gloffset_SamplePatternSGIS, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_ColorPointerEXT)(GLint, GLenum, GLsizei, GLsizei, const GLvoid *);
#define CALL_ColorPointerEXT(disp, parameters) (* GET_ColorPointerEXT(disp)) parameters
#define GET_ColorPointerEXT(disp) ((_glptr_ColorPointerEXT)(GET_by_offset((disp), _gloffset_ColorPointerEXT)))
#define SET_ColorPointerEXT(disp, func) do { \
   void (GLAPIENTRYP fn)(GLint, GLenum, GLsizei, GLsizei, const GLvoid *) = func; \
   SET_by_offset(disp, _gloffset_ColorPointerEXT, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_EdgeFlagPointerEXT)(GLsizei, GLsizei, const GLboolean *);
#define CALL_EdgeFlagPointerEXT(disp, parameters) (* GET_EdgeFlagPointerEXT(disp)) parameters
#define GET_EdgeFlagPointerEXT(disp) ((_glptr_EdgeFlagPointerEXT)(GET_by_offset((disp), _gloffset_EdgeFlagPointerEXT)))
#define SET_EdgeFlagPointerEXT(disp, func) do { \
   void (GLAPIENTRYP fn)(GLsizei, GLsizei, const GLboolean *) = func; \
   SET_by_offset(disp, _gloffset_EdgeFlagPointerEXT, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_IndexPointerEXT)(GLenum, GLsizei, GLsizei, const GLvoid *);
#define CALL_IndexPointerEXT(disp, parameters) (* GET_IndexPointerEXT(disp)) parameters
#define GET_IndexPointerEXT(disp) ((_glptr_IndexPointerEXT)(GET_by_offset((disp), _gloffset_IndexPointerEXT)))
#define SET_IndexPointerEXT(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLsizei, GLsizei, const GLvoid *) = func; \
   SET_by_offset(disp, _gloffset_IndexPointerEXT, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_NormalPointerEXT)(GLenum, GLsizei, GLsizei, const GLvoid *);
#define CALL_NormalPointerEXT(disp, parameters) (* GET_NormalPointerEXT(disp)) parameters
#define GET_NormalPointerEXT(disp) ((_glptr_NormalPointerEXT)(GET_by_offset((disp), _gloffset_NormalPointerEXT)))
#define SET_NormalPointerEXT(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLsizei, GLsizei, const GLvoid *) = func; \
   SET_by_offset(disp, _gloffset_NormalPointerEXT, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_TexCoordPointerEXT)(GLint, GLenum, GLsizei, GLsizei, const GLvoid *);
#define CALL_TexCoordPointerEXT(disp, parameters) (* GET_TexCoordPointerEXT(disp)) parameters
#define GET_TexCoordPointerEXT(disp) ((_glptr_TexCoordPointerEXT)(GET_by_offset((disp), _gloffset_TexCoordPointerEXT)))
#define SET_TexCoordPointerEXT(disp, func) do { \
   void (GLAPIENTRYP fn)(GLint, GLenum, GLsizei, GLsizei, const GLvoid *) = func; \
   SET_by_offset(disp, _gloffset_TexCoordPointerEXT, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_VertexPointerEXT)(GLint, GLenum, GLsizei, GLsizei, const GLvoid *);
#define CALL_VertexPointerEXT(disp, parameters) (* GET_VertexPointerEXT(disp)) parameters
#define GET_VertexPointerEXT(disp) ((_glptr_VertexPointerEXT)(GET_by_offset((disp), _gloffset_VertexPointerEXT)))
#define SET_VertexPointerEXT(disp, func) do { \
   void (GLAPIENTRYP fn)(GLint, GLenum, GLsizei, GLsizei, const GLvoid *) = func; \
   SET_by_offset(disp, _gloffset_VertexPointerEXT, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_DiscardFramebufferEXT)(GLenum, GLsizei, const GLenum *);
#define CALL_DiscardFramebufferEXT(disp, parameters) (* GET_DiscardFramebufferEXT(disp)) parameters
#define GET_DiscardFramebufferEXT(disp) ((_glptr_DiscardFramebufferEXT)(GET_by_offset((disp), _gloffset_DiscardFramebufferEXT)))
#define SET_DiscardFramebufferEXT(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLsizei, const GLenum *) = func; \
   SET_by_offset(disp, _gloffset_DiscardFramebufferEXT, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_ActiveShaderProgram)(GLuint, GLuint);
#define CALL_ActiveShaderProgram(disp, parameters) (* GET_ActiveShaderProgram(disp)) parameters
#define GET_ActiveShaderProgram(disp) ((_glptr_ActiveShaderProgram)(GET_by_offset((disp), _gloffset_ActiveShaderProgram)))
#define SET_ActiveShaderProgram(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLuint) = func; \
   SET_by_offset(disp, _gloffset_ActiveShaderProgram, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_BindProgramPipeline)(GLuint);
#define CALL_BindProgramPipeline(disp, parameters) (* GET_BindProgramPipeline(disp)) parameters
#define GET_BindProgramPipeline(disp) ((_glptr_BindProgramPipeline)(GET_by_offset((disp), _gloffset_BindProgramPipeline)))
#define SET_BindProgramPipeline(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint) = func; \
   SET_by_offset(disp, _gloffset_BindProgramPipeline, fn); \
} while (0)

typedef GLuint (GLAPIENTRYP _glptr_CreateShaderProgramv)(GLenum, GLsizei, const GLchar * const *);
#define CALL_CreateShaderProgramv(disp, parameters) (* GET_CreateShaderProgramv(disp)) parameters
#define GET_CreateShaderProgramv(disp) ((_glptr_CreateShaderProgramv)(GET_by_offset((disp), _gloffset_CreateShaderProgramv)))
#define SET_CreateShaderProgramv(disp, func) do { \
   GLuint (GLAPIENTRYP fn)(GLenum, GLsizei, const GLchar * const *) = func; \
   SET_by_offset(disp, _gloffset_CreateShaderProgramv, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_DeleteProgramPipelines)(GLsizei, const GLuint *);
#define CALL_DeleteProgramPipelines(disp, parameters) (* GET_DeleteProgramPipelines(disp)) parameters
#define GET_DeleteProgramPipelines(disp) ((_glptr_DeleteProgramPipelines)(GET_by_offset((disp), _gloffset_DeleteProgramPipelines)))
#define SET_DeleteProgramPipelines(disp, func) do { \
   void (GLAPIENTRYP fn)(GLsizei, const GLuint *) = func; \
   SET_by_offset(disp, _gloffset_DeleteProgramPipelines, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_GenProgramPipelines)(GLsizei, GLuint *);
#define CALL_GenProgramPipelines(disp, parameters) (* GET_GenProgramPipelines(disp)) parameters
#define GET_GenProgramPipelines(disp) ((_glptr_GenProgramPipelines)(GET_by_offset((disp), _gloffset_GenProgramPipelines)))
#define SET_GenProgramPipelines(disp, func) do { \
   void (GLAPIENTRYP fn)(GLsizei, GLuint *) = func; \
   SET_by_offset(disp, _gloffset_GenProgramPipelines, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_GetProgramPipelineInfoLog)(GLuint, GLsizei, GLsizei *, GLchar *);
#define CALL_GetProgramPipelineInfoLog(disp, parameters) (* GET_GetProgramPipelineInfoLog(disp)) parameters
#define GET_GetProgramPipelineInfoLog(disp) ((_glptr_GetProgramPipelineInfoLog)(GET_by_offset((disp), _gloffset_GetProgramPipelineInfoLog)))
#define SET_GetProgramPipelineInfoLog(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLsizei, GLsizei *, GLchar *) = func; \
   SET_by_offset(disp, _gloffset_GetProgramPipelineInfoLog, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_GetProgramPipelineiv)(GLuint, GLenum, GLint *);
#define CALL_GetProgramPipelineiv(disp, parameters) (* GET_GetProgramPipelineiv(disp)) parameters
#define GET_GetProgramPipelineiv(disp) ((_glptr_GetProgramPipelineiv)(GET_by_offset((disp), _gloffset_GetProgramPipelineiv)))
#define SET_GetProgramPipelineiv(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLenum, GLint *) = func; \
   SET_by_offset(disp, _gloffset_GetProgramPipelineiv, fn); \
} while (0)

typedef GLboolean (GLAPIENTRYP _glptr_IsProgramPipeline)(GLuint);
#define CALL_IsProgramPipeline(disp, parameters) (* GET_IsProgramPipeline(disp)) parameters
#define GET_IsProgramPipeline(disp) ((_glptr_IsProgramPipeline)(GET_by_offset((disp), _gloffset_IsProgramPipeline)))
#define SET_IsProgramPipeline(disp, func) do { \
   GLboolean (GLAPIENTRYP fn)(GLuint) = func; \
   SET_by_offset(disp, _gloffset_IsProgramPipeline, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_LockArraysEXT)(GLint, GLsizei);
#define CALL_LockArraysEXT(disp, parameters) (* GET_LockArraysEXT(disp)) parameters
#define GET_LockArraysEXT(disp) ((_glptr_LockArraysEXT)(GET_by_offset((disp), _gloffset_LockArraysEXT)))
#define SET_LockArraysEXT(disp, func) do { \
   void (GLAPIENTRYP fn)(GLint, GLsizei) = func; \
   SET_by_offset(disp, _gloffset_LockArraysEXT, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_ProgramUniform1d)(GLuint, GLint, GLdouble);
#define CALL_ProgramUniform1d(disp, parameters) (* GET_ProgramUniform1d(disp)) parameters
#define GET_ProgramUniform1d(disp) ((_glptr_ProgramUniform1d)(GET_by_offset((disp), _gloffset_ProgramUniform1d)))
#define SET_ProgramUniform1d(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLint, GLdouble) = func; \
   SET_by_offset(disp, _gloffset_ProgramUniform1d, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_ProgramUniform1dv)(GLuint, GLint, GLsizei, const GLdouble *);
#define CALL_ProgramUniform1dv(disp, parameters) (* GET_ProgramUniform1dv(disp)) parameters
#define GET_ProgramUniform1dv(disp) ((_glptr_ProgramUniform1dv)(GET_by_offset((disp), _gloffset_ProgramUniform1dv)))
#define SET_ProgramUniform1dv(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLint, GLsizei, const GLdouble *) = func; \
   SET_by_offset(disp, _gloffset_ProgramUniform1dv, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_ProgramUniform1f)(GLuint, GLint, GLfloat);
#define CALL_ProgramUniform1f(disp, parameters) (* GET_ProgramUniform1f(disp)) parameters
#define GET_ProgramUniform1f(disp) ((_glptr_ProgramUniform1f)(GET_by_offset((disp), _gloffset_ProgramUniform1f)))
#define SET_ProgramUniform1f(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLint, GLfloat) = func; \
   SET_by_offset(disp, _gloffset_ProgramUniform1f, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_ProgramUniform1fv)(GLuint, GLint, GLsizei, const GLfloat *);
#define CALL_ProgramUniform1fv(disp, parameters) (* GET_ProgramUniform1fv(disp)) parameters
#define GET_ProgramUniform1fv(disp) ((_glptr_ProgramUniform1fv)(GET_by_offset((disp), _gloffset_ProgramUniform1fv)))
#define SET_ProgramUniform1fv(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLint, GLsizei, const GLfloat *) = func; \
   SET_by_offset(disp, _gloffset_ProgramUniform1fv, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_ProgramUniform1i)(GLuint, GLint, GLint);
#define CALL_ProgramUniform1i(disp, parameters) (* GET_ProgramUniform1i(disp)) parameters
#define GET_ProgramUniform1i(disp) ((_glptr_ProgramUniform1i)(GET_by_offset((disp), _gloffset_ProgramUniform1i)))
#define SET_ProgramUniform1i(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLint, GLint) = func; \
   SET_by_offset(disp, _gloffset_ProgramUniform1i, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_ProgramUniform1iv)(GLuint, GLint, GLsizei, const GLint *);
#define CALL_ProgramUniform1iv(disp, parameters) (* GET_ProgramUniform1iv(disp)) parameters
#define GET_ProgramUniform1iv(disp) ((_glptr_ProgramUniform1iv)(GET_by_offset((disp), _gloffset_ProgramUniform1iv)))
#define SET_ProgramUniform1iv(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLint, GLsizei, const GLint *) = func; \
   SET_by_offset(disp, _gloffset_ProgramUniform1iv, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_ProgramUniform1ui)(GLuint, GLint, GLuint);
#define CALL_ProgramUniform1ui(disp, parameters) (* GET_ProgramUniform1ui(disp)) parameters
#define GET_ProgramUniform1ui(disp) ((_glptr_ProgramUniform1ui)(GET_by_offset((disp), _gloffset_ProgramUniform1ui)))
#define SET_ProgramUniform1ui(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLint, GLuint) = func; \
   SET_by_offset(disp, _gloffset_ProgramUniform1ui, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_ProgramUniform1uiv)(GLuint, GLint, GLsizei, const GLuint *);
#define CALL_ProgramUniform1uiv(disp, parameters) (* GET_ProgramUniform1uiv(disp)) parameters
#define GET_ProgramUniform1uiv(disp) ((_glptr_ProgramUniform1uiv)(GET_by_offset((disp), _gloffset_ProgramUniform1uiv)))
#define SET_ProgramUniform1uiv(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLint, GLsizei, const GLuint *) = func; \
   SET_by_offset(disp, _gloffset_ProgramUniform1uiv, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_ProgramUniform2d)(GLuint, GLint, GLdouble, GLdouble);
#define CALL_ProgramUniform2d(disp, parameters) (* GET_ProgramUniform2d(disp)) parameters
#define GET_ProgramUniform2d(disp) ((_glptr_ProgramUniform2d)(GET_by_offset((disp), _gloffset_ProgramUniform2d)))
#define SET_ProgramUniform2d(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLint, GLdouble, GLdouble) = func; \
   SET_by_offset(disp, _gloffset_ProgramUniform2d, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_ProgramUniform2dv)(GLuint, GLint, GLsizei, const GLdouble *);
#define CALL_ProgramUniform2dv(disp, parameters) (* GET_ProgramUniform2dv(disp)) parameters
#define GET_ProgramUniform2dv(disp) ((_glptr_ProgramUniform2dv)(GET_by_offset((disp), _gloffset_ProgramUniform2dv)))
#define SET_ProgramUniform2dv(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLint, GLsizei, const GLdouble *) = func; \
   SET_by_offset(disp, _gloffset_ProgramUniform2dv, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_ProgramUniform2f)(GLuint, GLint, GLfloat, GLfloat);
#define CALL_ProgramUniform2f(disp, parameters) (* GET_ProgramUniform2f(disp)) parameters
#define GET_ProgramUniform2f(disp) ((_glptr_ProgramUniform2f)(GET_by_offset((disp), _gloffset_ProgramUniform2f)))
#define SET_ProgramUniform2f(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLint, GLfloat, GLfloat) = func; \
   SET_by_offset(disp, _gloffset_ProgramUniform2f, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_ProgramUniform2fv)(GLuint, GLint, GLsizei, const GLfloat *);
#define CALL_ProgramUniform2fv(disp, parameters) (* GET_ProgramUniform2fv(disp)) parameters
#define GET_ProgramUniform2fv(disp) ((_glptr_ProgramUniform2fv)(GET_by_offset((disp), _gloffset_ProgramUniform2fv)))
#define SET_ProgramUniform2fv(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLint, GLsizei, const GLfloat *) = func; \
   SET_by_offset(disp, _gloffset_ProgramUniform2fv, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_ProgramUniform2i)(GLuint, GLint, GLint, GLint);
#define CALL_ProgramUniform2i(disp, parameters) (* GET_ProgramUniform2i(disp)) parameters
#define GET_ProgramUniform2i(disp) ((_glptr_ProgramUniform2i)(GET_by_offset((disp), _gloffset_ProgramUniform2i)))
#define SET_ProgramUniform2i(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLint, GLint, GLint) = func; \
   SET_by_offset(disp, _gloffset_ProgramUniform2i, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_ProgramUniform2iv)(GLuint, GLint, GLsizei, const GLint *);
#define CALL_ProgramUniform2iv(disp, parameters) (* GET_ProgramUniform2iv(disp)) parameters
#define GET_ProgramUniform2iv(disp) ((_glptr_ProgramUniform2iv)(GET_by_offset((disp), _gloffset_ProgramUniform2iv)))
#define SET_ProgramUniform2iv(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLint, GLsizei, const GLint *) = func; \
   SET_by_offset(disp, _gloffset_ProgramUniform2iv, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_ProgramUniform2ui)(GLuint, GLint, GLuint, GLuint);
#define CALL_ProgramUniform2ui(disp, parameters) (* GET_ProgramUniform2ui(disp)) parameters
#define GET_ProgramUniform2ui(disp) ((_glptr_ProgramUniform2ui)(GET_by_offset((disp), _gloffset_ProgramUniform2ui)))
#define SET_ProgramUniform2ui(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLint, GLuint, GLuint) = func; \
   SET_by_offset(disp, _gloffset_ProgramUniform2ui, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_ProgramUniform2uiv)(GLuint, GLint, GLsizei, const GLuint *);
#define CALL_ProgramUniform2uiv(disp, parameters) (* GET_ProgramUniform2uiv(disp)) parameters
#define GET_ProgramUniform2uiv(disp) ((_glptr_ProgramUniform2uiv)(GET_by_offset((disp), _gloffset_ProgramUniform2uiv)))
#define SET_ProgramUniform2uiv(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLint, GLsizei, const GLuint *) = func; \
   SET_by_offset(disp, _gloffset_ProgramUniform2uiv, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_ProgramUniform3d)(GLuint, GLint, GLdouble, GLdouble, GLdouble);
#define CALL_ProgramUniform3d(disp, parameters) (* GET_ProgramUniform3d(disp)) parameters
#define GET_ProgramUniform3d(disp) ((_glptr_ProgramUniform3d)(GET_by_offset((disp), _gloffset_ProgramUniform3d)))
#define SET_ProgramUniform3d(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLint, GLdouble, GLdouble, GLdouble) = func; \
   SET_by_offset(disp, _gloffset_ProgramUniform3d, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_ProgramUniform3dv)(GLuint, GLint, GLsizei, const GLdouble *);
#define CALL_ProgramUniform3dv(disp, parameters) (* GET_ProgramUniform3dv(disp)) parameters
#define GET_ProgramUniform3dv(disp) ((_glptr_ProgramUniform3dv)(GET_by_offset((disp), _gloffset_ProgramUniform3dv)))
#define SET_ProgramUniform3dv(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLint, GLsizei, const GLdouble *) = func; \
   SET_by_offset(disp, _gloffset_ProgramUniform3dv, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_ProgramUniform3f)(GLuint, GLint, GLfloat, GLfloat, GLfloat);
#define CALL_ProgramUniform3f(disp, parameters) (* GET_ProgramUniform3f(disp)) parameters
#define GET_ProgramUniform3f(disp) ((_glptr_ProgramUniform3f)(GET_by_offset((disp), _gloffset_ProgramUniform3f)))
#define SET_ProgramUniform3f(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLint, GLfloat, GLfloat, GLfloat) = func; \
   SET_by_offset(disp, _gloffset_ProgramUniform3f, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_ProgramUniform3fv)(GLuint, GLint, GLsizei, const GLfloat *);
#define CALL_ProgramUniform3fv(disp, parameters) (* GET_ProgramUniform3fv(disp)) parameters
#define GET_ProgramUniform3fv(disp) ((_glptr_ProgramUniform3fv)(GET_by_offset((disp), _gloffset_ProgramUniform3fv)))
#define SET_ProgramUniform3fv(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLint, GLsizei, const GLfloat *) = func; \
   SET_by_offset(disp, _gloffset_ProgramUniform3fv, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_ProgramUniform3i)(GLuint, GLint, GLint, GLint, GLint);
#define CALL_ProgramUniform3i(disp, parameters) (* GET_ProgramUniform3i(disp)) parameters
#define GET_ProgramUniform3i(disp) ((_glptr_ProgramUniform3i)(GET_by_offset((disp), _gloffset_ProgramUniform3i)))
#define SET_ProgramUniform3i(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLint, GLint, GLint, GLint) = func; \
   SET_by_offset(disp, _gloffset_ProgramUniform3i, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_ProgramUniform3iv)(GLuint, GLint, GLsizei, const GLint *);
#define CALL_ProgramUniform3iv(disp, parameters) (* GET_ProgramUniform3iv(disp)) parameters
#define GET_ProgramUniform3iv(disp) ((_glptr_ProgramUniform3iv)(GET_by_offset((disp), _gloffset_ProgramUniform3iv)))
#define SET_ProgramUniform3iv(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLint, GLsizei, const GLint *) = func; \
   SET_by_offset(disp, _gloffset_ProgramUniform3iv, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_ProgramUniform3ui)(GLuint, GLint, GLuint, GLuint, GLuint);
#define CALL_ProgramUniform3ui(disp, parameters) (* GET_ProgramUniform3ui(disp)) parameters
#define GET_ProgramUniform3ui(disp) ((_glptr_ProgramUniform3ui)(GET_by_offset((disp), _gloffset_ProgramUniform3ui)))
#define SET_ProgramUniform3ui(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLint, GLuint, GLuint, GLuint) = func; \
   SET_by_offset(disp, _gloffset_ProgramUniform3ui, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_ProgramUniform3uiv)(GLuint, GLint, GLsizei, const GLuint *);
#define CALL_ProgramUniform3uiv(disp, parameters) (* GET_ProgramUniform3uiv(disp)) parameters
#define GET_ProgramUniform3uiv(disp) ((_glptr_ProgramUniform3uiv)(GET_by_offset((disp), _gloffset_ProgramUniform3uiv)))
#define SET_ProgramUniform3uiv(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLint, GLsizei, const GLuint *) = func; \
   SET_by_offset(disp, _gloffset_ProgramUniform3uiv, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_ProgramUniform4d)(GLuint, GLint, GLdouble, GLdouble, GLdouble, GLdouble);
#define CALL_ProgramUniform4d(disp, parameters) (* GET_ProgramUniform4d(disp)) parameters
#define GET_ProgramUniform4d(disp) ((_glptr_ProgramUniform4d)(GET_by_offset((disp), _gloffset_ProgramUniform4d)))
#define SET_ProgramUniform4d(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLint, GLdouble, GLdouble, GLdouble, GLdouble) = func; \
   SET_by_offset(disp, _gloffset_ProgramUniform4d, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_ProgramUniform4dv)(GLuint, GLint, GLsizei, const GLdouble *);
#define CALL_ProgramUniform4dv(disp, parameters) (* GET_ProgramUniform4dv(disp)) parameters
#define GET_ProgramUniform4dv(disp) ((_glptr_ProgramUniform4dv)(GET_by_offset((disp), _gloffset_ProgramUniform4dv)))
#define SET_ProgramUniform4dv(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLint, GLsizei, const GLdouble *) = func; \
   SET_by_offset(disp, _gloffset_ProgramUniform4dv, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_ProgramUniform4f)(GLuint, GLint, GLfloat, GLfloat, GLfloat, GLfloat);
#define CALL_ProgramUniform4f(disp, parameters) (* GET_ProgramUniform4f(disp)) parameters
#define GET_ProgramUniform4f(disp) ((_glptr_ProgramUniform4f)(GET_by_offset((disp), _gloffset_ProgramUniform4f)))
#define SET_ProgramUniform4f(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLint, GLfloat, GLfloat, GLfloat, GLfloat) = func; \
   SET_by_offset(disp, _gloffset_ProgramUniform4f, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_ProgramUniform4fv)(GLuint, GLint, GLsizei, const GLfloat *);
#define CALL_ProgramUniform4fv(disp, parameters) (* GET_ProgramUniform4fv(disp)) parameters
#define GET_ProgramUniform4fv(disp) ((_glptr_ProgramUniform4fv)(GET_by_offset((disp), _gloffset_ProgramUniform4fv)))
#define SET_ProgramUniform4fv(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLint, GLsizei, const GLfloat *) = func; \
   SET_by_offset(disp, _gloffset_ProgramUniform4fv, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_ProgramUniform4i)(GLuint, GLint, GLint, GLint, GLint, GLint);
#define CALL_ProgramUniform4i(disp, parameters) (* GET_ProgramUniform4i(disp)) parameters
#define GET_ProgramUniform4i(disp) ((_glptr_ProgramUniform4i)(GET_by_offset((disp), _gloffset_ProgramUniform4i)))
#define SET_ProgramUniform4i(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLint, GLint, GLint, GLint, GLint) = func; \
   SET_by_offset(disp, _gloffset_ProgramUniform4i, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_ProgramUniform4iv)(GLuint, GLint, GLsizei, const GLint *);
#define CALL_ProgramUniform4iv(disp, parameters) (* GET_ProgramUniform4iv(disp)) parameters
#define GET_ProgramUniform4iv(disp) ((_glptr_ProgramUniform4iv)(GET_by_offset((disp), _gloffset_ProgramUniform4iv)))
#define SET_ProgramUniform4iv(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLint, GLsizei, const GLint *) = func; \
   SET_by_offset(disp, _gloffset_ProgramUniform4iv, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_ProgramUniform4ui)(GLuint, GLint, GLuint, GLuint, GLuint, GLuint);
#define CALL_ProgramUniform4ui(disp, parameters) (* GET_ProgramUniform4ui(disp)) parameters
#define GET_ProgramUniform4ui(disp) ((_glptr_ProgramUniform4ui)(GET_by_offset((disp), _gloffset_ProgramUniform4ui)))
#define SET_ProgramUniform4ui(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLint, GLuint, GLuint, GLuint, GLuint) = func; \
   SET_by_offset(disp, _gloffset_ProgramUniform4ui, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_ProgramUniform4uiv)(GLuint, GLint, GLsizei, const GLuint *);
#define CALL_ProgramUniform4uiv(disp, parameters) (* GET_ProgramUniform4uiv(disp)) parameters
#define GET_ProgramUniform4uiv(disp) ((_glptr_ProgramUniform4uiv)(GET_by_offset((disp), _gloffset_ProgramUniform4uiv)))
#define SET_ProgramUniform4uiv(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLint, GLsizei, const GLuint *) = func; \
   SET_by_offset(disp, _gloffset_ProgramUniform4uiv, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_ProgramUniformMatrix2dv)(GLuint, GLint, GLsizei, GLboolean, const GLdouble *);
#define CALL_ProgramUniformMatrix2dv(disp, parameters) (* GET_ProgramUniformMatrix2dv(disp)) parameters
#define GET_ProgramUniformMatrix2dv(disp) ((_glptr_ProgramUniformMatrix2dv)(GET_by_offset((disp), _gloffset_ProgramUniformMatrix2dv)))
#define SET_ProgramUniformMatrix2dv(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLint, GLsizei, GLboolean, const GLdouble *) = func; \
   SET_by_offset(disp, _gloffset_ProgramUniformMatrix2dv, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_ProgramUniformMatrix2fv)(GLuint, GLint, GLsizei, GLboolean, const GLfloat *);
#define CALL_ProgramUniformMatrix2fv(disp, parameters) (* GET_ProgramUniformMatrix2fv(disp)) parameters
#define GET_ProgramUniformMatrix2fv(disp) ((_glptr_ProgramUniformMatrix2fv)(GET_by_offset((disp), _gloffset_ProgramUniformMatrix2fv)))
#define SET_ProgramUniformMatrix2fv(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLint, GLsizei, GLboolean, const GLfloat *) = func; \
   SET_by_offset(disp, _gloffset_ProgramUniformMatrix2fv, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_ProgramUniformMatrix2x3dv)(GLuint, GLint, GLsizei, GLboolean, const GLdouble *);
#define CALL_ProgramUniformMatrix2x3dv(disp, parameters) (* GET_ProgramUniformMatrix2x3dv(disp)) parameters
#define GET_ProgramUniformMatrix2x3dv(disp) ((_glptr_ProgramUniformMatrix2x3dv)(GET_by_offset((disp), _gloffset_ProgramUniformMatrix2x3dv)))
#define SET_ProgramUniformMatrix2x3dv(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLint, GLsizei, GLboolean, const GLdouble *) = func; \
   SET_by_offset(disp, _gloffset_ProgramUniformMatrix2x3dv, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_ProgramUniformMatrix2x3fv)(GLuint, GLint, GLsizei, GLboolean, const GLfloat *);
#define CALL_ProgramUniformMatrix2x3fv(disp, parameters) (* GET_ProgramUniformMatrix2x3fv(disp)) parameters
#define GET_ProgramUniformMatrix2x3fv(disp) ((_glptr_ProgramUniformMatrix2x3fv)(GET_by_offset((disp), _gloffset_ProgramUniformMatrix2x3fv)))
#define SET_ProgramUniformMatrix2x3fv(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLint, GLsizei, GLboolean, const GLfloat *) = func; \
   SET_by_offset(disp, _gloffset_ProgramUniformMatrix2x3fv, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_ProgramUniformMatrix2x4dv)(GLuint, GLint, GLsizei, GLboolean, const GLdouble *);
#define CALL_ProgramUniformMatrix2x4dv(disp, parameters) (* GET_ProgramUniformMatrix2x4dv(disp)) parameters
#define GET_ProgramUniformMatrix2x4dv(disp) ((_glptr_ProgramUniformMatrix2x4dv)(GET_by_offset((disp), _gloffset_ProgramUniformMatrix2x4dv)))
#define SET_ProgramUniformMatrix2x4dv(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLint, GLsizei, GLboolean, const GLdouble *) = func; \
   SET_by_offset(disp, _gloffset_ProgramUniformMatrix2x4dv, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_ProgramUniformMatrix2x4fv)(GLuint, GLint, GLsizei, GLboolean, const GLfloat *);
#define CALL_ProgramUniformMatrix2x4fv(disp, parameters) (* GET_ProgramUniformMatrix2x4fv(disp)) parameters
#define GET_ProgramUniformMatrix2x4fv(disp) ((_glptr_ProgramUniformMatrix2x4fv)(GET_by_offset((disp), _gloffset_ProgramUniformMatrix2x4fv)))
#define SET_ProgramUniformMatrix2x4fv(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLint, GLsizei, GLboolean, const GLfloat *) = func; \
   SET_by_offset(disp, _gloffset_ProgramUniformMatrix2x4fv, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_ProgramUniformMatrix3dv)(GLuint, GLint, GLsizei, GLboolean, const GLdouble *);
#define CALL_ProgramUniformMatrix3dv(disp, parameters) (* GET_ProgramUniformMatrix3dv(disp)) parameters
#define GET_ProgramUniformMatrix3dv(disp) ((_glptr_ProgramUniformMatrix3dv)(GET_by_offset((disp), _gloffset_ProgramUniformMatrix3dv)))
#define SET_ProgramUniformMatrix3dv(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLint, GLsizei, GLboolean, const GLdouble *) = func; \
   SET_by_offset(disp, _gloffset_ProgramUniformMatrix3dv, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_ProgramUniformMatrix3fv)(GLuint, GLint, GLsizei, GLboolean, const GLfloat *);
#define CALL_ProgramUniformMatrix3fv(disp, parameters) (* GET_ProgramUniformMatrix3fv(disp)) parameters
#define GET_ProgramUniformMatrix3fv(disp) ((_glptr_ProgramUniformMatrix3fv)(GET_by_offset((disp), _gloffset_ProgramUniformMatrix3fv)))
#define SET_ProgramUniformMatrix3fv(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLint, GLsizei, GLboolean, const GLfloat *) = func; \
   SET_by_offset(disp, _gloffset_ProgramUniformMatrix3fv, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_ProgramUniformMatrix3x2dv)(GLuint, GLint, GLsizei, GLboolean, const GLdouble *);
#define CALL_ProgramUniformMatrix3x2dv(disp, parameters) (* GET_ProgramUniformMatrix3x2dv(disp)) parameters
#define GET_ProgramUniformMatrix3x2dv(disp) ((_glptr_ProgramUniformMatrix3x2dv)(GET_by_offset((disp), _gloffset_ProgramUniformMatrix3x2dv)))
#define SET_ProgramUniformMatrix3x2dv(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLint, GLsizei, GLboolean, const GLdouble *) = func; \
   SET_by_offset(disp, _gloffset_ProgramUniformMatrix3x2dv, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_ProgramUniformMatrix3x2fv)(GLuint, GLint, GLsizei, GLboolean, const GLfloat *);
#define CALL_ProgramUniformMatrix3x2fv(disp, parameters) (* GET_ProgramUniformMatrix3x2fv(disp)) parameters
#define GET_ProgramUniformMatrix3x2fv(disp) ((_glptr_ProgramUniformMatrix3x2fv)(GET_by_offset((disp), _gloffset_ProgramUniformMatrix3x2fv)))
#define SET_ProgramUniformMatrix3x2fv(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLint, GLsizei, GLboolean, const GLfloat *) = func; \
   SET_by_offset(disp, _gloffset_ProgramUniformMatrix3x2fv, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_ProgramUniformMatrix3x4dv)(GLuint, GLint, GLsizei, GLboolean, const GLdouble *);
#define CALL_ProgramUniformMatrix3x4dv(disp, parameters) (* GET_ProgramUniformMatrix3x4dv(disp)) parameters
#define GET_ProgramUniformMatrix3x4dv(disp) ((_glptr_ProgramUniformMatrix3x4dv)(GET_by_offset((disp), _gloffset_ProgramUniformMatrix3x4dv)))
#define SET_ProgramUniformMatrix3x4dv(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLint, GLsizei, GLboolean, const GLdouble *) = func; \
   SET_by_offset(disp, _gloffset_ProgramUniformMatrix3x4dv, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_ProgramUniformMatrix3x4fv)(GLuint, GLint, GLsizei, GLboolean, const GLfloat *);
#define CALL_ProgramUniformMatrix3x4fv(disp, parameters) (* GET_ProgramUniformMatrix3x4fv(disp)) parameters
#define GET_ProgramUniformMatrix3x4fv(disp) ((_glptr_ProgramUniformMatrix3x4fv)(GET_by_offset((disp), _gloffset_ProgramUniformMatrix3x4fv)))
#define SET_ProgramUniformMatrix3x4fv(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLint, GLsizei, GLboolean, const GLfloat *) = func; \
   SET_by_offset(disp, _gloffset_ProgramUniformMatrix3x4fv, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_ProgramUniformMatrix4dv)(GLuint, GLint, GLsizei, GLboolean, const GLdouble *);
#define CALL_ProgramUniformMatrix4dv(disp, parameters) (* GET_ProgramUniformMatrix4dv(disp)) parameters
#define GET_ProgramUniformMatrix4dv(disp) ((_glptr_ProgramUniformMatrix4dv)(GET_by_offset((disp), _gloffset_ProgramUniformMatrix4dv)))
#define SET_ProgramUniformMatrix4dv(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLint, GLsizei, GLboolean, const GLdouble *) = func; \
   SET_by_offset(disp, _gloffset_ProgramUniformMatrix4dv, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_ProgramUniformMatrix4fv)(GLuint, GLint, GLsizei, GLboolean, const GLfloat *);
#define CALL_ProgramUniformMatrix4fv(disp, parameters) (* GET_ProgramUniformMatrix4fv(disp)) parameters
#define GET_ProgramUniformMatrix4fv(disp) ((_glptr_ProgramUniformMatrix4fv)(GET_by_offset((disp), _gloffset_ProgramUniformMatrix4fv)))
#define SET_ProgramUniformMatrix4fv(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLint, GLsizei, GLboolean, const GLfloat *) = func; \
   SET_by_offset(disp, _gloffset_ProgramUniformMatrix4fv, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_ProgramUniformMatrix4x2dv)(GLuint, GLint, GLsizei, GLboolean, const GLdouble *);
#define CALL_ProgramUniformMatrix4x2dv(disp, parameters) (* GET_ProgramUniformMatrix4x2dv(disp)) parameters
#define GET_ProgramUniformMatrix4x2dv(disp) ((_glptr_ProgramUniformMatrix4x2dv)(GET_by_offset((disp), _gloffset_ProgramUniformMatrix4x2dv)))
#define SET_ProgramUniformMatrix4x2dv(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLint, GLsizei, GLboolean, const GLdouble *) = func; \
   SET_by_offset(disp, _gloffset_ProgramUniformMatrix4x2dv, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_ProgramUniformMatrix4x2fv)(GLuint, GLint, GLsizei, GLboolean, const GLfloat *);
#define CALL_ProgramUniformMatrix4x2fv(disp, parameters) (* GET_ProgramUniformMatrix4x2fv(disp)) parameters
#define GET_ProgramUniformMatrix4x2fv(disp) ((_glptr_ProgramUniformMatrix4x2fv)(GET_by_offset((disp), _gloffset_ProgramUniformMatrix4x2fv)))
#define SET_ProgramUniformMatrix4x2fv(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLint, GLsizei, GLboolean, const GLfloat *) = func; \
   SET_by_offset(disp, _gloffset_ProgramUniformMatrix4x2fv, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_ProgramUniformMatrix4x3dv)(GLuint, GLint, GLsizei, GLboolean, const GLdouble *);
#define CALL_ProgramUniformMatrix4x3dv(disp, parameters) (* GET_ProgramUniformMatrix4x3dv(disp)) parameters
#define GET_ProgramUniformMatrix4x3dv(disp) ((_glptr_ProgramUniformMatrix4x3dv)(GET_by_offset((disp), _gloffset_ProgramUniformMatrix4x3dv)))
#define SET_ProgramUniformMatrix4x3dv(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLint, GLsizei, GLboolean, const GLdouble *) = func; \
   SET_by_offset(disp, _gloffset_ProgramUniformMatrix4x3dv, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_ProgramUniformMatrix4x3fv)(GLuint, GLint, GLsizei, GLboolean, const GLfloat *);
#define CALL_ProgramUniformMatrix4x3fv(disp, parameters) (* GET_ProgramUniformMatrix4x3fv(disp)) parameters
#define GET_ProgramUniformMatrix4x3fv(disp) ((_glptr_ProgramUniformMatrix4x3fv)(GET_by_offset((disp), _gloffset_ProgramUniformMatrix4x3fv)))
#define SET_ProgramUniformMatrix4x3fv(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLint, GLsizei, GLboolean, const GLfloat *) = func; \
   SET_by_offset(disp, _gloffset_ProgramUniformMatrix4x3fv, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_UnlockArraysEXT)(void);
#define CALL_UnlockArraysEXT(disp, parameters) (* GET_UnlockArraysEXT(disp)) parameters
#define GET_UnlockArraysEXT(disp) ((_glptr_UnlockArraysEXT)(GET_by_offset((disp), _gloffset_UnlockArraysEXT)))
#define SET_UnlockArraysEXT(disp, func) do { \
   void (GLAPIENTRYP fn)(void) = func; \
   SET_by_offset(disp, _gloffset_UnlockArraysEXT, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_UseProgramStages)(GLuint, GLbitfield, GLuint);
#define CALL_UseProgramStages(disp, parameters) (* GET_UseProgramStages(disp)) parameters
#define GET_UseProgramStages(disp) ((_glptr_UseProgramStages)(GET_by_offset((disp), _gloffset_UseProgramStages)))
#define SET_UseProgramStages(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLbitfield, GLuint) = func; \
   SET_by_offset(disp, _gloffset_UseProgramStages, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_ValidateProgramPipeline)(GLuint);
#define CALL_ValidateProgramPipeline(disp, parameters) (* GET_ValidateProgramPipeline(disp)) parameters
#define GET_ValidateProgramPipeline(disp) ((_glptr_ValidateProgramPipeline)(GET_by_offset((disp), _gloffset_ValidateProgramPipeline)))
#define SET_ValidateProgramPipeline(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint) = func; \
   SET_by_offset(disp, _gloffset_ValidateProgramPipeline, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_FramebufferTexture2DMultisampleEXT)(GLenum, GLenum, GLenum, GLuint, GLint, GLsizei);
#define CALL_FramebufferTexture2DMultisampleEXT(disp, parameters) (* GET_FramebufferTexture2DMultisampleEXT(disp)) parameters
#define GET_FramebufferTexture2DMultisampleEXT(disp) ((_glptr_FramebufferTexture2DMultisampleEXT)(GET_by_offset((disp), _gloffset_FramebufferTexture2DMultisampleEXT)))
#define SET_FramebufferTexture2DMultisampleEXT(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLenum, GLenum, GLuint, GLint, GLsizei) = func; \
   SET_by_offset(disp, _gloffset_FramebufferTexture2DMultisampleEXT, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_DebugMessageCallback)(GLDEBUGPROC, const GLvoid *);
#define CALL_DebugMessageCallback(disp, parameters) (* GET_DebugMessageCallback(disp)) parameters
#define GET_DebugMessageCallback(disp) ((_glptr_DebugMessageCallback)(GET_by_offset((disp), _gloffset_DebugMessageCallback)))
#define SET_DebugMessageCallback(disp, func) do { \
   void (GLAPIENTRYP fn)(GLDEBUGPROC, const GLvoid *) = func; \
   SET_by_offset(disp, _gloffset_DebugMessageCallback, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_DebugMessageControl)(GLenum, GLenum, GLenum, GLsizei, const GLuint *, GLboolean);
#define CALL_DebugMessageControl(disp, parameters) (* GET_DebugMessageControl(disp)) parameters
#define GET_DebugMessageControl(disp) ((_glptr_DebugMessageControl)(GET_by_offset((disp), _gloffset_DebugMessageControl)))
#define SET_DebugMessageControl(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLenum, GLenum, GLsizei, const GLuint *, GLboolean) = func; \
   SET_by_offset(disp, _gloffset_DebugMessageControl, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_DebugMessageInsert)(GLenum, GLenum, GLuint, GLenum, GLsizei, const GLchar *);
#define CALL_DebugMessageInsert(disp, parameters) (* GET_DebugMessageInsert(disp)) parameters
#define GET_DebugMessageInsert(disp) ((_glptr_DebugMessageInsert)(GET_by_offset((disp), _gloffset_DebugMessageInsert)))
#define SET_DebugMessageInsert(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLenum, GLuint, GLenum, GLsizei, const GLchar *) = func; \
   SET_by_offset(disp, _gloffset_DebugMessageInsert, fn); \
} while (0)

typedef GLuint (GLAPIENTRYP _glptr_GetDebugMessageLog)(GLuint, GLsizei, GLenum *, GLenum *, GLuint *, GLenum *, GLsizei *, GLchar *);
#define CALL_GetDebugMessageLog(disp, parameters) (* GET_GetDebugMessageLog(disp)) parameters
#define GET_GetDebugMessageLog(disp) ((_glptr_GetDebugMessageLog)(GET_by_offset((disp), _gloffset_GetDebugMessageLog)))
#define SET_GetDebugMessageLog(disp, func) do { \
   GLuint (GLAPIENTRYP fn)(GLuint, GLsizei, GLenum *, GLenum *, GLuint *, GLenum *, GLsizei *, GLchar *) = func; \
   SET_by_offset(disp, _gloffset_GetDebugMessageLog, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_GetObjectLabel)(GLenum, GLuint, GLsizei, GLsizei *, GLchar *);
#define CALL_GetObjectLabel(disp, parameters) (* GET_GetObjectLabel(disp)) parameters
#define GET_GetObjectLabel(disp) ((_glptr_GetObjectLabel)(GET_by_offset((disp), _gloffset_GetObjectLabel)))
#define SET_GetObjectLabel(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLuint, GLsizei, GLsizei *, GLchar *) = func; \
   SET_by_offset(disp, _gloffset_GetObjectLabel, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_GetObjectPtrLabel)(const GLvoid *, GLsizei, GLsizei *, GLchar *);
#define CALL_GetObjectPtrLabel(disp, parameters) (* GET_GetObjectPtrLabel(disp)) parameters
#define GET_GetObjectPtrLabel(disp) ((_glptr_GetObjectPtrLabel)(GET_by_offset((disp), _gloffset_GetObjectPtrLabel)))
#define SET_GetObjectPtrLabel(disp, func) do { \
   void (GLAPIENTRYP fn)(const GLvoid *, GLsizei, GLsizei *, GLchar *) = func; \
   SET_by_offset(disp, _gloffset_GetObjectPtrLabel, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_ObjectLabel)(GLenum, GLuint, GLsizei, const GLchar *);
#define CALL_ObjectLabel(disp, parameters) (* GET_ObjectLabel(disp)) parameters
#define GET_ObjectLabel(disp) ((_glptr_ObjectLabel)(GET_by_offset((disp), _gloffset_ObjectLabel)))
#define SET_ObjectLabel(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLuint, GLsizei, const GLchar *) = func; \
   SET_by_offset(disp, _gloffset_ObjectLabel, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_ObjectPtrLabel)(const GLvoid *, GLsizei, const GLchar *);
#define CALL_ObjectPtrLabel(disp, parameters) (* GET_ObjectPtrLabel(disp)) parameters
#define GET_ObjectPtrLabel(disp) ((_glptr_ObjectPtrLabel)(GET_by_offset((disp), _gloffset_ObjectPtrLabel)))
#define SET_ObjectPtrLabel(disp, func) do { \
   void (GLAPIENTRYP fn)(const GLvoid *, GLsizei, const GLchar *) = func; \
   SET_by_offset(disp, _gloffset_ObjectPtrLabel, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_PopDebugGroup)(void);
#define CALL_PopDebugGroup(disp, parameters) (* GET_PopDebugGroup(disp)) parameters
#define GET_PopDebugGroup(disp) ((_glptr_PopDebugGroup)(GET_by_offset((disp), _gloffset_PopDebugGroup)))
#define SET_PopDebugGroup(disp, func) do { \
   void (GLAPIENTRYP fn)(void) = func; \
   SET_by_offset(disp, _gloffset_PopDebugGroup, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_PushDebugGroup)(GLenum, GLuint, GLsizei, const GLchar *);
#define CALL_PushDebugGroup(disp, parameters) (* GET_PushDebugGroup(disp)) parameters
#define GET_PushDebugGroup(disp) ((_glptr_PushDebugGroup)(GET_by_offset((disp), _gloffset_PushDebugGroup)))
#define SET_PushDebugGroup(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLuint, GLsizei, const GLchar *) = func; \
   SET_by_offset(disp, _gloffset_PushDebugGroup, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_SecondaryColor3fEXT)(GLfloat, GLfloat, GLfloat);
#define CALL_SecondaryColor3fEXT(disp, parameters) (* GET_SecondaryColor3fEXT(disp)) parameters
#define GET_SecondaryColor3fEXT(disp) ((_glptr_SecondaryColor3fEXT)(GET_by_offset((disp), _gloffset_SecondaryColor3fEXT)))
#define SET_SecondaryColor3fEXT(disp, func) do { \
   void (GLAPIENTRYP fn)(GLfloat, GLfloat, GLfloat) = func; \
   SET_by_offset(disp, _gloffset_SecondaryColor3fEXT, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_SecondaryColor3fvEXT)(const GLfloat *);
#define CALL_SecondaryColor3fvEXT(disp, parameters) (* GET_SecondaryColor3fvEXT(disp)) parameters
#define GET_SecondaryColor3fvEXT(disp) ((_glptr_SecondaryColor3fvEXT)(GET_by_offset((disp), _gloffset_SecondaryColor3fvEXT)))
#define SET_SecondaryColor3fvEXT(disp, func) do { \
   void (GLAPIENTRYP fn)(const GLfloat *) = func; \
   SET_by_offset(disp, _gloffset_SecondaryColor3fvEXT, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_MultiDrawElementsEXT)(GLenum, const GLsizei *, GLenum, const GLvoid * const *, GLsizei);
#define CALL_MultiDrawElementsEXT(disp, parameters) (* GET_MultiDrawElementsEXT(disp)) parameters
#define GET_MultiDrawElementsEXT(disp) ((_glptr_MultiDrawElementsEXT)(GET_by_offset((disp), _gloffset_MultiDrawElementsEXT)))
#define SET_MultiDrawElementsEXT(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, const GLsizei *, GLenum, const GLvoid * const *, GLsizei) = func; \
   SET_by_offset(disp, _gloffset_MultiDrawElementsEXT, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_FogCoordfEXT)(GLfloat);
#define CALL_FogCoordfEXT(disp, parameters) (* GET_FogCoordfEXT(disp)) parameters
#define GET_FogCoordfEXT(disp) ((_glptr_FogCoordfEXT)(GET_by_offset((disp), _gloffset_FogCoordfEXT)))
#define SET_FogCoordfEXT(disp, func) do { \
   void (GLAPIENTRYP fn)(GLfloat) = func; \
   SET_by_offset(disp, _gloffset_FogCoordfEXT, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_FogCoordfvEXT)(const GLfloat *);
#define CALL_FogCoordfvEXT(disp, parameters) (* GET_FogCoordfvEXT(disp)) parameters
#define GET_FogCoordfvEXT(disp) ((_glptr_FogCoordfvEXT)(GET_by_offset((disp), _gloffset_FogCoordfvEXT)))
#define SET_FogCoordfvEXT(disp, func) do { \
   void (GLAPIENTRYP fn)(const GLfloat *) = func; \
   SET_by_offset(disp, _gloffset_FogCoordfvEXT, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_ResizeBuffersMESA)(void);
#define CALL_ResizeBuffersMESA(disp, parameters) (* GET_ResizeBuffersMESA(disp)) parameters
#define GET_ResizeBuffersMESA(disp) ((_glptr_ResizeBuffersMESA)(GET_by_offset((disp), _gloffset_ResizeBuffersMESA)))
#define SET_ResizeBuffersMESA(disp, func) do { \
   void (GLAPIENTRYP fn)(void) = func; \
   SET_by_offset(disp, _gloffset_ResizeBuffersMESA, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_WindowPos4dMESA)(GLdouble, GLdouble, GLdouble, GLdouble);
#define CALL_WindowPos4dMESA(disp, parameters) (* GET_WindowPos4dMESA(disp)) parameters
#define GET_WindowPos4dMESA(disp) ((_glptr_WindowPos4dMESA)(GET_by_offset((disp), _gloffset_WindowPos4dMESA)))
#define SET_WindowPos4dMESA(disp, func) do { \
   void (GLAPIENTRYP fn)(GLdouble, GLdouble, GLdouble, GLdouble) = func; \
   SET_by_offset(disp, _gloffset_WindowPos4dMESA, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_WindowPos4dvMESA)(const GLdouble *);
#define CALL_WindowPos4dvMESA(disp, parameters) (* GET_WindowPos4dvMESA(disp)) parameters
#define GET_WindowPos4dvMESA(disp) ((_glptr_WindowPos4dvMESA)(GET_by_offset((disp), _gloffset_WindowPos4dvMESA)))
#define SET_WindowPos4dvMESA(disp, func) do { \
   void (GLAPIENTRYP fn)(const GLdouble *) = func; \
   SET_by_offset(disp, _gloffset_WindowPos4dvMESA, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_WindowPos4fMESA)(GLfloat, GLfloat, GLfloat, GLfloat);
#define CALL_WindowPos4fMESA(disp, parameters) (* GET_WindowPos4fMESA(disp)) parameters
#define GET_WindowPos4fMESA(disp) ((_glptr_WindowPos4fMESA)(GET_by_offset((disp), _gloffset_WindowPos4fMESA)))
#define SET_WindowPos4fMESA(disp, func) do { \
   void (GLAPIENTRYP fn)(GLfloat, GLfloat, GLfloat, GLfloat) = func; \
   SET_by_offset(disp, _gloffset_WindowPos4fMESA, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_WindowPos4fvMESA)(const GLfloat *);
#define CALL_WindowPos4fvMESA(disp, parameters) (* GET_WindowPos4fvMESA(disp)) parameters
#define GET_WindowPos4fvMESA(disp) ((_glptr_WindowPos4fvMESA)(GET_by_offset((disp), _gloffset_WindowPos4fvMESA)))
#define SET_WindowPos4fvMESA(disp, func) do { \
   void (GLAPIENTRYP fn)(const GLfloat *) = func; \
   SET_by_offset(disp, _gloffset_WindowPos4fvMESA, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_WindowPos4iMESA)(GLint, GLint, GLint, GLint);
#define CALL_WindowPos4iMESA(disp, parameters) (* GET_WindowPos4iMESA(disp)) parameters
#define GET_WindowPos4iMESA(disp) ((_glptr_WindowPos4iMESA)(GET_by_offset((disp), _gloffset_WindowPos4iMESA)))
#define SET_WindowPos4iMESA(disp, func) do { \
   void (GLAPIENTRYP fn)(GLint, GLint, GLint, GLint) = func; \
   SET_by_offset(disp, _gloffset_WindowPos4iMESA, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_WindowPos4ivMESA)(const GLint *);
#define CALL_WindowPos4ivMESA(disp, parameters) (* GET_WindowPos4ivMESA(disp)) parameters
#define GET_WindowPos4ivMESA(disp) ((_glptr_WindowPos4ivMESA)(GET_by_offset((disp), _gloffset_WindowPos4ivMESA)))
#define SET_WindowPos4ivMESA(disp, func) do { \
   void (GLAPIENTRYP fn)(const GLint *) = func; \
   SET_by_offset(disp, _gloffset_WindowPos4ivMESA, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_WindowPos4sMESA)(GLshort, GLshort, GLshort, GLshort);
#define CALL_WindowPos4sMESA(disp, parameters) (* GET_WindowPos4sMESA(disp)) parameters
#define GET_WindowPos4sMESA(disp) ((_glptr_WindowPos4sMESA)(GET_by_offset((disp), _gloffset_WindowPos4sMESA)))
#define SET_WindowPos4sMESA(disp, func) do { \
   void (GLAPIENTRYP fn)(GLshort, GLshort, GLshort, GLshort) = func; \
   SET_by_offset(disp, _gloffset_WindowPos4sMESA, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_WindowPos4svMESA)(const GLshort *);
#define CALL_WindowPos4svMESA(disp, parameters) (* GET_WindowPos4svMESA(disp)) parameters
#define GET_WindowPos4svMESA(disp) ((_glptr_WindowPos4svMESA)(GET_by_offset((disp), _gloffset_WindowPos4svMESA)))
#define SET_WindowPos4svMESA(disp, func) do { \
   void (GLAPIENTRYP fn)(const GLshort *) = func; \
   SET_by_offset(disp, _gloffset_WindowPos4svMESA, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_MultiModeDrawArraysIBM)(const GLenum *, const GLint *, const GLsizei *, GLsizei, GLint);
#define CALL_MultiModeDrawArraysIBM(disp, parameters) (* GET_MultiModeDrawArraysIBM(disp)) parameters
#define GET_MultiModeDrawArraysIBM(disp) ((_glptr_MultiModeDrawArraysIBM)(GET_by_offset((disp), _gloffset_MultiModeDrawArraysIBM)))
#define SET_MultiModeDrawArraysIBM(disp, func) do { \
   void (GLAPIENTRYP fn)(const GLenum *, const GLint *, const GLsizei *, GLsizei, GLint) = func; \
   SET_by_offset(disp, _gloffset_MultiModeDrawArraysIBM, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_MultiModeDrawElementsIBM)(const GLenum *, const GLsizei *, GLenum, const GLvoid * const *, GLsizei, GLint);
#define CALL_MultiModeDrawElementsIBM(disp, parameters) (* GET_MultiModeDrawElementsIBM(disp)) parameters
#define GET_MultiModeDrawElementsIBM(disp) ((_glptr_MultiModeDrawElementsIBM)(GET_by_offset((disp), _gloffset_MultiModeDrawElementsIBM)))
#define SET_MultiModeDrawElementsIBM(disp, func) do { \
   void (GLAPIENTRYP fn)(const GLenum *, const GLsizei *, GLenum, const GLvoid * const *, GLsizei, GLint) = func; \
   SET_by_offset(disp, _gloffset_MultiModeDrawElementsIBM, fn); \
} while (0)

typedef GLboolean (GLAPIENTRYP _glptr_AreProgramsResidentNV)(GLsizei, const GLuint *, GLboolean *);
#define CALL_AreProgramsResidentNV(disp, parameters) (* GET_AreProgramsResidentNV(disp)) parameters
#define GET_AreProgramsResidentNV(disp) ((_glptr_AreProgramsResidentNV)(GET_by_offset((disp), _gloffset_AreProgramsResidentNV)))
#define SET_AreProgramsResidentNV(disp, func) do { \
   GLboolean (GLAPIENTRYP fn)(GLsizei, const GLuint *, GLboolean *) = func; \
   SET_by_offset(disp, _gloffset_AreProgramsResidentNV, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_ExecuteProgramNV)(GLenum, GLuint, const GLfloat *);
#define CALL_ExecuteProgramNV(disp, parameters) (* GET_ExecuteProgramNV(disp)) parameters
#define GET_ExecuteProgramNV(disp) ((_glptr_ExecuteProgramNV)(GET_by_offset((disp), _gloffset_ExecuteProgramNV)))
#define SET_ExecuteProgramNV(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLuint, const GLfloat *) = func; \
   SET_by_offset(disp, _gloffset_ExecuteProgramNV, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_GetProgramParameterdvNV)(GLenum, GLuint, GLenum, GLdouble *);
#define CALL_GetProgramParameterdvNV(disp, parameters) (* GET_GetProgramParameterdvNV(disp)) parameters
#define GET_GetProgramParameterdvNV(disp) ((_glptr_GetProgramParameterdvNV)(GET_by_offset((disp), _gloffset_GetProgramParameterdvNV)))
#define SET_GetProgramParameterdvNV(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLuint, GLenum, GLdouble *) = func; \
   SET_by_offset(disp, _gloffset_GetProgramParameterdvNV, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_GetProgramParameterfvNV)(GLenum, GLuint, GLenum, GLfloat *);
#define CALL_GetProgramParameterfvNV(disp, parameters) (* GET_GetProgramParameterfvNV(disp)) parameters
#define GET_GetProgramParameterfvNV(disp) ((_glptr_GetProgramParameterfvNV)(GET_by_offset((disp), _gloffset_GetProgramParameterfvNV)))
#define SET_GetProgramParameterfvNV(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLuint, GLenum, GLfloat *) = func; \
   SET_by_offset(disp, _gloffset_GetProgramParameterfvNV, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_GetProgramStringNV)(GLuint, GLenum, GLubyte *);
#define CALL_GetProgramStringNV(disp, parameters) (* GET_GetProgramStringNV(disp)) parameters
#define GET_GetProgramStringNV(disp) ((_glptr_GetProgramStringNV)(GET_by_offset((disp), _gloffset_GetProgramStringNV)))
#define SET_GetProgramStringNV(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLenum, GLubyte *) = func; \
   SET_by_offset(disp, _gloffset_GetProgramStringNV, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_GetProgramivNV)(GLuint, GLenum, GLint *);
#define CALL_GetProgramivNV(disp, parameters) (* GET_GetProgramivNV(disp)) parameters
#define GET_GetProgramivNV(disp) ((_glptr_GetProgramivNV)(GET_by_offset((disp), _gloffset_GetProgramivNV)))
#define SET_GetProgramivNV(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLenum, GLint *) = func; \
   SET_by_offset(disp, _gloffset_GetProgramivNV, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_GetTrackMatrixivNV)(GLenum, GLuint, GLenum, GLint *);
#define CALL_GetTrackMatrixivNV(disp, parameters) (* GET_GetTrackMatrixivNV(disp)) parameters
#define GET_GetTrackMatrixivNV(disp) ((_glptr_GetTrackMatrixivNV)(GET_by_offset((disp), _gloffset_GetTrackMatrixivNV)))
#define SET_GetTrackMatrixivNV(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLuint, GLenum, GLint *) = func; \
   SET_by_offset(disp, _gloffset_GetTrackMatrixivNV, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_GetVertexAttribdvNV)(GLuint, GLenum, GLdouble *);
#define CALL_GetVertexAttribdvNV(disp, parameters) (* GET_GetVertexAttribdvNV(disp)) parameters
#define GET_GetVertexAttribdvNV(disp) ((_glptr_GetVertexAttribdvNV)(GET_by_offset((disp), _gloffset_GetVertexAttribdvNV)))
#define SET_GetVertexAttribdvNV(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLenum, GLdouble *) = func; \
   SET_by_offset(disp, _gloffset_GetVertexAttribdvNV, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_GetVertexAttribfvNV)(GLuint, GLenum, GLfloat *);
#define CALL_GetVertexAttribfvNV(disp, parameters) (* GET_GetVertexAttribfvNV(disp)) parameters
#define GET_GetVertexAttribfvNV(disp) ((_glptr_GetVertexAttribfvNV)(GET_by_offset((disp), _gloffset_GetVertexAttribfvNV)))
#define SET_GetVertexAttribfvNV(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLenum, GLfloat *) = func; \
   SET_by_offset(disp, _gloffset_GetVertexAttribfvNV, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_GetVertexAttribivNV)(GLuint, GLenum, GLint *);
#define CALL_GetVertexAttribivNV(disp, parameters) (* GET_GetVertexAttribivNV(disp)) parameters
#define GET_GetVertexAttribivNV(disp) ((_glptr_GetVertexAttribivNV)(GET_by_offset((disp), _gloffset_GetVertexAttribivNV)))
#define SET_GetVertexAttribivNV(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLenum, GLint *) = func; \
   SET_by_offset(disp, _gloffset_GetVertexAttribivNV, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_LoadProgramNV)(GLenum, GLuint, GLsizei, const GLubyte *);
#define CALL_LoadProgramNV(disp, parameters) (* GET_LoadProgramNV(disp)) parameters
#define GET_LoadProgramNV(disp) ((_glptr_LoadProgramNV)(GET_by_offset((disp), _gloffset_LoadProgramNV)))
#define SET_LoadProgramNV(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLuint, GLsizei, const GLubyte *) = func; \
   SET_by_offset(disp, _gloffset_LoadProgramNV, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_ProgramParameters4dvNV)(GLenum, GLuint, GLsizei, const GLdouble *);
#define CALL_ProgramParameters4dvNV(disp, parameters) (* GET_ProgramParameters4dvNV(disp)) parameters
#define GET_ProgramParameters4dvNV(disp) ((_glptr_ProgramParameters4dvNV)(GET_by_offset((disp), _gloffset_ProgramParameters4dvNV)))
#define SET_ProgramParameters4dvNV(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLuint, GLsizei, const GLdouble *) = func; \
   SET_by_offset(disp, _gloffset_ProgramParameters4dvNV, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_ProgramParameters4fvNV)(GLenum, GLuint, GLsizei, const GLfloat *);
#define CALL_ProgramParameters4fvNV(disp, parameters) (* GET_ProgramParameters4fvNV(disp)) parameters
#define GET_ProgramParameters4fvNV(disp) ((_glptr_ProgramParameters4fvNV)(GET_by_offset((disp), _gloffset_ProgramParameters4fvNV)))
#define SET_ProgramParameters4fvNV(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLuint, GLsizei, const GLfloat *) = func; \
   SET_by_offset(disp, _gloffset_ProgramParameters4fvNV, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_RequestResidentProgramsNV)(GLsizei, const GLuint *);
#define CALL_RequestResidentProgramsNV(disp, parameters) (* GET_RequestResidentProgramsNV(disp)) parameters
#define GET_RequestResidentProgramsNV(disp) ((_glptr_RequestResidentProgramsNV)(GET_by_offset((disp), _gloffset_RequestResidentProgramsNV)))
#define SET_RequestResidentProgramsNV(disp, func) do { \
   void (GLAPIENTRYP fn)(GLsizei, const GLuint *) = func; \
   SET_by_offset(disp, _gloffset_RequestResidentProgramsNV, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_TrackMatrixNV)(GLenum, GLuint, GLenum, GLenum);
#define CALL_TrackMatrixNV(disp, parameters) (* GET_TrackMatrixNV(disp)) parameters
#define GET_TrackMatrixNV(disp) ((_glptr_TrackMatrixNV)(GET_by_offset((disp), _gloffset_TrackMatrixNV)))
#define SET_TrackMatrixNV(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLuint, GLenum, GLenum) = func; \
   SET_by_offset(disp, _gloffset_TrackMatrixNV, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_VertexAttrib1dNV)(GLuint, GLdouble);
#define CALL_VertexAttrib1dNV(disp, parameters) (* GET_VertexAttrib1dNV(disp)) parameters
#define GET_VertexAttrib1dNV(disp) ((_glptr_VertexAttrib1dNV)(GET_by_offset((disp), _gloffset_VertexAttrib1dNV)))
#define SET_VertexAttrib1dNV(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLdouble) = func; \
   SET_by_offset(disp, _gloffset_VertexAttrib1dNV, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_VertexAttrib1dvNV)(GLuint, const GLdouble *);
#define CALL_VertexAttrib1dvNV(disp, parameters) (* GET_VertexAttrib1dvNV(disp)) parameters
#define GET_VertexAttrib1dvNV(disp) ((_glptr_VertexAttrib1dvNV)(GET_by_offset((disp), _gloffset_VertexAttrib1dvNV)))
#define SET_VertexAttrib1dvNV(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, const GLdouble *) = func; \
   SET_by_offset(disp, _gloffset_VertexAttrib1dvNV, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_VertexAttrib1fNV)(GLuint, GLfloat);
#define CALL_VertexAttrib1fNV(disp, parameters) (* GET_VertexAttrib1fNV(disp)) parameters
#define GET_VertexAttrib1fNV(disp) ((_glptr_VertexAttrib1fNV)(GET_by_offset((disp), _gloffset_VertexAttrib1fNV)))
#define SET_VertexAttrib1fNV(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLfloat) = func; \
   SET_by_offset(disp, _gloffset_VertexAttrib1fNV, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_VertexAttrib1fvNV)(GLuint, const GLfloat *);
#define CALL_VertexAttrib1fvNV(disp, parameters) (* GET_VertexAttrib1fvNV(disp)) parameters
#define GET_VertexAttrib1fvNV(disp) ((_glptr_VertexAttrib1fvNV)(GET_by_offset((disp), _gloffset_VertexAttrib1fvNV)))
#define SET_VertexAttrib1fvNV(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, const GLfloat *) = func; \
   SET_by_offset(disp, _gloffset_VertexAttrib1fvNV, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_VertexAttrib1sNV)(GLuint, GLshort);
#define CALL_VertexAttrib1sNV(disp, parameters) (* GET_VertexAttrib1sNV(disp)) parameters
#define GET_VertexAttrib1sNV(disp) ((_glptr_VertexAttrib1sNV)(GET_by_offset((disp), _gloffset_VertexAttrib1sNV)))
#define SET_VertexAttrib1sNV(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLshort) = func; \
   SET_by_offset(disp, _gloffset_VertexAttrib1sNV, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_VertexAttrib1svNV)(GLuint, const GLshort *);
#define CALL_VertexAttrib1svNV(disp, parameters) (* GET_VertexAttrib1svNV(disp)) parameters
#define GET_VertexAttrib1svNV(disp) ((_glptr_VertexAttrib1svNV)(GET_by_offset((disp), _gloffset_VertexAttrib1svNV)))
#define SET_VertexAttrib1svNV(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, const GLshort *) = func; \
   SET_by_offset(disp, _gloffset_VertexAttrib1svNV, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_VertexAttrib2dNV)(GLuint, GLdouble, GLdouble);
#define CALL_VertexAttrib2dNV(disp, parameters) (* GET_VertexAttrib2dNV(disp)) parameters
#define GET_VertexAttrib2dNV(disp) ((_glptr_VertexAttrib2dNV)(GET_by_offset((disp), _gloffset_VertexAttrib2dNV)))
#define SET_VertexAttrib2dNV(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLdouble, GLdouble) = func; \
   SET_by_offset(disp, _gloffset_VertexAttrib2dNV, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_VertexAttrib2dvNV)(GLuint, const GLdouble *);
#define CALL_VertexAttrib2dvNV(disp, parameters) (* GET_VertexAttrib2dvNV(disp)) parameters
#define GET_VertexAttrib2dvNV(disp) ((_glptr_VertexAttrib2dvNV)(GET_by_offset((disp), _gloffset_VertexAttrib2dvNV)))
#define SET_VertexAttrib2dvNV(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, const GLdouble *) = func; \
   SET_by_offset(disp, _gloffset_VertexAttrib2dvNV, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_VertexAttrib2fNV)(GLuint, GLfloat, GLfloat);
#define CALL_VertexAttrib2fNV(disp, parameters) (* GET_VertexAttrib2fNV(disp)) parameters
#define GET_VertexAttrib2fNV(disp) ((_glptr_VertexAttrib2fNV)(GET_by_offset((disp), _gloffset_VertexAttrib2fNV)))
#define SET_VertexAttrib2fNV(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLfloat, GLfloat) = func; \
   SET_by_offset(disp, _gloffset_VertexAttrib2fNV, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_VertexAttrib2fvNV)(GLuint, const GLfloat *);
#define CALL_VertexAttrib2fvNV(disp, parameters) (* GET_VertexAttrib2fvNV(disp)) parameters
#define GET_VertexAttrib2fvNV(disp) ((_glptr_VertexAttrib2fvNV)(GET_by_offset((disp), _gloffset_VertexAttrib2fvNV)))
#define SET_VertexAttrib2fvNV(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, const GLfloat *) = func; \
   SET_by_offset(disp, _gloffset_VertexAttrib2fvNV, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_VertexAttrib2sNV)(GLuint, GLshort, GLshort);
#define CALL_VertexAttrib2sNV(disp, parameters) (* GET_VertexAttrib2sNV(disp)) parameters
#define GET_VertexAttrib2sNV(disp) ((_glptr_VertexAttrib2sNV)(GET_by_offset((disp), _gloffset_VertexAttrib2sNV)))
#define SET_VertexAttrib2sNV(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLshort, GLshort) = func; \
   SET_by_offset(disp, _gloffset_VertexAttrib2sNV, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_VertexAttrib2svNV)(GLuint, const GLshort *);
#define CALL_VertexAttrib2svNV(disp, parameters) (* GET_VertexAttrib2svNV(disp)) parameters
#define GET_VertexAttrib2svNV(disp) ((_glptr_VertexAttrib2svNV)(GET_by_offset((disp), _gloffset_VertexAttrib2svNV)))
#define SET_VertexAttrib2svNV(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, const GLshort *) = func; \
   SET_by_offset(disp, _gloffset_VertexAttrib2svNV, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_VertexAttrib3dNV)(GLuint, GLdouble, GLdouble, GLdouble);
#define CALL_VertexAttrib3dNV(disp, parameters) (* GET_VertexAttrib3dNV(disp)) parameters
#define GET_VertexAttrib3dNV(disp) ((_glptr_VertexAttrib3dNV)(GET_by_offset((disp), _gloffset_VertexAttrib3dNV)))
#define SET_VertexAttrib3dNV(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLdouble, GLdouble, GLdouble) = func; \
   SET_by_offset(disp, _gloffset_VertexAttrib3dNV, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_VertexAttrib3dvNV)(GLuint, const GLdouble *);
#define CALL_VertexAttrib3dvNV(disp, parameters) (* GET_VertexAttrib3dvNV(disp)) parameters
#define GET_VertexAttrib3dvNV(disp) ((_glptr_VertexAttrib3dvNV)(GET_by_offset((disp), _gloffset_VertexAttrib3dvNV)))
#define SET_VertexAttrib3dvNV(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, const GLdouble *) = func; \
   SET_by_offset(disp, _gloffset_VertexAttrib3dvNV, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_VertexAttrib3fNV)(GLuint, GLfloat, GLfloat, GLfloat);
#define CALL_VertexAttrib3fNV(disp, parameters) (* GET_VertexAttrib3fNV(disp)) parameters
#define GET_VertexAttrib3fNV(disp) ((_glptr_VertexAttrib3fNV)(GET_by_offset((disp), _gloffset_VertexAttrib3fNV)))
#define SET_VertexAttrib3fNV(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLfloat, GLfloat, GLfloat) = func; \
   SET_by_offset(disp, _gloffset_VertexAttrib3fNV, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_VertexAttrib3fvNV)(GLuint, const GLfloat *);
#define CALL_VertexAttrib3fvNV(disp, parameters) (* GET_VertexAttrib3fvNV(disp)) parameters
#define GET_VertexAttrib3fvNV(disp) ((_glptr_VertexAttrib3fvNV)(GET_by_offset((disp), _gloffset_VertexAttrib3fvNV)))
#define SET_VertexAttrib3fvNV(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, const GLfloat *) = func; \
   SET_by_offset(disp, _gloffset_VertexAttrib3fvNV, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_VertexAttrib3sNV)(GLuint, GLshort, GLshort, GLshort);
#define CALL_VertexAttrib3sNV(disp, parameters) (* GET_VertexAttrib3sNV(disp)) parameters
#define GET_VertexAttrib3sNV(disp) ((_glptr_VertexAttrib3sNV)(GET_by_offset((disp), _gloffset_VertexAttrib3sNV)))
#define SET_VertexAttrib3sNV(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLshort, GLshort, GLshort) = func; \
   SET_by_offset(disp, _gloffset_VertexAttrib3sNV, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_VertexAttrib3svNV)(GLuint, const GLshort *);
#define CALL_VertexAttrib3svNV(disp, parameters) (* GET_VertexAttrib3svNV(disp)) parameters
#define GET_VertexAttrib3svNV(disp) ((_glptr_VertexAttrib3svNV)(GET_by_offset((disp), _gloffset_VertexAttrib3svNV)))
#define SET_VertexAttrib3svNV(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, const GLshort *) = func; \
   SET_by_offset(disp, _gloffset_VertexAttrib3svNV, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_VertexAttrib4dNV)(GLuint, GLdouble, GLdouble, GLdouble, GLdouble);
#define CALL_VertexAttrib4dNV(disp, parameters) (* GET_VertexAttrib4dNV(disp)) parameters
#define GET_VertexAttrib4dNV(disp) ((_glptr_VertexAttrib4dNV)(GET_by_offset((disp), _gloffset_VertexAttrib4dNV)))
#define SET_VertexAttrib4dNV(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLdouble, GLdouble, GLdouble, GLdouble) = func; \
   SET_by_offset(disp, _gloffset_VertexAttrib4dNV, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_VertexAttrib4dvNV)(GLuint, const GLdouble *);
#define CALL_VertexAttrib4dvNV(disp, parameters) (* GET_VertexAttrib4dvNV(disp)) parameters
#define GET_VertexAttrib4dvNV(disp) ((_glptr_VertexAttrib4dvNV)(GET_by_offset((disp), _gloffset_VertexAttrib4dvNV)))
#define SET_VertexAttrib4dvNV(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, const GLdouble *) = func; \
   SET_by_offset(disp, _gloffset_VertexAttrib4dvNV, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_VertexAttrib4fNV)(GLuint, GLfloat, GLfloat, GLfloat, GLfloat);
#define CALL_VertexAttrib4fNV(disp, parameters) (* GET_VertexAttrib4fNV(disp)) parameters
#define GET_VertexAttrib4fNV(disp) ((_glptr_VertexAttrib4fNV)(GET_by_offset((disp), _gloffset_VertexAttrib4fNV)))
#define SET_VertexAttrib4fNV(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLfloat, GLfloat, GLfloat, GLfloat) = func; \
   SET_by_offset(disp, _gloffset_VertexAttrib4fNV, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_VertexAttrib4fvNV)(GLuint, const GLfloat *);
#define CALL_VertexAttrib4fvNV(disp, parameters) (* GET_VertexAttrib4fvNV(disp)) parameters
#define GET_VertexAttrib4fvNV(disp) ((_glptr_VertexAttrib4fvNV)(GET_by_offset((disp), _gloffset_VertexAttrib4fvNV)))
#define SET_VertexAttrib4fvNV(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, const GLfloat *) = func; \
   SET_by_offset(disp, _gloffset_VertexAttrib4fvNV, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_VertexAttrib4sNV)(GLuint, GLshort, GLshort, GLshort, GLshort);
#define CALL_VertexAttrib4sNV(disp, parameters) (* GET_VertexAttrib4sNV(disp)) parameters
#define GET_VertexAttrib4sNV(disp) ((_glptr_VertexAttrib4sNV)(GET_by_offset((disp), _gloffset_VertexAttrib4sNV)))
#define SET_VertexAttrib4sNV(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLshort, GLshort, GLshort, GLshort) = func; \
   SET_by_offset(disp, _gloffset_VertexAttrib4sNV, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_VertexAttrib4svNV)(GLuint, const GLshort *);
#define CALL_VertexAttrib4svNV(disp, parameters) (* GET_VertexAttrib4svNV(disp)) parameters
#define GET_VertexAttrib4svNV(disp) ((_glptr_VertexAttrib4svNV)(GET_by_offset((disp), _gloffset_VertexAttrib4svNV)))
#define SET_VertexAttrib4svNV(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, const GLshort *) = func; \
   SET_by_offset(disp, _gloffset_VertexAttrib4svNV, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_VertexAttrib4ubNV)(GLuint, GLubyte, GLubyte, GLubyte, GLubyte);
#define CALL_VertexAttrib4ubNV(disp, parameters) (* GET_VertexAttrib4ubNV(disp)) parameters
#define GET_VertexAttrib4ubNV(disp) ((_glptr_VertexAttrib4ubNV)(GET_by_offset((disp), _gloffset_VertexAttrib4ubNV)))
#define SET_VertexAttrib4ubNV(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLubyte, GLubyte, GLubyte, GLubyte) = func; \
   SET_by_offset(disp, _gloffset_VertexAttrib4ubNV, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_VertexAttrib4ubvNV)(GLuint, const GLubyte *);
#define CALL_VertexAttrib4ubvNV(disp, parameters) (* GET_VertexAttrib4ubvNV(disp)) parameters
#define GET_VertexAttrib4ubvNV(disp) ((_glptr_VertexAttrib4ubvNV)(GET_by_offset((disp), _gloffset_VertexAttrib4ubvNV)))
#define SET_VertexAttrib4ubvNV(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, const GLubyte *) = func; \
   SET_by_offset(disp, _gloffset_VertexAttrib4ubvNV, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_VertexAttribPointerNV)(GLuint, GLint, GLenum, GLsizei, const GLvoid *);
#define CALL_VertexAttribPointerNV(disp, parameters) (* GET_VertexAttribPointerNV(disp)) parameters
#define GET_VertexAttribPointerNV(disp) ((_glptr_VertexAttribPointerNV)(GET_by_offset((disp), _gloffset_VertexAttribPointerNV)))
#define SET_VertexAttribPointerNV(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLint, GLenum, GLsizei, const GLvoid *) = func; \
   SET_by_offset(disp, _gloffset_VertexAttribPointerNV, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_VertexAttribs1dvNV)(GLuint, GLsizei, const GLdouble *);
#define CALL_VertexAttribs1dvNV(disp, parameters) (* GET_VertexAttribs1dvNV(disp)) parameters
#define GET_VertexAttribs1dvNV(disp) ((_glptr_VertexAttribs1dvNV)(GET_by_offset((disp), _gloffset_VertexAttribs1dvNV)))
#define SET_VertexAttribs1dvNV(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLsizei, const GLdouble *) = func; \
   SET_by_offset(disp, _gloffset_VertexAttribs1dvNV, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_VertexAttribs1fvNV)(GLuint, GLsizei, const GLfloat *);
#define CALL_VertexAttribs1fvNV(disp, parameters) (* GET_VertexAttribs1fvNV(disp)) parameters
#define GET_VertexAttribs1fvNV(disp) ((_glptr_VertexAttribs1fvNV)(GET_by_offset((disp), _gloffset_VertexAttribs1fvNV)))
#define SET_VertexAttribs1fvNV(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLsizei, const GLfloat *) = func; \
   SET_by_offset(disp, _gloffset_VertexAttribs1fvNV, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_VertexAttribs1svNV)(GLuint, GLsizei, const GLshort *);
#define CALL_VertexAttribs1svNV(disp, parameters) (* GET_VertexAttribs1svNV(disp)) parameters
#define GET_VertexAttribs1svNV(disp) ((_glptr_VertexAttribs1svNV)(GET_by_offset((disp), _gloffset_VertexAttribs1svNV)))
#define SET_VertexAttribs1svNV(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLsizei, const GLshort *) = func; \
   SET_by_offset(disp, _gloffset_VertexAttribs1svNV, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_VertexAttribs2dvNV)(GLuint, GLsizei, const GLdouble *);
#define CALL_VertexAttribs2dvNV(disp, parameters) (* GET_VertexAttribs2dvNV(disp)) parameters
#define GET_VertexAttribs2dvNV(disp) ((_glptr_VertexAttribs2dvNV)(GET_by_offset((disp), _gloffset_VertexAttribs2dvNV)))
#define SET_VertexAttribs2dvNV(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLsizei, const GLdouble *) = func; \
   SET_by_offset(disp, _gloffset_VertexAttribs2dvNV, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_VertexAttribs2fvNV)(GLuint, GLsizei, const GLfloat *);
#define CALL_VertexAttribs2fvNV(disp, parameters) (* GET_VertexAttribs2fvNV(disp)) parameters
#define GET_VertexAttribs2fvNV(disp) ((_glptr_VertexAttribs2fvNV)(GET_by_offset((disp), _gloffset_VertexAttribs2fvNV)))
#define SET_VertexAttribs2fvNV(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLsizei, const GLfloat *) = func; \
   SET_by_offset(disp, _gloffset_VertexAttribs2fvNV, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_VertexAttribs2svNV)(GLuint, GLsizei, const GLshort *);
#define CALL_VertexAttribs2svNV(disp, parameters) (* GET_VertexAttribs2svNV(disp)) parameters
#define GET_VertexAttribs2svNV(disp) ((_glptr_VertexAttribs2svNV)(GET_by_offset((disp), _gloffset_VertexAttribs2svNV)))
#define SET_VertexAttribs2svNV(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLsizei, const GLshort *) = func; \
   SET_by_offset(disp, _gloffset_VertexAttribs2svNV, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_VertexAttribs3dvNV)(GLuint, GLsizei, const GLdouble *);
#define CALL_VertexAttribs3dvNV(disp, parameters) (* GET_VertexAttribs3dvNV(disp)) parameters
#define GET_VertexAttribs3dvNV(disp) ((_glptr_VertexAttribs3dvNV)(GET_by_offset((disp), _gloffset_VertexAttribs3dvNV)))
#define SET_VertexAttribs3dvNV(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLsizei, const GLdouble *) = func; \
   SET_by_offset(disp, _gloffset_VertexAttribs3dvNV, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_VertexAttribs3fvNV)(GLuint, GLsizei, const GLfloat *);
#define CALL_VertexAttribs3fvNV(disp, parameters) (* GET_VertexAttribs3fvNV(disp)) parameters
#define GET_VertexAttribs3fvNV(disp) ((_glptr_VertexAttribs3fvNV)(GET_by_offset((disp), _gloffset_VertexAttribs3fvNV)))
#define SET_VertexAttribs3fvNV(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLsizei, const GLfloat *) = func; \
   SET_by_offset(disp, _gloffset_VertexAttribs3fvNV, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_VertexAttribs3svNV)(GLuint, GLsizei, const GLshort *);
#define CALL_VertexAttribs3svNV(disp, parameters) (* GET_VertexAttribs3svNV(disp)) parameters
#define GET_VertexAttribs3svNV(disp) ((_glptr_VertexAttribs3svNV)(GET_by_offset((disp), _gloffset_VertexAttribs3svNV)))
#define SET_VertexAttribs3svNV(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLsizei, const GLshort *) = func; \
   SET_by_offset(disp, _gloffset_VertexAttribs3svNV, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_VertexAttribs4dvNV)(GLuint, GLsizei, const GLdouble *);
#define CALL_VertexAttribs4dvNV(disp, parameters) (* GET_VertexAttribs4dvNV(disp)) parameters
#define GET_VertexAttribs4dvNV(disp) ((_glptr_VertexAttribs4dvNV)(GET_by_offset((disp), _gloffset_VertexAttribs4dvNV)))
#define SET_VertexAttribs4dvNV(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLsizei, const GLdouble *) = func; \
   SET_by_offset(disp, _gloffset_VertexAttribs4dvNV, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_VertexAttribs4fvNV)(GLuint, GLsizei, const GLfloat *);
#define CALL_VertexAttribs4fvNV(disp, parameters) (* GET_VertexAttribs4fvNV(disp)) parameters
#define GET_VertexAttribs4fvNV(disp) ((_glptr_VertexAttribs4fvNV)(GET_by_offset((disp), _gloffset_VertexAttribs4fvNV)))
#define SET_VertexAttribs4fvNV(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLsizei, const GLfloat *) = func; \
   SET_by_offset(disp, _gloffset_VertexAttribs4fvNV, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_VertexAttribs4svNV)(GLuint, GLsizei, const GLshort *);
#define CALL_VertexAttribs4svNV(disp, parameters) (* GET_VertexAttribs4svNV(disp)) parameters
#define GET_VertexAttribs4svNV(disp) ((_glptr_VertexAttribs4svNV)(GET_by_offset((disp), _gloffset_VertexAttribs4svNV)))
#define SET_VertexAttribs4svNV(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLsizei, const GLshort *) = func; \
   SET_by_offset(disp, _gloffset_VertexAttribs4svNV, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_VertexAttribs4ubvNV)(GLuint, GLsizei, const GLubyte *);
#define CALL_VertexAttribs4ubvNV(disp, parameters) (* GET_VertexAttribs4ubvNV(disp)) parameters
#define GET_VertexAttribs4ubvNV(disp) ((_glptr_VertexAttribs4ubvNV)(GET_by_offset((disp), _gloffset_VertexAttribs4ubvNV)))
#define SET_VertexAttribs4ubvNV(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLsizei, const GLubyte *) = func; \
   SET_by_offset(disp, _gloffset_VertexAttribs4ubvNV, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_GetTexBumpParameterfvATI)(GLenum, GLfloat *);
#define CALL_GetTexBumpParameterfvATI(disp, parameters) (* GET_GetTexBumpParameterfvATI(disp)) parameters
#define GET_GetTexBumpParameterfvATI(disp) ((_glptr_GetTexBumpParameterfvATI)(GET_by_offset((disp), _gloffset_GetTexBumpParameterfvATI)))
#define SET_GetTexBumpParameterfvATI(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLfloat *) = func; \
   SET_by_offset(disp, _gloffset_GetTexBumpParameterfvATI, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_GetTexBumpParameterivATI)(GLenum, GLint *);
#define CALL_GetTexBumpParameterivATI(disp, parameters) (* GET_GetTexBumpParameterivATI(disp)) parameters
#define GET_GetTexBumpParameterivATI(disp) ((_glptr_GetTexBumpParameterivATI)(GET_by_offset((disp), _gloffset_GetTexBumpParameterivATI)))
#define SET_GetTexBumpParameterivATI(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLint *) = func; \
   SET_by_offset(disp, _gloffset_GetTexBumpParameterivATI, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_TexBumpParameterfvATI)(GLenum, const GLfloat *);
#define CALL_TexBumpParameterfvATI(disp, parameters) (* GET_TexBumpParameterfvATI(disp)) parameters
#define GET_TexBumpParameterfvATI(disp) ((_glptr_TexBumpParameterfvATI)(GET_by_offset((disp), _gloffset_TexBumpParameterfvATI)))
#define SET_TexBumpParameterfvATI(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, const GLfloat *) = func; \
   SET_by_offset(disp, _gloffset_TexBumpParameterfvATI, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_TexBumpParameterivATI)(GLenum, const GLint *);
#define CALL_TexBumpParameterivATI(disp, parameters) (* GET_TexBumpParameterivATI(disp)) parameters
#define GET_TexBumpParameterivATI(disp) ((_glptr_TexBumpParameterivATI)(GET_by_offset((disp), _gloffset_TexBumpParameterivATI)))
#define SET_TexBumpParameterivATI(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, const GLint *) = func; \
   SET_by_offset(disp, _gloffset_TexBumpParameterivATI, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_AlphaFragmentOp1ATI)(GLenum, GLuint, GLuint, GLuint, GLuint, GLuint);
#define CALL_AlphaFragmentOp1ATI(disp, parameters) (* GET_AlphaFragmentOp1ATI(disp)) parameters
#define GET_AlphaFragmentOp1ATI(disp) ((_glptr_AlphaFragmentOp1ATI)(GET_by_offset((disp), _gloffset_AlphaFragmentOp1ATI)))
#define SET_AlphaFragmentOp1ATI(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLuint, GLuint, GLuint, GLuint, GLuint) = func; \
   SET_by_offset(disp, _gloffset_AlphaFragmentOp1ATI, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_AlphaFragmentOp2ATI)(GLenum, GLuint, GLuint, GLuint, GLuint, GLuint, GLuint, GLuint, GLuint);
#define CALL_AlphaFragmentOp2ATI(disp, parameters) (* GET_AlphaFragmentOp2ATI(disp)) parameters
#define GET_AlphaFragmentOp2ATI(disp) ((_glptr_AlphaFragmentOp2ATI)(GET_by_offset((disp), _gloffset_AlphaFragmentOp2ATI)))
#define SET_AlphaFragmentOp2ATI(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLuint, GLuint, GLuint, GLuint, GLuint, GLuint, GLuint, GLuint) = func; \
   SET_by_offset(disp, _gloffset_AlphaFragmentOp2ATI, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_AlphaFragmentOp3ATI)(GLenum, GLuint, GLuint, GLuint, GLuint, GLuint, GLuint, GLuint, GLuint, GLuint, GLuint, GLuint);
#define CALL_AlphaFragmentOp3ATI(disp, parameters) (* GET_AlphaFragmentOp3ATI(disp)) parameters
#define GET_AlphaFragmentOp3ATI(disp) ((_glptr_AlphaFragmentOp3ATI)(GET_by_offset((disp), _gloffset_AlphaFragmentOp3ATI)))
#define SET_AlphaFragmentOp3ATI(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLuint, GLuint, GLuint, GLuint, GLuint, GLuint, GLuint, GLuint, GLuint, GLuint, GLuint) = func; \
   SET_by_offset(disp, _gloffset_AlphaFragmentOp3ATI, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_BeginFragmentShaderATI)(void);
#define CALL_BeginFragmentShaderATI(disp, parameters) (* GET_BeginFragmentShaderATI(disp)) parameters
#define GET_BeginFragmentShaderATI(disp) ((_glptr_BeginFragmentShaderATI)(GET_by_offset((disp), _gloffset_BeginFragmentShaderATI)))
#define SET_BeginFragmentShaderATI(disp, func) do { \
   void (GLAPIENTRYP fn)(void) = func; \
   SET_by_offset(disp, _gloffset_BeginFragmentShaderATI, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_BindFragmentShaderATI)(GLuint);
#define CALL_BindFragmentShaderATI(disp, parameters) (* GET_BindFragmentShaderATI(disp)) parameters
#define GET_BindFragmentShaderATI(disp) ((_glptr_BindFragmentShaderATI)(GET_by_offset((disp), _gloffset_BindFragmentShaderATI)))
#define SET_BindFragmentShaderATI(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint) = func; \
   SET_by_offset(disp, _gloffset_BindFragmentShaderATI, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_ColorFragmentOp1ATI)(GLenum, GLuint, GLuint, GLuint, GLuint, GLuint, GLuint);
#define CALL_ColorFragmentOp1ATI(disp, parameters) (* GET_ColorFragmentOp1ATI(disp)) parameters
#define GET_ColorFragmentOp1ATI(disp) ((_glptr_ColorFragmentOp1ATI)(GET_by_offset((disp), _gloffset_ColorFragmentOp1ATI)))
#define SET_ColorFragmentOp1ATI(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLuint, GLuint, GLuint, GLuint, GLuint, GLuint) = func; \
   SET_by_offset(disp, _gloffset_ColorFragmentOp1ATI, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_ColorFragmentOp2ATI)(GLenum, GLuint, GLuint, GLuint, GLuint, GLuint, GLuint, GLuint, GLuint, GLuint);
#define CALL_ColorFragmentOp2ATI(disp, parameters) (* GET_ColorFragmentOp2ATI(disp)) parameters
#define GET_ColorFragmentOp2ATI(disp) ((_glptr_ColorFragmentOp2ATI)(GET_by_offset((disp), _gloffset_ColorFragmentOp2ATI)))
#define SET_ColorFragmentOp2ATI(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLuint, GLuint, GLuint, GLuint, GLuint, GLuint, GLuint, GLuint, GLuint) = func; \
   SET_by_offset(disp, _gloffset_ColorFragmentOp2ATI, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_ColorFragmentOp3ATI)(GLenum, GLuint, GLuint, GLuint, GLuint, GLuint, GLuint, GLuint, GLuint, GLuint, GLuint, GLuint, GLuint);
#define CALL_ColorFragmentOp3ATI(disp, parameters) (* GET_ColorFragmentOp3ATI(disp)) parameters
#define GET_ColorFragmentOp3ATI(disp) ((_glptr_ColorFragmentOp3ATI)(GET_by_offset((disp), _gloffset_ColorFragmentOp3ATI)))
#define SET_ColorFragmentOp3ATI(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLuint, GLuint, GLuint, GLuint, GLuint, GLuint, GLuint, GLuint, GLuint, GLuint, GLuint, GLuint) = func; \
   SET_by_offset(disp, _gloffset_ColorFragmentOp3ATI, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_DeleteFragmentShaderATI)(GLuint);
#define CALL_DeleteFragmentShaderATI(disp, parameters) (* GET_DeleteFragmentShaderATI(disp)) parameters
#define GET_DeleteFragmentShaderATI(disp) ((_glptr_DeleteFragmentShaderATI)(GET_by_offset((disp), _gloffset_DeleteFragmentShaderATI)))
#define SET_DeleteFragmentShaderATI(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint) = func; \
   SET_by_offset(disp, _gloffset_DeleteFragmentShaderATI, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_EndFragmentShaderATI)(void);
#define CALL_EndFragmentShaderATI(disp, parameters) (* GET_EndFragmentShaderATI(disp)) parameters
#define GET_EndFragmentShaderATI(disp) ((_glptr_EndFragmentShaderATI)(GET_by_offset((disp), _gloffset_EndFragmentShaderATI)))
#define SET_EndFragmentShaderATI(disp, func) do { \
   void (GLAPIENTRYP fn)(void) = func; \
   SET_by_offset(disp, _gloffset_EndFragmentShaderATI, fn); \
} while (0)

typedef GLuint (GLAPIENTRYP _glptr_GenFragmentShadersATI)(GLuint);
#define CALL_GenFragmentShadersATI(disp, parameters) (* GET_GenFragmentShadersATI(disp)) parameters
#define GET_GenFragmentShadersATI(disp) ((_glptr_GenFragmentShadersATI)(GET_by_offset((disp), _gloffset_GenFragmentShadersATI)))
#define SET_GenFragmentShadersATI(disp, func) do { \
   GLuint (GLAPIENTRYP fn)(GLuint) = func; \
   SET_by_offset(disp, _gloffset_GenFragmentShadersATI, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_PassTexCoordATI)(GLuint, GLuint, GLenum);
#define CALL_PassTexCoordATI(disp, parameters) (* GET_PassTexCoordATI(disp)) parameters
#define GET_PassTexCoordATI(disp) ((_glptr_PassTexCoordATI)(GET_by_offset((disp), _gloffset_PassTexCoordATI)))
#define SET_PassTexCoordATI(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLuint, GLenum) = func; \
   SET_by_offset(disp, _gloffset_PassTexCoordATI, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_SampleMapATI)(GLuint, GLuint, GLenum);
#define CALL_SampleMapATI(disp, parameters) (* GET_SampleMapATI(disp)) parameters
#define GET_SampleMapATI(disp) ((_glptr_SampleMapATI)(GET_by_offset((disp), _gloffset_SampleMapATI)))
#define SET_SampleMapATI(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLuint, GLenum) = func; \
   SET_by_offset(disp, _gloffset_SampleMapATI, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_SetFragmentShaderConstantATI)(GLuint, const GLfloat *);
#define CALL_SetFragmentShaderConstantATI(disp, parameters) (* GET_SetFragmentShaderConstantATI(disp)) parameters
#define GET_SetFragmentShaderConstantATI(disp) ((_glptr_SetFragmentShaderConstantATI)(GET_by_offset((disp), _gloffset_SetFragmentShaderConstantATI)))
#define SET_SetFragmentShaderConstantATI(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, const GLfloat *) = func; \
   SET_by_offset(disp, _gloffset_SetFragmentShaderConstantATI, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_DepthRangeArrayfvOES)(GLuint, GLsizei, const GLfloat *);
#define CALL_DepthRangeArrayfvOES(disp, parameters) (* GET_DepthRangeArrayfvOES(disp)) parameters
#define GET_DepthRangeArrayfvOES(disp) ((_glptr_DepthRangeArrayfvOES)(GET_by_offset((disp), _gloffset_DepthRangeArrayfvOES)))
#define SET_DepthRangeArrayfvOES(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLsizei, const GLfloat *) = func; \
   SET_by_offset(disp, _gloffset_DepthRangeArrayfvOES, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_DepthRangeIndexedfOES)(GLuint, GLfloat, GLfloat);
#define CALL_DepthRangeIndexedfOES(disp, parameters) (* GET_DepthRangeIndexedfOES(disp)) parameters
#define GET_DepthRangeIndexedfOES(disp) ((_glptr_DepthRangeIndexedfOES)(GET_by_offset((disp), _gloffset_DepthRangeIndexedfOES)))
#define SET_DepthRangeIndexedfOES(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLfloat, GLfloat) = func; \
   SET_by_offset(disp, _gloffset_DepthRangeIndexedfOES, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_ActiveStencilFaceEXT)(GLenum);
#define CALL_ActiveStencilFaceEXT(disp, parameters) (* GET_ActiveStencilFaceEXT(disp)) parameters
#define GET_ActiveStencilFaceEXT(disp) ((_glptr_ActiveStencilFaceEXT)(GET_by_offset((disp), _gloffset_ActiveStencilFaceEXT)))
#define SET_ActiveStencilFaceEXT(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum) = func; \
   SET_by_offset(disp, _gloffset_ActiveStencilFaceEXT, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_GetProgramNamedParameterdvNV)(GLuint, GLsizei, const GLubyte *, GLdouble *);
#define CALL_GetProgramNamedParameterdvNV(disp, parameters) (* GET_GetProgramNamedParameterdvNV(disp)) parameters
#define GET_GetProgramNamedParameterdvNV(disp) ((_glptr_GetProgramNamedParameterdvNV)(GET_by_offset((disp), _gloffset_GetProgramNamedParameterdvNV)))
#define SET_GetProgramNamedParameterdvNV(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLsizei, const GLubyte *, GLdouble *) = func; \
   SET_by_offset(disp, _gloffset_GetProgramNamedParameterdvNV, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_GetProgramNamedParameterfvNV)(GLuint, GLsizei, const GLubyte *, GLfloat *);
#define CALL_GetProgramNamedParameterfvNV(disp, parameters) (* GET_GetProgramNamedParameterfvNV(disp)) parameters
#define GET_GetProgramNamedParameterfvNV(disp) ((_glptr_GetProgramNamedParameterfvNV)(GET_by_offset((disp), _gloffset_GetProgramNamedParameterfvNV)))
#define SET_GetProgramNamedParameterfvNV(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLsizei, const GLubyte *, GLfloat *) = func; \
   SET_by_offset(disp, _gloffset_GetProgramNamedParameterfvNV, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_ProgramNamedParameter4dNV)(GLuint, GLsizei, const GLubyte *, GLdouble, GLdouble, GLdouble, GLdouble);
#define CALL_ProgramNamedParameter4dNV(disp, parameters) (* GET_ProgramNamedParameter4dNV(disp)) parameters
#define GET_ProgramNamedParameter4dNV(disp) ((_glptr_ProgramNamedParameter4dNV)(GET_by_offset((disp), _gloffset_ProgramNamedParameter4dNV)))
#define SET_ProgramNamedParameter4dNV(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLsizei, const GLubyte *, GLdouble, GLdouble, GLdouble, GLdouble) = func; \
   SET_by_offset(disp, _gloffset_ProgramNamedParameter4dNV, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_ProgramNamedParameter4dvNV)(GLuint, GLsizei, const GLubyte *, const GLdouble *);
#define CALL_ProgramNamedParameter4dvNV(disp, parameters) (* GET_ProgramNamedParameter4dvNV(disp)) parameters
#define GET_ProgramNamedParameter4dvNV(disp) ((_glptr_ProgramNamedParameter4dvNV)(GET_by_offset((disp), _gloffset_ProgramNamedParameter4dvNV)))
#define SET_ProgramNamedParameter4dvNV(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLsizei, const GLubyte *, const GLdouble *) = func; \
   SET_by_offset(disp, _gloffset_ProgramNamedParameter4dvNV, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_ProgramNamedParameter4fNV)(GLuint, GLsizei, const GLubyte *, GLfloat, GLfloat, GLfloat, GLfloat);
#define CALL_ProgramNamedParameter4fNV(disp, parameters) (* GET_ProgramNamedParameter4fNV(disp)) parameters
#define GET_ProgramNamedParameter4fNV(disp) ((_glptr_ProgramNamedParameter4fNV)(GET_by_offset((disp), _gloffset_ProgramNamedParameter4fNV)))
#define SET_ProgramNamedParameter4fNV(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLsizei, const GLubyte *, GLfloat, GLfloat, GLfloat, GLfloat) = func; \
   SET_by_offset(disp, _gloffset_ProgramNamedParameter4fNV, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_ProgramNamedParameter4fvNV)(GLuint, GLsizei, const GLubyte *, const GLfloat *);
#define CALL_ProgramNamedParameter4fvNV(disp, parameters) (* GET_ProgramNamedParameter4fvNV(disp)) parameters
#define GET_ProgramNamedParameter4fvNV(disp) ((_glptr_ProgramNamedParameter4fvNV)(GET_by_offset((disp), _gloffset_ProgramNamedParameter4fvNV)))
#define SET_ProgramNamedParameter4fvNV(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLsizei, const GLubyte *, const GLfloat *) = func; \
   SET_by_offset(disp, _gloffset_ProgramNamedParameter4fvNV, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_PrimitiveRestartNV)(void);
#define CALL_PrimitiveRestartNV(disp, parameters) (* GET_PrimitiveRestartNV(disp)) parameters
#define GET_PrimitiveRestartNV(disp) ((_glptr_PrimitiveRestartNV)(GET_by_offset((disp), _gloffset_PrimitiveRestartNV)))
#define SET_PrimitiveRestartNV(disp, func) do { \
   void (GLAPIENTRYP fn)(void) = func; \
   SET_by_offset(disp, _gloffset_PrimitiveRestartNV, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_GetTexGenxvOES)(GLenum, GLenum, GLfixed *);
#define CALL_GetTexGenxvOES(disp, parameters) (* GET_GetTexGenxvOES(disp)) parameters
#define GET_GetTexGenxvOES(disp) ((_glptr_GetTexGenxvOES)(GET_by_offset((disp), _gloffset_GetTexGenxvOES)))
#define SET_GetTexGenxvOES(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLenum, GLfixed *) = func; \
   SET_by_offset(disp, _gloffset_GetTexGenxvOES, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_TexGenxOES)(GLenum, GLenum, GLint);
#define CALL_TexGenxOES(disp, parameters) (* GET_TexGenxOES(disp)) parameters
#define GET_TexGenxOES(disp) ((_glptr_TexGenxOES)(GET_by_offset((disp), _gloffset_TexGenxOES)))
#define SET_TexGenxOES(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLenum, GLint) = func; \
   SET_by_offset(disp, _gloffset_TexGenxOES, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_TexGenxvOES)(GLenum, GLenum, const GLfixed *);
#define CALL_TexGenxvOES(disp, parameters) (* GET_TexGenxvOES(disp)) parameters
#define GET_TexGenxvOES(disp) ((_glptr_TexGenxvOES)(GET_by_offset((disp), _gloffset_TexGenxvOES)))
#define SET_TexGenxvOES(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLenum, const GLfixed *) = func; \
   SET_by_offset(disp, _gloffset_TexGenxvOES, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_DepthBoundsEXT)(GLclampd, GLclampd);
#define CALL_DepthBoundsEXT(disp, parameters) (* GET_DepthBoundsEXT(disp)) parameters
#define GET_DepthBoundsEXT(disp) ((_glptr_DepthBoundsEXT)(GET_by_offset((disp), _gloffset_DepthBoundsEXT)))
#define SET_DepthBoundsEXT(disp, func) do { \
   void (GLAPIENTRYP fn)(GLclampd, GLclampd) = func; \
   SET_by_offset(disp, _gloffset_DepthBoundsEXT, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_BindFramebufferEXT)(GLenum, GLuint);
#define CALL_BindFramebufferEXT(disp, parameters) (* GET_BindFramebufferEXT(disp)) parameters
#define GET_BindFramebufferEXT(disp) ((_glptr_BindFramebufferEXT)(GET_by_offset((disp), _gloffset_BindFramebufferEXT)))
#define SET_BindFramebufferEXT(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLuint) = func; \
   SET_by_offset(disp, _gloffset_BindFramebufferEXT, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_BindRenderbufferEXT)(GLenum, GLuint);
#define CALL_BindRenderbufferEXT(disp, parameters) (* GET_BindRenderbufferEXT(disp)) parameters
#define GET_BindRenderbufferEXT(disp) ((_glptr_BindRenderbufferEXT)(GET_by_offset((disp), _gloffset_BindRenderbufferEXT)))
#define SET_BindRenderbufferEXT(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLuint) = func; \
   SET_by_offset(disp, _gloffset_BindRenderbufferEXT, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_StringMarkerGREMEDY)(GLsizei, const GLvoid *);
#define CALL_StringMarkerGREMEDY(disp, parameters) (* GET_StringMarkerGREMEDY(disp)) parameters
#define GET_StringMarkerGREMEDY(disp) ((_glptr_StringMarkerGREMEDY)(GET_by_offset((disp), _gloffset_StringMarkerGREMEDY)))
#define SET_StringMarkerGREMEDY(disp, func) do { \
   void (GLAPIENTRYP fn)(GLsizei, const GLvoid *) = func; \
   SET_by_offset(disp, _gloffset_StringMarkerGREMEDY, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_BufferParameteriAPPLE)(GLenum, GLenum, GLint);
#define CALL_BufferParameteriAPPLE(disp, parameters) (* GET_BufferParameteriAPPLE(disp)) parameters
#define GET_BufferParameteriAPPLE(disp) ((_glptr_BufferParameteriAPPLE)(GET_by_offset((disp), _gloffset_BufferParameteriAPPLE)))
#define SET_BufferParameteriAPPLE(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLenum, GLint) = func; \
   SET_by_offset(disp, _gloffset_BufferParameteriAPPLE, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_FlushMappedBufferRangeAPPLE)(GLenum, GLintptr, GLsizeiptr);
#define CALL_FlushMappedBufferRangeAPPLE(disp, parameters) (* GET_FlushMappedBufferRangeAPPLE(disp)) parameters
#define GET_FlushMappedBufferRangeAPPLE(disp) ((_glptr_FlushMappedBufferRangeAPPLE)(GET_by_offset((disp), _gloffset_FlushMappedBufferRangeAPPLE)))
#define SET_FlushMappedBufferRangeAPPLE(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLintptr, GLsizeiptr) = func; \
   SET_by_offset(disp, _gloffset_FlushMappedBufferRangeAPPLE, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_VertexAttribI1iEXT)(GLuint, GLint);
#define CALL_VertexAttribI1iEXT(disp, parameters) (* GET_VertexAttribI1iEXT(disp)) parameters
#define GET_VertexAttribI1iEXT(disp) ((_glptr_VertexAttribI1iEXT)(GET_by_offset((disp), _gloffset_VertexAttribI1iEXT)))
#define SET_VertexAttribI1iEXT(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLint) = func; \
   SET_by_offset(disp, _gloffset_VertexAttribI1iEXT, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_VertexAttribI1uiEXT)(GLuint, GLuint);
#define CALL_VertexAttribI1uiEXT(disp, parameters) (* GET_VertexAttribI1uiEXT(disp)) parameters
#define GET_VertexAttribI1uiEXT(disp) ((_glptr_VertexAttribI1uiEXT)(GET_by_offset((disp), _gloffset_VertexAttribI1uiEXT)))
#define SET_VertexAttribI1uiEXT(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLuint) = func; \
   SET_by_offset(disp, _gloffset_VertexAttribI1uiEXT, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_VertexAttribI2iEXT)(GLuint, GLint, GLint);
#define CALL_VertexAttribI2iEXT(disp, parameters) (* GET_VertexAttribI2iEXT(disp)) parameters
#define GET_VertexAttribI2iEXT(disp) ((_glptr_VertexAttribI2iEXT)(GET_by_offset((disp), _gloffset_VertexAttribI2iEXT)))
#define SET_VertexAttribI2iEXT(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLint, GLint) = func; \
   SET_by_offset(disp, _gloffset_VertexAttribI2iEXT, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_VertexAttribI2ivEXT)(GLuint, const GLint *);
#define CALL_VertexAttribI2ivEXT(disp, parameters) (* GET_VertexAttribI2ivEXT(disp)) parameters
#define GET_VertexAttribI2ivEXT(disp) ((_glptr_VertexAttribI2ivEXT)(GET_by_offset((disp), _gloffset_VertexAttribI2ivEXT)))
#define SET_VertexAttribI2ivEXT(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, const GLint *) = func; \
   SET_by_offset(disp, _gloffset_VertexAttribI2ivEXT, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_VertexAttribI2uiEXT)(GLuint, GLuint, GLuint);
#define CALL_VertexAttribI2uiEXT(disp, parameters) (* GET_VertexAttribI2uiEXT(disp)) parameters
#define GET_VertexAttribI2uiEXT(disp) ((_glptr_VertexAttribI2uiEXT)(GET_by_offset((disp), _gloffset_VertexAttribI2uiEXT)))
#define SET_VertexAttribI2uiEXT(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLuint, GLuint) = func; \
   SET_by_offset(disp, _gloffset_VertexAttribI2uiEXT, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_VertexAttribI2uivEXT)(GLuint, const GLuint *);
#define CALL_VertexAttribI2uivEXT(disp, parameters) (* GET_VertexAttribI2uivEXT(disp)) parameters
#define GET_VertexAttribI2uivEXT(disp) ((_glptr_VertexAttribI2uivEXT)(GET_by_offset((disp), _gloffset_VertexAttribI2uivEXT)))
#define SET_VertexAttribI2uivEXT(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, const GLuint *) = func; \
   SET_by_offset(disp, _gloffset_VertexAttribI2uivEXT, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_VertexAttribI3iEXT)(GLuint, GLint, GLint, GLint);
#define CALL_VertexAttribI3iEXT(disp, parameters) (* GET_VertexAttribI3iEXT(disp)) parameters
#define GET_VertexAttribI3iEXT(disp) ((_glptr_VertexAttribI3iEXT)(GET_by_offset((disp), _gloffset_VertexAttribI3iEXT)))
#define SET_VertexAttribI3iEXT(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLint, GLint, GLint) = func; \
   SET_by_offset(disp, _gloffset_VertexAttribI3iEXT, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_VertexAttribI3ivEXT)(GLuint, const GLint *);
#define CALL_VertexAttribI3ivEXT(disp, parameters) (* GET_VertexAttribI3ivEXT(disp)) parameters
#define GET_VertexAttribI3ivEXT(disp) ((_glptr_VertexAttribI3ivEXT)(GET_by_offset((disp), _gloffset_VertexAttribI3ivEXT)))
#define SET_VertexAttribI3ivEXT(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, const GLint *) = func; \
   SET_by_offset(disp, _gloffset_VertexAttribI3ivEXT, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_VertexAttribI3uiEXT)(GLuint, GLuint, GLuint, GLuint);
#define CALL_VertexAttribI3uiEXT(disp, parameters) (* GET_VertexAttribI3uiEXT(disp)) parameters
#define GET_VertexAttribI3uiEXT(disp) ((_glptr_VertexAttribI3uiEXT)(GET_by_offset((disp), _gloffset_VertexAttribI3uiEXT)))
#define SET_VertexAttribI3uiEXT(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLuint, GLuint, GLuint) = func; \
   SET_by_offset(disp, _gloffset_VertexAttribI3uiEXT, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_VertexAttribI3uivEXT)(GLuint, const GLuint *);
#define CALL_VertexAttribI3uivEXT(disp, parameters) (* GET_VertexAttribI3uivEXT(disp)) parameters
#define GET_VertexAttribI3uivEXT(disp) ((_glptr_VertexAttribI3uivEXT)(GET_by_offset((disp), _gloffset_VertexAttribI3uivEXT)))
#define SET_VertexAttribI3uivEXT(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, const GLuint *) = func; \
   SET_by_offset(disp, _gloffset_VertexAttribI3uivEXT, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_VertexAttribI4iEXT)(GLuint, GLint, GLint, GLint, GLint);
#define CALL_VertexAttribI4iEXT(disp, parameters) (* GET_VertexAttribI4iEXT(disp)) parameters
#define GET_VertexAttribI4iEXT(disp) ((_glptr_VertexAttribI4iEXT)(GET_by_offset((disp), _gloffset_VertexAttribI4iEXT)))
#define SET_VertexAttribI4iEXT(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLint, GLint, GLint, GLint) = func; \
   SET_by_offset(disp, _gloffset_VertexAttribI4iEXT, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_VertexAttribI4ivEXT)(GLuint, const GLint *);
#define CALL_VertexAttribI4ivEXT(disp, parameters) (* GET_VertexAttribI4ivEXT(disp)) parameters
#define GET_VertexAttribI4ivEXT(disp) ((_glptr_VertexAttribI4ivEXT)(GET_by_offset((disp), _gloffset_VertexAttribI4ivEXT)))
#define SET_VertexAttribI4ivEXT(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, const GLint *) = func; \
   SET_by_offset(disp, _gloffset_VertexAttribI4ivEXT, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_VertexAttribI4uiEXT)(GLuint, GLuint, GLuint, GLuint, GLuint);
#define CALL_VertexAttribI4uiEXT(disp, parameters) (* GET_VertexAttribI4uiEXT(disp)) parameters
#define GET_VertexAttribI4uiEXT(disp) ((_glptr_VertexAttribI4uiEXT)(GET_by_offset((disp), _gloffset_VertexAttribI4uiEXT)))
#define SET_VertexAttribI4uiEXT(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLuint, GLuint, GLuint, GLuint) = func; \
   SET_by_offset(disp, _gloffset_VertexAttribI4uiEXT, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_VertexAttribI4uivEXT)(GLuint, const GLuint *);
#define CALL_VertexAttribI4uivEXT(disp, parameters) (* GET_VertexAttribI4uivEXT(disp)) parameters
#define GET_VertexAttribI4uivEXT(disp) ((_glptr_VertexAttribI4uivEXT)(GET_by_offset((disp), _gloffset_VertexAttribI4uivEXT)))
#define SET_VertexAttribI4uivEXT(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, const GLuint *) = func; \
   SET_by_offset(disp, _gloffset_VertexAttribI4uivEXT, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_ClearColorIiEXT)(GLint, GLint, GLint, GLint);
#define CALL_ClearColorIiEXT(disp, parameters) (* GET_ClearColorIiEXT(disp)) parameters
#define GET_ClearColorIiEXT(disp) ((_glptr_ClearColorIiEXT)(GET_by_offset((disp), _gloffset_ClearColorIiEXT)))
#define SET_ClearColorIiEXT(disp, func) do { \
   void (GLAPIENTRYP fn)(GLint, GLint, GLint, GLint) = func; \
   SET_by_offset(disp, _gloffset_ClearColorIiEXT, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_ClearColorIuiEXT)(GLuint, GLuint, GLuint, GLuint);
#define CALL_ClearColorIuiEXT(disp, parameters) (* GET_ClearColorIuiEXT(disp)) parameters
#define GET_ClearColorIuiEXT(disp) ((_glptr_ClearColorIuiEXT)(GET_by_offset((disp), _gloffset_ClearColorIuiEXT)))
#define SET_ClearColorIuiEXT(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLuint, GLuint, GLuint) = func; \
   SET_by_offset(disp, _gloffset_ClearColorIuiEXT, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_BindBufferOffsetEXT)(GLenum, GLuint, GLuint, GLintptr);
#define CALL_BindBufferOffsetEXT(disp, parameters) (* GET_BindBufferOffsetEXT(disp)) parameters
#define GET_BindBufferOffsetEXT(disp) ((_glptr_BindBufferOffsetEXT)(GET_by_offset((disp), _gloffset_BindBufferOffsetEXT)))
#define SET_BindBufferOffsetEXT(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLuint, GLuint, GLintptr) = func; \
   SET_by_offset(disp, _gloffset_BindBufferOffsetEXT, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_BeginPerfMonitorAMD)(GLuint);
#define CALL_BeginPerfMonitorAMD(disp, parameters) (* GET_BeginPerfMonitorAMD(disp)) parameters
#define GET_BeginPerfMonitorAMD(disp) ((_glptr_BeginPerfMonitorAMD)(GET_by_offset((disp), _gloffset_BeginPerfMonitorAMD)))
#define SET_BeginPerfMonitorAMD(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint) = func; \
   SET_by_offset(disp, _gloffset_BeginPerfMonitorAMD, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_DeletePerfMonitorsAMD)(GLsizei, GLuint *);
#define CALL_DeletePerfMonitorsAMD(disp, parameters) (* GET_DeletePerfMonitorsAMD(disp)) parameters
#define GET_DeletePerfMonitorsAMD(disp) ((_glptr_DeletePerfMonitorsAMD)(GET_by_offset((disp), _gloffset_DeletePerfMonitorsAMD)))
#define SET_DeletePerfMonitorsAMD(disp, func) do { \
   void (GLAPIENTRYP fn)(GLsizei, GLuint *) = func; \
   SET_by_offset(disp, _gloffset_DeletePerfMonitorsAMD, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_EndPerfMonitorAMD)(GLuint);
#define CALL_EndPerfMonitorAMD(disp, parameters) (* GET_EndPerfMonitorAMD(disp)) parameters
#define GET_EndPerfMonitorAMD(disp) ((_glptr_EndPerfMonitorAMD)(GET_by_offset((disp), _gloffset_EndPerfMonitorAMD)))
#define SET_EndPerfMonitorAMD(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint) = func; \
   SET_by_offset(disp, _gloffset_EndPerfMonitorAMD, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_GenPerfMonitorsAMD)(GLsizei, GLuint *);
#define CALL_GenPerfMonitorsAMD(disp, parameters) (* GET_GenPerfMonitorsAMD(disp)) parameters
#define GET_GenPerfMonitorsAMD(disp) ((_glptr_GenPerfMonitorsAMD)(GET_by_offset((disp), _gloffset_GenPerfMonitorsAMD)))
#define SET_GenPerfMonitorsAMD(disp, func) do { \
   void (GLAPIENTRYP fn)(GLsizei, GLuint *) = func; \
   SET_by_offset(disp, _gloffset_GenPerfMonitorsAMD, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_GetPerfMonitorCounterDataAMD)(GLuint, GLenum, GLsizei, GLuint *, GLint *);
#define CALL_GetPerfMonitorCounterDataAMD(disp, parameters) (* GET_GetPerfMonitorCounterDataAMD(disp)) parameters
#define GET_GetPerfMonitorCounterDataAMD(disp) ((_glptr_GetPerfMonitorCounterDataAMD)(GET_by_offset((disp), _gloffset_GetPerfMonitorCounterDataAMD)))
#define SET_GetPerfMonitorCounterDataAMD(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLenum, GLsizei, GLuint *, GLint *) = func; \
   SET_by_offset(disp, _gloffset_GetPerfMonitorCounterDataAMD, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_GetPerfMonitorCounterInfoAMD)(GLuint, GLuint, GLenum, GLvoid *);
#define CALL_GetPerfMonitorCounterInfoAMD(disp, parameters) (* GET_GetPerfMonitorCounterInfoAMD(disp)) parameters
#define GET_GetPerfMonitorCounterInfoAMD(disp) ((_glptr_GetPerfMonitorCounterInfoAMD)(GET_by_offset((disp), _gloffset_GetPerfMonitorCounterInfoAMD)))
#define SET_GetPerfMonitorCounterInfoAMD(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLuint, GLenum, GLvoid *) = func; \
   SET_by_offset(disp, _gloffset_GetPerfMonitorCounterInfoAMD, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_GetPerfMonitorCounterStringAMD)(GLuint, GLuint, GLsizei, GLsizei *, GLchar *);
#define CALL_GetPerfMonitorCounterStringAMD(disp, parameters) (* GET_GetPerfMonitorCounterStringAMD(disp)) parameters
#define GET_GetPerfMonitorCounterStringAMD(disp) ((_glptr_GetPerfMonitorCounterStringAMD)(GET_by_offset((disp), _gloffset_GetPerfMonitorCounterStringAMD)))
#define SET_GetPerfMonitorCounterStringAMD(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLuint, GLsizei, GLsizei *, GLchar *) = func; \
   SET_by_offset(disp, _gloffset_GetPerfMonitorCounterStringAMD, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_GetPerfMonitorCountersAMD)(GLuint, GLint *, GLint *, GLsizei, GLuint *);
#define CALL_GetPerfMonitorCountersAMD(disp, parameters) (* GET_GetPerfMonitorCountersAMD(disp)) parameters
#define GET_GetPerfMonitorCountersAMD(disp) ((_glptr_GetPerfMonitorCountersAMD)(GET_by_offset((disp), _gloffset_GetPerfMonitorCountersAMD)))
#define SET_GetPerfMonitorCountersAMD(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLint *, GLint *, GLsizei, GLuint *) = func; \
   SET_by_offset(disp, _gloffset_GetPerfMonitorCountersAMD, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_GetPerfMonitorGroupStringAMD)(GLuint, GLsizei, GLsizei *, GLchar *);
#define CALL_GetPerfMonitorGroupStringAMD(disp, parameters) (* GET_GetPerfMonitorGroupStringAMD(disp)) parameters
#define GET_GetPerfMonitorGroupStringAMD(disp) ((_glptr_GetPerfMonitorGroupStringAMD)(GET_by_offset((disp), _gloffset_GetPerfMonitorGroupStringAMD)))
#define SET_GetPerfMonitorGroupStringAMD(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLsizei, GLsizei *, GLchar *) = func; \
   SET_by_offset(disp, _gloffset_GetPerfMonitorGroupStringAMD, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_GetPerfMonitorGroupsAMD)(GLint *, GLsizei, GLuint *);
#define CALL_GetPerfMonitorGroupsAMD(disp, parameters) (* GET_GetPerfMonitorGroupsAMD(disp)) parameters
#define GET_GetPerfMonitorGroupsAMD(disp) ((_glptr_GetPerfMonitorGroupsAMD)(GET_by_offset((disp), _gloffset_GetPerfMonitorGroupsAMD)))
#define SET_GetPerfMonitorGroupsAMD(disp, func) do { \
   void (GLAPIENTRYP fn)(GLint *, GLsizei, GLuint *) = func; \
   SET_by_offset(disp, _gloffset_GetPerfMonitorGroupsAMD, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_SelectPerfMonitorCountersAMD)(GLuint, GLboolean, GLuint, GLint, GLuint *);
#define CALL_SelectPerfMonitorCountersAMD(disp, parameters) (* GET_SelectPerfMonitorCountersAMD(disp)) parameters
#define GET_SelectPerfMonitorCountersAMD(disp) ((_glptr_SelectPerfMonitorCountersAMD)(GET_by_offset((disp), _gloffset_SelectPerfMonitorCountersAMD)))
#define SET_SelectPerfMonitorCountersAMD(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLboolean, GLuint, GLint, GLuint *) = func; \
   SET_by_offset(disp, _gloffset_SelectPerfMonitorCountersAMD, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_GetObjectParameterivAPPLE)(GLenum, GLuint, GLenum, GLint *);
#define CALL_GetObjectParameterivAPPLE(disp, parameters) (* GET_GetObjectParameterivAPPLE(disp)) parameters
#define GET_GetObjectParameterivAPPLE(disp) ((_glptr_GetObjectParameterivAPPLE)(GET_by_offset((disp), _gloffset_GetObjectParameterivAPPLE)))
#define SET_GetObjectParameterivAPPLE(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLuint, GLenum, GLint *) = func; \
   SET_by_offset(disp, _gloffset_GetObjectParameterivAPPLE, fn); \
} while (0)

typedef GLenum (GLAPIENTRYP _glptr_ObjectPurgeableAPPLE)(GLenum, GLuint, GLenum);
#define CALL_ObjectPurgeableAPPLE(disp, parameters) (* GET_ObjectPurgeableAPPLE(disp)) parameters
#define GET_ObjectPurgeableAPPLE(disp) ((_glptr_ObjectPurgeableAPPLE)(GET_by_offset((disp), _gloffset_ObjectPurgeableAPPLE)))
#define SET_ObjectPurgeableAPPLE(disp, func) do { \
   GLenum (GLAPIENTRYP fn)(GLenum, GLuint, GLenum) = func; \
   SET_by_offset(disp, _gloffset_ObjectPurgeableAPPLE, fn); \
} while (0)

typedef GLenum (GLAPIENTRYP _glptr_ObjectUnpurgeableAPPLE)(GLenum, GLuint, GLenum);
#define CALL_ObjectUnpurgeableAPPLE(disp, parameters) (* GET_ObjectUnpurgeableAPPLE(disp)) parameters
#define GET_ObjectUnpurgeableAPPLE(disp) ((_glptr_ObjectUnpurgeableAPPLE)(GET_by_offset((disp), _gloffset_ObjectUnpurgeableAPPLE)))
#define SET_ObjectUnpurgeableAPPLE(disp, func) do { \
   GLenum (GLAPIENTRYP fn)(GLenum, GLuint, GLenum) = func; \
   SET_by_offset(disp, _gloffset_ObjectUnpurgeableAPPLE, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_ActiveProgramEXT)(GLuint);
#define CALL_ActiveProgramEXT(disp, parameters) (* GET_ActiveProgramEXT(disp)) parameters
#define GET_ActiveProgramEXT(disp) ((_glptr_ActiveProgramEXT)(GET_by_offset((disp), _gloffset_ActiveProgramEXT)))
#define SET_ActiveProgramEXT(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint) = func; \
   SET_by_offset(disp, _gloffset_ActiveProgramEXT, fn); \
} while (0)

typedef GLuint (GLAPIENTRYP _glptr_CreateShaderProgramEXT)(GLenum, const GLchar *);
#define CALL_CreateShaderProgramEXT(disp, parameters) (* GET_CreateShaderProgramEXT(disp)) parameters
#define GET_CreateShaderProgramEXT(disp) ((_glptr_CreateShaderProgramEXT)(GET_by_offset((disp), _gloffset_CreateShaderProgramEXT)))
#define SET_CreateShaderProgramEXT(disp, func) do { \
   GLuint (GLAPIENTRYP fn)(GLenum, const GLchar *) = func; \
   SET_by_offset(disp, _gloffset_CreateShaderProgramEXT, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_UseShaderProgramEXT)(GLenum, GLuint);
#define CALL_UseShaderProgramEXT(disp, parameters) (* GET_UseShaderProgramEXT(disp)) parameters
#define GET_UseShaderProgramEXT(disp) ((_glptr_UseShaderProgramEXT)(GET_by_offset((disp), _gloffset_UseShaderProgramEXT)))
#define SET_UseShaderProgramEXT(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLuint) = func; \
   SET_by_offset(disp, _gloffset_UseShaderProgramEXT, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_TextureBarrierNV)(void);
#define CALL_TextureBarrierNV(disp, parameters) (* GET_TextureBarrierNV(disp)) parameters
#define GET_TextureBarrierNV(disp) ((_glptr_TextureBarrierNV)(GET_by_offset((disp), _gloffset_TextureBarrierNV)))
#define SET_TextureBarrierNV(disp, func) do { \
   void (GLAPIENTRYP fn)(void) = func; \
   SET_by_offset(disp, _gloffset_TextureBarrierNV, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_VDPAUFiniNV)(void);
#define CALL_VDPAUFiniNV(disp, parameters) (* GET_VDPAUFiniNV(disp)) parameters
#define GET_VDPAUFiniNV(disp) ((_glptr_VDPAUFiniNV)(GET_by_offset((disp), _gloffset_VDPAUFiniNV)))
#define SET_VDPAUFiniNV(disp, func) do { \
   void (GLAPIENTRYP fn)(void) = func; \
   SET_by_offset(disp, _gloffset_VDPAUFiniNV, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_VDPAUGetSurfaceivNV)(GLintptr, GLenum, GLsizei, GLsizei *, GLint *);
#define CALL_VDPAUGetSurfaceivNV(disp, parameters) (* GET_VDPAUGetSurfaceivNV(disp)) parameters
#define GET_VDPAUGetSurfaceivNV(disp) ((_glptr_VDPAUGetSurfaceivNV)(GET_by_offset((disp), _gloffset_VDPAUGetSurfaceivNV)))
#define SET_VDPAUGetSurfaceivNV(disp, func) do { \
   void (GLAPIENTRYP fn)(GLintptr, GLenum, GLsizei, GLsizei *, GLint *) = func; \
   SET_by_offset(disp, _gloffset_VDPAUGetSurfaceivNV, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_VDPAUInitNV)(const GLvoid *, const GLvoid *);
#define CALL_VDPAUInitNV(disp, parameters) (* GET_VDPAUInitNV(disp)) parameters
#define GET_VDPAUInitNV(disp) ((_glptr_VDPAUInitNV)(GET_by_offset((disp), _gloffset_VDPAUInitNV)))
#define SET_VDPAUInitNV(disp, func) do { \
   void (GLAPIENTRYP fn)(const GLvoid *, const GLvoid *) = func; \
   SET_by_offset(disp, _gloffset_VDPAUInitNV, fn); \
} while (0)

typedef GLboolean (GLAPIENTRYP _glptr_VDPAUIsSurfaceNV)(GLintptr);
#define CALL_VDPAUIsSurfaceNV(disp, parameters) (* GET_VDPAUIsSurfaceNV(disp)) parameters
#define GET_VDPAUIsSurfaceNV(disp) ((_glptr_VDPAUIsSurfaceNV)(GET_by_offset((disp), _gloffset_VDPAUIsSurfaceNV)))
#define SET_VDPAUIsSurfaceNV(disp, func) do { \
   GLboolean (GLAPIENTRYP fn)(GLintptr) = func; \
   SET_by_offset(disp, _gloffset_VDPAUIsSurfaceNV, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_VDPAUMapSurfacesNV)(GLsizei, const GLintptr *);
#define CALL_VDPAUMapSurfacesNV(disp, parameters) (* GET_VDPAUMapSurfacesNV(disp)) parameters
#define GET_VDPAUMapSurfacesNV(disp) ((_glptr_VDPAUMapSurfacesNV)(GET_by_offset((disp), _gloffset_VDPAUMapSurfacesNV)))
#define SET_VDPAUMapSurfacesNV(disp, func) do { \
   void (GLAPIENTRYP fn)(GLsizei, const GLintptr *) = func; \
   SET_by_offset(disp, _gloffset_VDPAUMapSurfacesNV, fn); \
} while (0)

typedef GLintptr (GLAPIENTRYP _glptr_VDPAURegisterOutputSurfaceNV)(const GLvoid *, GLenum, GLsizei, const GLuint *);
#define CALL_VDPAURegisterOutputSurfaceNV(disp, parameters) (* GET_VDPAURegisterOutputSurfaceNV(disp)) parameters
#define GET_VDPAURegisterOutputSurfaceNV(disp) ((_glptr_VDPAURegisterOutputSurfaceNV)(GET_by_offset((disp), _gloffset_VDPAURegisterOutputSurfaceNV)))
#define SET_VDPAURegisterOutputSurfaceNV(disp, func) do { \
   GLintptr (GLAPIENTRYP fn)(const GLvoid *, GLenum, GLsizei, const GLuint *) = func; \
   SET_by_offset(disp, _gloffset_VDPAURegisterOutputSurfaceNV, fn); \
} while (0)

typedef GLintptr (GLAPIENTRYP _glptr_VDPAURegisterVideoSurfaceNV)(const GLvoid *, GLenum, GLsizei, const GLuint *);
#define CALL_VDPAURegisterVideoSurfaceNV(disp, parameters) (* GET_VDPAURegisterVideoSurfaceNV(disp)) parameters
#define GET_VDPAURegisterVideoSurfaceNV(disp) ((_glptr_VDPAURegisterVideoSurfaceNV)(GET_by_offset((disp), _gloffset_VDPAURegisterVideoSurfaceNV)))
#define SET_VDPAURegisterVideoSurfaceNV(disp, func) do { \
   GLintptr (GLAPIENTRYP fn)(const GLvoid *, GLenum, GLsizei, const GLuint *) = func; \
   SET_by_offset(disp, _gloffset_VDPAURegisterVideoSurfaceNV, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_VDPAUSurfaceAccessNV)(GLintptr, GLenum);
#define CALL_VDPAUSurfaceAccessNV(disp, parameters) (* GET_VDPAUSurfaceAccessNV(disp)) parameters
#define GET_VDPAUSurfaceAccessNV(disp) ((_glptr_VDPAUSurfaceAccessNV)(GET_by_offset((disp), _gloffset_VDPAUSurfaceAccessNV)))
#define SET_VDPAUSurfaceAccessNV(disp, func) do { \
   void (GLAPIENTRYP fn)(GLintptr, GLenum) = func; \
   SET_by_offset(disp, _gloffset_VDPAUSurfaceAccessNV, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_VDPAUUnmapSurfacesNV)(GLsizei, const GLintptr *);
#define CALL_VDPAUUnmapSurfacesNV(disp, parameters) (* GET_VDPAUUnmapSurfacesNV(disp)) parameters
#define GET_VDPAUUnmapSurfacesNV(disp) ((_glptr_VDPAUUnmapSurfacesNV)(GET_by_offset((disp), _gloffset_VDPAUUnmapSurfacesNV)))
#define SET_VDPAUUnmapSurfacesNV(disp, func) do { \
   void (GLAPIENTRYP fn)(GLsizei, const GLintptr *) = func; \
   SET_by_offset(disp, _gloffset_VDPAUUnmapSurfacesNV, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_VDPAUUnregisterSurfaceNV)(GLintptr);
#define CALL_VDPAUUnregisterSurfaceNV(disp, parameters) (* GET_VDPAUUnregisterSurfaceNV(disp)) parameters
#define GET_VDPAUUnregisterSurfaceNV(disp) ((_glptr_VDPAUUnregisterSurfaceNV)(GET_by_offset((disp), _gloffset_VDPAUUnregisterSurfaceNV)))
#define SET_VDPAUUnregisterSurfaceNV(disp, func) do { \
   void (GLAPIENTRYP fn)(GLintptr) = func; \
   SET_by_offset(disp, _gloffset_VDPAUUnregisterSurfaceNV, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_BeginPerfQueryINTEL)(GLuint);
#define CALL_BeginPerfQueryINTEL(disp, parameters) (* GET_BeginPerfQueryINTEL(disp)) parameters
#define GET_BeginPerfQueryINTEL(disp) ((_glptr_BeginPerfQueryINTEL)(GET_by_offset((disp), _gloffset_BeginPerfQueryINTEL)))
#define SET_BeginPerfQueryINTEL(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint) = func; \
   SET_by_offset(disp, _gloffset_BeginPerfQueryINTEL, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_CreatePerfQueryINTEL)(GLuint, GLuint *);
#define CALL_CreatePerfQueryINTEL(disp, parameters) (* GET_CreatePerfQueryINTEL(disp)) parameters
#define GET_CreatePerfQueryINTEL(disp) ((_glptr_CreatePerfQueryINTEL)(GET_by_offset((disp), _gloffset_CreatePerfQueryINTEL)))
#define SET_CreatePerfQueryINTEL(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLuint *) = func; \
   SET_by_offset(disp, _gloffset_CreatePerfQueryINTEL, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_DeletePerfQueryINTEL)(GLuint);
#define CALL_DeletePerfQueryINTEL(disp, parameters) (* GET_DeletePerfQueryINTEL(disp)) parameters
#define GET_DeletePerfQueryINTEL(disp) ((_glptr_DeletePerfQueryINTEL)(GET_by_offset((disp), _gloffset_DeletePerfQueryINTEL)))
#define SET_DeletePerfQueryINTEL(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint) = func; \
   SET_by_offset(disp, _gloffset_DeletePerfQueryINTEL, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_EndPerfQueryINTEL)(GLuint);
#define CALL_EndPerfQueryINTEL(disp, parameters) (* GET_EndPerfQueryINTEL(disp)) parameters
#define GET_EndPerfQueryINTEL(disp) ((_glptr_EndPerfQueryINTEL)(GET_by_offset((disp), _gloffset_EndPerfQueryINTEL)))
#define SET_EndPerfQueryINTEL(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint) = func; \
   SET_by_offset(disp, _gloffset_EndPerfQueryINTEL, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_GetFirstPerfQueryIdINTEL)(GLuint *);
#define CALL_GetFirstPerfQueryIdINTEL(disp, parameters) (* GET_GetFirstPerfQueryIdINTEL(disp)) parameters
#define GET_GetFirstPerfQueryIdINTEL(disp) ((_glptr_GetFirstPerfQueryIdINTEL)(GET_by_offset((disp), _gloffset_GetFirstPerfQueryIdINTEL)))
#define SET_GetFirstPerfQueryIdINTEL(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint *) = func; \
   SET_by_offset(disp, _gloffset_GetFirstPerfQueryIdINTEL, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_GetNextPerfQueryIdINTEL)(GLuint, GLuint *);
#define CALL_GetNextPerfQueryIdINTEL(disp, parameters) (* GET_GetNextPerfQueryIdINTEL(disp)) parameters
#define GET_GetNextPerfQueryIdINTEL(disp) ((_glptr_GetNextPerfQueryIdINTEL)(GET_by_offset((disp), _gloffset_GetNextPerfQueryIdINTEL)))
#define SET_GetNextPerfQueryIdINTEL(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLuint *) = func; \
   SET_by_offset(disp, _gloffset_GetNextPerfQueryIdINTEL, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_GetPerfCounterInfoINTEL)(GLuint, GLuint, GLuint, GLchar *, GLuint, GLchar *, GLuint *, GLuint *, GLuint *, GLuint *, GLuint64 *);
#define CALL_GetPerfCounterInfoINTEL(disp, parameters) (* GET_GetPerfCounterInfoINTEL(disp)) parameters
#define GET_GetPerfCounterInfoINTEL(disp) ((_glptr_GetPerfCounterInfoINTEL)(GET_by_offset((disp), _gloffset_GetPerfCounterInfoINTEL)))
#define SET_GetPerfCounterInfoINTEL(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLuint, GLuint, GLchar *, GLuint, GLchar *, GLuint *, GLuint *, GLuint *, GLuint *, GLuint64 *) = func; \
   SET_by_offset(disp, _gloffset_GetPerfCounterInfoINTEL, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_GetPerfQueryDataINTEL)(GLuint, GLuint, GLsizei, GLvoid *, GLuint *);
#define CALL_GetPerfQueryDataINTEL(disp, parameters) (* GET_GetPerfQueryDataINTEL(disp)) parameters
#define GET_GetPerfQueryDataINTEL(disp) ((_glptr_GetPerfQueryDataINTEL)(GET_by_offset((disp), _gloffset_GetPerfQueryDataINTEL)))
#define SET_GetPerfQueryDataINTEL(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLuint, GLsizei, GLvoid *, GLuint *) = func; \
   SET_by_offset(disp, _gloffset_GetPerfQueryDataINTEL, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_GetPerfQueryIdByNameINTEL)(GLchar *, GLuint *);
#define CALL_GetPerfQueryIdByNameINTEL(disp, parameters) (* GET_GetPerfQueryIdByNameINTEL(disp)) parameters
#define GET_GetPerfQueryIdByNameINTEL(disp) ((_glptr_GetPerfQueryIdByNameINTEL)(GET_by_offset((disp), _gloffset_GetPerfQueryIdByNameINTEL)))
#define SET_GetPerfQueryIdByNameINTEL(disp, func) do { \
   void (GLAPIENTRYP fn)(GLchar *, GLuint *) = func; \
   SET_by_offset(disp, _gloffset_GetPerfQueryIdByNameINTEL, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_GetPerfQueryInfoINTEL)(GLuint, GLuint, GLchar *, GLuint *, GLuint *, GLuint *, GLuint *);
#define CALL_GetPerfQueryInfoINTEL(disp, parameters) (* GET_GetPerfQueryInfoINTEL(disp)) parameters
#define GET_GetPerfQueryInfoINTEL(disp) ((_glptr_GetPerfQueryInfoINTEL)(GET_by_offset((disp), _gloffset_GetPerfQueryInfoINTEL)))
#define SET_GetPerfQueryInfoINTEL(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLuint, GLchar *, GLuint *, GLuint *, GLuint *, GLuint *) = func; \
   SET_by_offset(disp, _gloffset_GetPerfQueryInfoINTEL, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_PolygonOffsetClampEXT)(GLfloat, GLfloat, GLfloat);
#define CALL_PolygonOffsetClampEXT(disp, parameters) (* GET_PolygonOffsetClampEXT(disp)) parameters
#define GET_PolygonOffsetClampEXT(disp) ((_glptr_PolygonOffsetClampEXT)(GET_by_offset((disp), _gloffset_PolygonOffsetClampEXT)))
#define SET_PolygonOffsetClampEXT(disp, func) do { \
   void (GLAPIENTRYP fn)(GLfloat, GLfloat, GLfloat) = func; \
   SET_by_offset(disp, _gloffset_PolygonOffsetClampEXT, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_SubpixelPrecisionBiasNV)(GLuint, GLuint);
#define CALL_SubpixelPrecisionBiasNV(disp, parameters) (* GET_SubpixelPrecisionBiasNV(disp)) parameters
#define GET_SubpixelPrecisionBiasNV(disp) ((_glptr_SubpixelPrecisionBiasNV)(GET_by_offset((disp), _gloffset_SubpixelPrecisionBiasNV)))
#define SET_SubpixelPrecisionBiasNV(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLuint) = func; \
   SET_by_offset(disp, _gloffset_SubpixelPrecisionBiasNV, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_ConservativeRasterParameterfNV)(GLenum, GLfloat);
#define CALL_ConservativeRasterParameterfNV(disp, parameters) (* GET_ConservativeRasterParameterfNV(disp)) parameters
#define GET_ConservativeRasterParameterfNV(disp) ((_glptr_ConservativeRasterParameterfNV)(GET_by_offset((disp), _gloffset_ConservativeRasterParameterfNV)))
#define SET_ConservativeRasterParameterfNV(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLfloat) = func; \
   SET_by_offset(disp, _gloffset_ConservativeRasterParameterfNV, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_ConservativeRasterParameteriNV)(GLenum, GLint);
#define CALL_ConservativeRasterParameteriNV(disp, parameters) (* GET_ConservativeRasterParameteriNV(disp)) parameters
#define GET_ConservativeRasterParameteriNV(disp) ((_glptr_ConservativeRasterParameteriNV)(GET_by_offset((disp), _gloffset_ConservativeRasterParameteriNV)))
#define SET_ConservativeRasterParameteriNV(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLint) = func; \
   SET_by_offset(disp, _gloffset_ConservativeRasterParameteriNV, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_WindowRectanglesEXT)(GLenum, GLsizei, const GLint *);
#define CALL_WindowRectanglesEXT(disp, parameters) (* GET_WindowRectanglesEXT(disp)) parameters
#define GET_WindowRectanglesEXT(disp) ((_glptr_WindowRectanglesEXT)(GET_by_offset((disp), _gloffset_WindowRectanglesEXT)))
#define SET_WindowRectanglesEXT(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLsizei, const GLint *) = func; \
   SET_by_offset(disp, _gloffset_WindowRectanglesEXT, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_BufferStorageMemEXT)(GLenum, GLsizeiptr, GLuint, GLuint64);
#define CALL_BufferStorageMemEXT(disp, parameters) (* GET_BufferStorageMemEXT(disp)) parameters
#define GET_BufferStorageMemEXT(disp) ((_glptr_BufferStorageMemEXT)(GET_by_offset((disp), _gloffset_BufferStorageMemEXT)))
#define SET_BufferStorageMemEXT(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLsizeiptr, GLuint, GLuint64) = func; \
   SET_by_offset(disp, _gloffset_BufferStorageMemEXT, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_CreateMemoryObjectsEXT)(GLsizei, GLuint *);
#define CALL_CreateMemoryObjectsEXT(disp, parameters) (* GET_CreateMemoryObjectsEXT(disp)) parameters
#define GET_CreateMemoryObjectsEXT(disp) ((_glptr_CreateMemoryObjectsEXT)(GET_by_offset((disp), _gloffset_CreateMemoryObjectsEXT)))
#define SET_CreateMemoryObjectsEXT(disp, func) do { \
   void (GLAPIENTRYP fn)(GLsizei, GLuint *) = func; \
   SET_by_offset(disp, _gloffset_CreateMemoryObjectsEXT, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_DeleteMemoryObjectsEXT)(GLsizei, const GLuint *);
#define CALL_DeleteMemoryObjectsEXT(disp, parameters) (* GET_DeleteMemoryObjectsEXT(disp)) parameters
#define GET_DeleteMemoryObjectsEXT(disp) ((_glptr_DeleteMemoryObjectsEXT)(GET_by_offset((disp), _gloffset_DeleteMemoryObjectsEXT)))
#define SET_DeleteMemoryObjectsEXT(disp, func) do { \
   void (GLAPIENTRYP fn)(GLsizei, const GLuint *) = func; \
   SET_by_offset(disp, _gloffset_DeleteMemoryObjectsEXT, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_DeleteSemaphoresEXT)(GLsizei, const GLuint *);
#define CALL_DeleteSemaphoresEXT(disp, parameters) (* GET_DeleteSemaphoresEXT(disp)) parameters
#define GET_DeleteSemaphoresEXT(disp) ((_glptr_DeleteSemaphoresEXT)(GET_by_offset((disp), _gloffset_DeleteSemaphoresEXT)))
#define SET_DeleteSemaphoresEXT(disp, func) do { \
   void (GLAPIENTRYP fn)(GLsizei, const GLuint *) = func; \
   SET_by_offset(disp, _gloffset_DeleteSemaphoresEXT, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_GenSemaphoresEXT)(GLsizei, GLuint *);
#define CALL_GenSemaphoresEXT(disp, parameters) (* GET_GenSemaphoresEXT(disp)) parameters
#define GET_GenSemaphoresEXT(disp) ((_glptr_GenSemaphoresEXT)(GET_by_offset((disp), _gloffset_GenSemaphoresEXT)))
#define SET_GenSemaphoresEXT(disp, func) do { \
   void (GLAPIENTRYP fn)(GLsizei, GLuint *) = func; \
   SET_by_offset(disp, _gloffset_GenSemaphoresEXT, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_GetMemoryObjectParameterivEXT)(GLuint, GLenum, GLint *);
#define CALL_GetMemoryObjectParameterivEXT(disp, parameters) (* GET_GetMemoryObjectParameterivEXT(disp)) parameters
#define GET_GetMemoryObjectParameterivEXT(disp) ((_glptr_GetMemoryObjectParameterivEXT)(GET_by_offset((disp), _gloffset_GetMemoryObjectParameterivEXT)))
#define SET_GetMemoryObjectParameterivEXT(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLenum, GLint *) = func; \
   SET_by_offset(disp, _gloffset_GetMemoryObjectParameterivEXT, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_GetSemaphoreParameterui64vEXT)(GLuint, GLenum, GLuint64 *);
#define CALL_GetSemaphoreParameterui64vEXT(disp, parameters) (* GET_GetSemaphoreParameterui64vEXT(disp)) parameters
#define GET_GetSemaphoreParameterui64vEXT(disp) ((_glptr_GetSemaphoreParameterui64vEXT)(GET_by_offset((disp), _gloffset_GetSemaphoreParameterui64vEXT)))
#define SET_GetSemaphoreParameterui64vEXT(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLenum, GLuint64 *) = func; \
   SET_by_offset(disp, _gloffset_GetSemaphoreParameterui64vEXT, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_GetUnsignedBytei_vEXT)(GLenum, GLuint, GLubyte *);
#define CALL_GetUnsignedBytei_vEXT(disp, parameters) (* GET_GetUnsignedBytei_vEXT(disp)) parameters
#define GET_GetUnsignedBytei_vEXT(disp) ((_glptr_GetUnsignedBytei_vEXT)(GET_by_offset((disp), _gloffset_GetUnsignedBytei_vEXT)))
#define SET_GetUnsignedBytei_vEXT(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLuint, GLubyte *) = func; \
   SET_by_offset(disp, _gloffset_GetUnsignedBytei_vEXT, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_GetUnsignedBytevEXT)(GLenum, GLubyte *);
#define CALL_GetUnsignedBytevEXT(disp, parameters) (* GET_GetUnsignedBytevEXT(disp)) parameters
#define GET_GetUnsignedBytevEXT(disp) ((_glptr_GetUnsignedBytevEXT)(GET_by_offset((disp), _gloffset_GetUnsignedBytevEXT)))
#define SET_GetUnsignedBytevEXT(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLubyte *) = func; \
   SET_by_offset(disp, _gloffset_GetUnsignedBytevEXT, fn); \
} while (0)

typedef GLboolean (GLAPIENTRYP _glptr_IsMemoryObjectEXT)(GLuint);
#define CALL_IsMemoryObjectEXT(disp, parameters) (* GET_IsMemoryObjectEXT(disp)) parameters
#define GET_IsMemoryObjectEXT(disp) ((_glptr_IsMemoryObjectEXT)(GET_by_offset((disp), _gloffset_IsMemoryObjectEXT)))
#define SET_IsMemoryObjectEXT(disp, func) do { \
   GLboolean (GLAPIENTRYP fn)(GLuint) = func; \
   SET_by_offset(disp, _gloffset_IsMemoryObjectEXT, fn); \
} while (0)

typedef GLboolean (GLAPIENTRYP _glptr_IsSemaphoreEXT)(GLuint);
#define CALL_IsSemaphoreEXT(disp, parameters) (* GET_IsSemaphoreEXT(disp)) parameters
#define GET_IsSemaphoreEXT(disp) ((_glptr_IsSemaphoreEXT)(GET_by_offset((disp), _gloffset_IsSemaphoreEXT)))
#define SET_IsSemaphoreEXT(disp, func) do { \
   GLboolean (GLAPIENTRYP fn)(GLuint) = func; \
   SET_by_offset(disp, _gloffset_IsSemaphoreEXT, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_MemoryObjectParameterivEXT)(GLuint, GLenum, const GLint *);
#define CALL_MemoryObjectParameterivEXT(disp, parameters) (* GET_MemoryObjectParameterivEXT(disp)) parameters
#define GET_MemoryObjectParameterivEXT(disp) ((_glptr_MemoryObjectParameterivEXT)(GET_by_offset((disp), _gloffset_MemoryObjectParameterivEXT)))
#define SET_MemoryObjectParameterivEXT(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLenum, const GLint *) = func; \
   SET_by_offset(disp, _gloffset_MemoryObjectParameterivEXT, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_NamedBufferStorageMemEXT)(GLuint, GLsizeiptr, GLuint, GLuint64);
#define CALL_NamedBufferStorageMemEXT(disp, parameters) (* GET_NamedBufferStorageMemEXT(disp)) parameters
#define GET_NamedBufferStorageMemEXT(disp) ((_glptr_NamedBufferStorageMemEXT)(GET_by_offset((disp), _gloffset_NamedBufferStorageMemEXT)))
#define SET_NamedBufferStorageMemEXT(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLsizeiptr, GLuint, GLuint64) = func; \
   SET_by_offset(disp, _gloffset_NamedBufferStorageMemEXT, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_SemaphoreParameterui64vEXT)(GLuint, GLenum, const GLuint64 *);
#define CALL_SemaphoreParameterui64vEXT(disp, parameters) (* GET_SemaphoreParameterui64vEXT(disp)) parameters
#define GET_SemaphoreParameterui64vEXT(disp) ((_glptr_SemaphoreParameterui64vEXT)(GET_by_offset((disp), _gloffset_SemaphoreParameterui64vEXT)))
#define SET_SemaphoreParameterui64vEXT(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLenum, const GLuint64 *) = func; \
   SET_by_offset(disp, _gloffset_SemaphoreParameterui64vEXT, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_SignalSemaphoreEXT)(GLuint, GLuint, const GLuint *, GLuint, const GLuint *, const GLenum *);
#define CALL_SignalSemaphoreEXT(disp, parameters) (* GET_SignalSemaphoreEXT(disp)) parameters
#define GET_SignalSemaphoreEXT(disp) ((_glptr_SignalSemaphoreEXT)(GET_by_offset((disp), _gloffset_SignalSemaphoreEXT)))
#define SET_SignalSemaphoreEXT(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLuint, const GLuint *, GLuint, const GLuint *, const GLenum *) = func; \
   SET_by_offset(disp, _gloffset_SignalSemaphoreEXT, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_TexStorageMem1DEXT)(GLenum, GLsizei, GLenum, GLsizei, GLuint, GLuint64);
#define CALL_TexStorageMem1DEXT(disp, parameters) (* GET_TexStorageMem1DEXT(disp)) parameters
#define GET_TexStorageMem1DEXT(disp) ((_glptr_TexStorageMem1DEXT)(GET_by_offset((disp), _gloffset_TexStorageMem1DEXT)))
#define SET_TexStorageMem1DEXT(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLsizei, GLenum, GLsizei, GLuint, GLuint64) = func; \
   SET_by_offset(disp, _gloffset_TexStorageMem1DEXT, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_TexStorageMem2DEXT)(GLenum, GLsizei, GLenum, GLsizei, GLsizei, GLuint, GLuint64);
#define CALL_TexStorageMem2DEXT(disp, parameters) (* GET_TexStorageMem2DEXT(disp)) parameters
#define GET_TexStorageMem2DEXT(disp) ((_glptr_TexStorageMem2DEXT)(GET_by_offset((disp), _gloffset_TexStorageMem2DEXT)))
#define SET_TexStorageMem2DEXT(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLsizei, GLenum, GLsizei, GLsizei, GLuint, GLuint64) = func; \
   SET_by_offset(disp, _gloffset_TexStorageMem2DEXT, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_TexStorageMem2DMultisampleEXT)(GLenum, GLsizei, GLenum, GLsizei, GLsizei, GLboolean, GLuint, GLuint64);
#define CALL_TexStorageMem2DMultisampleEXT(disp, parameters) (* GET_TexStorageMem2DMultisampleEXT(disp)) parameters
#define GET_TexStorageMem2DMultisampleEXT(disp) ((_glptr_TexStorageMem2DMultisampleEXT)(GET_by_offset((disp), _gloffset_TexStorageMem2DMultisampleEXT)))
#define SET_TexStorageMem2DMultisampleEXT(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLsizei, GLenum, GLsizei, GLsizei, GLboolean, GLuint, GLuint64) = func; \
   SET_by_offset(disp, _gloffset_TexStorageMem2DMultisampleEXT, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_TexStorageMem3DEXT)(GLenum, GLsizei, GLenum, GLsizei, GLsizei, GLsizei, GLuint, GLuint64);
#define CALL_TexStorageMem3DEXT(disp, parameters) (* GET_TexStorageMem3DEXT(disp)) parameters
#define GET_TexStorageMem3DEXT(disp) ((_glptr_TexStorageMem3DEXT)(GET_by_offset((disp), _gloffset_TexStorageMem3DEXT)))
#define SET_TexStorageMem3DEXT(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLsizei, GLenum, GLsizei, GLsizei, GLsizei, GLuint, GLuint64) = func; \
   SET_by_offset(disp, _gloffset_TexStorageMem3DEXT, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_TexStorageMem3DMultisampleEXT)(GLenum, GLsizei, GLenum, GLsizei, GLsizei, GLsizei, GLboolean, GLuint, GLuint64);
#define CALL_TexStorageMem3DMultisampleEXT(disp, parameters) (* GET_TexStorageMem3DMultisampleEXT(disp)) parameters
#define GET_TexStorageMem3DMultisampleEXT(disp) ((_glptr_TexStorageMem3DMultisampleEXT)(GET_by_offset((disp), _gloffset_TexStorageMem3DMultisampleEXT)))
#define SET_TexStorageMem3DMultisampleEXT(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLsizei, GLenum, GLsizei, GLsizei, GLsizei, GLboolean, GLuint, GLuint64) = func; \
   SET_by_offset(disp, _gloffset_TexStorageMem3DMultisampleEXT, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_TextureStorageMem1DEXT)(GLuint, GLsizei, GLenum, GLsizei, GLuint, GLuint64);
#define CALL_TextureStorageMem1DEXT(disp, parameters) (* GET_TextureStorageMem1DEXT(disp)) parameters
#define GET_TextureStorageMem1DEXT(disp) ((_glptr_TextureStorageMem1DEXT)(GET_by_offset((disp), _gloffset_TextureStorageMem1DEXT)))
#define SET_TextureStorageMem1DEXT(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLsizei, GLenum, GLsizei, GLuint, GLuint64) = func; \
   SET_by_offset(disp, _gloffset_TextureStorageMem1DEXT, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_TextureStorageMem2DEXT)(GLenum, GLsizei, GLenum, GLsizei, GLsizei, GLuint, GLuint64);
#define CALL_TextureStorageMem2DEXT(disp, parameters) (* GET_TextureStorageMem2DEXT(disp)) parameters
#define GET_TextureStorageMem2DEXT(disp) ((_glptr_TextureStorageMem2DEXT)(GET_by_offset((disp), _gloffset_TextureStorageMem2DEXT)))
#define SET_TextureStorageMem2DEXT(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLsizei, GLenum, GLsizei, GLsizei, GLuint, GLuint64) = func; \
   SET_by_offset(disp, _gloffset_TextureStorageMem2DEXT, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_TextureStorageMem2DMultisampleEXT)(GLuint, GLsizei, GLenum, GLsizei, GLsizei, GLboolean, GLuint, GLuint64);
#define CALL_TextureStorageMem2DMultisampleEXT(disp, parameters) (* GET_TextureStorageMem2DMultisampleEXT(disp)) parameters
#define GET_TextureStorageMem2DMultisampleEXT(disp) ((_glptr_TextureStorageMem2DMultisampleEXT)(GET_by_offset((disp), _gloffset_TextureStorageMem2DMultisampleEXT)))
#define SET_TextureStorageMem2DMultisampleEXT(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLsizei, GLenum, GLsizei, GLsizei, GLboolean, GLuint, GLuint64) = func; \
   SET_by_offset(disp, _gloffset_TextureStorageMem2DMultisampleEXT, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_TextureStorageMem3DEXT)(GLuint, GLsizei, GLenum, GLsizei, GLsizei, GLsizei, GLuint, GLuint64);
#define CALL_TextureStorageMem3DEXT(disp, parameters) (* GET_TextureStorageMem3DEXT(disp)) parameters
#define GET_TextureStorageMem3DEXT(disp) ((_glptr_TextureStorageMem3DEXT)(GET_by_offset((disp), _gloffset_TextureStorageMem3DEXT)))
#define SET_TextureStorageMem3DEXT(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLsizei, GLenum, GLsizei, GLsizei, GLsizei, GLuint, GLuint64) = func; \
   SET_by_offset(disp, _gloffset_TextureStorageMem3DEXT, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_TextureStorageMem3DMultisampleEXT)(GLuint, GLsizei, GLenum, GLsizei, GLsizei, GLsizei, GLboolean, GLuint, GLuint64);
#define CALL_TextureStorageMem3DMultisampleEXT(disp, parameters) (* GET_TextureStorageMem3DMultisampleEXT(disp)) parameters
#define GET_TextureStorageMem3DMultisampleEXT(disp) ((_glptr_TextureStorageMem3DMultisampleEXT)(GET_by_offset((disp), _gloffset_TextureStorageMem3DMultisampleEXT)))
#define SET_TextureStorageMem3DMultisampleEXT(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLsizei, GLenum, GLsizei, GLsizei, GLsizei, GLboolean, GLuint, GLuint64) = func; \
   SET_by_offset(disp, _gloffset_TextureStorageMem3DMultisampleEXT, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_WaitSemaphoreEXT)(GLuint, GLuint, const GLuint *, GLuint, const GLuint *, const GLenum *);
#define CALL_WaitSemaphoreEXT(disp, parameters) (* GET_WaitSemaphoreEXT(disp)) parameters
#define GET_WaitSemaphoreEXT(disp) ((_glptr_WaitSemaphoreEXT)(GET_by_offset((disp), _gloffset_WaitSemaphoreEXT)))
#define SET_WaitSemaphoreEXT(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLuint, const GLuint *, GLuint, const GLuint *, const GLenum *) = func; \
   SET_by_offset(disp, _gloffset_WaitSemaphoreEXT, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_ImportMemoryFdEXT)(GLuint, GLuint64, GLenum, GLint);
#define CALL_ImportMemoryFdEXT(disp, parameters) (* GET_ImportMemoryFdEXT(disp)) parameters
#define GET_ImportMemoryFdEXT(disp) ((_glptr_ImportMemoryFdEXT)(GET_by_offset((disp), _gloffset_ImportMemoryFdEXT)))
#define SET_ImportMemoryFdEXT(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLuint64, GLenum, GLint) = func; \
   SET_by_offset(disp, _gloffset_ImportMemoryFdEXT, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_ImportSemaphoreFdEXT)(GLuint, GLenum, GLint);
#define CALL_ImportSemaphoreFdEXT(disp, parameters) (* GET_ImportSemaphoreFdEXT(disp)) parameters
#define GET_ImportSemaphoreFdEXT(disp) ((_glptr_ImportSemaphoreFdEXT)(GET_by_offset((disp), _gloffset_ImportSemaphoreFdEXT)))
#define SET_ImportSemaphoreFdEXT(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLenum, GLint) = func; \
   SET_by_offset(disp, _gloffset_ImportSemaphoreFdEXT, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_FramebufferFetchBarrierEXT)(void);
#define CALL_FramebufferFetchBarrierEXT(disp, parameters) (* GET_FramebufferFetchBarrierEXT(disp)) parameters
#define GET_FramebufferFetchBarrierEXT(disp) ((_glptr_FramebufferFetchBarrierEXT)(GET_by_offset((disp), _gloffset_FramebufferFetchBarrierEXT)))
#define SET_FramebufferFetchBarrierEXT(disp, func) do { \
   void (GLAPIENTRYP fn)(void) = func; \
   SET_by_offset(disp, _gloffset_FramebufferFetchBarrierEXT, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_NamedRenderbufferStorageMultisampleAdvancedAMD)(GLuint, GLsizei, GLsizei, GLenum, GLsizei, GLsizei);
#define CALL_NamedRenderbufferStorageMultisampleAdvancedAMD(disp, parameters) (* GET_NamedRenderbufferStorageMultisampleAdvancedAMD(disp)) parameters
#define GET_NamedRenderbufferStorageMultisampleAdvancedAMD(disp) ((_glptr_NamedRenderbufferStorageMultisampleAdvancedAMD)(GET_by_offset((disp), _gloffset_NamedRenderbufferStorageMultisampleAdvancedAMD)))
#define SET_NamedRenderbufferStorageMultisampleAdvancedAMD(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLsizei, GLsizei, GLenum, GLsizei, GLsizei) = func; \
   SET_by_offset(disp, _gloffset_NamedRenderbufferStorageMultisampleAdvancedAMD, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_RenderbufferStorageMultisampleAdvancedAMD)(GLenum, GLsizei, GLsizei, GLenum, GLsizei, GLsizei);
#define CALL_RenderbufferStorageMultisampleAdvancedAMD(disp, parameters) (* GET_RenderbufferStorageMultisampleAdvancedAMD(disp)) parameters
#define GET_RenderbufferStorageMultisampleAdvancedAMD(disp) ((_glptr_RenderbufferStorageMultisampleAdvancedAMD)(GET_by_offset((disp), _gloffset_RenderbufferStorageMultisampleAdvancedAMD)))
#define SET_RenderbufferStorageMultisampleAdvancedAMD(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLsizei, GLsizei, GLenum, GLsizei, GLsizei) = func; \
   SET_by_offset(disp, _gloffset_RenderbufferStorageMultisampleAdvancedAMD, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_StencilFuncSeparateATI)(GLenum, GLenum, GLint, GLuint);
#define CALL_StencilFuncSeparateATI(disp, parameters) (* GET_StencilFuncSeparateATI(disp)) parameters
#define GET_StencilFuncSeparateATI(disp) ((_glptr_StencilFuncSeparateATI)(GET_by_offset((disp), _gloffset_StencilFuncSeparateATI)))
#define SET_StencilFuncSeparateATI(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLenum, GLint, GLuint) = func; \
   SET_by_offset(disp, _gloffset_StencilFuncSeparateATI, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_ProgramEnvParameters4fvEXT)(GLenum, GLuint, GLsizei, const GLfloat *);
#define CALL_ProgramEnvParameters4fvEXT(disp, parameters) (* GET_ProgramEnvParameters4fvEXT(disp)) parameters
#define GET_ProgramEnvParameters4fvEXT(disp) ((_glptr_ProgramEnvParameters4fvEXT)(GET_by_offset((disp), _gloffset_ProgramEnvParameters4fvEXT)))
#define SET_ProgramEnvParameters4fvEXT(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLuint, GLsizei, const GLfloat *) = func; \
   SET_by_offset(disp, _gloffset_ProgramEnvParameters4fvEXT, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_ProgramLocalParameters4fvEXT)(GLenum, GLuint, GLsizei, const GLfloat *);
#define CALL_ProgramLocalParameters4fvEXT(disp, parameters) (* GET_ProgramLocalParameters4fvEXT(disp)) parameters
#define GET_ProgramLocalParameters4fvEXT(disp) ((_glptr_ProgramLocalParameters4fvEXT)(GET_by_offset((disp), _gloffset_ProgramLocalParameters4fvEXT)))
#define SET_ProgramLocalParameters4fvEXT(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLuint, GLsizei, const GLfloat *) = func; \
   SET_by_offset(disp, _gloffset_ProgramLocalParameters4fvEXT, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_EGLImageTargetRenderbufferStorageOES)(GLenum, GLvoid *);
#define CALL_EGLImageTargetRenderbufferStorageOES(disp, parameters) (* GET_EGLImageTargetRenderbufferStorageOES(disp)) parameters
#define GET_EGLImageTargetRenderbufferStorageOES(disp) ((_glptr_EGLImageTargetRenderbufferStorageOES)(GET_by_offset((disp), _gloffset_EGLImageTargetRenderbufferStorageOES)))
#define SET_EGLImageTargetRenderbufferStorageOES(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLvoid *) = func; \
   SET_by_offset(disp, _gloffset_EGLImageTargetRenderbufferStorageOES, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_EGLImageTargetTexture2DOES)(GLenum, GLvoid *);
#define CALL_EGLImageTargetTexture2DOES(disp, parameters) (* GET_EGLImageTargetTexture2DOES(disp)) parameters
#define GET_EGLImageTargetTexture2DOES(disp) ((_glptr_EGLImageTargetTexture2DOES)(GET_by_offset((disp), _gloffset_EGLImageTargetTexture2DOES)))
#define SET_EGLImageTargetTexture2DOES(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLvoid *) = func; \
   SET_by_offset(disp, _gloffset_EGLImageTargetTexture2DOES, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_AlphaFuncx)(GLenum, GLclampx);
#define CALL_AlphaFuncx(disp, parameters) (* GET_AlphaFuncx(disp)) parameters
#define GET_AlphaFuncx(disp) ((_glptr_AlphaFuncx)(GET_by_offset((disp), _gloffset_AlphaFuncx)))
#define SET_AlphaFuncx(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLclampx) = func; \
   SET_by_offset(disp, _gloffset_AlphaFuncx, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_ClearColorx)(GLclampx, GLclampx, GLclampx, GLclampx);
#define CALL_ClearColorx(disp, parameters) (* GET_ClearColorx(disp)) parameters
#define GET_ClearColorx(disp) ((_glptr_ClearColorx)(GET_by_offset((disp), _gloffset_ClearColorx)))
#define SET_ClearColorx(disp, func) do { \
   void (GLAPIENTRYP fn)(GLclampx, GLclampx, GLclampx, GLclampx) = func; \
   SET_by_offset(disp, _gloffset_ClearColorx, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_ClearDepthx)(GLclampx);
#define CALL_ClearDepthx(disp, parameters) (* GET_ClearDepthx(disp)) parameters
#define GET_ClearDepthx(disp) ((_glptr_ClearDepthx)(GET_by_offset((disp), _gloffset_ClearDepthx)))
#define SET_ClearDepthx(disp, func) do { \
   void (GLAPIENTRYP fn)(GLclampx) = func; \
   SET_by_offset(disp, _gloffset_ClearDepthx, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_Color4x)(GLfixed, GLfixed, GLfixed, GLfixed);
#define CALL_Color4x(disp, parameters) (* GET_Color4x(disp)) parameters
#define GET_Color4x(disp) ((_glptr_Color4x)(GET_by_offset((disp), _gloffset_Color4x)))
#define SET_Color4x(disp, func) do { \
   void (GLAPIENTRYP fn)(GLfixed, GLfixed, GLfixed, GLfixed) = func; \
   SET_by_offset(disp, _gloffset_Color4x, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_DepthRangex)(GLclampx, GLclampx);
#define CALL_DepthRangex(disp, parameters) (* GET_DepthRangex(disp)) parameters
#define GET_DepthRangex(disp) ((_glptr_DepthRangex)(GET_by_offset((disp), _gloffset_DepthRangex)))
#define SET_DepthRangex(disp, func) do { \
   void (GLAPIENTRYP fn)(GLclampx, GLclampx) = func; \
   SET_by_offset(disp, _gloffset_DepthRangex, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_Fogx)(GLenum, GLfixed);
#define CALL_Fogx(disp, parameters) (* GET_Fogx(disp)) parameters
#define GET_Fogx(disp) ((_glptr_Fogx)(GET_by_offset((disp), _gloffset_Fogx)))
#define SET_Fogx(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLfixed) = func; \
   SET_by_offset(disp, _gloffset_Fogx, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_Fogxv)(GLenum, const GLfixed *);
#define CALL_Fogxv(disp, parameters) (* GET_Fogxv(disp)) parameters
#define GET_Fogxv(disp) ((_glptr_Fogxv)(GET_by_offset((disp), _gloffset_Fogxv)))
#define SET_Fogxv(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, const GLfixed *) = func; \
   SET_by_offset(disp, _gloffset_Fogxv, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_Frustumf)(GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat);
#define CALL_Frustumf(disp, parameters) (* GET_Frustumf(disp)) parameters
#define GET_Frustumf(disp) ((_glptr_Frustumf)(GET_by_offset((disp), _gloffset_Frustumf)))
#define SET_Frustumf(disp, func) do { \
   void (GLAPIENTRYP fn)(GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat) = func; \
   SET_by_offset(disp, _gloffset_Frustumf, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_Frustumx)(GLfixed, GLfixed, GLfixed, GLfixed, GLfixed, GLfixed);
#define CALL_Frustumx(disp, parameters) (* GET_Frustumx(disp)) parameters
#define GET_Frustumx(disp) ((_glptr_Frustumx)(GET_by_offset((disp), _gloffset_Frustumx)))
#define SET_Frustumx(disp, func) do { \
   void (GLAPIENTRYP fn)(GLfixed, GLfixed, GLfixed, GLfixed, GLfixed, GLfixed) = func; \
   SET_by_offset(disp, _gloffset_Frustumx, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_LightModelx)(GLenum, GLfixed);
#define CALL_LightModelx(disp, parameters) (* GET_LightModelx(disp)) parameters
#define GET_LightModelx(disp) ((_glptr_LightModelx)(GET_by_offset((disp), _gloffset_LightModelx)))
#define SET_LightModelx(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLfixed) = func; \
   SET_by_offset(disp, _gloffset_LightModelx, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_LightModelxv)(GLenum, const GLfixed *);
#define CALL_LightModelxv(disp, parameters) (* GET_LightModelxv(disp)) parameters
#define GET_LightModelxv(disp) ((_glptr_LightModelxv)(GET_by_offset((disp), _gloffset_LightModelxv)))
#define SET_LightModelxv(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, const GLfixed *) = func; \
   SET_by_offset(disp, _gloffset_LightModelxv, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_Lightx)(GLenum, GLenum, GLfixed);
#define CALL_Lightx(disp, parameters) (* GET_Lightx(disp)) parameters
#define GET_Lightx(disp) ((_glptr_Lightx)(GET_by_offset((disp), _gloffset_Lightx)))
#define SET_Lightx(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLenum, GLfixed) = func; \
   SET_by_offset(disp, _gloffset_Lightx, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_Lightxv)(GLenum, GLenum, const GLfixed *);
#define CALL_Lightxv(disp, parameters) (* GET_Lightxv(disp)) parameters
#define GET_Lightxv(disp) ((_glptr_Lightxv)(GET_by_offset((disp), _gloffset_Lightxv)))
#define SET_Lightxv(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLenum, const GLfixed *) = func; \
   SET_by_offset(disp, _gloffset_Lightxv, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_LineWidthx)(GLfixed);
#define CALL_LineWidthx(disp, parameters) (* GET_LineWidthx(disp)) parameters
#define GET_LineWidthx(disp) ((_glptr_LineWidthx)(GET_by_offset((disp), _gloffset_LineWidthx)))
#define SET_LineWidthx(disp, func) do { \
   void (GLAPIENTRYP fn)(GLfixed) = func; \
   SET_by_offset(disp, _gloffset_LineWidthx, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_LoadMatrixx)(const GLfixed *);
#define CALL_LoadMatrixx(disp, parameters) (* GET_LoadMatrixx(disp)) parameters
#define GET_LoadMatrixx(disp) ((_glptr_LoadMatrixx)(GET_by_offset((disp), _gloffset_LoadMatrixx)))
#define SET_LoadMatrixx(disp, func) do { \
   void (GLAPIENTRYP fn)(const GLfixed *) = func; \
   SET_by_offset(disp, _gloffset_LoadMatrixx, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_Materialx)(GLenum, GLenum, GLfixed);
#define CALL_Materialx(disp, parameters) (* GET_Materialx(disp)) parameters
#define GET_Materialx(disp) ((_glptr_Materialx)(GET_by_offset((disp), _gloffset_Materialx)))
#define SET_Materialx(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLenum, GLfixed) = func; \
   SET_by_offset(disp, _gloffset_Materialx, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_Materialxv)(GLenum, GLenum, const GLfixed *);
#define CALL_Materialxv(disp, parameters) (* GET_Materialxv(disp)) parameters
#define GET_Materialxv(disp) ((_glptr_Materialxv)(GET_by_offset((disp), _gloffset_Materialxv)))
#define SET_Materialxv(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLenum, const GLfixed *) = func; \
   SET_by_offset(disp, _gloffset_Materialxv, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_MultMatrixx)(const GLfixed *);
#define CALL_MultMatrixx(disp, parameters) (* GET_MultMatrixx(disp)) parameters
#define GET_MultMatrixx(disp) ((_glptr_MultMatrixx)(GET_by_offset((disp), _gloffset_MultMatrixx)))
#define SET_MultMatrixx(disp, func) do { \
   void (GLAPIENTRYP fn)(const GLfixed *) = func; \
   SET_by_offset(disp, _gloffset_MultMatrixx, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_MultiTexCoord4x)(GLenum, GLfixed, GLfixed, GLfixed, GLfixed);
#define CALL_MultiTexCoord4x(disp, parameters) (* GET_MultiTexCoord4x(disp)) parameters
#define GET_MultiTexCoord4x(disp) ((_glptr_MultiTexCoord4x)(GET_by_offset((disp), _gloffset_MultiTexCoord4x)))
#define SET_MultiTexCoord4x(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLfixed, GLfixed, GLfixed, GLfixed) = func; \
   SET_by_offset(disp, _gloffset_MultiTexCoord4x, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_Normal3x)(GLfixed, GLfixed, GLfixed);
#define CALL_Normal3x(disp, parameters) (* GET_Normal3x(disp)) parameters
#define GET_Normal3x(disp) ((_glptr_Normal3x)(GET_by_offset((disp), _gloffset_Normal3x)))
#define SET_Normal3x(disp, func) do { \
   void (GLAPIENTRYP fn)(GLfixed, GLfixed, GLfixed) = func; \
   SET_by_offset(disp, _gloffset_Normal3x, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_Orthof)(GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat);
#define CALL_Orthof(disp, parameters) (* GET_Orthof(disp)) parameters
#define GET_Orthof(disp) ((_glptr_Orthof)(GET_by_offset((disp), _gloffset_Orthof)))
#define SET_Orthof(disp, func) do { \
   void (GLAPIENTRYP fn)(GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat) = func; \
   SET_by_offset(disp, _gloffset_Orthof, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_Orthox)(GLfixed, GLfixed, GLfixed, GLfixed, GLfixed, GLfixed);
#define CALL_Orthox(disp, parameters) (* GET_Orthox(disp)) parameters
#define GET_Orthox(disp) ((_glptr_Orthox)(GET_by_offset((disp), _gloffset_Orthox)))
#define SET_Orthox(disp, func) do { \
   void (GLAPIENTRYP fn)(GLfixed, GLfixed, GLfixed, GLfixed, GLfixed, GLfixed) = func; \
   SET_by_offset(disp, _gloffset_Orthox, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_PointSizex)(GLfixed);
#define CALL_PointSizex(disp, parameters) (* GET_PointSizex(disp)) parameters
#define GET_PointSizex(disp) ((_glptr_PointSizex)(GET_by_offset((disp), _gloffset_PointSizex)))
#define SET_PointSizex(disp, func) do { \
   void (GLAPIENTRYP fn)(GLfixed) = func; \
   SET_by_offset(disp, _gloffset_PointSizex, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_PolygonOffsetx)(GLfixed, GLfixed);
#define CALL_PolygonOffsetx(disp, parameters) (* GET_PolygonOffsetx(disp)) parameters
#define GET_PolygonOffsetx(disp) ((_glptr_PolygonOffsetx)(GET_by_offset((disp), _gloffset_PolygonOffsetx)))
#define SET_PolygonOffsetx(disp, func) do { \
   void (GLAPIENTRYP fn)(GLfixed, GLfixed) = func; \
   SET_by_offset(disp, _gloffset_PolygonOffsetx, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_Rotatex)(GLfixed, GLfixed, GLfixed, GLfixed);
#define CALL_Rotatex(disp, parameters) (* GET_Rotatex(disp)) parameters
#define GET_Rotatex(disp) ((_glptr_Rotatex)(GET_by_offset((disp), _gloffset_Rotatex)))
#define SET_Rotatex(disp, func) do { \
   void (GLAPIENTRYP fn)(GLfixed, GLfixed, GLfixed, GLfixed) = func; \
   SET_by_offset(disp, _gloffset_Rotatex, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_SampleCoveragex)(GLclampx, GLboolean);
#define CALL_SampleCoveragex(disp, parameters) (* GET_SampleCoveragex(disp)) parameters
#define GET_SampleCoveragex(disp) ((_glptr_SampleCoveragex)(GET_by_offset((disp), _gloffset_SampleCoveragex)))
#define SET_SampleCoveragex(disp, func) do { \
   void (GLAPIENTRYP fn)(GLclampx, GLboolean) = func; \
   SET_by_offset(disp, _gloffset_SampleCoveragex, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_Scalex)(GLfixed, GLfixed, GLfixed);
#define CALL_Scalex(disp, parameters) (* GET_Scalex(disp)) parameters
#define GET_Scalex(disp) ((_glptr_Scalex)(GET_by_offset((disp), _gloffset_Scalex)))
#define SET_Scalex(disp, func) do { \
   void (GLAPIENTRYP fn)(GLfixed, GLfixed, GLfixed) = func; \
   SET_by_offset(disp, _gloffset_Scalex, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_TexEnvx)(GLenum, GLenum, GLfixed);
#define CALL_TexEnvx(disp, parameters) (* GET_TexEnvx(disp)) parameters
#define GET_TexEnvx(disp) ((_glptr_TexEnvx)(GET_by_offset((disp), _gloffset_TexEnvx)))
#define SET_TexEnvx(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLenum, GLfixed) = func; \
   SET_by_offset(disp, _gloffset_TexEnvx, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_TexEnvxv)(GLenum, GLenum, const GLfixed *);
#define CALL_TexEnvxv(disp, parameters) (* GET_TexEnvxv(disp)) parameters
#define GET_TexEnvxv(disp) ((_glptr_TexEnvxv)(GET_by_offset((disp), _gloffset_TexEnvxv)))
#define SET_TexEnvxv(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLenum, const GLfixed *) = func; \
   SET_by_offset(disp, _gloffset_TexEnvxv, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_TexParameterx)(GLenum, GLenum, GLfixed);
#define CALL_TexParameterx(disp, parameters) (* GET_TexParameterx(disp)) parameters
#define GET_TexParameterx(disp) ((_glptr_TexParameterx)(GET_by_offset((disp), _gloffset_TexParameterx)))
#define SET_TexParameterx(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLenum, GLfixed) = func; \
   SET_by_offset(disp, _gloffset_TexParameterx, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_Translatex)(GLfixed, GLfixed, GLfixed);
#define CALL_Translatex(disp, parameters) (* GET_Translatex(disp)) parameters
#define GET_Translatex(disp) ((_glptr_Translatex)(GET_by_offset((disp), _gloffset_Translatex)))
#define SET_Translatex(disp, func) do { \
   void (GLAPIENTRYP fn)(GLfixed, GLfixed, GLfixed) = func; \
   SET_by_offset(disp, _gloffset_Translatex, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_ClipPlanef)(GLenum, const GLfloat *);
#define CALL_ClipPlanef(disp, parameters) (* GET_ClipPlanef(disp)) parameters
#define GET_ClipPlanef(disp) ((_glptr_ClipPlanef)(GET_by_offset((disp), _gloffset_ClipPlanef)))
#define SET_ClipPlanef(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, const GLfloat *) = func; \
   SET_by_offset(disp, _gloffset_ClipPlanef, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_ClipPlanex)(GLenum, const GLfixed *);
#define CALL_ClipPlanex(disp, parameters) (* GET_ClipPlanex(disp)) parameters
#define GET_ClipPlanex(disp) ((_glptr_ClipPlanex)(GET_by_offset((disp), _gloffset_ClipPlanex)))
#define SET_ClipPlanex(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, const GLfixed *) = func; \
   SET_by_offset(disp, _gloffset_ClipPlanex, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_GetClipPlanef)(GLenum, GLfloat *);
#define CALL_GetClipPlanef(disp, parameters) (* GET_GetClipPlanef(disp)) parameters
#define GET_GetClipPlanef(disp) ((_glptr_GetClipPlanef)(GET_by_offset((disp), _gloffset_GetClipPlanef)))
#define SET_GetClipPlanef(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLfloat *) = func; \
   SET_by_offset(disp, _gloffset_GetClipPlanef, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_GetClipPlanex)(GLenum, GLfixed *);
#define CALL_GetClipPlanex(disp, parameters) (* GET_GetClipPlanex(disp)) parameters
#define GET_GetClipPlanex(disp) ((_glptr_GetClipPlanex)(GET_by_offset((disp), _gloffset_GetClipPlanex)))
#define SET_GetClipPlanex(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLfixed *) = func; \
   SET_by_offset(disp, _gloffset_GetClipPlanex, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_GetFixedv)(GLenum, GLfixed *);
#define CALL_GetFixedv(disp, parameters) (* GET_GetFixedv(disp)) parameters
#define GET_GetFixedv(disp) ((_glptr_GetFixedv)(GET_by_offset((disp), _gloffset_GetFixedv)))
#define SET_GetFixedv(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLfixed *) = func; \
   SET_by_offset(disp, _gloffset_GetFixedv, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_GetLightxv)(GLenum, GLenum, GLfixed *);
#define CALL_GetLightxv(disp, parameters) (* GET_GetLightxv(disp)) parameters
#define GET_GetLightxv(disp) ((_glptr_GetLightxv)(GET_by_offset((disp), _gloffset_GetLightxv)))
#define SET_GetLightxv(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLenum, GLfixed *) = func; \
   SET_by_offset(disp, _gloffset_GetLightxv, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_GetMaterialxv)(GLenum, GLenum, GLfixed *);
#define CALL_GetMaterialxv(disp, parameters) (* GET_GetMaterialxv(disp)) parameters
#define GET_GetMaterialxv(disp) ((_glptr_GetMaterialxv)(GET_by_offset((disp), _gloffset_GetMaterialxv)))
#define SET_GetMaterialxv(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLenum, GLfixed *) = func; \
   SET_by_offset(disp, _gloffset_GetMaterialxv, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_GetTexEnvxv)(GLenum, GLenum, GLfixed *);
#define CALL_GetTexEnvxv(disp, parameters) (* GET_GetTexEnvxv(disp)) parameters
#define GET_GetTexEnvxv(disp) ((_glptr_GetTexEnvxv)(GET_by_offset((disp), _gloffset_GetTexEnvxv)))
#define SET_GetTexEnvxv(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLenum, GLfixed *) = func; \
   SET_by_offset(disp, _gloffset_GetTexEnvxv, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_GetTexParameterxv)(GLenum, GLenum, GLfixed *);
#define CALL_GetTexParameterxv(disp, parameters) (* GET_GetTexParameterxv(disp)) parameters
#define GET_GetTexParameterxv(disp) ((_glptr_GetTexParameterxv)(GET_by_offset((disp), _gloffset_GetTexParameterxv)))
#define SET_GetTexParameterxv(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLenum, GLfixed *) = func; \
   SET_by_offset(disp, _gloffset_GetTexParameterxv, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_PointParameterx)(GLenum, GLfixed);
#define CALL_PointParameterx(disp, parameters) (* GET_PointParameterx(disp)) parameters
#define GET_PointParameterx(disp) ((_glptr_PointParameterx)(GET_by_offset((disp), _gloffset_PointParameterx)))
#define SET_PointParameterx(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLfixed) = func; \
   SET_by_offset(disp, _gloffset_PointParameterx, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_PointParameterxv)(GLenum, const GLfixed *);
#define CALL_PointParameterxv(disp, parameters) (* GET_PointParameterxv(disp)) parameters
#define GET_PointParameterxv(disp) ((_glptr_PointParameterxv)(GET_by_offset((disp), _gloffset_PointParameterxv)))
#define SET_PointParameterxv(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, const GLfixed *) = func; \
   SET_by_offset(disp, _gloffset_PointParameterxv, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_TexParameterxv)(GLenum, GLenum, const GLfixed *);
#define CALL_TexParameterxv(disp, parameters) (* GET_TexParameterxv(disp)) parameters
#define GET_TexParameterxv(disp) ((_glptr_TexParameterxv)(GET_by_offset((disp), _gloffset_TexParameterxv)))
#define SET_TexParameterxv(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLenum, const GLfixed *) = func; \
   SET_by_offset(disp, _gloffset_TexParameterxv, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_BlendBarrier)(void);
#define CALL_BlendBarrier(disp, parameters) (* GET_BlendBarrier(disp)) parameters
#define GET_BlendBarrier(disp) ((_glptr_BlendBarrier)(GET_by_offset((disp), _gloffset_BlendBarrier)))
#define SET_BlendBarrier(disp, func) do { \
   void (GLAPIENTRYP fn)(void) = func; \
   SET_by_offset(disp, _gloffset_BlendBarrier, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_PrimitiveBoundingBox)(GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat);
#define CALL_PrimitiveBoundingBox(disp, parameters) (* GET_PrimitiveBoundingBox(disp)) parameters
#define GET_PrimitiveBoundingBox(disp) ((_glptr_PrimitiveBoundingBox)(GET_by_offset((disp), _gloffset_PrimitiveBoundingBox)))
#define SET_PrimitiveBoundingBox(disp, func) do { \
   void (GLAPIENTRYP fn)(GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat) = func; \
   SET_by_offset(disp, _gloffset_PrimitiveBoundingBox, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_MaxShaderCompilerThreadsKHR)(GLuint);
#define CALL_MaxShaderCompilerThreadsKHR(disp, parameters) (* GET_MaxShaderCompilerThreadsKHR(disp)) parameters
#define GET_MaxShaderCompilerThreadsKHR(disp) ((_glptr_MaxShaderCompilerThreadsKHR)(GET_by_offset((disp), _gloffset_MaxShaderCompilerThreadsKHR)))
#define SET_MaxShaderCompilerThreadsKHR(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint) = func; \
   SET_by_offset(disp, _gloffset_MaxShaderCompilerThreadsKHR, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_MatrixLoadfEXT)(GLenum, const GLfloat *);
#define CALL_MatrixLoadfEXT(disp, parameters) (* GET_MatrixLoadfEXT(disp)) parameters
#define GET_MatrixLoadfEXT(disp) ((_glptr_MatrixLoadfEXT)(GET_by_offset((disp), _gloffset_MatrixLoadfEXT)))
#define SET_MatrixLoadfEXT(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, const GLfloat *) = func; \
   SET_by_offset(disp, _gloffset_MatrixLoadfEXT, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_MatrixLoaddEXT)(GLenum, const GLdouble *);
#define CALL_MatrixLoaddEXT(disp, parameters) (* GET_MatrixLoaddEXT(disp)) parameters
#define GET_MatrixLoaddEXT(disp) ((_glptr_MatrixLoaddEXT)(GET_by_offset((disp), _gloffset_MatrixLoaddEXT)))
#define SET_MatrixLoaddEXT(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, const GLdouble *) = func; \
   SET_by_offset(disp, _gloffset_MatrixLoaddEXT, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_MatrixMultfEXT)(GLenum, const GLfloat *);
#define CALL_MatrixMultfEXT(disp, parameters) (* GET_MatrixMultfEXT(disp)) parameters
#define GET_MatrixMultfEXT(disp) ((_glptr_MatrixMultfEXT)(GET_by_offset((disp), _gloffset_MatrixMultfEXT)))
#define SET_MatrixMultfEXT(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, const GLfloat *) = func; \
   SET_by_offset(disp, _gloffset_MatrixMultfEXT, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_MatrixMultdEXT)(GLenum, const GLdouble *);
#define CALL_MatrixMultdEXT(disp, parameters) (* GET_MatrixMultdEXT(disp)) parameters
#define GET_MatrixMultdEXT(disp) ((_glptr_MatrixMultdEXT)(GET_by_offset((disp), _gloffset_MatrixMultdEXT)))
#define SET_MatrixMultdEXT(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, const GLdouble *) = func; \
   SET_by_offset(disp, _gloffset_MatrixMultdEXT, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_MatrixLoadIdentityEXT)(GLenum);
#define CALL_MatrixLoadIdentityEXT(disp, parameters) (* GET_MatrixLoadIdentityEXT(disp)) parameters
#define GET_MatrixLoadIdentityEXT(disp) ((_glptr_MatrixLoadIdentityEXT)(GET_by_offset((disp), _gloffset_MatrixLoadIdentityEXT)))
#define SET_MatrixLoadIdentityEXT(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum) = func; \
   SET_by_offset(disp, _gloffset_MatrixLoadIdentityEXT, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_MatrixRotatefEXT)(GLenum, GLfloat, GLfloat, GLfloat, GLfloat);
#define CALL_MatrixRotatefEXT(disp, parameters) (* GET_MatrixRotatefEXT(disp)) parameters
#define GET_MatrixRotatefEXT(disp) ((_glptr_MatrixRotatefEXT)(GET_by_offset((disp), _gloffset_MatrixRotatefEXT)))
#define SET_MatrixRotatefEXT(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLfloat, GLfloat, GLfloat, GLfloat) = func; \
   SET_by_offset(disp, _gloffset_MatrixRotatefEXT, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_MatrixRotatedEXT)(GLenum, GLdouble, GLdouble, GLdouble, GLdouble);
#define CALL_MatrixRotatedEXT(disp, parameters) (* GET_MatrixRotatedEXT(disp)) parameters
#define GET_MatrixRotatedEXT(disp) ((_glptr_MatrixRotatedEXT)(GET_by_offset((disp), _gloffset_MatrixRotatedEXT)))
#define SET_MatrixRotatedEXT(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLdouble, GLdouble, GLdouble, GLdouble) = func; \
   SET_by_offset(disp, _gloffset_MatrixRotatedEXT, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_MatrixScalefEXT)(GLenum, GLfloat, GLfloat, GLfloat);
#define CALL_MatrixScalefEXT(disp, parameters) (* GET_MatrixScalefEXT(disp)) parameters
#define GET_MatrixScalefEXT(disp) ((_glptr_MatrixScalefEXT)(GET_by_offset((disp), _gloffset_MatrixScalefEXT)))
#define SET_MatrixScalefEXT(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLfloat, GLfloat, GLfloat) = func; \
   SET_by_offset(disp, _gloffset_MatrixScalefEXT, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_MatrixScaledEXT)(GLenum, GLdouble, GLdouble, GLdouble);
#define CALL_MatrixScaledEXT(disp, parameters) (* GET_MatrixScaledEXT(disp)) parameters
#define GET_MatrixScaledEXT(disp) ((_glptr_MatrixScaledEXT)(GET_by_offset((disp), _gloffset_MatrixScaledEXT)))
#define SET_MatrixScaledEXT(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLdouble, GLdouble, GLdouble) = func; \
   SET_by_offset(disp, _gloffset_MatrixScaledEXT, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_MatrixTranslatefEXT)(GLenum, GLfloat, GLfloat, GLfloat);
#define CALL_MatrixTranslatefEXT(disp, parameters) (* GET_MatrixTranslatefEXT(disp)) parameters
#define GET_MatrixTranslatefEXT(disp) ((_glptr_MatrixTranslatefEXT)(GET_by_offset((disp), _gloffset_MatrixTranslatefEXT)))
#define SET_MatrixTranslatefEXT(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLfloat, GLfloat, GLfloat) = func; \
   SET_by_offset(disp, _gloffset_MatrixTranslatefEXT, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_MatrixTranslatedEXT)(GLenum, GLdouble, GLdouble, GLdouble);
#define CALL_MatrixTranslatedEXT(disp, parameters) (* GET_MatrixTranslatedEXT(disp)) parameters
#define GET_MatrixTranslatedEXT(disp) ((_glptr_MatrixTranslatedEXT)(GET_by_offset((disp), _gloffset_MatrixTranslatedEXT)))
#define SET_MatrixTranslatedEXT(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLdouble, GLdouble, GLdouble) = func; \
   SET_by_offset(disp, _gloffset_MatrixTranslatedEXT, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_MatrixOrthoEXT)(GLenum, GLdouble, GLdouble, GLdouble, GLdouble, GLdouble, GLdouble);
#define CALL_MatrixOrthoEXT(disp, parameters) (* GET_MatrixOrthoEXT(disp)) parameters
#define GET_MatrixOrthoEXT(disp) ((_glptr_MatrixOrthoEXT)(GET_by_offset((disp), _gloffset_MatrixOrthoEXT)))
#define SET_MatrixOrthoEXT(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLdouble, GLdouble, GLdouble, GLdouble, GLdouble, GLdouble) = func; \
   SET_by_offset(disp, _gloffset_MatrixOrthoEXT, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_MatrixFrustumEXT)(GLenum, GLdouble, GLdouble, GLdouble, GLdouble, GLdouble, GLdouble);
#define CALL_MatrixFrustumEXT(disp, parameters) (* GET_MatrixFrustumEXT(disp)) parameters
#define GET_MatrixFrustumEXT(disp) ((_glptr_MatrixFrustumEXT)(GET_by_offset((disp), _gloffset_MatrixFrustumEXT)))
#define SET_MatrixFrustumEXT(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLdouble, GLdouble, GLdouble, GLdouble, GLdouble, GLdouble) = func; \
   SET_by_offset(disp, _gloffset_MatrixFrustumEXT, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_MatrixPushEXT)(GLenum);
#define CALL_MatrixPushEXT(disp, parameters) (* GET_MatrixPushEXT(disp)) parameters
#define GET_MatrixPushEXT(disp) ((_glptr_MatrixPushEXT)(GET_by_offset((disp), _gloffset_MatrixPushEXT)))
#define SET_MatrixPushEXT(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum) = func; \
   SET_by_offset(disp, _gloffset_MatrixPushEXT, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_MatrixPopEXT)(GLenum);
#define CALL_MatrixPopEXT(disp, parameters) (* GET_MatrixPopEXT(disp)) parameters
#define GET_MatrixPopEXT(disp) ((_glptr_MatrixPopEXT)(GET_by_offset((disp), _gloffset_MatrixPopEXT)))
#define SET_MatrixPopEXT(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum) = func; \
   SET_by_offset(disp, _gloffset_MatrixPopEXT, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_MatrixLoadTransposefEXT)(GLenum, const GLfloat *);
#define CALL_MatrixLoadTransposefEXT(disp, parameters) (* GET_MatrixLoadTransposefEXT(disp)) parameters
#define GET_MatrixLoadTransposefEXT(disp) ((_glptr_MatrixLoadTransposefEXT)(GET_by_offset((disp), _gloffset_MatrixLoadTransposefEXT)))
#define SET_MatrixLoadTransposefEXT(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, const GLfloat *) = func; \
   SET_by_offset(disp, _gloffset_MatrixLoadTransposefEXT, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_MatrixLoadTransposedEXT)(GLenum, const GLdouble *);
#define CALL_MatrixLoadTransposedEXT(disp, parameters) (* GET_MatrixLoadTransposedEXT(disp)) parameters
#define GET_MatrixLoadTransposedEXT(disp) ((_glptr_MatrixLoadTransposedEXT)(GET_by_offset((disp), _gloffset_MatrixLoadTransposedEXT)))
#define SET_MatrixLoadTransposedEXT(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, const GLdouble *) = func; \
   SET_by_offset(disp, _gloffset_MatrixLoadTransposedEXT, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_MatrixMultTransposefEXT)(GLenum, const GLfloat *);
#define CALL_MatrixMultTransposefEXT(disp, parameters) (* GET_MatrixMultTransposefEXT(disp)) parameters
#define GET_MatrixMultTransposefEXT(disp) ((_glptr_MatrixMultTransposefEXT)(GET_by_offset((disp), _gloffset_MatrixMultTransposefEXT)))
#define SET_MatrixMultTransposefEXT(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, const GLfloat *) = func; \
   SET_by_offset(disp, _gloffset_MatrixMultTransposefEXT, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_MatrixMultTransposedEXT)(GLenum, const GLdouble *);
#define CALL_MatrixMultTransposedEXT(disp, parameters) (* GET_MatrixMultTransposedEXT(disp)) parameters
#define GET_MatrixMultTransposedEXT(disp) ((_glptr_MatrixMultTransposedEXT)(GET_by_offset((disp), _gloffset_MatrixMultTransposedEXT)))
#define SET_MatrixMultTransposedEXT(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, const GLdouble *) = func; \
   SET_by_offset(disp, _gloffset_MatrixMultTransposedEXT, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_BindMultiTextureEXT)(GLenum, GLenum, GLuint);
#define CALL_BindMultiTextureEXT(disp, parameters) (* GET_BindMultiTextureEXT(disp)) parameters
#define GET_BindMultiTextureEXT(disp) ((_glptr_BindMultiTextureEXT)(GET_by_offset((disp), _gloffset_BindMultiTextureEXT)))
#define SET_BindMultiTextureEXT(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLenum, GLuint) = func; \
   SET_by_offset(disp, _gloffset_BindMultiTextureEXT, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_NamedBufferDataEXT)(GLuint, GLsizeiptr, const GLvoid *, GLenum);
#define CALL_NamedBufferDataEXT(disp, parameters) (* GET_NamedBufferDataEXT(disp)) parameters
#define GET_NamedBufferDataEXT(disp) ((_glptr_NamedBufferDataEXT)(GET_by_offset((disp), _gloffset_NamedBufferDataEXT)))
#define SET_NamedBufferDataEXT(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLsizeiptr, const GLvoid *, GLenum) = func; \
   SET_by_offset(disp, _gloffset_NamedBufferDataEXT, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_NamedBufferSubDataEXT)(GLuint, GLintptr, GLsizeiptr, const GLvoid *);
#define CALL_NamedBufferSubDataEXT(disp, parameters) (* GET_NamedBufferSubDataEXT(disp)) parameters
#define GET_NamedBufferSubDataEXT(disp) ((_glptr_NamedBufferSubDataEXT)(GET_by_offset((disp), _gloffset_NamedBufferSubDataEXT)))
#define SET_NamedBufferSubDataEXT(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLintptr, GLsizeiptr, const GLvoid *) = func; \
   SET_by_offset(disp, _gloffset_NamedBufferSubDataEXT, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_NamedBufferStorageEXT)(GLuint, GLsizeiptr, const GLvoid *, GLbitfield);
#define CALL_NamedBufferStorageEXT(disp, parameters) (* GET_NamedBufferStorageEXT(disp)) parameters
#define GET_NamedBufferStorageEXT(disp) ((_glptr_NamedBufferStorageEXT)(GET_by_offset((disp), _gloffset_NamedBufferStorageEXT)))
#define SET_NamedBufferStorageEXT(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLsizeiptr, const GLvoid *, GLbitfield) = func; \
   SET_by_offset(disp, _gloffset_NamedBufferStorageEXT, fn); \
} while (0)

typedef GLvoid * (GLAPIENTRYP _glptr_MapNamedBufferRangeEXT)(GLuint, GLintptr, GLsizeiptr, GLbitfield);
#define CALL_MapNamedBufferRangeEXT(disp, parameters) (* GET_MapNamedBufferRangeEXT(disp)) parameters
#define GET_MapNamedBufferRangeEXT(disp) ((_glptr_MapNamedBufferRangeEXT)(GET_by_offset((disp), _gloffset_MapNamedBufferRangeEXT)))
#define SET_MapNamedBufferRangeEXT(disp, func) do { \
   GLvoid * (GLAPIENTRYP fn)(GLuint, GLintptr, GLsizeiptr, GLbitfield) = func; \
   SET_by_offset(disp, _gloffset_MapNamedBufferRangeEXT, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_TextureImage1DEXT)(GLuint, GLenum, GLint, GLint, GLsizei, GLint, GLenum, GLenum, const GLvoid *);
#define CALL_TextureImage1DEXT(disp, parameters) (* GET_TextureImage1DEXT(disp)) parameters
#define GET_TextureImage1DEXT(disp) ((_glptr_TextureImage1DEXT)(GET_by_offset((disp), _gloffset_TextureImage1DEXT)))
#define SET_TextureImage1DEXT(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLenum, GLint, GLint, GLsizei, GLint, GLenum, GLenum, const GLvoid *) = func; \
   SET_by_offset(disp, _gloffset_TextureImage1DEXT, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_TextureImage2DEXT)(GLuint, GLenum, GLint, GLint, GLsizei, GLsizei, GLint, GLenum, GLenum, const GLvoid *);
#define CALL_TextureImage2DEXT(disp, parameters) (* GET_TextureImage2DEXT(disp)) parameters
#define GET_TextureImage2DEXT(disp) ((_glptr_TextureImage2DEXT)(GET_by_offset((disp), _gloffset_TextureImage2DEXT)))
#define SET_TextureImage2DEXT(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLenum, GLint, GLint, GLsizei, GLsizei, GLint, GLenum, GLenum, const GLvoid *) = func; \
   SET_by_offset(disp, _gloffset_TextureImage2DEXT, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_TextureImage3DEXT)(GLuint, GLenum, GLint, GLint, GLsizei, GLsizei, GLsizei, GLint, GLenum, GLenum, const GLvoid *);
#define CALL_TextureImage3DEXT(disp, parameters) (* GET_TextureImage3DEXT(disp)) parameters
#define GET_TextureImage3DEXT(disp) ((_glptr_TextureImage3DEXT)(GET_by_offset((disp), _gloffset_TextureImage3DEXT)))
#define SET_TextureImage3DEXT(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLenum, GLint, GLint, GLsizei, GLsizei, GLsizei, GLint, GLenum, GLenum, const GLvoid *) = func; \
   SET_by_offset(disp, _gloffset_TextureImage3DEXT, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_TextureSubImage1DEXT)(GLuint, GLenum, GLint, GLint, GLsizei, GLenum, GLenum, const GLvoid *);
#define CALL_TextureSubImage1DEXT(disp, parameters) (* GET_TextureSubImage1DEXT(disp)) parameters
#define GET_TextureSubImage1DEXT(disp) ((_glptr_TextureSubImage1DEXT)(GET_by_offset((disp), _gloffset_TextureSubImage1DEXT)))
#define SET_TextureSubImage1DEXT(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLenum, GLint, GLint, GLsizei, GLenum, GLenum, const GLvoid *) = func; \
   SET_by_offset(disp, _gloffset_TextureSubImage1DEXT, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_TextureSubImage2DEXT)(GLuint, GLenum, GLint, GLint, GLint, GLsizei, GLsizei, GLenum, GLenum, const GLvoid *);
#define CALL_TextureSubImage2DEXT(disp, parameters) (* GET_TextureSubImage2DEXT(disp)) parameters
#define GET_TextureSubImage2DEXT(disp) ((_glptr_TextureSubImage2DEXT)(GET_by_offset((disp), _gloffset_TextureSubImage2DEXT)))
#define SET_TextureSubImage2DEXT(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLenum, GLint, GLint, GLint, GLsizei, GLsizei, GLenum, GLenum, const GLvoid *) = func; \
   SET_by_offset(disp, _gloffset_TextureSubImage2DEXT, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_TextureSubImage3DEXT)(GLuint, GLenum, GLint, GLint, GLint, GLint, GLsizei, GLsizei, GLsizei, GLenum, GLenum, const GLvoid *);
#define CALL_TextureSubImage3DEXT(disp, parameters) (* GET_TextureSubImage3DEXT(disp)) parameters
#define GET_TextureSubImage3DEXT(disp) ((_glptr_TextureSubImage3DEXT)(GET_by_offset((disp), _gloffset_TextureSubImage3DEXT)))
#define SET_TextureSubImage3DEXT(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLenum, GLint, GLint, GLint, GLint, GLsizei, GLsizei, GLsizei, GLenum, GLenum, const GLvoid *) = func; \
   SET_by_offset(disp, _gloffset_TextureSubImage3DEXT, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_CopyTextureImage1DEXT)(GLuint, GLenum, GLint, GLenum, GLint, GLint, GLsizei, int);
#define CALL_CopyTextureImage1DEXT(disp, parameters) (* GET_CopyTextureImage1DEXT(disp)) parameters
#define GET_CopyTextureImage1DEXT(disp) ((_glptr_CopyTextureImage1DEXT)(GET_by_offset((disp), _gloffset_CopyTextureImage1DEXT)))
#define SET_CopyTextureImage1DEXT(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLenum, GLint, GLenum, GLint, GLint, GLsizei, int) = func; \
   SET_by_offset(disp, _gloffset_CopyTextureImage1DEXT, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_CopyTextureImage2DEXT)(GLuint, GLenum, GLint, GLenum, GLint, GLint, GLsizei, GLsizei, int);
#define CALL_CopyTextureImage2DEXT(disp, parameters) (* GET_CopyTextureImage2DEXT(disp)) parameters
#define GET_CopyTextureImage2DEXT(disp) ((_glptr_CopyTextureImage2DEXT)(GET_by_offset((disp), _gloffset_CopyTextureImage2DEXT)))
#define SET_CopyTextureImage2DEXT(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLenum, GLint, GLenum, GLint, GLint, GLsizei, GLsizei, int) = func; \
   SET_by_offset(disp, _gloffset_CopyTextureImage2DEXT, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_CopyTextureSubImage1DEXT)(GLuint, GLenum, GLint, GLint, GLint, GLint, GLsizei);
#define CALL_CopyTextureSubImage1DEXT(disp, parameters) (* GET_CopyTextureSubImage1DEXT(disp)) parameters
#define GET_CopyTextureSubImage1DEXT(disp) ((_glptr_CopyTextureSubImage1DEXT)(GET_by_offset((disp), _gloffset_CopyTextureSubImage1DEXT)))
#define SET_CopyTextureSubImage1DEXT(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLenum, GLint, GLint, GLint, GLint, GLsizei) = func; \
   SET_by_offset(disp, _gloffset_CopyTextureSubImage1DEXT, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_CopyTextureSubImage2DEXT)(GLuint, GLenum, GLint, GLint, GLint, GLint, GLint, GLsizei, GLsizei);
#define CALL_CopyTextureSubImage2DEXT(disp, parameters) (* GET_CopyTextureSubImage2DEXT(disp)) parameters
#define GET_CopyTextureSubImage2DEXT(disp) ((_glptr_CopyTextureSubImage2DEXT)(GET_by_offset((disp), _gloffset_CopyTextureSubImage2DEXT)))
#define SET_CopyTextureSubImage2DEXT(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLenum, GLint, GLint, GLint, GLint, GLint, GLsizei, GLsizei) = func; \
   SET_by_offset(disp, _gloffset_CopyTextureSubImage2DEXT, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_CopyTextureSubImage3DEXT)(GLuint, GLenum, GLint, GLint, GLint, GLint, GLint, GLint, GLsizei, GLsizei);
#define CALL_CopyTextureSubImage3DEXT(disp, parameters) (* GET_CopyTextureSubImage3DEXT(disp)) parameters
#define GET_CopyTextureSubImage3DEXT(disp) ((_glptr_CopyTextureSubImage3DEXT)(GET_by_offset((disp), _gloffset_CopyTextureSubImage3DEXT)))
#define SET_CopyTextureSubImage3DEXT(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLenum, GLint, GLint, GLint, GLint, GLint, GLint, GLsizei, GLsizei) = func; \
   SET_by_offset(disp, _gloffset_CopyTextureSubImage3DEXT, fn); \
} while (0)

typedef GLvoid * (GLAPIENTRYP _glptr_MapNamedBufferEXT)(GLuint, GLenum);
#define CALL_MapNamedBufferEXT(disp, parameters) (* GET_MapNamedBufferEXT(disp)) parameters
#define GET_MapNamedBufferEXT(disp) ((_glptr_MapNamedBufferEXT)(GET_by_offset((disp), _gloffset_MapNamedBufferEXT)))
#define SET_MapNamedBufferEXT(disp, func) do { \
   GLvoid * (GLAPIENTRYP fn)(GLuint, GLenum) = func; \
   SET_by_offset(disp, _gloffset_MapNamedBufferEXT, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_GetTextureParameterivEXT)(GLuint, GLenum, GLenum, GLint *);
#define CALL_GetTextureParameterivEXT(disp, parameters) (* GET_GetTextureParameterivEXT(disp)) parameters
#define GET_GetTextureParameterivEXT(disp) ((_glptr_GetTextureParameterivEXT)(GET_by_offset((disp), _gloffset_GetTextureParameterivEXT)))
#define SET_GetTextureParameterivEXT(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLenum, GLenum, GLint *) = func; \
   SET_by_offset(disp, _gloffset_GetTextureParameterivEXT, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_GetTextureParameterfvEXT)(GLuint, GLenum, GLenum, float *);
#define CALL_GetTextureParameterfvEXT(disp, parameters) (* GET_GetTextureParameterfvEXT(disp)) parameters
#define GET_GetTextureParameterfvEXT(disp) ((_glptr_GetTextureParameterfvEXT)(GET_by_offset((disp), _gloffset_GetTextureParameterfvEXT)))
#define SET_GetTextureParameterfvEXT(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLenum, GLenum, float *) = func; \
   SET_by_offset(disp, _gloffset_GetTextureParameterfvEXT, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_TextureParameteriEXT)(GLuint, GLenum, GLenum, int);
#define CALL_TextureParameteriEXT(disp, parameters) (* GET_TextureParameteriEXT(disp)) parameters
#define GET_TextureParameteriEXT(disp) ((_glptr_TextureParameteriEXT)(GET_by_offset((disp), _gloffset_TextureParameteriEXT)))
#define SET_TextureParameteriEXT(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLenum, GLenum, int) = func; \
   SET_by_offset(disp, _gloffset_TextureParameteriEXT, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_TextureParameterivEXT)(GLuint, GLenum, GLenum, const GLint *);
#define CALL_TextureParameterivEXT(disp, parameters) (* GET_TextureParameterivEXT(disp)) parameters
#define GET_TextureParameterivEXT(disp) ((_glptr_TextureParameterivEXT)(GET_by_offset((disp), _gloffset_TextureParameterivEXT)))
#define SET_TextureParameterivEXT(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLenum, GLenum, const GLint *) = func; \
   SET_by_offset(disp, _gloffset_TextureParameterivEXT, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_TextureParameterfEXT)(GLuint, GLenum, GLenum, float);
#define CALL_TextureParameterfEXT(disp, parameters) (* GET_TextureParameterfEXT(disp)) parameters
#define GET_TextureParameterfEXT(disp) ((_glptr_TextureParameterfEXT)(GET_by_offset((disp), _gloffset_TextureParameterfEXT)))
#define SET_TextureParameterfEXT(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLenum, GLenum, float) = func; \
   SET_by_offset(disp, _gloffset_TextureParameterfEXT, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_TextureParameterfvEXT)(GLuint, GLenum, GLenum, const float *);
#define CALL_TextureParameterfvEXT(disp, parameters) (* GET_TextureParameterfvEXT(disp)) parameters
#define GET_TextureParameterfvEXT(disp) ((_glptr_TextureParameterfvEXT)(GET_by_offset((disp), _gloffset_TextureParameterfvEXT)))
#define SET_TextureParameterfvEXT(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLenum, GLenum, const float *) = func; \
   SET_by_offset(disp, _gloffset_TextureParameterfvEXT, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_GetTextureImageEXT)(GLuint, GLenum, GLint, GLenum, GLenum, GLvoid *);
#define CALL_GetTextureImageEXT(disp, parameters) (* GET_GetTextureImageEXT(disp)) parameters
#define GET_GetTextureImageEXT(disp) ((_glptr_GetTextureImageEXT)(GET_by_offset((disp), _gloffset_GetTextureImageEXT)))
#define SET_GetTextureImageEXT(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLenum, GLint, GLenum, GLenum, GLvoid *) = func; \
   SET_by_offset(disp, _gloffset_GetTextureImageEXT, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_GetTextureLevelParameterivEXT)(GLuint, GLenum, GLint, GLenum, GLint *);
#define CALL_GetTextureLevelParameterivEXT(disp, parameters) (* GET_GetTextureLevelParameterivEXT(disp)) parameters
#define GET_GetTextureLevelParameterivEXT(disp) ((_glptr_GetTextureLevelParameterivEXT)(GET_by_offset((disp), _gloffset_GetTextureLevelParameterivEXT)))
#define SET_GetTextureLevelParameterivEXT(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLenum, GLint, GLenum, GLint *) = func; \
   SET_by_offset(disp, _gloffset_GetTextureLevelParameterivEXT, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_GetTextureLevelParameterfvEXT)(GLuint, GLenum, GLint, GLenum, float *);
#define CALL_GetTextureLevelParameterfvEXT(disp, parameters) (* GET_GetTextureLevelParameterfvEXT(disp)) parameters
#define GET_GetTextureLevelParameterfvEXT(disp) ((_glptr_GetTextureLevelParameterfvEXT)(GET_by_offset((disp), _gloffset_GetTextureLevelParameterfvEXT)))
#define SET_GetTextureLevelParameterfvEXT(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLenum, GLint, GLenum, float *) = func; \
   SET_by_offset(disp, _gloffset_GetTextureLevelParameterfvEXT, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_GetNamedBufferSubDataEXT)(GLuint, GLintptr, GLsizeiptr, GLvoid *);
#define CALL_GetNamedBufferSubDataEXT(disp, parameters) (* GET_GetNamedBufferSubDataEXT(disp)) parameters
#define GET_GetNamedBufferSubDataEXT(disp) ((_glptr_GetNamedBufferSubDataEXT)(GET_by_offset((disp), _gloffset_GetNamedBufferSubDataEXT)))
#define SET_GetNamedBufferSubDataEXT(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLintptr, GLsizeiptr, GLvoid *) = func; \
   SET_by_offset(disp, _gloffset_GetNamedBufferSubDataEXT, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_GetNamedBufferPointervEXT)(GLuint, GLenum, GLvoid **);
#define CALL_GetNamedBufferPointervEXT(disp, parameters) (* GET_GetNamedBufferPointervEXT(disp)) parameters
#define GET_GetNamedBufferPointervEXT(disp) ((_glptr_GetNamedBufferPointervEXT)(GET_by_offset((disp), _gloffset_GetNamedBufferPointervEXT)))
#define SET_GetNamedBufferPointervEXT(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLenum, GLvoid **) = func; \
   SET_by_offset(disp, _gloffset_GetNamedBufferPointervEXT, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_GetNamedBufferParameterivEXT)(GLuint, GLenum, GLint *);
#define CALL_GetNamedBufferParameterivEXT(disp, parameters) (* GET_GetNamedBufferParameterivEXT(disp)) parameters
#define GET_GetNamedBufferParameterivEXT(disp) ((_glptr_GetNamedBufferParameterivEXT)(GET_by_offset((disp), _gloffset_GetNamedBufferParameterivEXT)))
#define SET_GetNamedBufferParameterivEXT(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLenum, GLint *) = func; \
   SET_by_offset(disp, _gloffset_GetNamedBufferParameterivEXT, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_FlushMappedNamedBufferRangeEXT)(GLuint, GLintptr, GLsizeiptr);
#define CALL_FlushMappedNamedBufferRangeEXT(disp, parameters) (* GET_FlushMappedNamedBufferRangeEXT(disp)) parameters
#define GET_FlushMappedNamedBufferRangeEXT(disp) ((_glptr_FlushMappedNamedBufferRangeEXT)(GET_by_offset((disp), _gloffset_FlushMappedNamedBufferRangeEXT)))
#define SET_FlushMappedNamedBufferRangeEXT(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLintptr, GLsizeiptr) = func; \
   SET_by_offset(disp, _gloffset_FlushMappedNamedBufferRangeEXT, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_FramebufferDrawBufferEXT)(GLuint, GLenum);
#define CALL_FramebufferDrawBufferEXT(disp, parameters) (* GET_FramebufferDrawBufferEXT(disp)) parameters
#define GET_FramebufferDrawBufferEXT(disp) ((_glptr_FramebufferDrawBufferEXT)(GET_by_offset((disp), _gloffset_FramebufferDrawBufferEXT)))
#define SET_FramebufferDrawBufferEXT(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLenum) = func; \
   SET_by_offset(disp, _gloffset_FramebufferDrawBufferEXT, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_FramebufferDrawBuffersEXT)(GLuint, GLsizei, const GLenum *);
#define CALL_FramebufferDrawBuffersEXT(disp, parameters) (* GET_FramebufferDrawBuffersEXT(disp)) parameters
#define GET_FramebufferDrawBuffersEXT(disp) ((_glptr_FramebufferDrawBuffersEXT)(GET_by_offset((disp), _gloffset_FramebufferDrawBuffersEXT)))
#define SET_FramebufferDrawBuffersEXT(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLsizei, const GLenum *) = func; \
   SET_by_offset(disp, _gloffset_FramebufferDrawBuffersEXT, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_FramebufferReadBufferEXT)(GLuint, GLenum);
#define CALL_FramebufferReadBufferEXT(disp, parameters) (* GET_FramebufferReadBufferEXT(disp)) parameters
#define GET_FramebufferReadBufferEXT(disp) ((_glptr_FramebufferReadBufferEXT)(GET_by_offset((disp), _gloffset_FramebufferReadBufferEXT)))
#define SET_FramebufferReadBufferEXT(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLenum) = func; \
   SET_by_offset(disp, _gloffset_FramebufferReadBufferEXT, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_GetFramebufferParameterivEXT)(GLuint, GLenum, GLint *);
#define CALL_GetFramebufferParameterivEXT(disp, parameters) (* GET_GetFramebufferParameterivEXT(disp)) parameters
#define GET_GetFramebufferParameterivEXT(disp) ((_glptr_GetFramebufferParameterivEXT)(GET_by_offset((disp), _gloffset_GetFramebufferParameterivEXT)))
#define SET_GetFramebufferParameterivEXT(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLenum, GLint *) = func; \
   SET_by_offset(disp, _gloffset_GetFramebufferParameterivEXT, fn); \
} while (0)

typedef GLenum (GLAPIENTRYP _glptr_CheckNamedFramebufferStatusEXT)(GLuint, GLenum);
#define CALL_CheckNamedFramebufferStatusEXT(disp, parameters) (* GET_CheckNamedFramebufferStatusEXT(disp)) parameters
#define GET_CheckNamedFramebufferStatusEXT(disp) ((_glptr_CheckNamedFramebufferStatusEXT)(GET_by_offset((disp), _gloffset_CheckNamedFramebufferStatusEXT)))
#define SET_CheckNamedFramebufferStatusEXT(disp, func) do { \
   GLenum (GLAPIENTRYP fn)(GLuint, GLenum) = func; \
   SET_by_offset(disp, _gloffset_CheckNamedFramebufferStatusEXT, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_NamedFramebufferTexture1DEXT)(GLuint, GLenum, GLenum, GLuint, GLint);
#define CALL_NamedFramebufferTexture1DEXT(disp, parameters) (* GET_NamedFramebufferTexture1DEXT(disp)) parameters
#define GET_NamedFramebufferTexture1DEXT(disp) ((_glptr_NamedFramebufferTexture1DEXT)(GET_by_offset((disp), _gloffset_NamedFramebufferTexture1DEXT)))
#define SET_NamedFramebufferTexture1DEXT(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLenum, GLenum, GLuint, GLint) = func; \
   SET_by_offset(disp, _gloffset_NamedFramebufferTexture1DEXT, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_NamedFramebufferTexture2DEXT)(GLuint, GLenum, GLenum, GLuint, GLint);
#define CALL_NamedFramebufferTexture2DEXT(disp, parameters) (* GET_NamedFramebufferTexture2DEXT(disp)) parameters
#define GET_NamedFramebufferTexture2DEXT(disp) ((_glptr_NamedFramebufferTexture2DEXT)(GET_by_offset((disp), _gloffset_NamedFramebufferTexture2DEXT)))
#define SET_NamedFramebufferTexture2DEXT(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLenum, GLenum, GLuint, GLint) = func; \
   SET_by_offset(disp, _gloffset_NamedFramebufferTexture2DEXT, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_NamedFramebufferTexture3DEXT)(GLuint, GLenum, GLenum, GLuint, GLint, GLint);
#define CALL_NamedFramebufferTexture3DEXT(disp, parameters) (* GET_NamedFramebufferTexture3DEXT(disp)) parameters
#define GET_NamedFramebufferTexture3DEXT(disp) ((_glptr_NamedFramebufferTexture3DEXT)(GET_by_offset((disp), _gloffset_NamedFramebufferTexture3DEXT)))
#define SET_NamedFramebufferTexture3DEXT(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLenum, GLenum, GLuint, GLint, GLint) = func; \
   SET_by_offset(disp, _gloffset_NamedFramebufferTexture3DEXT, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_NamedFramebufferRenderbufferEXT)(GLuint, GLenum, GLenum, GLuint);
#define CALL_NamedFramebufferRenderbufferEXT(disp, parameters) (* GET_NamedFramebufferRenderbufferEXT(disp)) parameters
#define GET_NamedFramebufferRenderbufferEXT(disp) ((_glptr_NamedFramebufferRenderbufferEXT)(GET_by_offset((disp), _gloffset_NamedFramebufferRenderbufferEXT)))
#define SET_NamedFramebufferRenderbufferEXT(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLenum, GLenum, GLuint) = func; \
   SET_by_offset(disp, _gloffset_NamedFramebufferRenderbufferEXT, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_GetNamedFramebufferAttachmentParameterivEXT)(GLuint, GLenum, GLenum, GLint *);
#define CALL_GetNamedFramebufferAttachmentParameterivEXT(disp, parameters) (* GET_GetNamedFramebufferAttachmentParameterivEXT(disp)) parameters
#define GET_GetNamedFramebufferAttachmentParameterivEXT(disp) ((_glptr_GetNamedFramebufferAttachmentParameterivEXT)(GET_by_offset((disp), _gloffset_GetNamedFramebufferAttachmentParameterivEXT)))
#define SET_GetNamedFramebufferAttachmentParameterivEXT(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLenum, GLenum, GLint *) = func; \
   SET_by_offset(disp, _gloffset_GetNamedFramebufferAttachmentParameterivEXT, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_EnableClientStateiEXT)(GLenum, GLuint);
#define CALL_EnableClientStateiEXT(disp, parameters) (* GET_EnableClientStateiEXT(disp)) parameters
#define GET_EnableClientStateiEXT(disp) ((_glptr_EnableClientStateiEXT)(GET_by_offset((disp), _gloffset_EnableClientStateiEXT)))
#define SET_EnableClientStateiEXT(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLuint) = func; \
   SET_by_offset(disp, _gloffset_EnableClientStateiEXT, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_DisableClientStateiEXT)(GLenum, GLuint);
#define CALL_DisableClientStateiEXT(disp, parameters) (* GET_DisableClientStateiEXT(disp)) parameters
#define GET_DisableClientStateiEXT(disp) ((_glptr_DisableClientStateiEXT)(GET_by_offset((disp), _gloffset_DisableClientStateiEXT)))
#define SET_DisableClientStateiEXT(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLuint) = func; \
   SET_by_offset(disp, _gloffset_DisableClientStateiEXT, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_GetPointerIndexedvEXT)(GLenum, GLuint, GLvoid**);
#define CALL_GetPointerIndexedvEXT(disp, parameters) (* GET_GetPointerIndexedvEXT(disp)) parameters
#define GET_GetPointerIndexedvEXT(disp) ((_glptr_GetPointerIndexedvEXT)(GET_by_offset((disp), _gloffset_GetPointerIndexedvEXT)))
#define SET_GetPointerIndexedvEXT(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLuint, GLvoid**) = func; \
   SET_by_offset(disp, _gloffset_GetPointerIndexedvEXT, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_MultiTexEnviEXT)(GLenum, GLenum, GLenum, GLint);
#define CALL_MultiTexEnviEXT(disp, parameters) (* GET_MultiTexEnviEXT(disp)) parameters
#define GET_MultiTexEnviEXT(disp) ((_glptr_MultiTexEnviEXT)(GET_by_offset((disp), _gloffset_MultiTexEnviEXT)))
#define SET_MultiTexEnviEXT(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLenum, GLenum, GLint) = func; \
   SET_by_offset(disp, _gloffset_MultiTexEnviEXT, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_MultiTexEnvivEXT)(GLenum, GLenum, GLenum, const GLint *);
#define CALL_MultiTexEnvivEXT(disp, parameters) (* GET_MultiTexEnvivEXT(disp)) parameters
#define GET_MultiTexEnvivEXT(disp) ((_glptr_MultiTexEnvivEXT)(GET_by_offset((disp), _gloffset_MultiTexEnvivEXT)))
#define SET_MultiTexEnvivEXT(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLenum, GLenum, const GLint *) = func; \
   SET_by_offset(disp, _gloffset_MultiTexEnvivEXT, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_MultiTexEnvfEXT)(GLenum, GLenum, GLenum, GLfloat);
#define CALL_MultiTexEnvfEXT(disp, parameters) (* GET_MultiTexEnvfEXT(disp)) parameters
#define GET_MultiTexEnvfEXT(disp) ((_glptr_MultiTexEnvfEXT)(GET_by_offset((disp), _gloffset_MultiTexEnvfEXT)))
#define SET_MultiTexEnvfEXT(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLenum, GLenum, GLfloat) = func; \
   SET_by_offset(disp, _gloffset_MultiTexEnvfEXT, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_MultiTexEnvfvEXT)(GLenum, GLenum, GLenum, const GLfloat *);
#define CALL_MultiTexEnvfvEXT(disp, parameters) (* GET_MultiTexEnvfvEXT(disp)) parameters
#define GET_MultiTexEnvfvEXT(disp) ((_glptr_MultiTexEnvfvEXT)(GET_by_offset((disp), _gloffset_MultiTexEnvfvEXT)))
#define SET_MultiTexEnvfvEXT(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLenum, GLenum, const GLfloat *) = func; \
   SET_by_offset(disp, _gloffset_MultiTexEnvfvEXT, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_GetMultiTexEnvivEXT)(GLenum, GLenum, GLenum, GLint *);
#define CALL_GetMultiTexEnvivEXT(disp, parameters) (* GET_GetMultiTexEnvivEXT(disp)) parameters
#define GET_GetMultiTexEnvivEXT(disp) ((_glptr_GetMultiTexEnvivEXT)(GET_by_offset((disp), _gloffset_GetMultiTexEnvivEXT)))
#define SET_GetMultiTexEnvivEXT(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLenum, GLenum, GLint *) = func; \
   SET_by_offset(disp, _gloffset_GetMultiTexEnvivEXT, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_GetMultiTexEnvfvEXT)(GLenum, GLenum, GLenum, GLfloat *);
#define CALL_GetMultiTexEnvfvEXT(disp, parameters) (* GET_GetMultiTexEnvfvEXT(disp)) parameters
#define GET_GetMultiTexEnvfvEXT(disp) ((_glptr_GetMultiTexEnvfvEXT)(GET_by_offset((disp), _gloffset_GetMultiTexEnvfvEXT)))
#define SET_GetMultiTexEnvfvEXT(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLenum, GLenum, GLfloat *) = func; \
   SET_by_offset(disp, _gloffset_GetMultiTexEnvfvEXT, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_MultiTexParameteriEXT)(GLenum, GLenum, GLenum, GLint);
#define CALL_MultiTexParameteriEXT(disp, parameters) (* GET_MultiTexParameteriEXT(disp)) parameters
#define GET_MultiTexParameteriEXT(disp) ((_glptr_MultiTexParameteriEXT)(GET_by_offset((disp), _gloffset_MultiTexParameteriEXT)))
#define SET_MultiTexParameteriEXT(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLenum, GLenum, GLint) = func; \
   SET_by_offset(disp, _gloffset_MultiTexParameteriEXT, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_MultiTexParameterivEXT)(GLenum, GLenum, GLenum, const GLint*);
#define CALL_MultiTexParameterivEXT(disp, parameters) (* GET_MultiTexParameterivEXT(disp)) parameters
#define GET_MultiTexParameterivEXT(disp) ((_glptr_MultiTexParameterivEXT)(GET_by_offset((disp), _gloffset_MultiTexParameterivEXT)))
#define SET_MultiTexParameterivEXT(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLenum, GLenum, const GLint*) = func; \
   SET_by_offset(disp, _gloffset_MultiTexParameterivEXT, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_MultiTexParameterfEXT)(GLenum, GLenum, GLenum, GLfloat);
#define CALL_MultiTexParameterfEXT(disp, parameters) (* GET_MultiTexParameterfEXT(disp)) parameters
#define GET_MultiTexParameterfEXT(disp) ((_glptr_MultiTexParameterfEXT)(GET_by_offset((disp), _gloffset_MultiTexParameterfEXT)))
#define SET_MultiTexParameterfEXT(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLenum, GLenum, GLfloat) = func; \
   SET_by_offset(disp, _gloffset_MultiTexParameterfEXT, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_MultiTexParameterfvEXT)(GLenum, GLenum, GLenum, const GLfloat*);
#define CALL_MultiTexParameterfvEXT(disp, parameters) (* GET_MultiTexParameterfvEXT(disp)) parameters
#define GET_MultiTexParameterfvEXT(disp) ((_glptr_MultiTexParameterfvEXT)(GET_by_offset((disp), _gloffset_MultiTexParameterfvEXT)))
#define SET_MultiTexParameterfvEXT(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLenum, GLenum, const GLfloat*) = func; \
   SET_by_offset(disp, _gloffset_MultiTexParameterfvEXT, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_GetMultiTexImageEXT)(GLenum, GLenum, GLint, GLenum, GLenum, GLvoid*);
#define CALL_GetMultiTexImageEXT(disp, parameters) (* GET_GetMultiTexImageEXT(disp)) parameters
#define GET_GetMultiTexImageEXT(disp) ((_glptr_GetMultiTexImageEXT)(GET_by_offset((disp), _gloffset_GetMultiTexImageEXT)))
#define SET_GetMultiTexImageEXT(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLenum, GLint, GLenum, GLenum, GLvoid*) = func; \
   SET_by_offset(disp, _gloffset_GetMultiTexImageEXT, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_MultiTexImage1DEXT)(GLenum, GLenum, GLint, GLint, GLsizei, GLint, GLenum, GLenum, const GLvoid*);
#define CALL_MultiTexImage1DEXT(disp, parameters) (* GET_MultiTexImage1DEXT(disp)) parameters
#define GET_MultiTexImage1DEXT(disp) ((_glptr_MultiTexImage1DEXT)(GET_by_offset((disp), _gloffset_MultiTexImage1DEXT)))
#define SET_MultiTexImage1DEXT(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLenum, GLint, GLint, GLsizei, GLint, GLenum, GLenum, const GLvoid*) = func; \
   SET_by_offset(disp, _gloffset_MultiTexImage1DEXT, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_MultiTexImage2DEXT)(GLenum, GLenum, GLint, GLint, GLsizei, GLsizei, GLint, GLenum, GLenum, const GLvoid*);
#define CALL_MultiTexImage2DEXT(disp, parameters) (* GET_MultiTexImage2DEXT(disp)) parameters
#define GET_MultiTexImage2DEXT(disp) ((_glptr_MultiTexImage2DEXT)(GET_by_offset((disp), _gloffset_MultiTexImage2DEXT)))
#define SET_MultiTexImage2DEXT(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLenum, GLint, GLint, GLsizei, GLsizei, GLint, GLenum, GLenum, const GLvoid*) = func; \
   SET_by_offset(disp, _gloffset_MultiTexImage2DEXT, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_MultiTexImage3DEXT)(GLenum, GLenum, GLint, GLint, GLsizei, GLsizei, GLsizei, GLint, GLenum, GLenum, const GLvoid*);
#define CALL_MultiTexImage3DEXT(disp, parameters) (* GET_MultiTexImage3DEXT(disp)) parameters
#define GET_MultiTexImage3DEXT(disp) ((_glptr_MultiTexImage3DEXT)(GET_by_offset((disp), _gloffset_MultiTexImage3DEXT)))
#define SET_MultiTexImage3DEXT(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLenum, GLint, GLint, GLsizei, GLsizei, GLsizei, GLint, GLenum, GLenum, const GLvoid*) = func; \
   SET_by_offset(disp, _gloffset_MultiTexImage3DEXT, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_MultiTexSubImage1DEXT)(GLenum, GLenum, GLint, GLint, GLsizei, GLenum, GLenum, const GLvoid*);
#define CALL_MultiTexSubImage1DEXT(disp, parameters) (* GET_MultiTexSubImage1DEXT(disp)) parameters
#define GET_MultiTexSubImage1DEXT(disp) ((_glptr_MultiTexSubImage1DEXT)(GET_by_offset((disp), _gloffset_MultiTexSubImage1DEXT)))
#define SET_MultiTexSubImage1DEXT(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLenum, GLint, GLint, GLsizei, GLenum, GLenum, const GLvoid*) = func; \
   SET_by_offset(disp, _gloffset_MultiTexSubImage1DEXT, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_MultiTexSubImage2DEXT)(GLenum, GLenum, GLint, GLint, GLint, GLsizei, GLsizei, GLenum, GLenum, const GLvoid*);
#define CALL_MultiTexSubImage2DEXT(disp, parameters) (* GET_MultiTexSubImage2DEXT(disp)) parameters
#define GET_MultiTexSubImage2DEXT(disp) ((_glptr_MultiTexSubImage2DEXT)(GET_by_offset((disp), _gloffset_MultiTexSubImage2DEXT)))
#define SET_MultiTexSubImage2DEXT(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLenum, GLint, GLint, GLint, GLsizei, GLsizei, GLenum, GLenum, const GLvoid*) = func; \
   SET_by_offset(disp, _gloffset_MultiTexSubImage2DEXT, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_MultiTexSubImage3DEXT)(GLenum, GLenum, GLint, GLint, GLint, GLint, GLsizei, GLsizei, GLsizei, GLenum, GLenum, const GLvoid*);
#define CALL_MultiTexSubImage3DEXT(disp, parameters) (* GET_MultiTexSubImage3DEXT(disp)) parameters
#define GET_MultiTexSubImage3DEXT(disp) ((_glptr_MultiTexSubImage3DEXT)(GET_by_offset((disp), _gloffset_MultiTexSubImage3DEXT)))
#define SET_MultiTexSubImage3DEXT(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLenum, GLint, GLint, GLint, GLint, GLsizei, GLsizei, GLsizei, GLenum, GLenum, const GLvoid*) = func; \
   SET_by_offset(disp, _gloffset_MultiTexSubImage3DEXT, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_GetMultiTexParameterivEXT)(GLenum, GLenum, GLenum, GLint*);
#define CALL_GetMultiTexParameterivEXT(disp, parameters) (* GET_GetMultiTexParameterivEXT(disp)) parameters
#define GET_GetMultiTexParameterivEXT(disp) ((_glptr_GetMultiTexParameterivEXT)(GET_by_offset((disp), _gloffset_GetMultiTexParameterivEXT)))
#define SET_GetMultiTexParameterivEXT(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLenum, GLenum, GLint*) = func; \
   SET_by_offset(disp, _gloffset_GetMultiTexParameterivEXT, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_GetMultiTexParameterfvEXT)(GLenum, GLenum, GLenum, GLfloat*);
#define CALL_GetMultiTexParameterfvEXT(disp, parameters) (* GET_GetMultiTexParameterfvEXT(disp)) parameters
#define GET_GetMultiTexParameterfvEXT(disp) ((_glptr_GetMultiTexParameterfvEXT)(GET_by_offset((disp), _gloffset_GetMultiTexParameterfvEXT)))
#define SET_GetMultiTexParameterfvEXT(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLenum, GLenum, GLfloat*) = func; \
   SET_by_offset(disp, _gloffset_GetMultiTexParameterfvEXT, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_CopyMultiTexImage1DEXT)(GLenum, GLenum, GLint, GLenum, GLint, GLint, GLsizei, GLint);
#define CALL_CopyMultiTexImage1DEXT(disp, parameters) (* GET_CopyMultiTexImage1DEXT(disp)) parameters
#define GET_CopyMultiTexImage1DEXT(disp) ((_glptr_CopyMultiTexImage1DEXT)(GET_by_offset((disp), _gloffset_CopyMultiTexImage1DEXT)))
#define SET_CopyMultiTexImage1DEXT(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLenum, GLint, GLenum, GLint, GLint, GLsizei, GLint) = func; \
   SET_by_offset(disp, _gloffset_CopyMultiTexImage1DEXT, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_CopyMultiTexImage2DEXT)(GLenum, GLenum, GLint, GLenum, GLint, GLint, GLsizei, GLsizei, GLint);
#define CALL_CopyMultiTexImage2DEXT(disp, parameters) (* GET_CopyMultiTexImage2DEXT(disp)) parameters
#define GET_CopyMultiTexImage2DEXT(disp) ((_glptr_CopyMultiTexImage2DEXT)(GET_by_offset((disp), _gloffset_CopyMultiTexImage2DEXT)))
#define SET_CopyMultiTexImage2DEXT(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLenum, GLint, GLenum, GLint, GLint, GLsizei, GLsizei, GLint) = func; \
   SET_by_offset(disp, _gloffset_CopyMultiTexImage2DEXT, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_CopyMultiTexSubImage1DEXT)(GLenum, GLenum, GLint, GLint, GLint, GLint, GLsizei);
#define CALL_CopyMultiTexSubImage1DEXT(disp, parameters) (* GET_CopyMultiTexSubImage1DEXT(disp)) parameters
#define GET_CopyMultiTexSubImage1DEXT(disp) ((_glptr_CopyMultiTexSubImage1DEXT)(GET_by_offset((disp), _gloffset_CopyMultiTexSubImage1DEXT)))
#define SET_CopyMultiTexSubImage1DEXT(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLenum, GLint, GLint, GLint, GLint, GLsizei) = func; \
   SET_by_offset(disp, _gloffset_CopyMultiTexSubImage1DEXT, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_CopyMultiTexSubImage2DEXT)(GLenum, GLenum, GLint, GLint, GLint, GLint, GLint, GLsizei, GLsizei);
#define CALL_CopyMultiTexSubImage2DEXT(disp, parameters) (* GET_CopyMultiTexSubImage2DEXT(disp)) parameters
#define GET_CopyMultiTexSubImage2DEXT(disp) ((_glptr_CopyMultiTexSubImage2DEXT)(GET_by_offset((disp), _gloffset_CopyMultiTexSubImage2DEXT)))
#define SET_CopyMultiTexSubImage2DEXT(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLenum, GLint, GLint, GLint, GLint, GLint, GLsizei, GLsizei) = func; \
   SET_by_offset(disp, _gloffset_CopyMultiTexSubImage2DEXT, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_CopyMultiTexSubImage3DEXT)(GLenum, GLenum, GLint, GLint, GLint, GLint, GLint, GLint, GLsizei, GLsizei);
#define CALL_CopyMultiTexSubImage3DEXT(disp, parameters) (* GET_CopyMultiTexSubImage3DEXT(disp)) parameters
#define GET_CopyMultiTexSubImage3DEXT(disp) ((_glptr_CopyMultiTexSubImage3DEXT)(GET_by_offset((disp), _gloffset_CopyMultiTexSubImage3DEXT)))
#define SET_CopyMultiTexSubImage3DEXT(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLenum, GLint, GLint, GLint, GLint, GLint, GLint, GLsizei, GLsizei) = func; \
   SET_by_offset(disp, _gloffset_CopyMultiTexSubImage3DEXT, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_MultiTexGendEXT)(GLenum, GLenum, GLenum, GLdouble);
#define CALL_MultiTexGendEXT(disp, parameters) (* GET_MultiTexGendEXT(disp)) parameters
#define GET_MultiTexGendEXT(disp) ((_glptr_MultiTexGendEXT)(GET_by_offset((disp), _gloffset_MultiTexGendEXT)))
#define SET_MultiTexGendEXT(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLenum, GLenum, GLdouble) = func; \
   SET_by_offset(disp, _gloffset_MultiTexGendEXT, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_MultiTexGendvEXT)(GLenum, GLenum, GLenum, const GLdouble*);
#define CALL_MultiTexGendvEXT(disp, parameters) (* GET_MultiTexGendvEXT(disp)) parameters
#define GET_MultiTexGendvEXT(disp) ((_glptr_MultiTexGendvEXT)(GET_by_offset((disp), _gloffset_MultiTexGendvEXT)))
#define SET_MultiTexGendvEXT(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLenum, GLenum, const GLdouble*) = func; \
   SET_by_offset(disp, _gloffset_MultiTexGendvEXT, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_MultiTexGenfEXT)(GLenum, GLenum, GLenum, GLfloat);
#define CALL_MultiTexGenfEXT(disp, parameters) (* GET_MultiTexGenfEXT(disp)) parameters
#define GET_MultiTexGenfEXT(disp) ((_glptr_MultiTexGenfEXT)(GET_by_offset((disp), _gloffset_MultiTexGenfEXT)))
#define SET_MultiTexGenfEXT(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLenum, GLenum, GLfloat) = func; \
   SET_by_offset(disp, _gloffset_MultiTexGenfEXT, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_MultiTexGenfvEXT)(GLenum, GLenum, GLenum, const GLfloat *);
#define CALL_MultiTexGenfvEXT(disp, parameters) (* GET_MultiTexGenfvEXT(disp)) parameters
#define GET_MultiTexGenfvEXT(disp) ((_glptr_MultiTexGenfvEXT)(GET_by_offset((disp), _gloffset_MultiTexGenfvEXT)))
#define SET_MultiTexGenfvEXT(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLenum, GLenum, const GLfloat *) = func; \
   SET_by_offset(disp, _gloffset_MultiTexGenfvEXT, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_MultiTexGeniEXT)(GLenum, GLenum, GLenum, GLint);
#define CALL_MultiTexGeniEXT(disp, parameters) (* GET_MultiTexGeniEXT(disp)) parameters
#define GET_MultiTexGeniEXT(disp) ((_glptr_MultiTexGeniEXT)(GET_by_offset((disp), _gloffset_MultiTexGeniEXT)))
#define SET_MultiTexGeniEXT(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLenum, GLenum, GLint) = func; \
   SET_by_offset(disp, _gloffset_MultiTexGeniEXT, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_MultiTexGenivEXT)(GLenum, GLenum, GLenum, const GLint *);
#define CALL_MultiTexGenivEXT(disp, parameters) (* GET_MultiTexGenivEXT(disp)) parameters
#define GET_MultiTexGenivEXT(disp) ((_glptr_MultiTexGenivEXT)(GET_by_offset((disp), _gloffset_MultiTexGenivEXT)))
#define SET_MultiTexGenivEXT(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLenum, GLenum, const GLint *) = func; \
   SET_by_offset(disp, _gloffset_MultiTexGenivEXT, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_GetMultiTexGendvEXT)(GLenum, GLenum, GLenum, GLdouble *);
#define CALL_GetMultiTexGendvEXT(disp, parameters) (* GET_GetMultiTexGendvEXT(disp)) parameters
#define GET_GetMultiTexGendvEXT(disp) ((_glptr_GetMultiTexGendvEXT)(GET_by_offset((disp), _gloffset_GetMultiTexGendvEXT)))
#define SET_GetMultiTexGendvEXT(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLenum, GLenum, GLdouble *) = func; \
   SET_by_offset(disp, _gloffset_GetMultiTexGendvEXT, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_GetMultiTexGenfvEXT)(GLenum, GLenum, GLenum, GLfloat *);
#define CALL_GetMultiTexGenfvEXT(disp, parameters) (* GET_GetMultiTexGenfvEXT(disp)) parameters
#define GET_GetMultiTexGenfvEXT(disp) ((_glptr_GetMultiTexGenfvEXT)(GET_by_offset((disp), _gloffset_GetMultiTexGenfvEXT)))
#define SET_GetMultiTexGenfvEXT(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLenum, GLenum, GLfloat *) = func; \
   SET_by_offset(disp, _gloffset_GetMultiTexGenfvEXT, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_GetMultiTexGenivEXT)(GLenum, GLenum, GLenum, GLint *);
#define CALL_GetMultiTexGenivEXT(disp, parameters) (* GET_GetMultiTexGenivEXT(disp)) parameters
#define GET_GetMultiTexGenivEXT(disp) ((_glptr_GetMultiTexGenivEXT)(GET_by_offset((disp), _gloffset_GetMultiTexGenivEXT)))
#define SET_GetMultiTexGenivEXT(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLenum, GLenum, GLint *) = func; \
   SET_by_offset(disp, _gloffset_GetMultiTexGenivEXT, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_MultiTexCoordPointerEXT)(GLenum, GLint, GLenum, GLsizei, const GLvoid *);
#define CALL_MultiTexCoordPointerEXT(disp, parameters) (* GET_MultiTexCoordPointerEXT(disp)) parameters
#define GET_MultiTexCoordPointerEXT(disp) ((_glptr_MultiTexCoordPointerEXT)(GET_by_offset((disp), _gloffset_MultiTexCoordPointerEXT)))
#define SET_MultiTexCoordPointerEXT(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLint, GLenum, GLsizei, const GLvoid *) = func; \
   SET_by_offset(disp, _gloffset_MultiTexCoordPointerEXT, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_BindImageTextureEXT)(GLuint, GLuint, GLint, GLboolean, GLint, GLenum, GLint);
#define CALL_BindImageTextureEXT(disp, parameters) (* GET_BindImageTextureEXT(disp)) parameters
#define GET_BindImageTextureEXT(disp) ((_glptr_BindImageTextureEXT)(GET_by_offset((disp), _gloffset_BindImageTextureEXT)))
#define SET_BindImageTextureEXT(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLuint, GLint, GLboolean, GLint, GLenum, GLint) = func; \
   SET_by_offset(disp, _gloffset_BindImageTextureEXT, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_CompressedTextureImage1DEXT)(GLuint, GLenum, GLint, GLenum, GLsizei, GLsizei, GLsizei, const GLvoid *);
#define CALL_CompressedTextureImage1DEXT(disp, parameters) (* GET_CompressedTextureImage1DEXT(disp)) parameters
#define GET_CompressedTextureImage1DEXT(disp) ((_glptr_CompressedTextureImage1DEXT)(GET_by_offset((disp), _gloffset_CompressedTextureImage1DEXT)))
#define SET_CompressedTextureImage1DEXT(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLenum, GLint, GLenum, GLsizei, GLsizei, GLsizei, const GLvoid *) = func; \
   SET_by_offset(disp, _gloffset_CompressedTextureImage1DEXT, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_CompressedTextureImage2DEXT)(GLuint, GLenum, GLint, GLenum, GLsizei, GLsizei, GLsizei, GLsizei, const GLvoid *);
#define CALL_CompressedTextureImage2DEXT(disp, parameters) (* GET_CompressedTextureImage2DEXT(disp)) parameters
#define GET_CompressedTextureImage2DEXT(disp) ((_glptr_CompressedTextureImage2DEXT)(GET_by_offset((disp), _gloffset_CompressedTextureImage2DEXT)))
#define SET_CompressedTextureImage2DEXT(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLenum, GLint, GLenum, GLsizei, GLsizei, GLsizei, GLsizei, const GLvoid *) = func; \
   SET_by_offset(disp, _gloffset_CompressedTextureImage2DEXT, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_CompressedTextureImage3DEXT)(GLuint, GLenum, GLint, GLenum, GLsizei, GLsizei, GLsizei, GLsizei, GLsizei, const GLvoid *);
#define CALL_CompressedTextureImage3DEXT(disp, parameters) (* GET_CompressedTextureImage3DEXT(disp)) parameters
#define GET_CompressedTextureImage3DEXT(disp) ((_glptr_CompressedTextureImage3DEXT)(GET_by_offset((disp), _gloffset_CompressedTextureImage3DEXT)))
#define SET_CompressedTextureImage3DEXT(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLenum, GLint, GLenum, GLsizei, GLsizei, GLsizei, GLsizei, GLsizei, const GLvoid *) = func; \
   SET_by_offset(disp, _gloffset_CompressedTextureImage3DEXT, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_CompressedTextureSubImage1DEXT)(GLuint, GLenum, GLint, GLint, GLsizei, GLenum, GLsizei, const GLvoid *);
#define CALL_CompressedTextureSubImage1DEXT(disp, parameters) (* GET_CompressedTextureSubImage1DEXT(disp)) parameters
#define GET_CompressedTextureSubImage1DEXT(disp) ((_glptr_CompressedTextureSubImage1DEXT)(GET_by_offset((disp), _gloffset_CompressedTextureSubImage1DEXT)))
#define SET_CompressedTextureSubImage1DEXT(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLenum, GLint, GLint, GLsizei, GLenum, GLsizei, const GLvoid *) = func; \
   SET_by_offset(disp, _gloffset_CompressedTextureSubImage1DEXT, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_CompressedTextureSubImage2DEXT)(GLuint, GLenum, GLint, GLint, GLint, GLsizei, GLsizei, GLenum, GLsizei, const GLvoid *);
#define CALL_CompressedTextureSubImage2DEXT(disp, parameters) (* GET_CompressedTextureSubImage2DEXT(disp)) parameters
#define GET_CompressedTextureSubImage2DEXT(disp) ((_glptr_CompressedTextureSubImage2DEXT)(GET_by_offset((disp), _gloffset_CompressedTextureSubImage2DEXT)))
#define SET_CompressedTextureSubImage2DEXT(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLenum, GLint, GLint, GLint, GLsizei, GLsizei, GLenum, GLsizei, const GLvoid *) = func; \
   SET_by_offset(disp, _gloffset_CompressedTextureSubImage2DEXT, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_CompressedTextureSubImage3DEXT)(GLuint, GLenum, GLint, GLint, GLint, GLint, GLsizei, GLsizei, GLsizei, GLenum, GLsizei, const GLvoid *);
#define CALL_CompressedTextureSubImage3DEXT(disp, parameters) (* GET_CompressedTextureSubImage3DEXT(disp)) parameters
#define GET_CompressedTextureSubImage3DEXT(disp) ((_glptr_CompressedTextureSubImage3DEXT)(GET_by_offset((disp), _gloffset_CompressedTextureSubImage3DEXT)))
#define SET_CompressedTextureSubImage3DEXT(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLenum, GLint, GLint, GLint, GLint, GLsizei, GLsizei, GLsizei, GLenum, GLsizei, const GLvoid *) = func; \
   SET_by_offset(disp, _gloffset_CompressedTextureSubImage3DEXT, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_GetCompressedTextureImageEXT)(GLuint, GLenum, GLint, GLvoid *);
#define CALL_GetCompressedTextureImageEXT(disp, parameters) (* GET_GetCompressedTextureImageEXT(disp)) parameters
#define GET_GetCompressedTextureImageEXT(disp) ((_glptr_GetCompressedTextureImageEXT)(GET_by_offset((disp), _gloffset_GetCompressedTextureImageEXT)))
#define SET_GetCompressedTextureImageEXT(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLenum, GLint, GLvoid *) = func; \
   SET_by_offset(disp, _gloffset_GetCompressedTextureImageEXT, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_CompressedMultiTexImage1DEXT)(GLenum, GLenum, GLint, GLenum, GLsizei, GLsizei, GLsizei, const GLvoid *);
#define CALL_CompressedMultiTexImage1DEXT(disp, parameters) (* GET_CompressedMultiTexImage1DEXT(disp)) parameters
#define GET_CompressedMultiTexImage1DEXT(disp) ((_glptr_CompressedMultiTexImage1DEXT)(GET_by_offset((disp), _gloffset_CompressedMultiTexImage1DEXT)))
#define SET_CompressedMultiTexImage1DEXT(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLenum, GLint, GLenum, GLsizei, GLsizei, GLsizei, const GLvoid *) = func; \
   SET_by_offset(disp, _gloffset_CompressedMultiTexImage1DEXT, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_CompressedMultiTexImage2DEXT)(GLenum, GLenum, GLint, GLenum, GLsizei, GLsizei, GLsizei, GLsizei, const GLvoid *);
#define CALL_CompressedMultiTexImage2DEXT(disp, parameters) (* GET_CompressedMultiTexImage2DEXT(disp)) parameters
#define GET_CompressedMultiTexImage2DEXT(disp) ((_glptr_CompressedMultiTexImage2DEXT)(GET_by_offset((disp), _gloffset_CompressedMultiTexImage2DEXT)))
#define SET_CompressedMultiTexImage2DEXT(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLenum, GLint, GLenum, GLsizei, GLsizei, GLsizei, GLsizei, const GLvoid *) = func; \
   SET_by_offset(disp, _gloffset_CompressedMultiTexImage2DEXT, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_CompressedMultiTexImage3DEXT)(GLenum, GLenum, GLint, GLenum, GLsizei, GLsizei, GLsizei, GLsizei, GLsizei, const GLvoid *);
#define CALL_CompressedMultiTexImage3DEXT(disp, parameters) (* GET_CompressedMultiTexImage3DEXT(disp)) parameters
#define GET_CompressedMultiTexImage3DEXT(disp) ((_glptr_CompressedMultiTexImage3DEXT)(GET_by_offset((disp), _gloffset_CompressedMultiTexImage3DEXT)))
#define SET_CompressedMultiTexImage3DEXT(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLenum, GLint, GLenum, GLsizei, GLsizei, GLsizei, GLsizei, GLsizei, const GLvoid *) = func; \
   SET_by_offset(disp, _gloffset_CompressedMultiTexImage3DEXT, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_CompressedMultiTexSubImage1DEXT)(GLenum, GLenum, GLint, GLint, GLsizei, GLenum, GLsizei, const GLvoid *);
#define CALL_CompressedMultiTexSubImage1DEXT(disp, parameters) (* GET_CompressedMultiTexSubImage1DEXT(disp)) parameters
#define GET_CompressedMultiTexSubImage1DEXT(disp) ((_glptr_CompressedMultiTexSubImage1DEXT)(GET_by_offset((disp), _gloffset_CompressedMultiTexSubImage1DEXT)))
#define SET_CompressedMultiTexSubImage1DEXT(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLenum, GLint, GLint, GLsizei, GLenum, GLsizei, const GLvoid *) = func; \
   SET_by_offset(disp, _gloffset_CompressedMultiTexSubImage1DEXT, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_CompressedMultiTexSubImage2DEXT)(GLenum, GLenum, GLint, GLint, GLint, GLsizei, GLsizei, GLenum, GLsizei, const GLvoid *);
#define CALL_CompressedMultiTexSubImage2DEXT(disp, parameters) (* GET_CompressedMultiTexSubImage2DEXT(disp)) parameters
#define GET_CompressedMultiTexSubImage2DEXT(disp) ((_glptr_CompressedMultiTexSubImage2DEXT)(GET_by_offset((disp), _gloffset_CompressedMultiTexSubImage2DEXT)))
#define SET_CompressedMultiTexSubImage2DEXT(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLenum, GLint, GLint, GLint, GLsizei, GLsizei, GLenum, GLsizei, const GLvoid *) = func; \
   SET_by_offset(disp, _gloffset_CompressedMultiTexSubImage2DEXT, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_CompressedMultiTexSubImage3DEXT)(GLenum, GLenum, GLint, GLint, GLint, GLint, GLsizei, GLsizei, GLsizei, GLenum, GLsizei, const GLvoid *);
#define CALL_CompressedMultiTexSubImage3DEXT(disp, parameters) (* GET_CompressedMultiTexSubImage3DEXT(disp)) parameters
#define GET_CompressedMultiTexSubImage3DEXT(disp) ((_glptr_CompressedMultiTexSubImage3DEXT)(GET_by_offset((disp), _gloffset_CompressedMultiTexSubImage3DEXT)))
#define SET_CompressedMultiTexSubImage3DEXT(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLenum, GLint, GLint, GLint, GLint, GLsizei, GLsizei, GLsizei, GLenum, GLsizei, const GLvoid *) = func; \
   SET_by_offset(disp, _gloffset_CompressedMultiTexSubImage3DEXT, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_GetCompressedMultiTexImageEXT)(GLenum, GLenum, GLint, GLvoid *);
#define CALL_GetCompressedMultiTexImageEXT(disp, parameters) (* GET_GetCompressedMultiTexImageEXT(disp)) parameters
#define GET_GetCompressedMultiTexImageEXT(disp) ((_glptr_GetCompressedMultiTexImageEXT)(GET_by_offset((disp), _gloffset_GetCompressedMultiTexImageEXT)))
#define SET_GetCompressedMultiTexImageEXT(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLenum, GLint, GLvoid *) = func; \
   SET_by_offset(disp, _gloffset_GetCompressedMultiTexImageEXT, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_GetMultiTexLevelParameterivEXT)(GLenum, GLenum, GLint, GLenum, GLint*);
#define CALL_GetMultiTexLevelParameterivEXT(disp, parameters) (* GET_GetMultiTexLevelParameterivEXT(disp)) parameters
#define GET_GetMultiTexLevelParameterivEXT(disp) ((_glptr_GetMultiTexLevelParameterivEXT)(GET_by_offset((disp), _gloffset_GetMultiTexLevelParameterivEXT)))
#define SET_GetMultiTexLevelParameterivEXT(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLenum, GLint, GLenum, GLint*) = func; \
   SET_by_offset(disp, _gloffset_GetMultiTexLevelParameterivEXT, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_GetMultiTexLevelParameterfvEXT)(GLenum, GLenum, GLint, GLenum, GLfloat*);
#define CALL_GetMultiTexLevelParameterfvEXT(disp, parameters) (* GET_GetMultiTexLevelParameterfvEXT(disp)) parameters
#define GET_GetMultiTexLevelParameterfvEXT(disp) ((_glptr_GetMultiTexLevelParameterfvEXT)(GET_by_offset((disp), _gloffset_GetMultiTexLevelParameterfvEXT)))
#define SET_GetMultiTexLevelParameterfvEXT(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLenum, GLint, GLenum, GLfloat*) = func; \
   SET_by_offset(disp, _gloffset_GetMultiTexLevelParameterfvEXT, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_FramebufferParameteriMESA)(GLenum, GLenum, GLint);
#define CALL_FramebufferParameteriMESA(disp, parameters) (* GET_FramebufferParameteriMESA(disp)) parameters
#define GET_FramebufferParameteriMESA(disp) ((_glptr_FramebufferParameteriMESA)(GET_by_offset((disp), _gloffset_FramebufferParameteriMESA)))
#define SET_FramebufferParameteriMESA(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLenum, GLint) = func; \
   SET_by_offset(disp, _gloffset_FramebufferParameteriMESA, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_GetFramebufferParameterivMESA)(GLenum, GLenum, GLint *);
#define CALL_GetFramebufferParameterivMESA(disp, parameters) (* GET_GetFramebufferParameterivMESA(disp)) parameters
#define GET_GetFramebufferParameterivMESA(disp) ((_glptr_GetFramebufferParameterivMESA)(GET_by_offset((disp), _gloffset_GetFramebufferParameterivMESA)))
#define SET_GetFramebufferParameterivMESA(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLenum, GLint *) = func; \
   SET_by_offset(disp, _gloffset_GetFramebufferParameterivMESA, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_NamedRenderbufferStorageEXT)(GLuint, GLenum, GLsizei, GLsizei);
#define CALL_NamedRenderbufferStorageEXT(disp, parameters) (* GET_NamedRenderbufferStorageEXT(disp)) parameters
#define GET_NamedRenderbufferStorageEXT(disp) ((_glptr_NamedRenderbufferStorageEXT)(GET_by_offset((disp), _gloffset_NamedRenderbufferStorageEXT)))
#define SET_NamedRenderbufferStorageEXT(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLenum, GLsizei, GLsizei) = func; \
   SET_by_offset(disp, _gloffset_NamedRenderbufferStorageEXT, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_GetNamedRenderbufferParameterivEXT)(GLuint, GLenum, GLint *);
#define CALL_GetNamedRenderbufferParameterivEXT(disp, parameters) (* GET_GetNamedRenderbufferParameterivEXT(disp)) parameters
#define GET_GetNamedRenderbufferParameterivEXT(disp) ((_glptr_GetNamedRenderbufferParameterivEXT)(GET_by_offset((disp), _gloffset_GetNamedRenderbufferParameterivEXT)))
#define SET_GetNamedRenderbufferParameterivEXT(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLenum, GLint *) = func; \
   SET_by_offset(disp, _gloffset_GetNamedRenderbufferParameterivEXT, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_ClientAttribDefaultEXT)(GLbitfield);
#define CALL_ClientAttribDefaultEXT(disp, parameters) (* GET_ClientAttribDefaultEXT(disp)) parameters
#define GET_ClientAttribDefaultEXT(disp) ((_glptr_ClientAttribDefaultEXT)(GET_by_offset((disp), _gloffset_ClientAttribDefaultEXT)))
#define SET_ClientAttribDefaultEXT(disp, func) do { \
   void (GLAPIENTRYP fn)(GLbitfield) = func; \
   SET_by_offset(disp, _gloffset_ClientAttribDefaultEXT, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_PushClientAttribDefaultEXT)(GLbitfield);
#define CALL_PushClientAttribDefaultEXT(disp, parameters) (* GET_PushClientAttribDefaultEXT(disp)) parameters
#define GET_PushClientAttribDefaultEXT(disp) ((_glptr_PushClientAttribDefaultEXT)(GET_by_offset((disp), _gloffset_PushClientAttribDefaultEXT)))
#define SET_PushClientAttribDefaultEXT(disp, func) do { \
   void (GLAPIENTRYP fn)(GLbitfield) = func; \
   SET_by_offset(disp, _gloffset_PushClientAttribDefaultEXT, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_NamedProgramStringEXT)(GLuint, GLenum, GLenum, GLsizei, const GLvoid*);
#define CALL_NamedProgramStringEXT(disp, parameters) (* GET_NamedProgramStringEXT(disp)) parameters
#define GET_NamedProgramStringEXT(disp) ((_glptr_NamedProgramStringEXT)(GET_by_offset((disp), _gloffset_NamedProgramStringEXT)))
#define SET_NamedProgramStringEXT(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLenum, GLenum, GLsizei, const GLvoid*) = func; \
   SET_by_offset(disp, _gloffset_NamedProgramStringEXT, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_GetNamedProgramStringEXT)(GLuint, GLenum, GLenum, GLvoid*);
#define CALL_GetNamedProgramStringEXT(disp, parameters) (* GET_GetNamedProgramStringEXT(disp)) parameters
#define GET_GetNamedProgramStringEXT(disp) ((_glptr_GetNamedProgramStringEXT)(GET_by_offset((disp), _gloffset_GetNamedProgramStringEXT)))
#define SET_GetNamedProgramStringEXT(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLenum, GLenum, GLvoid*) = func; \
   SET_by_offset(disp, _gloffset_GetNamedProgramStringEXT, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_NamedProgramLocalParameter4fEXT)(GLuint, GLenum, GLuint, GLfloat, GLfloat, GLfloat, GLfloat);
#define CALL_NamedProgramLocalParameter4fEXT(disp, parameters) (* GET_NamedProgramLocalParameter4fEXT(disp)) parameters
#define GET_NamedProgramLocalParameter4fEXT(disp) ((_glptr_NamedProgramLocalParameter4fEXT)(GET_by_offset((disp), _gloffset_NamedProgramLocalParameter4fEXT)))
#define SET_NamedProgramLocalParameter4fEXT(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLenum, GLuint, GLfloat, GLfloat, GLfloat, GLfloat) = func; \
   SET_by_offset(disp, _gloffset_NamedProgramLocalParameter4fEXT, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_NamedProgramLocalParameter4fvEXT)(GLuint, GLenum, GLuint, const GLfloat*);
#define CALL_NamedProgramLocalParameter4fvEXT(disp, parameters) (* GET_NamedProgramLocalParameter4fvEXT(disp)) parameters
#define GET_NamedProgramLocalParameter4fvEXT(disp) ((_glptr_NamedProgramLocalParameter4fvEXT)(GET_by_offset((disp), _gloffset_NamedProgramLocalParameter4fvEXT)))
#define SET_NamedProgramLocalParameter4fvEXT(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLenum, GLuint, const GLfloat*) = func; \
   SET_by_offset(disp, _gloffset_NamedProgramLocalParameter4fvEXT, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_GetNamedProgramLocalParameterfvEXT)(GLuint, GLenum, GLuint, GLfloat*);
#define CALL_GetNamedProgramLocalParameterfvEXT(disp, parameters) (* GET_GetNamedProgramLocalParameterfvEXT(disp)) parameters
#define GET_GetNamedProgramLocalParameterfvEXT(disp) ((_glptr_GetNamedProgramLocalParameterfvEXT)(GET_by_offset((disp), _gloffset_GetNamedProgramLocalParameterfvEXT)))
#define SET_GetNamedProgramLocalParameterfvEXT(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLenum, GLuint, GLfloat*) = func; \
   SET_by_offset(disp, _gloffset_GetNamedProgramLocalParameterfvEXT, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_NamedProgramLocalParameter4dEXT)(GLuint, GLenum, GLuint, GLdouble, GLdouble, GLdouble, GLdouble);
#define CALL_NamedProgramLocalParameter4dEXT(disp, parameters) (* GET_NamedProgramLocalParameter4dEXT(disp)) parameters
#define GET_NamedProgramLocalParameter4dEXT(disp) ((_glptr_NamedProgramLocalParameter4dEXT)(GET_by_offset((disp), _gloffset_NamedProgramLocalParameter4dEXT)))
#define SET_NamedProgramLocalParameter4dEXT(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLenum, GLuint, GLdouble, GLdouble, GLdouble, GLdouble) = func; \
   SET_by_offset(disp, _gloffset_NamedProgramLocalParameter4dEXT, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_NamedProgramLocalParameter4dvEXT)(GLuint, GLenum, GLuint, const GLdouble*);
#define CALL_NamedProgramLocalParameter4dvEXT(disp, parameters) (* GET_NamedProgramLocalParameter4dvEXT(disp)) parameters
#define GET_NamedProgramLocalParameter4dvEXT(disp) ((_glptr_NamedProgramLocalParameter4dvEXT)(GET_by_offset((disp), _gloffset_NamedProgramLocalParameter4dvEXT)))
#define SET_NamedProgramLocalParameter4dvEXT(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLenum, GLuint, const GLdouble*) = func; \
   SET_by_offset(disp, _gloffset_NamedProgramLocalParameter4dvEXT, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_GetNamedProgramLocalParameterdvEXT)(GLuint, GLenum, GLuint, GLdouble*);
#define CALL_GetNamedProgramLocalParameterdvEXT(disp, parameters) (* GET_GetNamedProgramLocalParameterdvEXT(disp)) parameters
#define GET_GetNamedProgramLocalParameterdvEXT(disp) ((_glptr_GetNamedProgramLocalParameterdvEXT)(GET_by_offset((disp), _gloffset_GetNamedProgramLocalParameterdvEXT)))
#define SET_GetNamedProgramLocalParameterdvEXT(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLenum, GLuint, GLdouble*) = func; \
   SET_by_offset(disp, _gloffset_GetNamedProgramLocalParameterdvEXT, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_GetNamedProgramivEXT)(GLuint, GLenum, GLenum, GLint*);
#define CALL_GetNamedProgramivEXT(disp, parameters) (* GET_GetNamedProgramivEXT(disp)) parameters
#define GET_GetNamedProgramivEXT(disp) ((_glptr_GetNamedProgramivEXT)(GET_by_offset((disp), _gloffset_GetNamedProgramivEXT)))
#define SET_GetNamedProgramivEXT(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLenum, GLenum, GLint*) = func; \
   SET_by_offset(disp, _gloffset_GetNamedProgramivEXT, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_TextureBufferEXT)(GLuint, GLenum, GLenum, GLuint);
#define CALL_TextureBufferEXT(disp, parameters) (* GET_TextureBufferEXT(disp)) parameters
#define GET_TextureBufferEXT(disp) ((_glptr_TextureBufferEXT)(GET_by_offset((disp), _gloffset_TextureBufferEXT)))
#define SET_TextureBufferEXT(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLenum, GLenum, GLuint) = func; \
   SET_by_offset(disp, _gloffset_TextureBufferEXT, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_MultiTexBufferEXT)(GLenum, GLenum, GLenum, GLuint);
#define CALL_MultiTexBufferEXT(disp, parameters) (* GET_MultiTexBufferEXT(disp)) parameters
#define GET_MultiTexBufferEXT(disp) ((_glptr_MultiTexBufferEXT)(GET_by_offset((disp), _gloffset_MultiTexBufferEXT)))
#define SET_MultiTexBufferEXT(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLenum, GLenum, GLuint) = func; \
   SET_by_offset(disp, _gloffset_MultiTexBufferEXT, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_TextureParameterIivEXT)(GLuint, GLenum, GLenum, const GLint*);
#define CALL_TextureParameterIivEXT(disp, parameters) (* GET_TextureParameterIivEXT(disp)) parameters
#define GET_TextureParameterIivEXT(disp) ((_glptr_TextureParameterIivEXT)(GET_by_offset((disp), _gloffset_TextureParameterIivEXT)))
#define SET_TextureParameterIivEXT(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLenum, GLenum, const GLint*) = func; \
   SET_by_offset(disp, _gloffset_TextureParameterIivEXT, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_TextureParameterIuivEXT)(GLuint, GLenum, GLenum, const GLuint*);
#define CALL_TextureParameterIuivEXT(disp, parameters) (* GET_TextureParameterIuivEXT(disp)) parameters
#define GET_TextureParameterIuivEXT(disp) ((_glptr_TextureParameterIuivEXT)(GET_by_offset((disp), _gloffset_TextureParameterIuivEXT)))
#define SET_TextureParameterIuivEXT(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLenum, GLenum, const GLuint*) = func; \
   SET_by_offset(disp, _gloffset_TextureParameterIuivEXT, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_GetTextureParameterIivEXT)(GLuint, GLenum, GLenum, GLint*);
#define CALL_GetTextureParameterIivEXT(disp, parameters) (* GET_GetTextureParameterIivEXT(disp)) parameters
#define GET_GetTextureParameterIivEXT(disp) ((_glptr_GetTextureParameterIivEXT)(GET_by_offset((disp), _gloffset_GetTextureParameterIivEXT)))
#define SET_GetTextureParameterIivEXT(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLenum, GLenum, GLint*) = func; \
   SET_by_offset(disp, _gloffset_GetTextureParameterIivEXT, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_GetTextureParameterIuivEXT)(GLuint, GLenum, GLenum, GLuint*);
#define CALL_GetTextureParameterIuivEXT(disp, parameters) (* GET_GetTextureParameterIuivEXT(disp)) parameters
#define GET_GetTextureParameterIuivEXT(disp) ((_glptr_GetTextureParameterIuivEXT)(GET_by_offset((disp), _gloffset_GetTextureParameterIuivEXT)))
#define SET_GetTextureParameterIuivEXT(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLenum, GLenum, GLuint*) = func; \
   SET_by_offset(disp, _gloffset_GetTextureParameterIuivEXT, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_MultiTexParameterIivEXT)(GLenum, GLenum, GLenum, const GLint*);
#define CALL_MultiTexParameterIivEXT(disp, parameters) (* GET_MultiTexParameterIivEXT(disp)) parameters
#define GET_MultiTexParameterIivEXT(disp) ((_glptr_MultiTexParameterIivEXT)(GET_by_offset((disp), _gloffset_MultiTexParameterIivEXT)))
#define SET_MultiTexParameterIivEXT(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLenum, GLenum, const GLint*) = func; \
   SET_by_offset(disp, _gloffset_MultiTexParameterIivEXT, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_MultiTexParameterIuivEXT)(GLenum, GLenum, GLenum, const GLuint*);
#define CALL_MultiTexParameterIuivEXT(disp, parameters) (* GET_MultiTexParameterIuivEXT(disp)) parameters
#define GET_MultiTexParameterIuivEXT(disp) ((_glptr_MultiTexParameterIuivEXT)(GET_by_offset((disp), _gloffset_MultiTexParameterIuivEXT)))
#define SET_MultiTexParameterIuivEXT(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLenum, GLenum, const GLuint*) = func; \
   SET_by_offset(disp, _gloffset_MultiTexParameterIuivEXT, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_GetMultiTexParameterIivEXT)(GLenum, GLenum, GLenum, GLint*);
#define CALL_GetMultiTexParameterIivEXT(disp, parameters) (* GET_GetMultiTexParameterIivEXT(disp)) parameters
#define GET_GetMultiTexParameterIivEXT(disp) ((_glptr_GetMultiTexParameterIivEXT)(GET_by_offset((disp), _gloffset_GetMultiTexParameterIivEXT)))
#define SET_GetMultiTexParameterIivEXT(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLenum, GLenum, GLint*) = func; \
   SET_by_offset(disp, _gloffset_GetMultiTexParameterIivEXT, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_GetMultiTexParameterIuivEXT)(GLenum, GLenum, GLenum, GLuint*);
#define CALL_GetMultiTexParameterIuivEXT(disp, parameters) (* GET_GetMultiTexParameterIuivEXT(disp)) parameters
#define GET_GetMultiTexParameterIuivEXT(disp) ((_glptr_GetMultiTexParameterIuivEXT)(GET_by_offset((disp), _gloffset_GetMultiTexParameterIuivEXT)))
#define SET_GetMultiTexParameterIuivEXT(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLenum, GLenum, GLuint*) = func; \
   SET_by_offset(disp, _gloffset_GetMultiTexParameterIuivEXT, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_NamedProgramLocalParameters4fvEXT)(GLuint, GLenum, GLuint, GLsizei, const GLfloat*);
#define CALL_NamedProgramLocalParameters4fvEXT(disp, parameters) (* GET_NamedProgramLocalParameters4fvEXT(disp)) parameters
#define GET_NamedProgramLocalParameters4fvEXT(disp) ((_glptr_NamedProgramLocalParameters4fvEXT)(GET_by_offset((disp), _gloffset_NamedProgramLocalParameters4fvEXT)))
#define SET_NamedProgramLocalParameters4fvEXT(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLenum, GLuint, GLsizei, const GLfloat*) = func; \
   SET_by_offset(disp, _gloffset_NamedProgramLocalParameters4fvEXT, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_GenerateTextureMipmapEXT)(GLuint, GLenum);
#define CALL_GenerateTextureMipmapEXT(disp, parameters) (* GET_GenerateTextureMipmapEXT(disp)) parameters
#define GET_GenerateTextureMipmapEXT(disp) ((_glptr_GenerateTextureMipmapEXT)(GET_by_offset((disp), _gloffset_GenerateTextureMipmapEXT)))
#define SET_GenerateTextureMipmapEXT(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLenum) = func; \
   SET_by_offset(disp, _gloffset_GenerateTextureMipmapEXT, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_GenerateMultiTexMipmapEXT)(GLenum, GLenum);
#define CALL_GenerateMultiTexMipmapEXT(disp, parameters) (* GET_GenerateMultiTexMipmapEXT(disp)) parameters
#define GET_GenerateMultiTexMipmapEXT(disp) ((_glptr_GenerateMultiTexMipmapEXT)(GET_by_offset((disp), _gloffset_GenerateMultiTexMipmapEXT)))
#define SET_GenerateMultiTexMipmapEXT(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLenum) = func; \
   SET_by_offset(disp, _gloffset_GenerateMultiTexMipmapEXT, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_NamedRenderbufferStorageMultisampleEXT)(GLuint, GLsizei, GLenum, GLsizei, GLsizei);
#define CALL_NamedRenderbufferStorageMultisampleEXT(disp, parameters) (* GET_NamedRenderbufferStorageMultisampleEXT(disp)) parameters
#define GET_NamedRenderbufferStorageMultisampleEXT(disp) ((_glptr_NamedRenderbufferStorageMultisampleEXT)(GET_by_offset((disp), _gloffset_NamedRenderbufferStorageMultisampleEXT)))
#define SET_NamedRenderbufferStorageMultisampleEXT(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLsizei, GLenum, GLsizei, GLsizei) = func; \
   SET_by_offset(disp, _gloffset_NamedRenderbufferStorageMultisampleEXT, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_NamedCopyBufferSubDataEXT)(GLuint, GLuint, GLintptr, GLintptr, GLsizeiptr);
#define CALL_NamedCopyBufferSubDataEXT(disp, parameters) (* GET_NamedCopyBufferSubDataEXT(disp)) parameters
#define GET_NamedCopyBufferSubDataEXT(disp) ((_glptr_NamedCopyBufferSubDataEXT)(GET_by_offset((disp), _gloffset_NamedCopyBufferSubDataEXT)))
#define SET_NamedCopyBufferSubDataEXT(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLuint, GLintptr, GLintptr, GLsizeiptr) = func; \
   SET_by_offset(disp, _gloffset_NamedCopyBufferSubDataEXT, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_VertexArrayVertexOffsetEXT)(GLuint, GLuint, GLint, GLenum, GLsizei, GLintptr);
#define CALL_VertexArrayVertexOffsetEXT(disp, parameters) (* GET_VertexArrayVertexOffsetEXT(disp)) parameters
#define GET_VertexArrayVertexOffsetEXT(disp) ((_glptr_VertexArrayVertexOffsetEXT)(GET_by_offset((disp), _gloffset_VertexArrayVertexOffsetEXT)))
#define SET_VertexArrayVertexOffsetEXT(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLuint, GLint, GLenum, GLsizei, GLintptr) = func; \
   SET_by_offset(disp, _gloffset_VertexArrayVertexOffsetEXT, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_VertexArrayColorOffsetEXT)(GLuint, GLuint, GLint, GLenum, GLsizei, GLintptr);
#define CALL_VertexArrayColorOffsetEXT(disp, parameters) (* GET_VertexArrayColorOffsetEXT(disp)) parameters
#define GET_VertexArrayColorOffsetEXT(disp) ((_glptr_VertexArrayColorOffsetEXT)(GET_by_offset((disp), _gloffset_VertexArrayColorOffsetEXT)))
#define SET_VertexArrayColorOffsetEXT(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLuint, GLint, GLenum, GLsizei, GLintptr) = func; \
   SET_by_offset(disp, _gloffset_VertexArrayColorOffsetEXT, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_VertexArrayEdgeFlagOffsetEXT)(GLuint, GLuint, GLsizei, GLintptr);
#define CALL_VertexArrayEdgeFlagOffsetEXT(disp, parameters) (* GET_VertexArrayEdgeFlagOffsetEXT(disp)) parameters
#define GET_VertexArrayEdgeFlagOffsetEXT(disp) ((_glptr_VertexArrayEdgeFlagOffsetEXT)(GET_by_offset((disp), _gloffset_VertexArrayEdgeFlagOffsetEXT)))
#define SET_VertexArrayEdgeFlagOffsetEXT(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLuint, GLsizei, GLintptr) = func; \
   SET_by_offset(disp, _gloffset_VertexArrayEdgeFlagOffsetEXT, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_VertexArrayIndexOffsetEXT)(GLuint, GLuint, GLenum, GLsizei, GLintptr);
#define CALL_VertexArrayIndexOffsetEXT(disp, parameters) (* GET_VertexArrayIndexOffsetEXT(disp)) parameters
#define GET_VertexArrayIndexOffsetEXT(disp) ((_glptr_VertexArrayIndexOffsetEXT)(GET_by_offset((disp), _gloffset_VertexArrayIndexOffsetEXT)))
#define SET_VertexArrayIndexOffsetEXT(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLuint, GLenum, GLsizei, GLintptr) = func; \
   SET_by_offset(disp, _gloffset_VertexArrayIndexOffsetEXT, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_VertexArrayNormalOffsetEXT)(GLuint, GLuint, GLenum, GLsizei, GLintptr);
#define CALL_VertexArrayNormalOffsetEXT(disp, parameters) (* GET_VertexArrayNormalOffsetEXT(disp)) parameters
#define GET_VertexArrayNormalOffsetEXT(disp) ((_glptr_VertexArrayNormalOffsetEXT)(GET_by_offset((disp), _gloffset_VertexArrayNormalOffsetEXT)))
#define SET_VertexArrayNormalOffsetEXT(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLuint, GLenum, GLsizei, GLintptr) = func; \
   SET_by_offset(disp, _gloffset_VertexArrayNormalOffsetEXT, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_VertexArrayTexCoordOffsetEXT)(GLuint, GLuint, GLint, GLenum, GLsizei, GLintptr);
#define CALL_VertexArrayTexCoordOffsetEXT(disp, parameters) (* GET_VertexArrayTexCoordOffsetEXT(disp)) parameters
#define GET_VertexArrayTexCoordOffsetEXT(disp) ((_glptr_VertexArrayTexCoordOffsetEXT)(GET_by_offset((disp), _gloffset_VertexArrayTexCoordOffsetEXT)))
#define SET_VertexArrayTexCoordOffsetEXT(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLuint, GLint, GLenum, GLsizei, GLintptr) = func; \
   SET_by_offset(disp, _gloffset_VertexArrayTexCoordOffsetEXT, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_VertexArrayMultiTexCoordOffsetEXT)(GLuint, GLuint, GLenum, GLint, GLenum, GLsizei, GLintptr);
#define CALL_VertexArrayMultiTexCoordOffsetEXT(disp, parameters) (* GET_VertexArrayMultiTexCoordOffsetEXT(disp)) parameters
#define GET_VertexArrayMultiTexCoordOffsetEXT(disp) ((_glptr_VertexArrayMultiTexCoordOffsetEXT)(GET_by_offset((disp), _gloffset_VertexArrayMultiTexCoordOffsetEXT)))
#define SET_VertexArrayMultiTexCoordOffsetEXT(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLuint, GLenum, GLint, GLenum, GLsizei, GLintptr) = func; \
   SET_by_offset(disp, _gloffset_VertexArrayMultiTexCoordOffsetEXT, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_VertexArrayFogCoordOffsetEXT)(GLuint, GLuint, GLenum, GLsizei, GLintptr);
#define CALL_VertexArrayFogCoordOffsetEXT(disp, parameters) (* GET_VertexArrayFogCoordOffsetEXT(disp)) parameters
#define GET_VertexArrayFogCoordOffsetEXT(disp) ((_glptr_VertexArrayFogCoordOffsetEXT)(GET_by_offset((disp), _gloffset_VertexArrayFogCoordOffsetEXT)))
#define SET_VertexArrayFogCoordOffsetEXT(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLuint, GLenum, GLsizei, GLintptr) = func; \
   SET_by_offset(disp, _gloffset_VertexArrayFogCoordOffsetEXT, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_VertexArraySecondaryColorOffsetEXT)(GLuint, GLuint, GLint, GLenum, GLsizei, GLintptr);
#define CALL_VertexArraySecondaryColorOffsetEXT(disp, parameters) (* GET_VertexArraySecondaryColorOffsetEXT(disp)) parameters
#define GET_VertexArraySecondaryColorOffsetEXT(disp) ((_glptr_VertexArraySecondaryColorOffsetEXT)(GET_by_offset((disp), _gloffset_VertexArraySecondaryColorOffsetEXT)))
#define SET_VertexArraySecondaryColorOffsetEXT(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLuint, GLint, GLenum, GLsizei, GLintptr) = func; \
   SET_by_offset(disp, _gloffset_VertexArraySecondaryColorOffsetEXT, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_VertexArrayVertexAttribOffsetEXT)(GLuint, GLuint, GLuint, GLint, GLenum, GLboolean, GLsizei, GLintptr);
#define CALL_VertexArrayVertexAttribOffsetEXT(disp, parameters) (* GET_VertexArrayVertexAttribOffsetEXT(disp)) parameters
#define GET_VertexArrayVertexAttribOffsetEXT(disp) ((_glptr_VertexArrayVertexAttribOffsetEXT)(GET_by_offset((disp), _gloffset_VertexArrayVertexAttribOffsetEXT)))
#define SET_VertexArrayVertexAttribOffsetEXT(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLuint, GLuint, GLint, GLenum, GLboolean, GLsizei, GLintptr) = func; \
   SET_by_offset(disp, _gloffset_VertexArrayVertexAttribOffsetEXT, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_VertexArrayVertexAttribIOffsetEXT)(GLuint, GLuint, GLuint, GLint, GLenum, GLsizei, GLintptr);
#define CALL_VertexArrayVertexAttribIOffsetEXT(disp, parameters) (* GET_VertexArrayVertexAttribIOffsetEXT(disp)) parameters
#define GET_VertexArrayVertexAttribIOffsetEXT(disp) ((_glptr_VertexArrayVertexAttribIOffsetEXT)(GET_by_offset((disp), _gloffset_VertexArrayVertexAttribIOffsetEXT)))
#define SET_VertexArrayVertexAttribIOffsetEXT(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLuint, GLuint, GLint, GLenum, GLsizei, GLintptr) = func; \
   SET_by_offset(disp, _gloffset_VertexArrayVertexAttribIOffsetEXT, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_EnableVertexArrayEXT)(GLuint, GLenum);
#define CALL_EnableVertexArrayEXT(disp, parameters) (* GET_EnableVertexArrayEXT(disp)) parameters
#define GET_EnableVertexArrayEXT(disp) ((_glptr_EnableVertexArrayEXT)(GET_by_offset((disp), _gloffset_EnableVertexArrayEXT)))
#define SET_EnableVertexArrayEXT(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLenum) = func; \
   SET_by_offset(disp, _gloffset_EnableVertexArrayEXT, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_DisableVertexArrayEXT)(GLuint, GLenum);
#define CALL_DisableVertexArrayEXT(disp, parameters) (* GET_DisableVertexArrayEXT(disp)) parameters
#define GET_DisableVertexArrayEXT(disp) ((_glptr_DisableVertexArrayEXT)(GET_by_offset((disp), _gloffset_DisableVertexArrayEXT)))
#define SET_DisableVertexArrayEXT(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLenum) = func; \
   SET_by_offset(disp, _gloffset_DisableVertexArrayEXT, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_EnableVertexArrayAttribEXT)(GLuint, GLuint);
#define CALL_EnableVertexArrayAttribEXT(disp, parameters) (* GET_EnableVertexArrayAttribEXT(disp)) parameters
#define GET_EnableVertexArrayAttribEXT(disp) ((_glptr_EnableVertexArrayAttribEXT)(GET_by_offset((disp), _gloffset_EnableVertexArrayAttribEXT)))
#define SET_EnableVertexArrayAttribEXT(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLuint) = func; \
   SET_by_offset(disp, _gloffset_EnableVertexArrayAttribEXT, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_DisableVertexArrayAttribEXT)(GLuint, GLuint);
#define CALL_DisableVertexArrayAttribEXT(disp, parameters) (* GET_DisableVertexArrayAttribEXT(disp)) parameters
#define GET_DisableVertexArrayAttribEXT(disp) ((_glptr_DisableVertexArrayAttribEXT)(GET_by_offset((disp), _gloffset_DisableVertexArrayAttribEXT)))
#define SET_DisableVertexArrayAttribEXT(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLuint) = func; \
   SET_by_offset(disp, _gloffset_DisableVertexArrayAttribEXT, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_GetVertexArrayIntegervEXT)(GLuint, GLenum, GLint*);
#define CALL_GetVertexArrayIntegervEXT(disp, parameters) (* GET_GetVertexArrayIntegervEXT(disp)) parameters
#define GET_GetVertexArrayIntegervEXT(disp) ((_glptr_GetVertexArrayIntegervEXT)(GET_by_offset((disp), _gloffset_GetVertexArrayIntegervEXT)))
#define SET_GetVertexArrayIntegervEXT(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLenum, GLint*) = func; \
   SET_by_offset(disp, _gloffset_GetVertexArrayIntegervEXT, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_GetVertexArrayPointervEXT)(GLuint, GLenum, GLvoid**);
#define CALL_GetVertexArrayPointervEXT(disp, parameters) (* GET_GetVertexArrayPointervEXT(disp)) parameters
#define GET_GetVertexArrayPointervEXT(disp) ((_glptr_GetVertexArrayPointervEXT)(GET_by_offset((disp), _gloffset_GetVertexArrayPointervEXT)))
#define SET_GetVertexArrayPointervEXT(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLenum, GLvoid**) = func; \
   SET_by_offset(disp, _gloffset_GetVertexArrayPointervEXT, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_GetVertexArrayIntegeri_vEXT)(GLuint, GLuint, GLenum, GLint*);
#define CALL_GetVertexArrayIntegeri_vEXT(disp, parameters) (* GET_GetVertexArrayIntegeri_vEXT(disp)) parameters
#define GET_GetVertexArrayIntegeri_vEXT(disp) ((_glptr_GetVertexArrayIntegeri_vEXT)(GET_by_offset((disp), _gloffset_GetVertexArrayIntegeri_vEXT)))
#define SET_GetVertexArrayIntegeri_vEXT(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLuint, GLenum, GLint*) = func; \
   SET_by_offset(disp, _gloffset_GetVertexArrayIntegeri_vEXT, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_GetVertexArrayPointeri_vEXT)(GLuint, GLuint, GLenum, GLvoid**);
#define CALL_GetVertexArrayPointeri_vEXT(disp, parameters) (* GET_GetVertexArrayPointeri_vEXT(disp)) parameters
#define GET_GetVertexArrayPointeri_vEXT(disp) ((_glptr_GetVertexArrayPointeri_vEXT)(GET_by_offset((disp), _gloffset_GetVertexArrayPointeri_vEXT)))
#define SET_GetVertexArrayPointeri_vEXT(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLuint, GLenum, GLvoid**) = func; \
   SET_by_offset(disp, _gloffset_GetVertexArrayPointeri_vEXT, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_ClearNamedBufferDataEXT)(GLuint, GLenum, GLenum, GLenum, const GLvoid *);
#define CALL_ClearNamedBufferDataEXT(disp, parameters) (* GET_ClearNamedBufferDataEXT(disp)) parameters
#define GET_ClearNamedBufferDataEXT(disp) ((_glptr_ClearNamedBufferDataEXT)(GET_by_offset((disp), _gloffset_ClearNamedBufferDataEXT)))
#define SET_ClearNamedBufferDataEXT(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLenum, GLenum, GLenum, const GLvoid *) = func; \
   SET_by_offset(disp, _gloffset_ClearNamedBufferDataEXT, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_ClearNamedBufferSubDataEXT)(GLuint, GLenum, GLintptr, GLsizeiptr, GLenum, GLenum, const GLvoid *);
#define CALL_ClearNamedBufferSubDataEXT(disp, parameters) (* GET_ClearNamedBufferSubDataEXT(disp)) parameters
#define GET_ClearNamedBufferSubDataEXT(disp) ((_glptr_ClearNamedBufferSubDataEXT)(GET_by_offset((disp), _gloffset_ClearNamedBufferSubDataEXT)))
#define SET_ClearNamedBufferSubDataEXT(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLenum, GLintptr, GLsizeiptr, GLenum, GLenum, const GLvoid *) = func; \
   SET_by_offset(disp, _gloffset_ClearNamedBufferSubDataEXT, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_NamedFramebufferParameteriEXT)(GLuint, GLenum, GLint);
#define CALL_NamedFramebufferParameteriEXT(disp, parameters) (* GET_NamedFramebufferParameteriEXT(disp)) parameters
#define GET_NamedFramebufferParameteriEXT(disp) ((_glptr_NamedFramebufferParameteriEXT)(GET_by_offset((disp), _gloffset_NamedFramebufferParameteriEXT)))
#define SET_NamedFramebufferParameteriEXT(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLenum, GLint) = func; \
   SET_by_offset(disp, _gloffset_NamedFramebufferParameteriEXT, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_GetNamedFramebufferParameterivEXT)(GLuint, GLenum, GLint*);
#define CALL_GetNamedFramebufferParameterivEXT(disp, parameters) (* GET_GetNamedFramebufferParameterivEXT(disp)) parameters
#define GET_GetNamedFramebufferParameterivEXT(disp) ((_glptr_GetNamedFramebufferParameterivEXT)(GET_by_offset((disp), _gloffset_GetNamedFramebufferParameterivEXT)))
#define SET_GetNamedFramebufferParameterivEXT(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLenum, GLint*) = func; \
   SET_by_offset(disp, _gloffset_GetNamedFramebufferParameterivEXT, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_VertexArrayVertexAttribLOffsetEXT)(GLuint, GLuint, GLuint, GLint, GLenum, GLsizei, GLintptr);
#define CALL_VertexArrayVertexAttribLOffsetEXT(disp, parameters) (* GET_VertexArrayVertexAttribLOffsetEXT(disp)) parameters
#define GET_VertexArrayVertexAttribLOffsetEXT(disp) ((_glptr_VertexArrayVertexAttribLOffsetEXT)(GET_by_offset((disp), _gloffset_VertexArrayVertexAttribLOffsetEXT)))
#define SET_VertexArrayVertexAttribLOffsetEXT(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLuint, GLuint, GLint, GLenum, GLsizei, GLintptr) = func; \
   SET_by_offset(disp, _gloffset_VertexArrayVertexAttribLOffsetEXT, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_VertexArrayVertexAttribDivisorEXT)(GLuint, GLuint, GLuint);
#define CALL_VertexArrayVertexAttribDivisorEXT(disp, parameters) (* GET_VertexArrayVertexAttribDivisorEXT(disp)) parameters
#define GET_VertexArrayVertexAttribDivisorEXT(disp) ((_glptr_VertexArrayVertexAttribDivisorEXT)(GET_by_offset((disp), _gloffset_VertexArrayVertexAttribDivisorEXT)))
#define SET_VertexArrayVertexAttribDivisorEXT(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLuint, GLuint) = func; \
   SET_by_offset(disp, _gloffset_VertexArrayVertexAttribDivisorEXT, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_TextureBufferRangeEXT)(GLuint, GLenum, GLenum, GLuint, GLintptr, GLsizeiptr);
#define CALL_TextureBufferRangeEXT(disp, parameters) (* GET_TextureBufferRangeEXT(disp)) parameters
#define GET_TextureBufferRangeEXT(disp) ((_glptr_TextureBufferRangeEXT)(GET_by_offset((disp), _gloffset_TextureBufferRangeEXT)))
#define SET_TextureBufferRangeEXT(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLenum, GLenum, GLuint, GLintptr, GLsizeiptr) = func; \
   SET_by_offset(disp, _gloffset_TextureBufferRangeEXT, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_TextureStorage2DMultisampleEXT)(GLuint, GLenum, GLsizei, GLenum, GLsizei, GLsizei, GLboolean);
#define CALL_TextureStorage2DMultisampleEXT(disp, parameters) (* GET_TextureStorage2DMultisampleEXT(disp)) parameters
#define GET_TextureStorage2DMultisampleEXT(disp) ((_glptr_TextureStorage2DMultisampleEXT)(GET_by_offset((disp), _gloffset_TextureStorage2DMultisampleEXT)))
#define SET_TextureStorage2DMultisampleEXT(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLenum, GLsizei, GLenum, GLsizei, GLsizei, GLboolean) = func; \
   SET_by_offset(disp, _gloffset_TextureStorage2DMultisampleEXT, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_TextureStorage3DMultisampleEXT)(GLuint, GLenum, GLsizei, GLenum, GLsizei, GLsizei, GLsizei, GLboolean);
#define CALL_TextureStorage3DMultisampleEXT(disp, parameters) (* GET_TextureStorage3DMultisampleEXT(disp)) parameters
#define GET_TextureStorage3DMultisampleEXT(disp) ((_glptr_TextureStorage3DMultisampleEXT)(GET_by_offset((disp), _gloffset_TextureStorage3DMultisampleEXT)))
#define SET_TextureStorage3DMultisampleEXT(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLenum, GLsizei, GLenum, GLsizei, GLsizei, GLsizei, GLboolean) = func; \
   SET_by_offset(disp, _gloffset_TextureStorage3DMultisampleEXT, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_VertexArrayBindVertexBufferEXT)(GLuint, GLuint, GLuint, GLintptr, GLsizei);
#define CALL_VertexArrayBindVertexBufferEXT(disp, parameters) (* GET_VertexArrayBindVertexBufferEXT(disp)) parameters
#define GET_VertexArrayBindVertexBufferEXT(disp) ((_glptr_VertexArrayBindVertexBufferEXT)(GET_by_offset((disp), _gloffset_VertexArrayBindVertexBufferEXT)))
#define SET_VertexArrayBindVertexBufferEXT(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLuint, GLuint, GLintptr, GLsizei) = func; \
   SET_by_offset(disp, _gloffset_VertexArrayBindVertexBufferEXT, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_VertexArrayVertexAttribFormatEXT)(GLuint, GLuint, GLint, GLenum, GLboolean, GLuint);
#define CALL_VertexArrayVertexAttribFormatEXT(disp, parameters) (* GET_VertexArrayVertexAttribFormatEXT(disp)) parameters
#define GET_VertexArrayVertexAttribFormatEXT(disp) ((_glptr_VertexArrayVertexAttribFormatEXT)(GET_by_offset((disp), _gloffset_VertexArrayVertexAttribFormatEXT)))
#define SET_VertexArrayVertexAttribFormatEXT(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLuint, GLint, GLenum, GLboolean, GLuint) = func; \
   SET_by_offset(disp, _gloffset_VertexArrayVertexAttribFormatEXT, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_VertexArrayVertexAttribIFormatEXT)(GLuint, GLuint, GLint, GLenum, GLuint);
#define CALL_VertexArrayVertexAttribIFormatEXT(disp, parameters) (* GET_VertexArrayVertexAttribIFormatEXT(disp)) parameters
#define GET_VertexArrayVertexAttribIFormatEXT(disp) ((_glptr_VertexArrayVertexAttribIFormatEXT)(GET_by_offset((disp), _gloffset_VertexArrayVertexAttribIFormatEXT)))
#define SET_VertexArrayVertexAttribIFormatEXT(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLuint, GLint, GLenum, GLuint) = func; \
   SET_by_offset(disp, _gloffset_VertexArrayVertexAttribIFormatEXT, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_VertexArrayVertexAttribLFormatEXT)(GLuint, GLuint, GLint, GLenum, GLuint);
#define CALL_VertexArrayVertexAttribLFormatEXT(disp, parameters) (* GET_VertexArrayVertexAttribLFormatEXT(disp)) parameters
#define GET_VertexArrayVertexAttribLFormatEXT(disp) ((_glptr_VertexArrayVertexAttribLFormatEXT)(GET_by_offset((disp), _gloffset_VertexArrayVertexAttribLFormatEXT)))
#define SET_VertexArrayVertexAttribLFormatEXT(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLuint, GLint, GLenum, GLuint) = func; \
   SET_by_offset(disp, _gloffset_VertexArrayVertexAttribLFormatEXT, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_VertexArrayVertexAttribBindingEXT)(GLuint, GLuint, GLuint);
#define CALL_VertexArrayVertexAttribBindingEXT(disp, parameters) (* GET_VertexArrayVertexAttribBindingEXT(disp)) parameters
#define GET_VertexArrayVertexAttribBindingEXT(disp) ((_glptr_VertexArrayVertexAttribBindingEXT)(GET_by_offset((disp), _gloffset_VertexArrayVertexAttribBindingEXT)))
#define SET_VertexArrayVertexAttribBindingEXT(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLuint, GLuint) = func; \
   SET_by_offset(disp, _gloffset_VertexArrayVertexAttribBindingEXT, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_VertexArrayVertexBindingDivisorEXT)(GLuint, GLuint, GLuint);
#define CALL_VertexArrayVertexBindingDivisorEXT(disp, parameters) (* GET_VertexArrayVertexBindingDivisorEXT(disp)) parameters
#define GET_VertexArrayVertexBindingDivisorEXT(disp) ((_glptr_VertexArrayVertexBindingDivisorEXT)(GET_by_offset((disp), _gloffset_VertexArrayVertexBindingDivisorEXT)))
#define SET_VertexArrayVertexBindingDivisorEXT(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLuint, GLuint) = func; \
   SET_by_offset(disp, _gloffset_VertexArrayVertexBindingDivisorEXT, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_NamedBufferPageCommitmentEXT)(GLuint, GLintptr, GLsizeiptr, GLboolean);
#define CALL_NamedBufferPageCommitmentEXT(disp, parameters) (* GET_NamedBufferPageCommitmentEXT(disp)) parameters
#define GET_NamedBufferPageCommitmentEXT(disp) ((_glptr_NamedBufferPageCommitmentEXT)(GET_by_offset((disp), _gloffset_NamedBufferPageCommitmentEXT)))
#define SET_NamedBufferPageCommitmentEXT(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLintptr, GLsizeiptr, GLboolean) = func; \
   SET_by_offset(disp, _gloffset_NamedBufferPageCommitmentEXT, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_NamedStringARB)(GLenum, GLint, const GLchar *, GLint, const GLchar *);
#define CALL_NamedStringARB(disp, parameters) (* GET_NamedStringARB(disp)) parameters
#define GET_NamedStringARB(disp) ((_glptr_NamedStringARB)(GET_by_offset((disp), _gloffset_NamedStringARB)))
#define SET_NamedStringARB(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLint, const GLchar *, GLint, const GLchar *) = func; \
   SET_by_offset(disp, _gloffset_NamedStringARB, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_DeleteNamedStringARB)(GLint, const GLchar *);
#define CALL_DeleteNamedStringARB(disp, parameters) (* GET_DeleteNamedStringARB(disp)) parameters
#define GET_DeleteNamedStringARB(disp) ((_glptr_DeleteNamedStringARB)(GET_by_offset((disp), _gloffset_DeleteNamedStringARB)))
#define SET_DeleteNamedStringARB(disp, func) do { \
   void (GLAPIENTRYP fn)(GLint, const GLchar *) = func; \
   SET_by_offset(disp, _gloffset_DeleteNamedStringARB, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_CompileShaderIncludeARB)(GLuint, GLsizei, const GLchar * const *, const GLint *);
#define CALL_CompileShaderIncludeARB(disp, parameters) (* GET_CompileShaderIncludeARB(disp)) parameters
#define GET_CompileShaderIncludeARB(disp) ((_glptr_CompileShaderIncludeARB)(GET_by_offset((disp), _gloffset_CompileShaderIncludeARB)))
#define SET_CompileShaderIncludeARB(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLsizei, const GLchar * const *, const GLint *) = func; \
   SET_by_offset(disp, _gloffset_CompileShaderIncludeARB, fn); \
} while (0)

typedef GLboolean (GLAPIENTRYP _glptr_IsNamedStringARB)(GLint, const GLchar *);
#define CALL_IsNamedStringARB(disp, parameters) (* GET_IsNamedStringARB(disp)) parameters
#define GET_IsNamedStringARB(disp) ((_glptr_IsNamedStringARB)(GET_by_offset((disp), _gloffset_IsNamedStringARB)))
#define SET_IsNamedStringARB(disp, func) do { \
   GLboolean (GLAPIENTRYP fn)(GLint, const GLchar *) = func; \
   SET_by_offset(disp, _gloffset_IsNamedStringARB, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_GetNamedStringARB)(GLint, const GLchar *, GLsizei, GLint *, GLchar *);
#define CALL_GetNamedStringARB(disp, parameters) (* GET_GetNamedStringARB(disp)) parameters
#define GET_GetNamedStringARB(disp) ((_glptr_GetNamedStringARB)(GET_by_offset((disp), _gloffset_GetNamedStringARB)))
#define SET_GetNamedStringARB(disp, func) do { \
   void (GLAPIENTRYP fn)(GLint, const GLchar *, GLsizei, GLint *, GLchar *) = func; \
   SET_by_offset(disp, _gloffset_GetNamedStringARB, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_GetNamedStringivARB)(GLint, const GLchar *, GLenum, GLint *);
#define CALL_GetNamedStringivARB(disp, parameters) (* GET_GetNamedStringivARB(disp)) parameters
#define GET_GetNamedStringivARB(disp) ((_glptr_GetNamedStringivARB)(GET_by_offset((disp), _gloffset_GetNamedStringivARB)))
#define SET_GetNamedStringivARB(disp, func) do { \
   void (GLAPIENTRYP fn)(GLint, const GLchar *, GLenum, GLint *) = func; \
   SET_by_offset(disp, _gloffset_GetNamedStringivARB, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_EGLImageTargetTexStorageEXT)(GLenum, GLvoid *, const GLint *);
#define CALL_EGLImageTargetTexStorageEXT(disp, parameters) (* GET_EGLImageTargetTexStorageEXT(disp)) parameters
#define GET_EGLImageTargetTexStorageEXT(disp) ((_glptr_EGLImageTargetTexStorageEXT)(GET_by_offset((disp), _gloffset_EGLImageTargetTexStorageEXT)))
#define SET_EGLImageTargetTexStorageEXT(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLvoid *, const GLint *) = func; \
   SET_by_offset(disp, _gloffset_EGLImageTargetTexStorageEXT, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_EGLImageTargetTextureStorageEXT)(GLuint, GLvoid *, const GLint *);
#define CALL_EGLImageTargetTextureStorageEXT(disp, parameters) (* GET_EGLImageTargetTextureStorageEXT(disp)) parameters
#define GET_EGLImageTargetTextureStorageEXT(disp) ((_glptr_EGLImageTargetTextureStorageEXT)(GET_by_offset((disp), _gloffset_EGLImageTargetTextureStorageEXT)))
#define SET_EGLImageTargetTextureStorageEXT(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLvoid *, const GLint *) = func; \
   SET_by_offset(disp, _gloffset_EGLImageTargetTextureStorageEXT, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_CopyImageSubDataNV)(GLuint, GLenum, GLint, GLint, GLint, GLint, GLuint, GLenum, GLint, GLint, GLint, GLint, GLsizei, GLsizei, GLsizei);
#define CALL_CopyImageSubDataNV(disp, parameters) (* GET_CopyImageSubDataNV(disp)) parameters
#define GET_CopyImageSubDataNV(disp) ((_glptr_CopyImageSubDataNV)(GET_by_offset((disp), _gloffset_CopyImageSubDataNV)))
#define SET_CopyImageSubDataNV(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLenum, GLint, GLint, GLint, GLint, GLuint, GLenum, GLint, GLint, GLint, GLint, GLsizei, GLsizei, GLsizei) = func; \
   SET_by_offset(disp, _gloffset_CopyImageSubDataNV, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_ViewportSwizzleNV)(GLuint, GLenum, GLenum, GLenum, GLenum);
#define CALL_ViewportSwizzleNV(disp, parameters) (* GET_ViewportSwizzleNV(disp)) parameters
#define GET_ViewportSwizzleNV(disp) ((_glptr_ViewportSwizzleNV)(GET_by_offset((disp), _gloffset_ViewportSwizzleNV)))
#define SET_ViewportSwizzleNV(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLenum, GLenum, GLenum, GLenum) = func; \
   SET_by_offset(disp, _gloffset_ViewportSwizzleNV, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_AlphaToCoverageDitherControlNV)(GLenum);
#define CALL_AlphaToCoverageDitherControlNV(disp, parameters) (* GET_AlphaToCoverageDitherControlNV(disp)) parameters
#define GET_AlphaToCoverageDitherControlNV(disp) ((_glptr_AlphaToCoverageDitherControlNV)(GET_by_offset((disp), _gloffset_AlphaToCoverageDitherControlNV)))
#define SET_AlphaToCoverageDitherControlNV(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum) = func; \
   SET_by_offset(disp, _gloffset_AlphaToCoverageDitherControlNV, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_InternalBufferSubDataCopyMESA)(GLintptr, GLuint, GLuint, GLintptr, GLsizeiptr, GLboolean, GLboolean);
#define CALL_InternalBufferSubDataCopyMESA(disp, parameters) (* GET_InternalBufferSubDataCopyMESA(disp)) parameters
#define GET_InternalBufferSubDataCopyMESA(disp) ((_glptr_InternalBufferSubDataCopyMESA)(GET_by_offset((disp), _gloffset_InternalBufferSubDataCopyMESA)))
#define SET_InternalBufferSubDataCopyMESA(disp, func) do { \
   void (GLAPIENTRYP fn)(GLintptr, GLuint, GLuint, GLintptr, GLsizeiptr, GLboolean, GLboolean) = func; \
   SET_by_offset(disp, _gloffset_InternalBufferSubDataCopyMESA, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_Vertex2hNV)(GLhalfNV, GLhalfNV);
#define CALL_Vertex2hNV(disp, parameters) (* GET_Vertex2hNV(disp)) parameters
#define GET_Vertex2hNV(disp) ((_glptr_Vertex2hNV)(GET_by_offset((disp), _gloffset_Vertex2hNV)))
#define SET_Vertex2hNV(disp, func) do { \
   void (GLAPIENTRYP fn)(GLhalfNV, GLhalfNV) = func; \
   SET_by_offset(disp, _gloffset_Vertex2hNV, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_Vertex2hvNV)(const GLhalfNV *);
#define CALL_Vertex2hvNV(disp, parameters) (* GET_Vertex2hvNV(disp)) parameters
#define GET_Vertex2hvNV(disp) ((_glptr_Vertex2hvNV)(GET_by_offset((disp), _gloffset_Vertex2hvNV)))
#define SET_Vertex2hvNV(disp, func) do { \
   void (GLAPIENTRYP fn)(const GLhalfNV *) = func; \
   SET_by_offset(disp, _gloffset_Vertex2hvNV, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_Vertex3hNV)(GLhalfNV, GLhalfNV, GLhalfNV);
#define CALL_Vertex3hNV(disp, parameters) (* GET_Vertex3hNV(disp)) parameters
#define GET_Vertex3hNV(disp) ((_glptr_Vertex3hNV)(GET_by_offset((disp), _gloffset_Vertex3hNV)))
#define SET_Vertex3hNV(disp, func) do { \
   void (GLAPIENTRYP fn)(GLhalfNV, GLhalfNV, GLhalfNV) = func; \
   SET_by_offset(disp, _gloffset_Vertex3hNV, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_Vertex3hvNV)(const GLhalfNV *);
#define CALL_Vertex3hvNV(disp, parameters) (* GET_Vertex3hvNV(disp)) parameters
#define GET_Vertex3hvNV(disp) ((_glptr_Vertex3hvNV)(GET_by_offset((disp), _gloffset_Vertex3hvNV)))
#define SET_Vertex3hvNV(disp, func) do { \
   void (GLAPIENTRYP fn)(const GLhalfNV *) = func; \
   SET_by_offset(disp, _gloffset_Vertex3hvNV, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_Vertex4hNV)(GLhalfNV, GLhalfNV, GLhalfNV, GLhalfNV);
#define CALL_Vertex4hNV(disp, parameters) (* GET_Vertex4hNV(disp)) parameters
#define GET_Vertex4hNV(disp) ((_glptr_Vertex4hNV)(GET_by_offset((disp), _gloffset_Vertex4hNV)))
#define SET_Vertex4hNV(disp, func) do { \
   void (GLAPIENTRYP fn)(GLhalfNV, GLhalfNV, GLhalfNV, GLhalfNV) = func; \
   SET_by_offset(disp, _gloffset_Vertex4hNV, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_Vertex4hvNV)(const GLhalfNV *);
#define CALL_Vertex4hvNV(disp, parameters) (* GET_Vertex4hvNV(disp)) parameters
#define GET_Vertex4hvNV(disp) ((_glptr_Vertex4hvNV)(GET_by_offset((disp), _gloffset_Vertex4hvNV)))
#define SET_Vertex4hvNV(disp, func) do { \
   void (GLAPIENTRYP fn)(const GLhalfNV *) = func; \
   SET_by_offset(disp, _gloffset_Vertex4hvNV, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_Normal3hNV)(GLhalfNV, GLhalfNV, GLhalfNV);
#define CALL_Normal3hNV(disp, parameters) (* GET_Normal3hNV(disp)) parameters
#define GET_Normal3hNV(disp) ((_glptr_Normal3hNV)(GET_by_offset((disp), _gloffset_Normal3hNV)))
#define SET_Normal3hNV(disp, func) do { \
   void (GLAPIENTRYP fn)(GLhalfNV, GLhalfNV, GLhalfNV) = func; \
   SET_by_offset(disp, _gloffset_Normal3hNV, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_Normal3hvNV)(const GLhalfNV *);
#define CALL_Normal3hvNV(disp, parameters) (* GET_Normal3hvNV(disp)) parameters
#define GET_Normal3hvNV(disp) ((_glptr_Normal3hvNV)(GET_by_offset((disp), _gloffset_Normal3hvNV)))
#define SET_Normal3hvNV(disp, func) do { \
   void (GLAPIENTRYP fn)(const GLhalfNV *) = func; \
   SET_by_offset(disp, _gloffset_Normal3hvNV, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_Color3hNV)(GLhalfNV, GLhalfNV, GLhalfNV);
#define CALL_Color3hNV(disp, parameters) (* GET_Color3hNV(disp)) parameters
#define GET_Color3hNV(disp) ((_glptr_Color3hNV)(GET_by_offset((disp), _gloffset_Color3hNV)))
#define SET_Color3hNV(disp, func) do { \
   void (GLAPIENTRYP fn)(GLhalfNV, GLhalfNV, GLhalfNV) = func; \
   SET_by_offset(disp, _gloffset_Color3hNV, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_Color3hvNV)(const GLhalfNV *);
#define CALL_Color3hvNV(disp, parameters) (* GET_Color3hvNV(disp)) parameters
#define GET_Color3hvNV(disp) ((_glptr_Color3hvNV)(GET_by_offset((disp), _gloffset_Color3hvNV)))
#define SET_Color3hvNV(disp, func) do { \
   void (GLAPIENTRYP fn)(const GLhalfNV *) = func; \
   SET_by_offset(disp, _gloffset_Color3hvNV, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_Color4hNV)(GLhalfNV, GLhalfNV, GLhalfNV, GLhalfNV);
#define CALL_Color4hNV(disp, parameters) (* GET_Color4hNV(disp)) parameters
#define GET_Color4hNV(disp) ((_glptr_Color4hNV)(GET_by_offset((disp), _gloffset_Color4hNV)))
#define SET_Color4hNV(disp, func) do { \
   void (GLAPIENTRYP fn)(GLhalfNV, GLhalfNV, GLhalfNV, GLhalfNV) = func; \
   SET_by_offset(disp, _gloffset_Color4hNV, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_Color4hvNV)(const GLhalfNV *);
#define CALL_Color4hvNV(disp, parameters) (* GET_Color4hvNV(disp)) parameters
#define GET_Color4hvNV(disp) ((_glptr_Color4hvNV)(GET_by_offset((disp), _gloffset_Color4hvNV)))
#define SET_Color4hvNV(disp, func) do { \
   void (GLAPIENTRYP fn)(const GLhalfNV *) = func; \
   SET_by_offset(disp, _gloffset_Color4hvNV, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_TexCoord1hNV)(GLhalfNV);
#define CALL_TexCoord1hNV(disp, parameters) (* GET_TexCoord1hNV(disp)) parameters
#define GET_TexCoord1hNV(disp) ((_glptr_TexCoord1hNV)(GET_by_offset((disp), _gloffset_TexCoord1hNV)))
#define SET_TexCoord1hNV(disp, func) do { \
   void (GLAPIENTRYP fn)(GLhalfNV) = func; \
   SET_by_offset(disp, _gloffset_TexCoord1hNV, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_TexCoord1hvNV)(const GLhalfNV *);
#define CALL_TexCoord1hvNV(disp, parameters) (* GET_TexCoord1hvNV(disp)) parameters
#define GET_TexCoord1hvNV(disp) ((_glptr_TexCoord1hvNV)(GET_by_offset((disp), _gloffset_TexCoord1hvNV)))
#define SET_TexCoord1hvNV(disp, func) do { \
   void (GLAPIENTRYP fn)(const GLhalfNV *) = func; \
   SET_by_offset(disp, _gloffset_TexCoord1hvNV, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_TexCoord2hNV)(GLhalfNV, GLhalfNV);
#define CALL_TexCoord2hNV(disp, parameters) (* GET_TexCoord2hNV(disp)) parameters
#define GET_TexCoord2hNV(disp) ((_glptr_TexCoord2hNV)(GET_by_offset((disp), _gloffset_TexCoord2hNV)))
#define SET_TexCoord2hNV(disp, func) do { \
   void (GLAPIENTRYP fn)(GLhalfNV, GLhalfNV) = func; \
   SET_by_offset(disp, _gloffset_TexCoord2hNV, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_TexCoord2hvNV)(const GLhalfNV *);
#define CALL_TexCoord2hvNV(disp, parameters) (* GET_TexCoord2hvNV(disp)) parameters
#define GET_TexCoord2hvNV(disp) ((_glptr_TexCoord2hvNV)(GET_by_offset((disp), _gloffset_TexCoord2hvNV)))
#define SET_TexCoord2hvNV(disp, func) do { \
   void (GLAPIENTRYP fn)(const GLhalfNV *) = func; \
   SET_by_offset(disp, _gloffset_TexCoord2hvNV, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_TexCoord3hNV)(GLhalfNV, GLhalfNV, GLhalfNV);
#define CALL_TexCoord3hNV(disp, parameters) (* GET_TexCoord3hNV(disp)) parameters
#define GET_TexCoord3hNV(disp) ((_glptr_TexCoord3hNV)(GET_by_offset((disp), _gloffset_TexCoord3hNV)))
#define SET_TexCoord3hNV(disp, func) do { \
   void (GLAPIENTRYP fn)(GLhalfNV, GLhalfNV, GLhalfNV) = func; \
   SET_by_offset(disp, _gloffset_TexCoord3hNV, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_TexCoord3hvNV)(const GLhalfNV *);
#define CALL_TexCoord3hvNV(disp, parameters) (* GET_TexCoord3hvNV(disp)) parameters
#define GET_TexCoord3hvNV(disp) ((_glptr_TexCoord3hvNV)(GET_by_offset((disp), _gloffset_TexCoord3hvNV)))
#define SET_TexCoord3hvNV(disp, func) do { \
   void (GLAPIENTRYP fn)(const GLhalfNV *) = func; \
   SET_by_offset(disp, _gloffset_TexCoord3hvNV, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_TexCoord4hNV)(GLhalfNV, GLhalfNV, GLhalfNV, GLhalfNV);
#define CALL_TexCoord4hNV(disp, parameters) (* GET_TexCoord4hNV(disp)) parameters
#define GET_TexCoord4hNV(disp) ((_glptr_TexCoord4hNV)(GET_by_offset((disp), _gloffset_TexCoord4hNV)))
#define SET_TexCoord4hNV(disp, func) do { \
   void (GLAPIENTRYP fn)(GLhalfNV, GLhalfNV, GLhalfNV, GLhalfNV) = func; \
   SET_by_offset(disp, _gloffset_TexCoord4hNV, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_TexCoord4hvNV)(const GLhalfNV *);
#define CALL_TexCoord4hvNV(disp, parameters) (* GET_TexCoord4hvNV(disp)) parameters
#define GET_TexCoord4hvNV(disp) ((_glptr_TexCoord4hvNV)(GET_by_offset((disp), _gloffset_TexCoord4hvNV)))
#define SET_TexCoord4hvNV(disp, func) do { \
   void (GLAPIENTRYP fn)(const GLhalfNV *) = func; \
   SET_by_offset(disp, _gloffset_TexCoord4hvNV, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_MultiTexCoord1hNV)(GLenum, GLhalfNV);
#define CALL_MultiTexCoord1hNV(disp, parameters) (* GET_MultiTexCoord1hNV(disp)) parameters
#define GET_MultiTexCoord1hNV(disp) ((_glptr_MultiTexCoord1hNV)(GET_by_offset((disp), _gloffset_MultiTexCoord1hNV)))
#define SET_MultiTexCoord1hNV(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLhalfNV) = func; \
   SET_by_offset(disp, _gloffset_MultiTexCoord1hNV, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_MultiTexCoord1hvNV)(GLenum, const GLhalfNV *);
#define CALL_MultiTexCoord1hvNV(disp, parameters) (* GET_MultiTexCoord1hvNV(disp)) parameters
#define GET_MultiTexCoord1hvNV(disp) ((_glptr_MultiTexCoord1hvNV)(GET_by_offset((disp), _gloffset_MultiTexCoord1hvNV)))
#define SET_MultiTexCoord1hvNV(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, const GLhalfNV *) = func; \
   SET_by_offset(disp, _gloffset_MultiTexCoord1hvNV, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_MultiTexCoord2hNV)(GLenum, GLhalfNV, GLhalfNV);
#define CALL_MultiTexCoord2hNV(disp, parameters) (* GET_MultiTexCoord2hNV(disp)) parameters
#define GET_MultiTexCoord2hNV(disp) ((_glptr_MultiTexCoord2hNV)(GET_by_offset((disp), _gloffset_MultiTexCoord2hNV)))
#define SET_MultiTexCoord2hNV(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLhalfNV, GLhalfNV) = func; \
   SET_by_offset(disp, _gloffset_MultiTexCoord2hNV, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_MultiTexCoord2hvNV)(GLenum, const GLhalfNV *);
#define CALL_MultiTexCoord2hvNV(disp, parameters) (* GET_MultiTexCoord2hvNV(disp)) parameters
#define GET_MultiTexCoord2hvNV(disp) ((_glptr_MultiTexCoord2hvNV)(GET_by_offset((disp), _gloffset_MultiTexCoord2hvNV)))
#define SET_MultiTexCoord2hvNV(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, const GLhalfNV *) = func; \
   SET_by_offset(disp, _gloffset_MultiTexCoord2hvNV, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_MultiTexCoord3hNV)(GLenum, GLhalfNV, GLhalfNV, GLhalfNV);
#define CALL_MultiTexCoord3hNV(disp, parameters) (* GET_MultiTexCoord3hNV(disp)) parameters
#define GET_MultiTexCoord3hNV(disp) ((_glptr_MultiTexCoord3hNV)(GET_by_offset((disp), _gloffset_MultiTexCoord3hNV)))
#define SET_MultiTexCoord3hNV(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLhalfNV, GLhalfNV, GLhalfNV) = func; \
   SET_by_offset(disp, _gloffset_MultiTexCoord3hNV, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_MultiTexCoord3hvNV)(GLenum, const GLhalfNV *);
#define CALL_MultiTexCoord3hvNV(disp, parameters) (* GET_MultiTexCoord3hvNV(disp)) parameters
#define GET_MultiTexCoord3hvNV(disp) ((_glptr_MultiTexCoord3hvNV)(GET_by_offset((disp), _gloffset_MultiTexCoord3hvNV)))
#define SET_MultiTexCoord3hvNV(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, const GLhalfNV *) = func; \
   SET_by_offset(disp, _gloffset_MultiTexCoord3hvNV, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_MultiTexCoord4hNV)(GLenum, GLhalfNV, GLhalfNV, GLhalfNV, GLhalfNV);
#define CALL_MultiTexCoord4hNV(disp, parameters) (* GET_MultiTexCoord4hNV(disp)) parameters
#define GET_MultiTexCoord4hNV(disp) ((_glptr_MultiTexCoord4hNV)(GET_by_offset((disp), _gloffset_MultiTexCoord4hNV)))
#define SET_MultiTexCoord4hNV(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLhalfNV, GLhalfNV, GLhalfNV, GLhalfNV) = func; \
   SET_by_offset(disp, _gloffset_MultiTexCoord4hNV, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_MultiTexCoord4hvNV)(GLenum, const GLhalfNV *);
#define CALL_MultiTexCoord4hvNV(disp, parameters) (* GET_MultiTexCoord4hvNV(disp)) parameters
#define GET_MultiTexCoord4hvNV(disp) ((_glptr_MultiTexCoord4hvNV)(GET_by_offset((disp), _gloffset_MultiTexCoord4hvNV)))
#define SET_MultiTexCoord4hvNV(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, const GLhalfNV *) = func; \
   SET_by_offset(disp, _gloffset_MultiTexCoord4hvNV, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_FogCoordhNV)(GLhalfNV);
#define CALL_FogCoordhNV(disp, parameters) (* GET_FogCoordhNV(disp)) parameters
#define GET_FogCoordhNV(disp) ((_glptr_FogCoordhNV)(GET_by_offset((disp), _gloffset_FogCoordhNV)))
#define SET_FogCoordhNV(disp, func) do { \
   void (GLAPIENTRYP fn)(GLhalfNV) = func; \
   SET_by_offset(disp, _gloffset_FogCoordhNV, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_FogCoordhvNV)(const GLhalfNV *);
#define CALL_FogCoordhvNV(disp, parameters) (* GET_FogCoordhvNV(disp)) parameters
#define GET_FogCoordhvNV(disp) ((_glptr_FogCoordhvNV)(GET_by_offset((disp), _gloffset_FogCoordhvNV)))
#define SET_FogCoordhvNV(disp, func) do { \
   void (GLAPIENTRYP fn)(const GLhalfNV *) = func; \
   SET_by_offset(disp, _gloffset_FogCoordhvNV, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_SecondaryColor3hNV)(GLhalfNV, GLhalfNV, GLhalfNV);
#define CALL_SecondaryColor3hNV(disp, parameters) (* GET_SecondaryColor3hNV(disp)) parameters
#define GET_SecondaryColor3hNV(disp) ((_glptr_SecondaryColor3hNV)(GET_by_offset((disp), _gloffset_SecondaryColor3hNV)))
#define SET_SecondaryColor3hNV(disp, func) do { \
   void (GLAPIENTRYP fn)(GLhalfNV, GLhalfNV, GLhalfNV) = func; \
   SET_by_offset(disp, _gloffset_SecondaryColor3hNV, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_SecondaryColor3hvNV)(const GLhalfNV *);
#define CALL_SecondaryColor3hvNV(disp, parameters) (* GET_SecondaryColor3hvNV(disp)) parameters
#define GET_SecondaryColor3hvNV(disp) ((_glptr_SecondaryColor3hvNV)(GET_by_offset((disp), _gloffset_SecondaryColor3hvNV)))
#define SET_SecondaryColor3hvNV(disp, func) do { \
   void (GLAPIENTRYP fn)(const GLhalfNV *) = func; \
   SET_by_offset(disp, _gloffset_SecondaryColor3hvNV, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_InternalSetError)(GLenum);
#define CALL_InternalSetError(disp, parameters) (* GET_InternalSetError(disp)) parameters
#define GET_InternalSetError(disp) ((_glptr_InternalSetError)(GET_by_offset((disp), _gloffset_InternalSetError)))
#define SET_InternalSetError(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum) = func; \
   SET_by_offset(disp, _gloffset_InternalSetError, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_VertexAttrib1hNV)(GLuint, GLhalfNV);
#define CALL_VertexAttrib1hNV(disp, parameters) (* GET_VertexAttrib1hNV(disp)) parameters
#define GET_VertexAttrib1hNV(disp) ((_glptr_VertexAttrib1hNV)(GET_by_offset((disp), _gloffset_VertexAttrib1hNV)))
#define SET_VertexAttrib1hNV(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLhalfNV) = func; \
   SET_by_offset(disp, _gloffset_VertexAttrib1hNV, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_VertexAttrib1hvNV)(GLuint, const GLhalfNV *);
#define CALL_VertexAttrib1hvNV(disp, parameters) (* GET_VertexAttrib1hvNV(disp)) parameters
#define GET_VertexAttrib1hvNV(disp) ((_glptr_VertexAttrib1hvNV)(GET_by_offset((disp), _gloffset_VertexAttrib1hvNV)))
#define SET_VertexAttrib1hvNV(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, const GLhalfNV *) = func; \
   SET_by_offset(disp, _gloffset_VertexAttrib1hvNV, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_VertexAttrib2hNV)(GLuint, GLhalfNV, GLhalfNV);
#define CALL_VertexAttrib2hNV(disp, parameters) (* GET_VertexAttrib2hNV(disp)) parameters
#define GET_VertexAttrib2hNV(disp) ((_glptr_VertexAttrib2hNV)(GET_by_offset((disp), _gloffset_VertexAttrib2hNV)))
#define SET_VertexAttrib2hNV(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLhalfNV, GLhalfNV) = func; \
   SET_by_offset(disp, _gloffset_VertexAttrib2hNV, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_VertexAttrib2hvNV)(GLuint, const GLhalfNV *);
#define CALL_VertexAttrib2hvNV(disp, parameters) (* GET_VertexAttrib2hvNV(disp)) parameters
#define GET_VertexAttrib2hvNV(disp) ((_glptr_VertexAttrib2hvNV)(GET_by_offset((disp), _gloffset_VertexAttrib2hvNV)))
#define SET_VertexAttrib2hvNV(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, const GLhalfNV *) = func; \
   SET_by_offset(disp, _gloffset_VertexAttrib2hvNV, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_VertexAttrib3hNV)(GLuint, GLhalfNV, GLhalfNV, GLhalfNV);
#define CALL_VertexAttrib3hNV(disp, parameters) (* GET_VertexAttrib3hNV(disp)) parameters
#define GET_VertexAttrib3hNV(disp) ((_glptr_VertexAttrib3hNV)(GET_by_offset((disp), _gloffset_VertexAttrib3hNV)))
#define SET_VertexAttrib3hNV(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLhalfNV, GLhalfNV, GLhalfNV) = func; \
   SET_by_offset(disp, _gloffset_VertexAttrib3hNV, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_VertexAttrib3hvNV)(GLuint, const GLhalfNV *);
#define CALL_VertexAttrib3hvNV(disp, parameters) (* GET_VertexAttrib3hvNV(disp)) parameters
#define GET_VertexAttrib3hvNV(disp) ((_glptr_VertexAttrib3hvNV)(GET_by_offset((disp), _gloffset_VertexAttrib3hvNV)))
#define SET_VertexAttrib3hvNV(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, const GLhalfNV *) = func; \
   SET_by_offset(disp, _gloffset_VertexAttrib3hvNV, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_VertexAttrib4hNV)(GLuint, GLhalfNV, GLhalfNV, GLhalfNV, GLhalfNV);
#define CALL_VertexAttrib4hNV(disp, parameters) (* GET_VertexAttrib4hNV(disp)) parameters
#define GET_VertexAttrib4hNV(disp) ((_glptr_VertexAttrib4hNV)(GET_by_offset((disp), _gloffset_VertexAttrib4hNV)))
#define SET_VertexAttrib4hNV(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLhalfNV, GLhalfNV, GLhalfNV, GLhalfNV) = func; \
   SET_by_offset(disp, _gloffset_VertexAttrib4hNV, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_VertexAttrib4hvNV)(GLuint, const GLhalfNV *);
#define CALL_VertexAttrib4hvNV(disp, parameters) (* GET_VertexAttrib4hvNV(disp)) parameters
#define GET_VertexAttrib4hvNV(disp) ((_glptr_VertexAttrib4hvNV)(GET_by_offset((disp), _gloffset_VertexAttrib4hvNV)))
#define SET_VertexAttrib4hvNV(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, const GLhalfNV *) = func; \
   SET_by_offset(disp, _gloffset_VertexAttrib4hvNV, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_VertexAttribs1hvNV)(GLuint, GLsizei, const GLhalfNV *);
#define CALL_VertexAttribs1hvNV(disp, parameters) (* GET_VertexAttribs1hvNV(disp)) parameters
#define GET_VertexAttribs1hvNV(disp) ((_glptr_VertexAttribs1hvNV)(GET_by_offset((disp), _gloffset_VertexAttribs1hvNV)))
#define SET_VertexAttribs1hvNV(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLsizei, const GLhalfNV *) = func; \
   SET_by_offset(disp, _gloffset_VertexAttribs1hvNV, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_VertexAttribs2hvNV)(GLuint, GLsizei, const GLhalfNV *);
#define CALL_VertexAttribs2hvNV(disp, parameters) (* GET_VertexAttribs2hvNV(disp)) parameters
#define GET_VertexAttribs2hvNV(disp) ((_glptr_VertexAttribs2hvNV)(GET_by_offset((disp), _gloffset_VertexAttribs2hvNV)))
#define SET_VertexAttribs2hvNV(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLsizei, const GLhalfNV *) = func; \
   SET_by_offset(disp, _gloffset_VertexAttribs2hvNV, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_VertexAttribs3hvNV)(GLuint, GLsizei, const GLhalfNV *);
#define CALL_VertexAttribs3hvNV(disp, parameters) (* GET_VertexAttribs3hvNV(disp)) parameters
#define GET_VertexAttribs3hvNV(disp) ((_glptr_VertexAttribs3hvNV)(GET_by_offset((disp), _gloffset_VertexAttribs3hvNV)))
#define SET_VertexAttribs3hvNV(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLsizei, const GLhalfNV *) = func; \
   SET_by_offset(disp, _gloffset_VertexAttribs3hvNV, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_VertexAttribs4hvNV)(GLuint, GLsizei, const GLhalfNV *);
#define CALL_VertexAttribs4hvNV(disp, parameters) (* GET_VertexAttribs4hvNV(disp)) parameters
#define GET_VertexAttribs4hvNV(disp) ((_glptr_VertexAttribs4hvNV)(GET_by_offset((disp), _gloffset_VertexAttribs4hvNV)))
#define SET_VertexAttribs4hvNV(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLsizei, const GLhalfNV *) = func; \
   SET_by_offset(disp, _gloffset_VertexAttribs4hvNV, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_TexPageCommitmentARB)(GLenum, GLint, GLint, GLint, GLint, GLsizei, GLsizei, GLsizei, GLboolean);
#define CALL_TexPageCommitmentARB(disp, parameters) (* GET_TexPageCommitmentARB(disp)) parameters
#define GET_TexPageCommitmentARB(disp) ((_glptr_TexPageCommitmentARB)(GET_by_offset((disp), _gloffset_TexPageCommitmentARB)))
#define SET_TexPageCommitmentARB(disp, func) do { \
   void (GLAPIENTRYP fn)(GLenum, GLint, GLint, GLint, GLint, GLsizei, GLsizei, GLsizei, GLboolean) = func; \
   SET_by_offset(disp, _gloffset_TexPageCommitmentARB, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_TexturePageCommitmentEXT)(GLuint, GLint, GLint, GLint, GLint, GLsizei, GLsizei, GLsizei, GLboolean);
#define CALL_TexturePageCommitmentEXT(disp, parameters) (* GET_TexturePageCommitmentEXT(disp)) parameters
#define GET_TexturePageCommitmentEXT(disp) ((_glptr_TexturePageCommitmentEXT)(GET_by_offset((disp), _gloffset_TexturePageCommitmentEXT)))
#define SET_TexturePageCommitmentEXT(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLint, GLint, GLint, GLint, GLsizei, GLsizei, GLsizei, GLboolean) = func; \
   SET_by_offset(disp, _gloffset_TexturePageCommitmentEXT, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_ImportMemoryWin32HandleEXT)(GLuint, GLuint64, GLenum, GLvoid *);
#define CALL_ImportMemoryWin32HandleEXT(disp, parameters) (* GET_ImportMemoryWin32HandleEXT(disp)) parameters
#define GET_ImportMemoryWin32HandleEXT(disp) ((_glptr_ImportMemoryWin32HandleEXT)(GET_by_offset((disp), _gloffset_ImportMemoryWin32HandleEXT)))
#define SET_ImportMemoryWin32HandleEXT(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLuint64, GLenum, GLvoid *) = func; \
   SET_by_offset(disp, _gloffset_ImportMemoryWin32HandleEXT, fn); \
} while (0)

typedef void (GLAPIENTRYP _glptr_ImportSemaphoreWin32HandleEXT)(GLuint, GLenum, GLvoid *);
#define CALL_ImportSemaphoreWin32HandleEXT(disp, parameters) (* GET_ImportSemaphoreWin32HandleEXT(disp)) parameters
#define GET_ImportSemaphoreWin32HandleEXT(disp) ((_glptr_ImportSemaphoreWin32HandleEXT)(GET_by_offset((disp), _gloffset_ImportSemaphoreWin32HandleEXT)))
#define SET_ImportSemaphoreWin32HandleEXT(disp, func) do { \
   void (GLAPIENTRYP fn)(GLuint, GLenum, GLvoid *) = func; \
   SET_by_offset(disp, _gloffset_ImportSemaphoreWin32HandleEXT, fn); \
} while (0)


#endif /* !defined( _DISPATCH_H_ ) */

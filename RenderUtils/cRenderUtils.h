#pragma once
#include "Vertex.h"
#include "window.h"

#include "globjects.h"
#include "glmake.h"
#include "glload.h"
#include "gldraw.h"




//// Geometry functions
//Geometry makeGeometry(const struct Vertex *verts, size_t vsize, 
//						const unsigned int *tris, size_t tsize);
//void freeGeometry(Geometry &);
//Geometry loadOBJ(const char *path);
//
//// Shader functions
//Shader makeShader(const char *vsource, const char *fsource);
//void freeShader(Shader &shader);
//Shader loadShader(const char *vpath, const char *fpath);
//
//// Draw Functions
//void draw(const Geometry &geometry, const Shader &shader);
//void draw(const Geometry &geometry, const Shader &shader, float time);
//void draw(const Geometry &geometry, const Shader &shader, const float M[16], const float V[16], const float P[16], float time);
//void draw(const Geometry &, const Shader &, const Texture &, const float M[16], const float V[16], const float P[16], float time);
//void drawPhong(const Geometry &g, const Shader &s,
//	const float M[16], const float V[16], const float P[16]);
//void drawPhong(const Geometry &g, const Shader &s,
//	const float M[16], const float V[16], const float P[16],
//	const Texture *T, unsigned t_count);
//void drawFB(const Geometry&, const Shader &, const Framebuffer &,
//	const float M[16], const float V[16], const float P[16],
//	const Texture *, unsigned t_count);
//
//// 0-255, #00-#FF
///// R   G  B  A
//// #FF FF FF
//Texture makeTexture(unsigned width, unsigned height, unsigned format, const unsigned char *pixels);
//Texture makeTextureF(unsigned square, const float *pixels);
//
//Texture loadTexture(const char *path);
//void freeTexture(Texture &);
//
//Framebuffer makeFrameBuffer(unsigned width, unsigned height, unsigned nColors);
//void freeFramebuffer(Framebuffer &);
//

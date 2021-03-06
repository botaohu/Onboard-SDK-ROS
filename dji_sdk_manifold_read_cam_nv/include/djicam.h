#ifndef __DJICAM_H
#define __DJICAM_H

#define DISPLAY_MODE            (1 << 0)
#define GETBUFFER_MODE          (1 << 1)
#define TRANSFER_MODE           (1 << 2)

#ifdef __cplusplus
extern "C" {
#endif

int manifold_decode_start(unsigned char *buffer, unsigned int *size, unsigned int *nframe);
int manifold_cam_init(int mode);
int manifold_cam_exit();
#ifdef __cplusplus
}
#endif


#endif

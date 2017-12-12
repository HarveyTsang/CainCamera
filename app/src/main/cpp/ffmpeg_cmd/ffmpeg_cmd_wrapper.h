#ifndef CAINCAMERA_FFMPEG_CMD_WRAPPER_H
#define CAINCAMERA_FFMPEG_CMD_WRAPPER_H

#include"jni.h"

#ifdef __cplusplus
extern "C" {
#endif


JNIEXPORT jint
JNICALL Java_com_cgfay_caincamera_jni_FFmpegCmd_run
        (JNIEnv *env, jclass obj, jobjectArray commands);

#ifdef __cplusplus
}
#endif


#endif //CAINCAMERA_FFMPEG_CMD_WRAPPER_H

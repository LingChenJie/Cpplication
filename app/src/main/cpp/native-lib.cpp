#include <jni.h>
#include <string>
#include "Facer.h"

extern "C" JNIEXPORT jstring JNICALL
Java_com_chen_cpplication_MainActivity_stringFromJNI(
        JNIEnv *env,
        jobject /* this */,
        jstring top, jstring bottom, jstring brow, jstring eyes) {
    //std::string hello = "Hello from C++";
    //return env->NewStringUTF(hello.c_str());
    //使用 env->GetStringUTFChars将jstring转化为string
    Facer facer(
            env->GetStringUTFChars(top, 0),
            env->GetStringUTFChars(bottom, 0),
            env->GetStringUTFChars(brow, 0),
            env->GetStringUTFChars(eyes, 0)
    );
    return env->NewStringUTF(facer.getFace().c_str());
}
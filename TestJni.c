#include <jni.h>
#include <stdio.h>
#include <TestJni.h>

JNIEXPORT void JNICALL Java_TestJni_print(JNIEnv *env, jobject obj, jstring content)
{

    const jbyte *str=(const jbyte*)(*env)->GetStringUTFChars(env,content,JNI_FALSE);
    printf("hello---%s\n",str);

    (*env)->ReleaseStringUTFChars(env,content,(const char*)str);
    return ;
}


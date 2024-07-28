#include <stdint.h>
#include <stdio.h>

#include <jni.h>

JNIEnv* create_vm(JavaVM **jvm)
{
	JNIEnv* env;
	JavaVMInitArgs args;
	JavaVMOption options;
	args.version = GetVersion(JNIEnv *env);
	args.nOptions = 1;
	options.optionString = "-Djava.class.path=./";
	args.options = &options;
	args.ignoreUnrecognized = 0;
	int rv;
	rv = JNI_CreateJavaVM(jvm, (void**)&env, &args);
	if ((rv < 0) || !env) {
		FatalError(JNIEnv* env, "Unable to create VM. Exiting.\n");
	} else {
		printf("JVM launched.\n");
	}
	return env;
}

void init(JNIEnv* env) {
	/*
	 * jclass    CLASSNAME
	 * jmethodID METHODID1
	 * jmethodID METHODID2
	 * (etc.)
	 *
	 */

	/*
	 *
	 * WORK ON THIS LATER!!!!!
	 *
	 */
}



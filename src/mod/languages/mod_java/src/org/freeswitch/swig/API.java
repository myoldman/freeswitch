/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 1.3.35
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package org.freeswitch.swig;

public class API {
  private long swigCPtr;
  protected boolean swigCMemOwn;

  protected API(long cPtr, boolean cMemoryOwn) {
    swigCMemOwn = cMemoryOwn;
    swigCPtr = cPtr;
  }

  protected static long getCPtr(API obj) {
    return (obj == null) ? 0 : obj.swigCPtr;
  }

  protected void finalize() {
    delete();
  }

  public synchronized void delete() {
    if(swigCPtr != 0 && swigCMemOwn) {
      swigCMemOwn = false;
      freeswitchJNI.delete_API(swigCPtr);
    }
    swigCPtr = 0;
  }

  public API() {
    this(freeswitchJNI.new_API(), true);
  }

  public String execute(String command, String data) {
    return freeswitchJNI.API_execute(swigCPtr, this, command, data);
  }

  public String executeString(String command) {
    return freeswitchJNI.API_executeString(swigCPtr, this, command);
  }

  public String getTime() {
    return freeswitchJNI.API_getTime(swigCPtr, this);
  }

}
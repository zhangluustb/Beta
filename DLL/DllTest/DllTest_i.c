/* this file contains the actual definitions of */
/* the IIDs and CLSIDs */

/* link this file in with the server and any clients */


/* File created by MIDL compiler version 5.01.0164 */
/* at Mon Apr 25 10:29:40 2016
 */
/* Compiler settings for C:\Users\SYJ\Desktop\孙鑫VC++视频教程(1-20课全)PPT讲义\lesson 19\Lesson19Code\DllTest\DllTest.idl:
    Oicf (OptLev=i2), W1, Zp8, env=Win32, ms_ext, c_ext
    error checks: allocation ref bounds_check enum stub_data 
*/
//@@MIDL_FILE_HEADING(  )
#ifdef __cplusplus
extern "C"{
#endif 


#ifndef __IID_DEFINED__
#define __IID_DEFINED__

typedef struct _IID
{
    unsigned long x;
    unsigned short s1;
    unsigned short s2;
    unsigned char  c[8];
} IID;

#endif // __IID_DEFINED__

#ifndef CLSID_DEFINED
#define CLSID_DEFINED
typedef IID CLSID;
#endif // CLSID_DEFINED

const IID LIBID_DllTestLib = {0xA04ABD9A,0xBF1B,0x4949,{0xB3,0xC0,0x7F,0xF1,0xEA,0xA8,0x6E,0xCA}};


#ifdef __cplusplus
}
#endif


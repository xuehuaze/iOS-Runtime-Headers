/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSData;



@interface OCBReader : NSObject <OCDReader>
{
    struct OcBinaryReader { int (**x1)(); } *mBinaryReader;
    struct __sFILE { char *x1; NSInteger x2; NSInteger x3; short x4; short x5; struct __sbuf { 
            char *_base; 
            NSInteger _size; 
        } x6; NSInteger x7; void *x8; int (*x9)(); int (*x10)(); int (*x11)(); int (*x12)(); struct __sbuf { 
            char *_base; 
            NSInteger _size; 
        } x13; struct __sFILEX {} *x14; NSInteger x15; unsigned char x16[3]; unsigned char x17[1]; struct __sbuf { 
            char *_base; 
            NSInteger _size; 
        } x18; NSInteger x19; long long x20; } *mFile;
    NSData *mData;
}

+ (void)setReadAdvisoryOnFile:(struct __sFILE { char *x1; NSInteger x2; NSInteger x3; short x4; short x5; struct __sbuf { char *x_6_1_1; NSInteger x_6_1_2; } x6; NSInteger x7; void *x8; int (*x9)(); int (*x10)(); int (*x11)(); int (*x12)(); struct __sbuf { char *x_13_1_1; NSInteger x_13_1_2; } x13; struct __sFILEX {} *x14; NSInteger x15; unsigned char x16[3]; unsigned char x17[1]; struct __sbuf { char *x_18_1_1; NSInteger x_18_1_2; } x18; NSInteger x19; long long x20; }*)arg1;
+ (id)readFromData:(id)arg1 cancel:(id)arg2 tracing:(id)arg3 asThumbnail:(BOOL)arg4 delegate:(id)arg5;
+ (id)readFromFileName:(id)arg1 cancel:(id)arg2 tracing:(id)arg3 asThumbnail:(BOOL)arg4 delegate:(id)arg5;

- (void)setData:(id)arg1;
- (struct OcBinaryReader { int (**x1)(); }*)binaryReader;
- (/* Warning: Unrecognized filer type: 'B' using 'void*' */ void*)isBinaryReader;
     /* Encoded args for previous method: B8@0:4 */

- (id)initWithBinaryReader:(struct OcBinaryReader { int (**x1)(); }*)arg1;
- (void)setFile:(struct __sFILE { char *x1; NSInteger x2; NSInteger x3; short x4; short x5; struct __sbuf { char *x_6_1_1; NSInteger x_6_1_2; } x6; NSInteger x7; void *x8; int (*x9)(); int (*x10)(); int (*x11)(); int (*x12)(); struct __sbuf { char *x_13_1_1; NSInteger x_13_1_2; } x13; struct __sFILEX {} *x14; NSInteger x15; unsigned char x16[3]; unsigned char x17[1]; struct __sbuf { char *x_18_1_1; NSInteger x_18_1_2; } x18; NSInteger x19; long long x20; }*)arg1;
- (void)dealloc;

@end
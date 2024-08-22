// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SFUCRYPTOOUTPUTSTREAM_H
#define SFUCRYPTOOUTPUTSTREAM_H

@class NSString;
@protocol SFUOutputStream;

#import <Foundation/Foundation.h>

#import "SFUCryptor.h"

@interface SFUCryptoOutputStream : NSObject <SFUOutputStream>

 {
    id<SFUOutputStream> *mBaseStream;
    SFUCryptor *mCryptor;
    BOOL mIsClosed;
    BOOL mComputeCrc32;
    unsigned int mCrc32;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(NSUInteger)encodedLengthForDataLength:(NSUInteger)arg0 key:(id)arg1 ;
-(BOOL)canCreateInputStream;
-(BOOL)canSeek;
-(NSInteger)offset;
-(id)closeLocalStream;
-(id)initForEncryptionWithOutputStream:(id)arg0 key:(id)arg1 ;
-(id)initForEncryptionWithOutputStream:(id)arg0 key:(id)arg1 computeCrc32:(BOOL)arg2 ;
-(id)inputStream;
-(unsigned int)crc32;
-(void)close;
-(void)dealloc;
-(void)seekToOffset:(NSInteger)arg0 whence:(int)arg1 ;
-(void)writeBuffer:(char *)arg0 size:(NSUInteger)arg1 ;


@end


#endif
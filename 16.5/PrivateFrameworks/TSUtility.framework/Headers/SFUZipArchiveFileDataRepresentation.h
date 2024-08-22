// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SFUZIPARCHIVEFILEDATAREPRESENTATION_H
#define SFUZIPARCHIVEFILEDATAREPRESENTATION_H

@class NSString;
@protocol SFUZipArchiveDataRepresentation;


#import "SFUDataRepresentation.h"
#import "SFUFileDataRepresentation.h"

@interface SFUZipArchiveFileDataRepresentation : SFUDataRepresentation <SFUZipArchiveDataRepresentation>

 {
    SFUFileDataRepresentation *mFileRepresentation;
    int mFd;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)hasSameLocationAs:(id)arg0 ;
-(BOOL)isEncrypted;
-(BOOL)isReadable;
-(NSInteger)dataLength;
-(id)bufferedInputStreamWithOffset:(NSInteger)arg0 length:(NSInteger)arg1 ;
-(id)initWithPath:(id)arg0 ;
-(id)inputStream;
-(id)inputStreamWithOffset:(NSInteger)arg0 length:(NSInteger)arg1 ;
-(id)path;
-(void)dealloc;


@end


#endif
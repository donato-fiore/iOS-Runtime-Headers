// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SFUZIPARCHIVEMEMORYDATAREPRESENTATION_H
#define SFUZIPARCHIVEMEMORYDATAREPRESENTATION_H

@class NSData, NSString;
@protocol SFUZipArchiveDataRepresentation;


#import "SFUDataRepresentation.h"

@interface SFUZipArchiveMemoryDataRepresentation : SFUDataRepresentation <SFUZipArchiveDataRepresentation>

 {
    NSData *mData;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)hasSameLocationAs:(id)arg0 ;
-(BOOL)isReadable;
-(NSInteger)dataLength;
-(id)bufferedInputStream;
-(id)bufferedInputStreamWithBufferSize:(NSUInteger)arg0 ;
-(id)bufferedInputStreamWithOffset:(NSInteger)arg0 length:(NSInteger)arg1 ;
-(id)data;
-(id)initWithData:(id)arg0 ;
-(id)inputStream;
-(id)inputStreamWithOffset:(NSInteger)arg0 length:(NSInteger)arg1 ;
-(void)dealloc;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SFUMEMORYDATAREPRESENTATION_H
#define SFUMEMORYDATAREPRESENTATION_H

@class NSData;


#import "SFUDataRepresentation.h"

@interface SFUMemoryDataRepresentation : SFUDataRepresentation {
    NSData *mData;
}




-(BOOL)hasSameLocationAs:(id)arg0 ;
-(BOOL)isReadable;
-(NSInteger)dataLength;
-(NSUInteger)readIntoData:(id)arg0 ;
-(id)bufferedInputStream;
-(id)bufferedInputStreamWithBufferSize:(NSUInteger)arg0 ;
-(id)data;
-(id)initWithData:(id)arg0 ;
-(id)initWithDataNoCopy:(id)arg0 ;
-(id)initWithDataRepresentation:(id)arg0 ;
-(id)inputStream;
-(void)dealloc;


@end


#endif
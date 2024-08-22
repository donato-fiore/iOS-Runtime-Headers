// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSUZIPREADCHANNEL_H
#define TSUZIPREADCHANNEL_H

@class NSString;
@protocol TSUStreamReadChannel, TSUReadChannel, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "TSUZipEntry.h"

@interface TSUZipReadChannel : NSObject <TSUStreamReadChannel>

 {
    TSUZipEntry *_entry;
    id<TSUReadChannel> *_archiveReadChannel;
    NSObject<OS_dispatch_queue> *_readQueue;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)processData:(id)arg0 CRC:(*unsigned int)arg1 isDone:(BOOL)arg2 queue:(id)arg3 handler:(id)arg4 ;
-(BOOL)readFileHeaderFromData:(id)arg0 headerLength:(*NSUInteger)arg1 ;
-(id)initWithEntry:(id)arg0 archiveReadChannel:(id)arg1 ;
-(void)close;
// -(void)handleFailureWithQueue:(id)arg0 handler:(id)arg1 error:(unk)arg2  ;
-(void)readWithHeaderLength:(NSUInteger)arg0 queue:(id)arg1 handler:(id)arg2 ;
-(void)readWithQueue:(id)arg0 handler:(id)arg1 ;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSUREADCHANNELTOSTREAMREADCHANNELADAPTER_H
#define TSUREADCHANNELTOSTREAMREADCHANNELADAPTER_H

@class NSString;
@protocol TSUReadChannel, TSUStreamReadChannel;

#import <Foundation/Foundation.h>


@interface TSUReadChannelToStreamReadChannelAdapter : NSObject <TSUReadChannel, TSUStreamReadChannel>

 {
    id<TSUReadChannel> *_readChannel;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithReadChannel:(id)arg0 ;
-(void)addBarrier:(id)arg0 ;
-(void)close;
-(void)readFromOffset:(NSInteger)arg0 length:(NSUInteger)arg1 queue:(id)arg2 handler:(id)arg3 ;
-(void)readWithQueue:(id)arg0 handler:(id)arg1 ;
-(void)setLowWater:(NSUInteger)arg0 ;


@end


#endif
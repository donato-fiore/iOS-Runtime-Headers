// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SNTESTCHAIN_H
#define SNTESTCHAIN_H

@class NSMutableArray;

#import <Foundation/Foundation.h>


@interface SNTestChain : NSObject

@property (readonly, nonatomic) NSMutableArray *linkBlocks; // ivar: _linkBlocks


-(id)init;
-(void)addLink:(id)arg0 ;
// -(void)popAndRunWithCompletion:(id)arg0 testFailure:(unk)arg1  ;
-(void)runWithCompletion:(id)arg0 ;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef APPARENTTIMEHANDLER_H
#define APPARENTTIMEHANDLER_H

@class NSMutableDictionary;
@protocol ApparentTimeHandlerDelegate;

#import <Foundation/Foundation.h>


@interface ApparentTimeHandler : NSObject {
    NSMutableDictionary *_pendingDispatchAfterBlocks;
    unsigned int _dispatchAfterSeqno;
}


@property (weak, nonatomic) NSObject<ApparentTimeHandlerDelegate> *delegate; // ivar: _delegate


+(id)sharedInstance;
-(id)init;
-(void)dispatchAfterDelay:(CGFloat)arg0 queue:(id)arg1 block:(id)arg2 ;
-(void)timerCallbackWithReference:(id)arg0 at:(CGFloat)arg1 ;


@end


#endif
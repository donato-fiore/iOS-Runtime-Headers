// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UIESTIMATEDTOUCHRECORD_H
#define _UIESTIMATEDTOUCHRECORD_H

@class NSNumber, NSArray;

#import <Foundation/Foundation.h>

#import "UITouch.h"

@interface _UIEstimatedTouchRecord : NSObject

@property (readonly, nonatomic) NSNumber *contextID; // ivar: _contextID
@property (readonly, nonatomic) UITouch *frozenTouch; // ivar: _frozenTouch
@property (readonly, nonatomic) UITouch *liveTouch; // ivar: _liveTouch
@property (readonly, nonatomic) NSArray *touchables; // ivar: _touchables


-(id)initWithLiveTouch:(id)arg0 freezeTouch:(id)arg1 contextID:(id)arg2 ;
-(void)addTouchable:(id)arg0 ;
-(void)dispatchUpdateWithPressure:(CGFloat)arg0 stillEstimated:(BOOL)arg1 ;
-(void)removeTouchable:(id)arg0 ;


@end


#endif
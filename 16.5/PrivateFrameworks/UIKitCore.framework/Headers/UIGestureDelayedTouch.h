// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UIGESTUREDELAYEDTOUCH_H
#define UIGESTUREDELAYEDTOUCH_H

@class NSString;
@protocol NSCopying, _UIGestureDelaying;

#import <Foundation/Foundation.h>

#import "UITouch.h"
#import "UIEvent.h"

@interface UIGestureDelayedTouch : NSObject <NSCopying, _UIGestureDelaying>

 {
    UITouch *_touch;
    UITouch *_stateWhenDelayed;
    UITouch *_stateWhenDelivered;
    UIEvent *_event;
    NSInteger _delayCount;
    BOOL _cloneForSecondDelivery;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(CGFloat)timestampForDelivery;
-(NSInteger)phaseForDelivery;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif
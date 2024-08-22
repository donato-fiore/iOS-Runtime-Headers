// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UIGESTUREDELAYEDPRESS_H
#define UIGESTUREDELAYEDPRESS_H

@class NSString;
@protocol NSCopying, _UIGestureDelaying;

#import <Foundation/Foundation.h>

#import "UIPress.h"
#import "UIPressesEvent.h"

@interface UIGestureDelayedPress : NSObject <NSCopying, _UIGestureDelaying>

 {
    NSInteger _delayCount;
    BOOL _cloneForSecondDelivery;
    UIPress *_press;
    UIPress *_stateWhenDelayed;
    UIPress *_stateWhenDelivered;
    UIPressesEvent *_event;
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
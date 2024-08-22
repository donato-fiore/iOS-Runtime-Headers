// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UIEVENTSESSIONTOUCHEVENT_H
#define UIEVENTSESSIONTOUCHEVENT_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface UIEventSessionTouchEvent : NSObject

@property (retain) NSMutableDictionary *touchStatus; // ivar: _touchStatus
@property NSInteger touchType; // ivar: _touchType
@property NSInteger trackpadFingerDownCount; // ivar: _trackpadFingerDownCount


-(BOOL)containsTouchID:(id)arg0 ;
-(id)initWithTouchType:(NSInteger)arg0 withTrackpadFingerDownCount:(NSInteger)arg1 ;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TISKLAYOUTSWITCHEVENT_H
#define TISKLAYOUTSWITCHEVENT_H

@class TIKeyboardLayout;


#import "TISKTimestampEvent.h"

@interface TISKLayoutSwitchEvent : TISKTimestampEvent

@property (retain, nonatomic) TIKeyboardLayout *layout; // ivar: _layout


-(CGFloat)touchDownTimestamp;
-(CGFloat)touchUpTimestamp;
-(id)description;
-(id)init:(CGFloat)arg0 layout:(id)arg1 emojiSearchMode:(BOOL)arg2 order:(NSInteger)arg3 ;
-(void)reportToSession:(id)arg0 ;


@end


#endif
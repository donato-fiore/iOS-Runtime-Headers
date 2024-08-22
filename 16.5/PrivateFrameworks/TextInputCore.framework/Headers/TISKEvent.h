// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TISKEVENT_H
#define TISKEVENT_H

@protocol TISKEventProtocol;

#import <Foundation/Foundation.h>

#import "TISKTap.h"

@interface TISKEvent : NSObject <TISKEventProtocol>



@property (nonatomic) BOOL emojiSearchMode; // ivar: _emojiSearchMode
@property (nonatomic) BOOL hasTimestamp; // ivar: _hasTimestamp
@property (nonatomic) NSUInteger order; // ivar: _order
@property (retain, nonatomic) TISKTap *tap; // ivar: _tap
@property (nonatomic) int type; // ivar: _type


-(BOOL)isMissingATouch;
-(BOOL)isValidCandidate:(id)arg0 ;
-(CGFloat)touchDownTimestamp;
-(CGFloat)touchUpTimestamp;
-(id)description;
-(id)downTouchEvent;
-(id)init:(int)arg0 emojiSearchMode:(BOOL)arg1 order:(NSInteger)arg2 ;
-(id)init:(int)arg0 emojiSearchMode:(BOOL)arg1 order:(NSInteger)arg2 tap:(id)arg3 ;
-(id)privateDescription;
-(id)upTouchEvent;
-(void)reportInterKeyTiming:(id)arg0 previousEvent:(id)arg1 ;
-(void)reportToSession:(id)arg0 ;


@end


#endif
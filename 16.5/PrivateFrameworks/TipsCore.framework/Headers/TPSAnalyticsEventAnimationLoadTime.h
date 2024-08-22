// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TPSANALYTICSEVENTANIMATIONLOADTIME_H
#define TPSANALYTICSEVENTANIMATIONLOADTIME_H

@class NSString;


#import "TPSAnalyticsEvent.h"

@interface TPSAnalyticsEventAnimationLoadTime : TPSAnalyticsEvent

@property (nonatomic) CGFloat animationLoadTime; // ivar: _animationLoadTime
@property (retain, nonatomic) NSString *tipID; // ivar: _tipID


+(BOOL)supportsSecureCoding;
+(id)eventWithTipID:(id)arg0 animationLoadTime:(CGFloat)arg1 ;
-(id)_initWithTipID:(id)arg0 animationLoadTime:(CGFloat)arg1 ;
-(id)eventName;
-(id)initWithCoder:(id)arg0 ;
-(id)mutableAnalyticsEventRepresentation;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif
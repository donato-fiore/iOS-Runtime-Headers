// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TPSANALYTICSEVENTANIMATIONFINISHED_H
#define TPSANALYTICSEVENTANIMATIONFINISHED_H

@class NSString;


#import "TPSAnalyticsEvent.h"

@interface TPSAnalyticsEventAnimationFinished : TPSAnalyticsEvent

@property (nonatomic) BOOL animationFinished; // ivar: _animationFinished
@property (readonly, nonatomic) NSString *animationSource; // ivar: _animationSource
@property (retain, nonatomic) NSString *collectionID; // ivar: _collectionID
@property (retain, nonatomic) NSString *correlationID; // ivar: _correlationID
@property (nonatomic, getter=isNotificationModelControl) BOOL notificationModelControl; // ivar: _notificationModelControl
@property (retain, nonatomic) NSString *tipID; // ivar: _tipID


+(BOOL)supportsSecureCoding;
+(id)eventWithTipID:(id)arg0 animationFinished:(BOOL)arg1 animationSource:(id)arg2 collectionID:(id)arg3 correlationID:(id)arg4 ;
-(id)_initWithTipID:(id)arg0 animationFinished:(BOOL)arg1 animationSource:(id)arg2 collectionID:(id)arg3 correlationID:(id)arg4 ;
-(id)eventName;
-(id)initWithCoder:(id)arg0 ;
-(id)mutableAnalyticsEventRepresentation;
-(void)encodeWithCoder:(id)arg0 ;
-(void)setDataProvider:(id)arg0 ;


@end


#endif
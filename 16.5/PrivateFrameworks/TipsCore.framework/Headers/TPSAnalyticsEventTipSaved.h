// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TPSANALYTICSEVENTTIPSAVED_H
#define TPSANALYTICSEVENTTIPSAVED_H

@class NSString;


#import "TPSAnalyticsEvent.h"

@interface TPSAnalyticsEventTipSaved : TPSAnalyticsEvent

@property (copy, nonatomic) NSString *collectionID; // ivar: _collectionID
@property (copy, nonatomic) NSString *correlationID; // ivar: _correlationID
@property (nonatomic) BOOL saved; // ivar: _saved
@property (retain, nonatomic) NSString *tipID; // ivar: _tipID


+(BOOL)supportsSecureCoding;
+(id)eventWithTipID:(id)arg0 saved:(BOOL)arg1 correlationID:(id)arg2 collectionID:(id)arg3 ;
-(id)_initWithTipID:(id)arg0 saved:(BOOL)arg1 correlationID:(id)arg2 collectionID:(id)arg3 ;
-(id)eventName;
-(id)initWithCoder:(id)arg0 ;
-(id)mutableAnalyticsEventRepresentation;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif
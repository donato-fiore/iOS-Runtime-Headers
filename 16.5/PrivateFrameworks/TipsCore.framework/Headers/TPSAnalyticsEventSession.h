// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TPSANALYTICSEVENTSESSION_H
#define TPSANALYTICSEVENTSESSION_H



#import "TPSAnalyticsEvent.h"

@interface TPSAnalyticsEventSession : TPSAnalyticsEvent

@property (readonly, nonatomic) NSInteger collectionsViewed; // ivar: _collectionsViewed
@property (readonly, nonatomic) NSInteger tipsViewed; // ivar: _tipsViewed


+(BOOL)supportsSecureCoding;
+(id)eventWithCollectionsViewed:(NSInteger)arg0 tipsViewed:(NSInteger)arg1 ;
-(id)_initWithCollectionsViewed:(NSInteger)arg0 tipsViewed:(NSInteger)arg1 ;
-(id)eventName;
-(id)initWithCoder:(id)arg0 ;
-(id)mutableAnalyticsEventRepresentation;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif
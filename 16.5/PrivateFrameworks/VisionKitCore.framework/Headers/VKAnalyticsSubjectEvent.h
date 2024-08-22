// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VKANALYTICSSUBJECTEVENT_H
#define VKANALYTICSSUBJECTEVENT_H



#import "VKAnalyticsEvent.h"

@interface VKAnalyticsSubjectEvent : VKAnalyticsEvent

@property (nonatomic) NSInteger eventType; // ivar: _eventType
@property (nonatomic) NSInteger interactionType; // ivar: _interactionType
@property (nonatomic) CGFloat processingDuration; // ivar: _processingDuration
@property (nonatomic) BOOL subjectFound; // ivar: _subjectFound


-(NSInteger)type;
-(id)coreAnalyticsDictionary;
-(id)description;
-(id)eventKey;
-(id)initWithEventType:(NSInteger)arg0 interactionType:(NSInteger)arg1 subjectFound:(BOOL)arg2 processingDuration:(CGFloat)arg3 customIdentifier:(id)arg4 ;


@end


#endif
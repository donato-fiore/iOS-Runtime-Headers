// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VKANALYTICSQUICKACTIONEVENT_H
#define VKANALYTICSQUICKACTIONEVENT_H

@class NSString;


#import "VKAnalyticsEvent.h"

@interface VKAnalyticsQuickActionEvent : VKAnalyticsEvent

@property (nonatomic) NSInteger eventType; // ivar: _eventType
@property (retain, nonatomic) NSString *quickActionType; // ivar: _quickActionType
@property (nonatomic) NSInteger quickActionsCount; // ivar: _quickActionsCount
@property (nonatomic) NSInteger textLength; // ivar: _textLength


-(NSInteger)type;
-(id)coreAnalyticsDictionary;
-(id)description;
-(id)eventKey;
-(id)initWithQuickActionType:(id)arg0 quickActionsCount:(NSInteger)arg1 textLength:(NSInteger)arg2 eventType:(NSInteger)arg3 customIdentifier:(id)arg4 ;


@end


#endif
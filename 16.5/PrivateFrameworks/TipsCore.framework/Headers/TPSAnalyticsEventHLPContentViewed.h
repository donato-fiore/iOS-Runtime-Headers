// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TPSANALYTICSEVENTHLPCONTENTVIEWED_H
#define TPSANALYTICSEVENTHLPCONTENTVIEWED_H

@class NSString;


#import "TPSAnalyticsEvent.h"

@interface TPSAnalyticsEventHLPContentViewed : TPSAnalyticsEvent

@property (readonly, nonatomic) NSString *externalURLString; // ivar: _externalURLString
@property (readonly, nonatomic) NSString *fromTopicID; // ivar: _fromTopicID
@property (readonly, nonatomic) NSString *interfaceStyle; // ivar: _interfaceStyle
@property (readonly, nonatomic) NSString *source; // ivar: _source
@property (readonly, nonatomic) NSString *topicID; // ivar: _topicID
@property (readonly, nonatomic) NSString *topicTitle; // ivar: _topicTitle


+(BOOL)supportsSecureCoding;
+(id)eventWithTopicID:(id)arg0 topicTitle:(id)arg1 source:(id)arg2 interfaceStyle:(id)arg3 fromTopicID:(id)arg4 externalURLString:(id)arg5 ;
-(id)_initWithTopicID:(id)arg0 topicTitle:(id)arg1 source:(id)arg2 interfaceStyle:(id)arg3 fromTopicID:(id)arg4 externalURLString:(id)arg5 ;
-(id)eventName;
-(id)initWithCoder:(id)arg0 ;
-(id)mutableAnalyticsEventRepresentation;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif
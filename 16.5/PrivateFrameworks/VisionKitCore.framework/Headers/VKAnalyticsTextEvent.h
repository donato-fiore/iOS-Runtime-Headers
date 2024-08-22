// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VKANALYTICSTEXTEVENT_H
#define VKANALYTICSTEXTEVENT_H



#import "VKAnalyticsEvent.h"

@interface VKAnalyticsTextEvent : VKAnalyticsEvent

@property (readonly, nonatomic) NSInteger eventType; // ivar: _eventType
@property (nonatomic) BOOL includesRichPasteboardContent; // ivar: _includesRichPasteboardContent
@property (nonatomic) SEL macOSKBNavigationSelector; // ivar: _macOSKBNavigationSelector
@property (nonatomic) NSUInteger selectionLength; // ivar: _selectionLength
@property (nonatomic) NSUInteger selectionWordCount; // ivar: _selectionWordCount
@property (nonatomic) NSInteger source; // ivar: _source
@property (nonatomic) NSInteger textEventType; // ivar: _textEventType
@property (nonatomic) NSUInteger totalLength; // ivar: _totalLength


-(NSInteger)type;
-(id)coreAnalyticsDictionary;
-(id)description;
-(id)eventKey;
-(id)initWithSelectionLength:(NSUInteger)arg0 totalLength:(NSUInteger)arg1 selectionWordCount:(NSUInteger)arg2 macOSSelector:(SEL)arg3 includesRichPasteBoardContent:(BOOL)arg4 eventType:(NSInteger)arg5 source:(NSInteger)arg6 customIdentifier:(id)arg7 ;


@end


#endif
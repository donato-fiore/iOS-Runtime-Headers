// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TISKEMOJIINPUTEVENT_H
#define TISKEMOJIINPUTEVENT_H

@class NSString;


#import "TISKTimestampEvent.h"

@interface TISKEmojiInputEvent : TISKTimestampEvent

@property (retain, nonatomic) NSString *emojiBucketCategory; // ivar: _emojiBucketCategory


-(id)description;
-(id)init:(CGFloat)arg0 emojiSearchMode:(BOOL)arg1 order:(NSInteger)arg2 emojiBucketCategory:(id)arg3 ;
-(void)reportToSession:(id)arg0 ;


@end


#endif
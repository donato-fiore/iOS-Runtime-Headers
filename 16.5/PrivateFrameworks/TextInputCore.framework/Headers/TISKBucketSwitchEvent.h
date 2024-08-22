// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TISKBUCKETSWITCHEVENT_H
#define TISKBUCKETSWITCHEVENT_H



#import "TISKEvent.h"
#import "TISKSessionStats.h"

@interface TISKBucketSwitchEvent : TISKEvent

@property (retain, nonatomic) TISKSessionStats *sessionStats; // ivar: _sessionStats


-(id)description;
-(id)init:(id)arg0 emojiSearchMode:(BOOL)arg1 order:(NSInteger)arg2 ;
-(id)privateDescription;
-(void)reportToSession:(id)arg0 ;


@end


#endif
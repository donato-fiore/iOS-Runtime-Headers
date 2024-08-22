// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TISKWORDDELETEEVENT_H
#define TISKWORDDELETEEVENT_H



#import "TISKEvent.h"

@interface TISKWordDeleteEvent : TISKEvent



-(id)description;
-(id)initWithEmojiSearchMode:(BOOL)arg0 order:(NSInteger)arg1 ;
-(void)reportToSession:(id)arg0 ;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TISKCANDIDATEACCEPTEVENT_H
#define TISKCANDIDATEACCEPTEVENT_H

@class TIKeyboardCandidate, NSString;


#import "TISKEvent.h"

@interface TISKCandidateAcceptEvent : TISKEvent

@property (retain, nonatomic) TIKeyboardCandidate *candidate; // ivar: _candidate
@property (nonatomic) BOOL isAutocorrection; // ivar: _isAutocorrection
@property (retain, nonatomic) NSString *wordBucketCategory; // ivar: _wordBucketCategory


-(id)description;
-(id)init:(id)arg0 emojiSearchMode:(BOOL)arg1 order:(NSInteger)arg2 wordBucketCategory:(id)arg3 isAutocorrection:(BOOL)arg4 ;
-(void)reportToSession:(id)arg0 ;


@end


#endif
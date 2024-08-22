// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TIASTERISKCORRECTIONMESSAGEEVENT_H
#define TIASTERISKCORRECTIONMESSAGEEVENT_H

@class NSString;

#import <Foundation/Foundation.h>

#import "TITypingSessionAligned.h"
#import "TITypingSession.h"

@interface TIAsteriskCorrectionMessageEvent : NSObject

@property (retain, nonatomic) NSString *asteriskCorrectionType; // ivar: _asteriskCorrectionType
@property (readonly) NSString *bundleId; // ivar: _bundleId
@property int finalWordsEnteredCount; // ivar: _finalWordsEnteredCount
@property (retain) TITypingSessionAligned *messageAlignedSession; // ivar: _messageAlignedSession
@property (retain) TITypingSession *messageSession; // ivar: _messageSession
@property (retain, nonatomic) NSString *messageText; // ivar: _messageText
@property (readonly) NSUInteger prevMsgAutocorrectionType; // ivar: _prevMsgAutocorrectionType
@property (retain, nonatomic) NSString *wordCountType; // ivar: _wordCountType
@property int wordsEnteredCount; // ivar: _wordsEnteredCount


-(BOOL)hasText:(id)arg0 ;
-(BOOL)hasTextInWordEntry:(id)arg0 ;
-(id)assessAsteriskCorrection;
-(id)initWithSession:(id)arg0 andPrevMsgAutocorrectionType:(NSUInteger)arg1 andBundleId:(id)arg2 ;
-(void)adjustEmojiCountsFromKeyboardInputForWordAligned:(id)arg0 ;
-(void)analyzeEvent;
-(void)analyzeWordEntry:(id)arg0 ;
-(void)analyzeWordEntryAligned:(id)arg0 ;
-(void)dispatchAsteriskEventWithFeatureUsageMetricsCache:(id)arg0 andContext:(id)arg1 assetAvailabilityStatus:(NSInteger)arg2 ;


@end


#endif
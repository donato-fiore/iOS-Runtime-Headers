// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TUIEMOJISEARCHANALYTICSSESSION_H
#define TUIEMOJISEARCHANALYTICSSESSION_H

@class NSLocale, NSString;


#import "TUIAnalyticsSession.h"

@interface TUIEmojiSearchAnalyticsSession : TUIAnalyticsSession {
    NSLocale *_locale;
    NSString *_trackedSearchQuery;
    NSString *_initialInputModeIdentifier;
    NSUInteger _numberOfInitialCharacters;
    NSUInteger _numberOfEmojiInserted;
    NSUInteger _numberOfCharactersInserted;
    NSUInteger _numberOfCharactersDeleted;
    NSUInteger _numberOfClearActions;
}




+(id)emojiSearchFieldSpecTuples;
+(void)registerEventSpecIfNecessary;
-(id)initWithLocale:(id)arg0 ;
-(void)beginSessionWithInitialSearchQuery:(id)arg0 ;
-(void)clearButtonPressed;
-(void)emojiInserted:(id)arg0 ;
-(void)endSession;
-(void)searchQueryWasChangedTo:(id)arg0 ;


@end


#endif
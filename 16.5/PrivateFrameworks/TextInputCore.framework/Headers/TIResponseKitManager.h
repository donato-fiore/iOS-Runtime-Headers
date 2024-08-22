// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TIRESPONSEKITMANAGER_H
#define TIRESPONSEKITMANAGER_H

@class NSMutableArray, NSString;
@protocol TIResponseKitManaging, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface TIResponseKitManager : NSObject <TIResponseKitManaging>

 {
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableArray *_conversationTurns;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)rewriteMoneyAttributes:(id)arg0 ;
+(id)sharedTIResponseKitManager;
+(id)singletonInstance;
-(id)cannedResponsesForString:(id)arg0 withLanguageID:(id)arg1 withClientID:(id)arg2 withRecipientID:(id)arg3 withAdditionalPredictions:(id)arg4 desiredCandidateCount:(NSUInteger)arg5 shouldDisableAutoCaps:(BOOL)arg6 isBlacklisted:(BOOL)arg7 ;
-(id)indexesOfDuplicatesInCandidates:(id)arg0 ;
-(id)init;
-(id)responseKitResponseCandidatesForString:(id)arg0 withLanguageID:(id)arg1 withClientID:(id)arg2 withRecipientID:(id)arg3 shouldDisableAutoCaps:(BOOL)arg4 ;
-(void)addNewConversationTurnToHistory:(id)arg0 ;
-(void)generateResponseKitSuggestionsForString:(id)arg0 withLanguage:(id)arg1 withClientID:(id)arg2 withRecipientID:(id)arg3 withAdditionalPredictions:(id)arg4 desiredCandidateCount:(NSUInteger)arg5 shouldDisableAutoCaps:(BOOL)arg6 stringIsBlacklisted:(BOOL)arg7 async:(BOOL)arg8 completionHandler:(id)arg9 ;
-(void)persistResponseKitDynamicDataToDisk;
-(void)registerResponseKitResponse:(id)arg0 forMessage:(id)arg1 withLanguage:(id)arg2 withClientID:(id)arg3 withSenderID:(id)arg4 withRecipientID:(id)arg5 withTimestamp:(id)arg6 shouldUpdateConversationHistory:(BOOL)arg7 ;
-(void)resetResponseKit;
-(void)resetResponseKitConversationHistory;
-(void)updateResponseKitConversationHistoryWithMessage:(id)arg0 withSenderID:(id)arg1 withTimestamp:(id)arg2 ;


@end


#endif
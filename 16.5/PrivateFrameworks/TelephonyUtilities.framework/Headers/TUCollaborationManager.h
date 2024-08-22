// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TUCOLLABORATIONMANAGER_H
#define TUCOLLABORATIONMANAGER_H

@class NSMutableDictionary, NSString, NSMutableSet;
@protocol TUCollaborationProviderDelegate, TUConversationManagerDelegate, TUCollaborationProvider, TUCollaborationManagerDelegate, TUFeatureFlags, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "TUConversation.h"

@interface TUCollaborationManager : NSObject <TUCollaborationProviderDelegate, TUConversationManagerDelegate>



@property (readonly, nonatomic) NSObject<TUCollaborationProvider> *collaborationProvider; // ivar: _collaborationProvider
@property (readonly, nonatomic) NSMutableDictionary *collaborationStateByIdentifier; // ivar: _collaborationStateByIdentifier
@property (retain, nonatomic) NSMutableDictionary *conversationsByHighlightIdentifier; // ivar: _conversationsByHighlightIdentifier
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<TUCollaborationManagerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSObject<TUFeatureFlags> *featureFlags; // ivar: _featureFlags
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSMutableDictionary *highlightsByIdentifier; // ivar: _highlightsByIdentifier
@property (readonly, nonatomic) BOOL isIpad; // ivar: _isIpad
@property (retain, nonatomic) NSMutableDictionary *originatingParticipantByHighlightIdentifier; // ivar: _originatingParticipantByHighlightIdentifier
@property (retain, nonatomic) NSString *pendingCollaborationToAdd; // ivar: _pendingCollaborationToAdd
@property (retain, nonatomic) TUConversation *pendingConversationToAdd; // ivar: _pendingConversationToAdd
@property (retain, nonatomic) NSMutableSet *pendingHighlightIdentifiers; // ivar: _pendingHighlightIdentifiers
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (readonly) Class superclass;


-(BOOL)isCollaborationLocallyInitiatedForConversation:(id)arg0 ;
-(NSInteger)collaborationStateForConversation:(id)arg0 ;
-(id)collaborationForConversation:(id)arg0 ;
-(id)initWithCollaborationProvider:(id)arg0 ;
-(id)initWithCollaborationProvider:(id)arg0 featureFlags:(id)arg1 deviceSupport:(id)arg2 ;
-(void)associateCollaborationWithNewConversation:(id)arg0 ;
-(void)collaborationsDidChange:(id)arg0 ;
-(void)conversationManager:(id)arg0 stateChangedForConversation:(id)arg1 ;
-(void)notifyDelegateOfHighlightChanged:(id)arg0 onConversation:(id)arg1 ;
-(void)participant:(id)arg0 addedHighlightToConversation:(id)arg1 highlightIdentifier:(id)arg2 oldHighlightIdentifier:(id)arg3 isFirstAdd:(BOOL)arg4 ;
-(void)participant:(id)arg0 reAddedHighlightToConversation:(id)arg1 highlightIdentifier:(id)arg2 ;
-(void)participant:(id)arg0 removedHighlightFromConversation:(id)arg1 highlightIdentifier:(id)arg2 ;
-(void)queueCollaborationIdentifierForCollaboration:(id)arg0 toConversation:(id)arg1 ;
-(void)setCollaborationState:(NSInteger)arg0 forCollaborationIdentifier:(id)arg1 ;
-(void)startTrackingCollaborationIfNecessaryAndNotifyDelegate:(id)arg0 forConversation:(id)arg1 ;
-(void)stopTrackingHighlightForConversation:(id)arg0 ;
-(void)vendNoticeForCollaboration:(id)arg0 participant:(id)arg1 forConversation:(id)arg2 type:(NSInteger)arg3 ;


@end


#endif
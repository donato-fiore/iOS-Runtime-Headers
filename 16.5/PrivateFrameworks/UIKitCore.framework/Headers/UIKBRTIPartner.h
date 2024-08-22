// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UIKBRTIPARTNER_H
#define UIKBRTIPARTNER_H

@class RTIDocumentTraits, NSUUID, NSString, TIKeyboardOutput, NSMutableArray, RTIInputSystemClient, RTIDocumentState, RTIInputSourceState, NSMutableDictionary;
@protocol RTIInputSystemClientDelegate, RTIInputSystemSessionDelegate, _UIGeometryChangeObserver, UIKBRTIPartnerDelegate;

#import <Foundation/Foundation.h>

#import "UIKeyboardTaskExecutionContext.h"

@interface UIKBRTIPartner : NSObject <RTIInputSystemClientDelegate, RTIInputSystemSessionDelegate, _UIGeometryChangeObserver>

 {
    RTIDocumentTraits *_remoteDocumentTraits;
    *__CFStringTokenizer _wkRectTokenizer;
    UIKeyboardTaskExecutionContext *_waitingRTIOutputOperationResponseContext;
}


@property (nonatomic) BOOL applicationStateIsActiveForRTI; // ivar: _applicationStateIsActiveForRTI
@property (nonatomic) BOOL cacheHitTestsAsOpaque; // ivar: _cacheHitTestsAsOpaque
@property (copy, nonatomic) NSUUID *currentSessionIdentifier; // ivar: _currentSessionIdentifier
@property (nonatomic) BOOL deactivatedByFullScreenTransientOverlay; // ivar: _deactivatedByFullScreenTransientOverlay
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL inputSystemClientEnabled; // ivar: _inputSystemClientEnabled
@property (readonly, nonatomic) BOOL isNotifyingDelegateOfRemoteOutputOperation; // ivar: _isNotifyingDelegateOfRemoteOutputOperation
@property (nonatomic) BOOL isObservingGeometry; // ivar: _isObservingGeometry
@property (weak, nonatomic) NSObject<UIKBRTIPartnerDelegate> *partnerDelegate; // ivar: _partnerDelegate
@property (retain, nonatomic) TIKeyboardOutput *pendingOutputOperation; // ivar: _pendingOutputOperation
@property (retain, nonatomic) NSMutableArray *queuedSupplementalLexiconOperations; // ivar: _queuedSupplementalLexiconOperations
@property (retain, nonatomic) RTIInputSystemClient *rtiClient; // ivar: _rtiClient
@property (retain, nonatomic) RTIDocumentState *rtiDocumentState; // ivar: _rtiDocumentState
@property (retain, nonatomic) RTIDocumentTraits *rtiDocumentTraits; // ivar: _rtiDocumentTraits
@property (readonly, nonatomic) RTIInputSourceState *rtiInputSourceState; // ivar: _rtiInputSourceState
@property (readonly) Class superclass;
@property (retain, nonatomic) NSMutableDictionary *supplementalLexicons; // ivar: _supplementalLexicons
@property (retain, nonatomic) NSMutableDictionary *textSuggestions; // ivar: _textSuggestions
@property (nonatomic) BOOL viewServiceStateIsActiveForRTI; // ivar: _viewServiceStateIsActiveForRTI


+(void)registerTextOperationCustomInfo;
-(BOOL)_updateRTITraitsIfNecessary;
-(BOOL)compareWaitingRTIOutputOperationResponseContext:(id)arg0 andExchange:(id)arg1 ;
-(BOOL)remoteTextInputClientHasActiveSession;
-(BOOL)synchronousForwardKeyCommandsBeforePublicToUIHost:(id)arg0 ;
-(BOOL)synchronousForwardKeyCommandsToUIHost:(id)arg0 ;
-(BOOL)synchronousForwardKeyInputMethodCommandEventToUIHost:(id)arg0 canHandleAppKeyCommand:(BOOL)arg1 ;
-(NSInteger)_uiTextGranularityForRTITextGranularity:(NSInteger)arg0 ;
-(id)_defaultRTIMachNames;
-(id)_newInputSystemUIClient;
-(id)_newRTIConnection;
-(id)autofillPayloadDelegate;
-(id)delegate;
-(id)exchangeWaitingRTIOutputOperationResponseContext:(id)arg0 ;
-(id)init;
-(id)inputDelegate;
-(id)inputDelegateView;
-(id)insertionPointColor;
-(id)textOperation_cancelChooseSupplementalItemToInsert;
-(id)textOperation_chooseSupplementalItem:(id)arg0 toReplaceText:(id)arg1 ;
-(id)textOperation_insertAutofillContent:(id)arg0 ;
-(id)textOperation_insertSupplementalCandidate:(id)arg0 textToCommit:(id)arg1 ;
-(id)textOperation_insertionPointEnteredText:(id)arg0 withSupplementalCandidate:(id)arg1 ;
-(id)textOperation_insertionPointExitedTextWithSupplementalItems;
-(struct CGRect )_selectionClipRect;
-(struct CGRect )convertRect:(struct CGRect )arg0 from:(id)arg1 ;
-(unsigned int)_performKeyboardOutputOperations:(id)arg0 ;
-(void)_addAutocorrectStylingToDocumentState:(id)arg0 ;
-(void)_addCharacterRectsToDocumentState:(id)arg0 textRange:(id)arg1 offset:(NSInteger)arg2 ;
-(void)_addFirstSelectionRectToDocumentState:(id)arg0 ;
-(void)_addMergedTextRectsToDocumentState:(id)arg0 forWKContext:(id)arg1 textInputView:(id)arg2 granularity:(NSInteger)arg3 ;
-(void)_addTextCheckingAnnotatedStringToDocumentState:(id)arg0 ;
-(void)_applicationDidRemoveDeactivationReason:(id)arg0 ;
-(void)_applicationWillAddDeactivationReason:(id)arg0 ;
-(void)_applicationWillSuspend:(id)arg0 ;
-(void)_createRTIClient;
-(void)_createRTIClientIfNecessary;
-(void)_didAddSupplementalLexicon:(id)arg0 ;
-(void)_didCreateRTIClient:(id)arg0 ;
-(void)_didRemoveSupplementalLexiconWithIdentifier:(NSUInteger)arg0 ;
-(void)_geometryChanged:(struct ? *)arg0 forAncestor:(id)arg1 ;
-(void)_macWindowChangedKey:(id)arg0 ;
-(void)_performQueuedSupplementalLexiconOperations;
-(void)_queryDocumentRequest:(id)arg0 completion:(id)arg1 ;
-(void)_queryUIKitDocumentRequest:(id)arg0 completion:(id)arg1 ;
-(void)_queryWKDocumentRequest:(id)arg0 completion:(id)arg1 ;
-(void)_queueSupplementalLexiconOperation:(NSUInteger)arg0 lexicon:(id)arg1 ;
-(void)_queued_performTextOperations:(id)arg0 resultHandler:(id)arg1 ;
-(void)_screenModeDidChange:(id)arg0 ;
-(void)_updateGeometryObserverIfNecessary;
-(void)_updateRTIAllowedAndNotify:(BOOL)arg0 withReason:(id)arg1 ;
-(void)_updateRTIStateWithCompletion:(id)arg0 ;
-(void)_viewServiceHostDidBecomeActive:(id)arg0 ;
-(void)_viewServiceHostWillResignActive:(id)arg0 ;
-(void)addTextSuggestions:(id)arg0 ;
-(void)applyAssistantItem:(id)arg0 ;
-(void)applyRemoteDocumentStateIfNecessary:(id)arg0 force:(BOOL)arg1 ;
-(void)applyRemoteDocumentTraitsIfNecessary:(id)arg0 force:(BOOL)arg1 ;
-(void)beginAllowingRemoteTextInput:(id)arg0 ;
-(void)beginInputSessionWithIdentifier:(id)arg0 ;
-(void)connectionInterrupted:(id)arg0 ;
-(void)connectionInvalidated:(id)arg0 ;
-(void)dealloc;
-(void)defaultDocumentRequestDidChange:(id)arg0 ;
-(void)didAddSupplementalLexicon:(id)arg0 ;
-(void)didRemoveSupplementalLexicon:(id)arg0 ;
-(void)documentStateChanged;
-(void)documentStateChanged:(BOOL)arg0 ;
-(void)documentTraitsChanged;
-(void)endAllowingRemoteTextInput:(id)arg0 ;
-(void)endInputSessionWithIdentifier:(id)arg0 ;
-(void)endInputSessionWithIdentifier:(id)arg0 shouldResign:(BOOL)arg1 ;
-(void)ensureRTIConnection;
-(void)finishCompletionHandlersIfNeeded;
-(void)forwardApplicationOperation:(SEL)arg0 object:(id)arg1 ;
-(void)forwardAutofillPayload:(id)arg0 toPayloadDelegate:(id)arg1 ;
-(void)forwardClearForwardingInputDelegateAndResign:(BOOL)arg0 ;
-(void)forwardDictationEventToUIHost:(SEL)arg0 withOptionalObject:(id)arg1 ;
-(void)forwardEventCallbackToRemoteSource_didChooseSupplementalItem:(id)arg0 toReplaceText:(id)arg1 ;
-(void)forwardEventToRemoteSource_canSuggestSupplementalItemsForCurrentSelection:(BOOL)arg0 ;
-(void)forwardKeyboardCameraEvent_startCameraInput:(id)arg0 ;
-(void)forwardKeyboardEventToUIHost:(id)arg0 ;
-(void)forwardKeyboardInputMode:(id)arg0 ;
-(void)forwardKeyboardOperation:(SEL)arg0 object:(id)arg1 ;
-(void)forwardKeyboardSuppression:(BOOL)arg0 suppressAssistantBar:(BOOL)arg1 ;
-(void)forwardSelectorToUIHost:(SEL)arg0 completionHandler:(id)arg1 ;
-(void)forwardUserInteractionEventToUIHost:(SEL)arg0 ;
-(void)inputSession:(id)arg0 didAddRTISupplementalLexicon:(id)arg1 ;
-(void)inputSession:(id)arg0 didRemoveRTISupplementalLexicon:(id)arg1 ;
-(void)inputSession:(id)arg0 documentStateDidChange:(id)arg1 ;
-(void)inputSession:(id)arg0 documentTraitsDidChange:(id)arg1 ;
-(void)inputSession:(id)arg0 performInputOperation:(id)arg1 ;
-(void)inputSession:(id)arg0 performInputOperation:(id)arg1 withResponse:(id)arg2 ;
-(void)inputSession:(id)arg0 textSuggestionsChanged:(id)arg1 ;
-(void)performDocumentRequest:(id)arg0 completion:(id)arg1 ;
-(void)performInputOperation:(id)arg0 ;
-(void)performTextOperations:(id)arg0 ;
-(void)performTextOperations:(id)arg0 resultHandler:(id)arg1 ;
-(void)removeTextSuggestionsForSessionWithID:(id)arg0 ;
-(void)restartCurrentSession;
-(void)textSuggestionsChanged:(id)arg0 ;
-(void)updateAnimationForOptions:(id)arg0 ;
// -(void)updateStateWithCompletion:(id)arg0 updateTraits:(unk)arg1  ;
-(void)updateTextSuggestionsIfNecessary:(id)arg0 ;


@end


#endif
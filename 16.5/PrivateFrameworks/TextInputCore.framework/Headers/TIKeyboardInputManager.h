// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TIKEYBOARDINPUTMANAGER_H
#define TIKEYBOARDINPUTMANAGER_H

@class NSMutableString, TIKeyboardLayout, TIKeyboardLayoutState, TIKeyboardInputManagerState, NSCharacterSet, NSMutableDictionary, TIInputContextHistory, TICharacterSetDescription, TISmartPunctuationOptions, NSString, TIKeyboardCandidate, TIKeyboardState, NSArray, TIAutocorrectionList, NSMutableSet;
@protocol TIRevisionHistoryDelegate, TILanguageSelectionControllerDelegate, TICandidateHandler;


#import "TIKeyboardInputManagerBase.h"
#import "TIKeyboardFeatureSpecialization.h"
#import "TILanguageSelectionController.h"
#import "TIEmojiCandidateGenerator.h"
#import "TILRUDictionary.h"
#import "TIAutoshiftRegularExpressionLoader.h"
#import "TIKeyboardInputManagerConfig.h"
#import "TICounterChangeCache.h"
#import "TISupplementalLexiconController.h"
#import "TIFilterParameterLoader.h"
#import "TIRevisionHistory.h"
#import "TISmartSelector.h"
#import "TITextCheckerExemptions.h"
#import "TITypingSessionMonitor.h"

@interface TIKeyboardInputManager : TIKeyboardInputManagerBase <TIRevisionHistoryDelegate, TILanguageSelectionControllerDelegate>

 {
    *void m_impl;
    NSMutableString *m_composedText;
    NSUInteger m_initialSelectedIndex;
    TIKeyboardLayout *_keyLayout;
    TIKeyboardLayoutState *_layoutState;
    TIKeyboardInputManagerState *_currentState;
    TIKeyboardFeatureSpecialization *_keyboardFeatureSpecialization;
    NSCharacterSet *_allowPredictionCharacterSet;
    NSMutableDictionary *_cachedLayoutTags;
    shared_ptr<KB::TypologyLogger> m_typology_recorder;
    shared_ptr<KB::LanguageModel> m_lightweight_language_model;
    TILanguageSelectionController *_languageSelectionController;
    TIEmojiCandidateGenerator *_emojiCandidateGenerator;
    TIInputContextHistory *_synchronizedInputContextHistory;
    TICharacterSetDescription *_wordCharacters;
    TICharacterSetDescription *_supplementalLexiconWordExtraCharacters;
    TICharacterSetDescription *_closingQuotes;
    TICharacterSetDescription *_openingQuotes;
    TISmartPunctuationOptions *_smartOptions;
    NSMutableDictionary *_testingStateObject;
    int _lastHitTestKeycode;
    BOOL _didInitialSync;
    vector<RecentMessage, std::allocator<RecentMessage>> conversation_history;
}


@property (readonly, nonatomic) NSCharacterSet *allowPredictionCharacterSet;
@property (retain, nonatomic) TILRUDictionary *autocorrectionForCurrentStem; // ivar: _autocorrectionForCurrentStem
@property (readonly, nonatomic) TILRUDictionary *autocorrectionHistory; // ivar: _autocorrectionHistory
@property (readonly, nonatomic) TILRUDictionary *autocorrectionListsForWordsInDocument; // ivar: _autocorrectionListsForWordsInDocument
@property (readonly, nonatomic) TILRUDictionary *autocorrectionListsSuggestedForCurrentInput; // ivar: _autocorrectionListsSuggestedForCurrentInput
@property (retain, nonatomic) TIAutoshiftRegularExpressionLoader *autoshiftRegexLoader; // ivar: _autoshiftRegexLoader
@property (copy, nonatomic) id *candidateGenerationCompletionHandler; // ivar: _candidateGenerationCompletionHandler
@property (retain, nonatomic) NSObject<TICandidateHandler> *candidateHandlerForOpenRequest; // ivar: _candidateHandlerForOpenRequest
@property (nonatomic) _NSRange candidateRange; // ivar: _candidateRange
@property (readonly, nonatomic) TIKeyboardInputManagerConfig *config; // ivar: _config
@property (retain, nonatomic) TICounterChangeCache *counterChangeCache; // ivar: _counterChangeCache
@property (readonly, weak, nonatomic) TISupplementalLexiconController *currentCandidateGenerationContextSupplementalLexicons; // ivar: _currentCandidateGenerationContextSupplementalLexicons
@property (readonly, nonatomic) TIKeyboardInputManagerState *currentState;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) NSInteger deleteKeyCount; // ivar: _deleteKeyCount
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) TIEmojiCandidateGenerator *emojiCandidateGenerator;
@property (readonly, nonatomic) TIFilterParameterLoader *filterParameterLoader; // ivar: _filterParameterLoader
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) TIKeyboardCandidate *hitTestCorrectedInputMatchingCandidate; // ivar: _hitTestCorrectedInputMatchingCandidate
@property (nonatomic) BOOL isEditingWordPrefix; // ivar: _isEditingWordPrefix
@property (retain, nonatomic) TIKeyboardLayout *keyLayout;
@property (readonly, nonatomic) TIKeyboardFeatureSpecialization *keyboardFeatureSpecialization;
@property (retain, nonatomic) TIKeyboardState *keyboardState; // ivar: _keyboardState
@property (readonly, nonatomic) NSArray *languageModelAssets;
@property (readonly, nonatomic) TILanguageSelectionController *languageSelectionController;
@property (copy, nonatomic) TIKeyboardCandidate *lastAcceptedText; // ivar: _lastAcceptedText
@property (retain, nonatomic) TIAutocorrectionList *lastContinuousPathAutocorrection; // ivar: _lastContinuousPathAutocorrection
@property (retain, nonatomic) NSString *lastInputString; // ivar: _lastInputString
@property (nonatomic) NSUInteger lastNumCandidatesRequest; // ivar: _lastNumCandidatesRequest
@property (readonly, nonatomic) NSUInteger linguisticResourceStatus; // ivar: _linguisticResourceStatus
@property (copy, nonatomic) id *proactiveSuggestionsGenerationBlock; // ivar: _proactiveSuggestionsGenerationBlock
@property (readonly, nonatomic) TILRUDictionary *recentAutocorrections; // ivar: _recentAutocorrections
@property (readonly, nonatomic) TILRUDictionary *recentPredictiveInputSelections; // ivar: _recentPredictiveInputSelections
@property (readonly, nonatomic) TILRUDictionary *rejectedAutocorrections; // ivar: _rejectedAutocorrections
@property (retain, nonatomic) TILRUDictionary *rejectedAutocorrectionsDisplayedOrInserted; // ivar: _rejectedAutocorrectionsDisplayedOrInserted
@property (retain, nonatomic) TILRUDictionary *rejectedAutocorrectionsDisplayedOrInsertedInverse; // ivar: _rejectedAutocorrectionsDisplayedOrInsertedInverse
@property (retain, nonatomic) NSMutableSet *rejectedConversionsForCurrentContinuousPath; // ivar: _rejectedConversionsForCurrentContinuousPath
@property (readonly, nonatomic) TIRevisionHistory *revisionHistory; // ivar: _revisionHistory
@property (readonly, nonatomic) TISmartPunctuationOptions *smartOptions;
@property (retain, nonatomic) TISmartSelector *smartSelector; // ivar: _smartSelector
@property (readonly) Class superclass;
@property (readonly, nonatomic) unsigned short supplementalPrefix; // ivar: _supplementalPrefix
@property (readonly, nonatomic) TITextCheckerExemptions *textCheckerExemptions; // ivar: _textCheckerExemptions
@property (retain, nonatomic) TITypingSessionMonitor *typingSessionMonitor; // ivar: _typingSessionMonitor
@property (nonatomic) NSInteger userInterfaceIdiom; // ivar: _userInterfaceIdiom
@property (nonatomic, getter=isWordLearningEnabled) BOOL wordLearningEnabled; // ivar: _wordLearningEnabled


+(id)dynamicDictionaryFilePathForInputMode:(id)arg0 ;
+(id)keyboardUserDirectory;
+(id)offlineLearningHandleForInputMode:(id)arg0 ;
+(id)recentsFilePathForIdentifier:(id)arg0 ;
+(id)userDictionaryWordKeyPairsFilePath;
+(int)shiftContextForShiftState:(int)arg0 autocapitalizationType:(NSUInteger)arg1 ;
+(void)clearRecentsFileForIdentifier:(id)arg0 ;
+(void)removeAllDynamicDictionaries;
+(void)removeDynamicDictionaryForInputMode:(id)arg0 ;
+(void)resetResponseKit;
-(*void)initImplementation;
-(BOOL)_canStartSentenceAfterString:(id)arg0 maxRecursionDepth:(NSUInteger)arg1 ;
-(BOOL)acceptAutocorrectionCommitsInline;
-(BOOL)acceptInputString:(id)arg0 ;
-(BOOL)acceptsCharacter:(unsigned int)arg0 ;
-(BOOL)acceptsRange:(struct _NSRange )arg0 inString:(id)arg1 ;
-(BOOL)alwaysShowExtensionCandidatesForSortingMethod:(id)arg0 ;
-(BOOL)autocorrectionWasRecentlyRejected:(id)arg0 ;
-(BOOL)autocorrectionWasRecentlyRejectedForCurrentInput;
-(BOOL)canComputeSentenceContextForInputStem:(id)arg0 ;
-(BOOL)canGenerateCompletionCandidates;
-(BOOL)canHandleKeyHitTest;
-(BOOL)canRetrocorrectInputAtIndex:(unsigned int)arg0 ;
-(BOOL)canStartSentenceAfterString:(id)arg0 ;
-(BOOL)canTrimInputAtIndex:(unsigned int)arg0 ;
-(BOOL)closeCandidateGenerationContextWithResults:(id)arg0 ;
-(BOOL)commitsAcceptedCandidate;
-(BOOL)delayedCandidateList;
-(BOOL)deletesComposedTextByComposedCharacterSequence;
-(BOOL)dictionaryContainsWord:(id)arg0 ;
-(BOOL)dictionaryUsesExternalEncoding;
-(BOOL)doesComposeText;
-(BOOL)doesSelectedTextGenerateEmojiCandidates;
-(BOOL)enablesProactiveQuickType;
-(BOOL)hasLegacyInputStem;
-(BOOL)hasLegacyInputString;
-(BOOL)ignoresDeadKeys;
-(BOOL)inHardwareKeyboardMode;
-(BOOL)isContinuousPathCandidate:(id)arg0 replacementForOriginalConversion:(id)arg1 ;
-(BOOL)isEditingExistingWord;
-(BOOL)isExpensiveToSuspend;
-(BOOL)isHardwareKeyboardAutocorrectionEnabled;
-(BOOL)isLinguisticResourceUpdateScheduled;
-(BOOL)isProgressivelyPathing;
-(BOOL)isStringBasedModel;
-(BOOL)isTypologyEnabled;
-(BOOL)keyboardConfigurationAssertDefaultKeyPlane;
-(BOOL)newInputAcceptsUserSelectedCandidate;
-(BOOL)nextInputWouldStartSentence;
-(BOOL)nextInputWouldStartSentenceAfterInput:(id)arg0 ;
-(BOOL)removeSuffixOfInputContext:(id)arg0 ;
-(BOOL)shouldAddModifierSymbolsToWordCharacters;
-(BOOL)shouldAllowContextTokenID:(struct TITokenID )arg0 ;
-(BOOL)shouldAllowCorrectionOfAcceptedCandidate:(id)arg0 ;
-(BOOL)shouldAutocapitalizePredictionAfterSpace;
-(BOOL)shouldClearInputOnMarkedTextOutOfSync;
-(BOOL)shouldCommitInputString;
-(BOOL)shouldDelayUpdateComposedText;
-(BOOL)shouldDropInputStem;
-(BOOL)shouldExtendPriorWord;
-(BOOL)shouldFixupIncompleteRomaji;
-(BOOL)shouldGeneratePredictionsForCurrentContext;
-(BOOL)shouldGenerateSuggestionsForSelectedText;
-(BOOL)shouldInsertSpaceBeforeInput:(id)arg0 ;
-(BOOL)shouldInsertSpaceBeforePredictions;
-(BOOL)shouldLearnWord:(id)arg0 ;
-(BOOL)shouldMonitorTypingSession;
-(BOOL)shouldOmitEmojiCandidates;
-(BOOL)shouldSkipCandidateSelection;
-(BOOL)shouldSkipShortcutConversionForDocumentState:(id)arg0 ;
-(BOOL)shouldSuppressLanguageSelectionEvidence;
-(BOOL)shouldSuppressLearning;
-(BOOL)shouldSuppressTokenIDLookups;
-(BOOL)shouldUpdateDictionary;
-(BOOL)shouldUpdateLanguageModel;
-(BOOL)spaceAndNextInputWouldStartSentence;
-(BOOL)stringEndsWithClosingQuote:(id)arg0 ;
-(BOOL)stringEndsWord:(id)arg0 ;
-(BOOL)suggestionBlacklistMatchesStrings:(id)arg0 ;
-(BOOL)suppliesCompletions;
-(BOOL)supportsLearning;
-(BOOL)supportsNumberKeySelection;
-(BOOL)supportsSetPhraseBoundary;
-(BOOL)supportsShortcutConversion;
-(BOOL)suppressCompletionsForFieldEditor;
-(BOOL)suppressPlaceholderCandidate;
-(BOOL)syncToKeyboardState:(id)arg0 completionHandler:(id)arg1 ;
-(BOOL)updateAdaptationContextToKeyboardState:(id)arg0 from:(id)arg1 ;
-(BOOL)updateLanguageModelForKeyboardState;
-(BOOL)usesAutoDeleteWord;
-(BOOL)usesCandidateSelection;
-(BOOL)usesContinuousPath;
-(BOOL)usesLiveConversion;
-(BOOL)usesMLTapTyping;
-(BOOL)usesPunctuationKeysForRowNavigation;
-(BOOL)usesRetrocorrection;
-(CGFloat)continuousPathLanguageWeight;
-(NSInteger)addTouch:(id)arg0 shouldHitTest:(BOOL)arg1 ;
-(NSInteger)performHitTestForTouchEvent:(id)arg0 keyboardState:(id)arg1 ;
-(NSUInteger)autoquoteType;
-(NSUInteger)countOfWordsIninputStem:(id)arg0 ;
-(NSUInteger)initialCandidateBatchCount;
-(NSUInteger)initialSelectedIndex;
-(NSUInteger)internalIndexOfInputStemSuffix:(id)arg0 ;
-(NSUInteger)maxPriorWordTokensAfterTrimming;
-(NSUInteger)maximumShortcutLengthAllowed;
-(NSUInteger)phraseBoundary;
-(NSUInteger)prefixLengthOfInput:(id)arg0 sharedWithCandidate:(*void)arg1 ;
-(NSUInteger)userFrequencyOfWord:(id)arg0 ;
-(NSUInteger)userFrequencyOfWord:(id)arg0 lexiconID:(unsigned int)arg1 ;
-(id)_supplementalCompletionCandidates:(NSUInteger)arg0 ;
-(id)addInput:(id)arg0 flags:(unsigned int)arg1 point:(struct CGPoint )arg2 firstDelete:(*NSUInteger)arg3 ;
-(id)autocorrection;
-(id)autocorrectionCandidateForInput:(id)arg0 rawInput:(id)arg1 withCandidate:(*void)arg2 ;
-(id)autocorrectionCandidateForInput:(id)arg0 rawInput:(id)arg1 withCandidate:(*void)arg2 insertingSpace:(BOOL)arg3 sharedPrefixLength:(NSUInteger)arg4 ;
-(id)autocorrectionList;
-(id)autocorrectionListForEmptyInputWithDesiredCandidateCount:(NSUInteger)arg0 ;
-(id)autocorrectionListForSelectedText;
-(id)autocorrectionListWithCandidateCount:(NSUInteger)arg0 ;
-(id)autocorrectionRecordForWord:(id)arg0 ;
-(id)cachedAutocorrectionListResponseFor:(id)arg0 ;
-(id)candidateResultSet;
-(id)candidateResultSetFromCandidates:(id)arg0 ;
-(id)candidateResultSetFromCandidates:(id)arg0 proactiveTriggers:(id)arg1 ;
-(id)candidates;
-(id)candidatesForString:(id)arg0 ;
-(id)cannedResponseCandidatesForString:(id)arg0 ;
-(id)closingQuotes;
-(id)completionCandidates:(NSUInteger)arg0 ;
-(id)contextBeforeWithDesiredLength:(NSUInteger)arg0 ;
-(id)continuousPathCandidates:(NSUInteger)arg0 ;
-(id)currentInputModeIdentifier;
-(id)currentWordStem;
-(id)defaultCandidate;
-(id)deleteComposedTextFromIndex:(NSUInteger)arg0 count:(*NSUInteger)arg1 ;
-(id)deleteFromInput:(*NSUInteger)arg0 ;
-(id)deletedSuffixOfInputContext:(id)arg0 whenDeletingFromInputString:(id)arg1 withInputIndex:(NSUInteger)arg2 deletionCount:(NSUInteger)arg3 ;
-(id)deltaDictionaryPathForInputMode:(id)arg0 ;
-(id)dictionaryInputMode;
-(id)dictionaryPathForContentType:(id)arg0 inputMode:(id)arg1 filePrefix:(id)arg2 ;
-(id)dictionaryStringForExternalString:(id)arg0 ;
-(id)didAcceptCandidate:(id)arg0 ;
-(id)dynamicDictionaryPathForInputMode:(id)arg0 ;
-(id)dynamicResourcePath;
-(id)extendedAutocorrection:(id)arg0 spanningInputsForCandidates:(id)arg1 emojis:(id)arg2 ;
-(id)externalStringForDictionaryString:(id)arg0 ;
-(id)externalStringToInternal:(id)arg0 ;
-(id)externalStringToInternal:(id)arg0 ignoreCompositionDisabled:(BOOL)arg1 ;
-(id)generateAndRenderProactiveSuggestionsWithTriggers:(id)arg0 withAdditionalPredictions:(id)arg1 withInput:(id)arg2 ;
-(id)generateOneTimeCodeCandidatesWithKeyboardState:(id)arg0 ;
-(id)generateReplacementsForString:(id)arg0 keyLayout:(id)arg1 ;
-(id)generateTypingAutocorrectionsWithCandidateRange:(struct _NSRange )arg0 ;
-(id)getTestingStateObject;
-(id)groupedCandidatesFromCandidates:(id)arg0 usingSortingMethod:(id)arg1 ;
-(id)handleAcceptedCandidate:(id)arg0 keyboardState:(id)arg1 ;
-(id)handleKeyboardInput:(id)arg0 ;
-(id)humanReadableTrace;
-(id)indexTitlesForGroupTitles:(id)arg0 sortingMethod:(id)arg1 ;
-(id)indexesOfDuplicatesInCandidates:(id)arg0 ;
-(id)initWithConfig:(id)arg0 keyboardState:(id)arg1 ;
-(id)initWithConfig:(id)arg0 keyboardState:(id)arg1 languageSelectionController:(id)arg2 ;
-(id)initWithInputMode:(id)arg0 keyboardState:(id)arg1 ;
-(id)inputContext;
-(id)inputStem;
-(id)inputString;
-(id)inputStringFromDocumentState:(id)arg0 ;
-(id)inputsToReject;
-(id)internalInputContext;
-(id)internalStringToExternal:(id)arg0 ;
-(id)internalStringToExternal:(id)arg0 ignoreCompositionDisabled:(BOOL)arg1 ;
-(id)keyEventMap;
-(id)keyboardBehaviors;
-(id)keyboardConfiguration;
-(id)keyboardConfigurationAccentKeyString;
-(id)keyboardConfigurationLayoutTag;
-(id)languageModelAssetsForInputMode:(id)arg0 ;
-(id)layoutTagsForLayout:(id)arg0 ;
-(id)linguisticContext;
-(id)markedText;
-(id)newInputManagerState;
-(id)newKeyboardContext;
-(id)nonstopPunctuationCharacters;
-(id)openingQuotes;
-(id)originatingAutocorrectionListForCandidate:(id)arg0 ;
-(id)pathToDeltaStaticDictionary;
-(id)pathToDynamicDictionary;
-(id)pathToPhraseDictionary;
-(id)pathToStaticDictionary;
-(id)phraseCandidateCompletedByWord:(struct String *)arg0 allowNoSuggest:(BOOL)arg1 forAutocorrection:(BOOL)arg2 shiftContext:(int)arg3 ;
-(id)phraseDictionaryPathForInputMode:(id)arg0 ;
-(id)predictionCandidates:(NSUInteger)arg0 predictionType:(int)arg1 ;
-(id)primaryInputMode;
-(id)rawInputString;
-(id)remainingInput;
-(id)replacementForDoubleSpace;
-(id)resourceInputModes;
-(id)revisionListFromAutocorrectionList:(id)arg0 afterAcceptingCandidate:(id)arg1 ;
-(id)searchStringForMarkedText;
-(id)sentenceDelimitingCharacters;
-(id)sentencePrefixingCharacters;
-(id)sentenceTrailingCharacters;
-(id)shadowTyping;
-(id)shortcutCompletionsForDocumentState:(id)arg0 ;
-(id)shortcutConversionForDocumentState:(id)arg0 ;
-(id)shortcutConversionForInput:(id)arg0 andExistingString:(id)arg1 existingStringStartsInMiddleOfWord:(BOOL)arg2 ;
-(id)shortcutConversionForString:(id)arg0 stringStartsInMiddleOfWord:(BOOL)arg1 ;
-(id)sortMethodIndexes;
-(id)sortMethodTitles;
-(id)sortMethodsGroupsForCandidates:(id)arg0 ;
-(id)sortMethodsShowExtensionCandidates;
-(id)sortingMethods;
-(id)staticDictionaryPathForInputMode:(id)arg0 ;
-(id)suffixOfDesiredString:(id)arg0 toAppendToInputString:(id)arg1 withInputIndex:(NSUInteger)arg2 afterDeletionCount:(*NSUInteger)arg3 ;
-(id)supplementalAutocorrection;
-(id)supplementalLexiconWordExtraCharacters;
-(id)terminatorsDeletingAutospace;
-(id)terminatorsPrecedingAutospace;
-(id)terminatorsPreventingAutocorrection;
-(id)testingParameters;
-(id)titleForSortingMethod:(id)arg0 ;
-(id)trimmedInputStem;
-(id)trimmedInputStemAfterLathamConversion;
-(id)typedStringForEmptyAutocorrection;
-(id)usageTrackingKeyForStatistic:(id)arg0 ;
-(id)wordCharacters;
-(id)wordSeparator;
-(int)shiftContext;
-(struct ? )lexiconInformation;
-(struct LanguageModelContext )sentenceContextForInputStem:(id)arg0 inputContext:(id)arg1 ;
-(struct RefPtr<KB::DictionaryContainer> )getDictionary;
-(struct TITokenID )addWord:(id)arg0 contextTokens:(id)arg1 surfaceFormPtr:(*id)arg2 ;
-(struct TITokenID )findTokenIDForWord:(id)arg0 contextTokens:(id)arg1 tokenLookupMode:(unsigned int)arg2 ;
-(struct TITokenID )findTokenIDForWord:(id)arg0 contextTokens:(id)arg1 tokenLookupMode:(unsigned int)arg2 surfaceFormPtr:(*id)arg3 hasCaseInsensitiveStaticVariant:(*BOOL)arg4 ;
-(struct TITokenID )tokenIDForWordSeparator:(unsigned short)arg0 ;
-(struct USet *)precomposedCharacterSet;
-(struct _NSRange )acceptableRangeFromRange:(struct _NSRange )arg0 inText:(id)arg1 withSelectionLocation:(NSUInteger)arg2 ;
-(struct _NSRange )inputStringRangeFromRevisionHistory;
-(struct _NSRange )legacyInputRangeForTokenRange:(struct _NSRange )arg0 ;
-(struct _NSRange )rangeOfUnclosedQuoteMatchingQuote:(id)arg0 inString:(id)arg1 range:(struct _NSRange )arg2 ;
-(struct _NSRange )shortcutSearchRangeForString:(id)arg0 ;
-(struct _NSRange )smartSelectionRangeForTextInDocument:(id)arg0 inRange:(struct _NSRange )arg1 language:(id)arg2 tokenizedRanges:(id)arg3 options:(NSUInteger)arg4 ;
-(struct shared_ptr<KB::LanguageModel> )loadedLightweightLanguageModel;
-(unsigned int)externalIndexToInternal:(unsigned int)arg0 ;
-(unsigned int)inputCount;
-(unsigned int)inputIndex;
-(unsigned int)internalIndexToExternal:(unsigned int)arg0 ;
-(unsigned int)simulateAutoshiftIfNecessaryForFlags:(unsigned int)arg0 ;
-(void)_recalcSupplementalPrefix;
-(void)acceptCurrentCandidateIfSelectedWithContext:(id)arg0 ;
-(void)acceptCurrentCandidateWithContext:(id)arg0 ;
-(void)acceptInput;
-(void)acceptingCandidateWithTrigger:(id)arg0 ;
-(void)addInput:(id)arg0 withContext:(id)arg1 ;
-(void)addItemToConversationHistoryWithText:(id)arg0 timestamp:(id)arg1 senderID:(id)arg2 recipientIdentifiers:(id)arg3 ;
-(void)addSynthesizedTouchToInput:(id)arg0 ;
-(void)adjustPhraseBoundaryInForwardDirection:(BOOL)arg0 ;
-(void)adjustPhraseBoundaryInForwardDirection:(BOOL)arg0 granularity:(int)arg1 ;
-(void)analyzeTypingSession:(id)arg0 ;
-(void)appendToInputContext:(id)arg0 ;
-(void)candidateRejected:(id)arg0 ;
-(void)candidatesOfferedFeedback:(id)arg0 keyboardState:(id)arg1 ;
-(void)changingContextWithTrigger:(id)arg0 ;
-(void)checkAndUpdateSupplementalLexicons;
-(void)checkAutocorrectionDictionaries;
-(void)clearDynamicDictionary;
-(void)clearHumanReadableTrace;
-(void)clearInput;
-(void)clearInputContext;
-(void)continuousPathCandidateRejected:(id)arg0 ;
-(void)dealloc;
-(void)decrementLanguageModelCount:(id)arg0 tokenID:(struct TITokenID )arg1 contextTokens:(id)arg2 ;
-(void)deleteFromInputWithContext:(id)arg0 ;
-(void)didDropInputStem;
-(void)didUpdateInputModeProbabilities:(id)arg0 ;
-(void)didUpdateInputModes:(id)arg0 ;
-(void)displayedCandidateRejected;
-(void)dropInput;
-(void)dropInputPrefix:(unsigned int)arg0 ;
-(void)dynamicDictionariesRemoved:(id)arg0 ;
-(void)enumerateWordSuffixesOfString:(id)arg0 inRange:(struct _NSRange )arg1 usingBlock:(id)arg2 ;
-(void)fetchAssetAvailabilityStatusForInputMode:(id)arg0 completionHandler:(id)arg1 ;
-(void)fetchTypingSessionParams:(id)arg0 ;
-(void)finishGeneratingAutocorrectionsWithCandidates:(id)arg0 candidateRange:(struct _NSRange )arg1 candidateHandler:(id)arg2 ;
-(void)finishGeneratingCandidates;
-(void)generateAndRenderProactiveSuggestionsWithTriggers:(id)arg0 withAdditionalPredictions:(id)arg1 withInput:(id)arg2 async:(BOOL)arg3 completionHandler:(id)arg4 ;
-(void)generateAutocorrectionsWithKeyboardState:(id)arg0 candidateRange:(struct _NSRange )arg1 candidateHandler:(id)arg2 ;
-(void)generateAutofillFormWithKeyboardState:(id)arg0 completionHandler:(id)arg1 ;
-(void)generateCandidatesWithKeyboardState:(id)arg0 candidateRange:(struct _NSRange )arg1 completionHandler:(id)arg2 ;
-(void)generateCannedResponseCandidatesAsyncForString:(id)arg0 completionHandler:(id)arg1 ;
-(void)groupedCandidatesFromCandidates:(id)arg0 usingSortingMethod:(id)arg1 completion:(id)arg2 ;
-(void)handleTrialParametersUpdateCallback;
-(void)incrementLanguageModelCount:(id)arg0 tokenID:(struct TITokenID )arg1 contextTokens:(id)arg2 saveToDifferentialPrivacy:(int)arg3 ;
-(void)incrementUsageTrackingKey:(id)arg0 ;
-(void)incrementUsageTrackingKeyForAppWithIsSentence:(BOOL)arg0 ;
-(void)incrementUsageTrackingKeyForAutocorrectionStatistic:(id)arg0 autocorrectionTypes:(unsigned int)arg1 ;
-(void)incrementUsageTrackingKeysForDeleteFromInput;
-(void)inputLocationChanged;
-(void)installTypologyTraceLogger;
-(void)learnRecentMessageUserIsRespondingTo;
-(void)loadDictionaries;
-(void)loadFavoniusTypingModel;
-(void)logDiscoverabilityEvent:(int)arg0 userInfo:(id)arg1 ;
-(void)logTestingParametersToTypology;
-(void)logToTypologyRecorderWithString:(id)arg0 ;
-(void)mobileAssetsChanged:(id)arg0 ;
-(void)openCandidateGenerationContextWithCompletionHandler:(id)arg0 ;
-(void)parseRecentMessage:(*void)arg0 ;
-(void)prepareForKeyboardActivity;
-(void)prepareForKeyboardInactivity;
-(void)reconcileCandidates:(*void)arg0 forTypedString:(struct String *)arg1 withPhraseCandidate:(*void)arg2 replacing:(struct String *)arg3 ;
-(void)reconcileConversions:(id)arg0 ;
-(void)recordAcceptedAutocorrection:(id)arg0 fromPredictiveInputBar:(BOOL)arg1 ;
-(void)recordRejectedAutocorrectionForAcceptedText:(id)arg0 fromPredictiveInputBar:(BOOL)arg1 ;
-(void)recordSuggestedAutocorrectionList:(id)arg0 ;
-(void)refreshInputManagerState;
-(void)registerNegativeEvidence:(id)arg0 tokenID:(struct TITokenID )arg1 contextTokens:(id)arg2 intended:(id)arg3 intendedTokenID:(struct TITokenID *)arg4 hint:(int)arg5 ;
-(void)releaseDynamicLanguageModel;
-(void)releaseMRLBuffers;
-(void)resetConversationHistory;
-(void)resetLMCache;
-(void)resume;
-(void)runMaintenanceTask;
-(void)scheduleLinguisticResourceUpdate;
-(void)scheduleLinguisticResourceUpdateWithReason:(id)arg0 ;
-(void)setAutoCorrects:(BOOL)arg0 ;
-(void)setAutocapitalizationEnabled:(BOOL)arg0 ;
-(void)setAutocapitalizationType:(NSUInteger)arg0 ;
-(void)setAutoshiftFromInputContext;
-(void)setInHardwareKeyboardMode:(BOOL)arg0 ;
-(void)setInSplitKeyboardMode:(BOOL)arg0 ;
-(void)setInput:(id)arg0 ;
-(void)setInput:(id)arg0 withIndex:(unsigned int)arg1 ;
-(void)setInputIndex:(unsigned int)arg0 ;
-(void)setInputStringFromDocumentState:(id)arg0 isDeleteEvent:(BOOL)arg1 ;
-(void)setKeyboardEventsLagging:(BOOL)arg0 ;
-(void)setLearnsCorrection:(BOOL)arg0 ;
-(void)setMarkedText;
-(void)setOriginalInput:(id)arg0 ;
-(void)setPhraseBoundary:(NSUInteger)arg0 ;
-(void)setPhraseBoundaryIfNecessary;
-(void)setRejectedAutocorrection:(id)arg0 forInput:(id)arg1 ;
-(void)setTestingStateObject:(id)arg0 ;
-(void)skipHitTestForTouchEvent:(id)arg0 keyboardState:(id)arg1 ;
-(void)storeLanguageModelDynamicDataIncludingCache;
-(void)suspend;
-(void)syncInputStringToKeyboardState:(id)arg0 afterContextChange:(BOOL)arg1 ;
-(void)syncMarkedTextForKeyboardState:(id)arg0 afterContextChange:(BOOL)arg1 ;
-(void)syncToKeyboardState:(id)arg0 ;
-(void)syncToKeyboardState:(id)arg0 from:(id)arg1 afterContextChange:(BOOL)arg2 ;
-(void)syncToLayoutState:(id)arg0 ;
-(void)synchronizeConversationHistoryWithInputContextHistory:(id)arg0 ;
-(void)tearDown;
-(void)textAccepted:(id)arg0 fromPredictiveInputBar:(BOOL)arg1 withInput:(id)arg2 ;
-(void)trackProactiveMetrics:(id)arg0 keyboardState:(id)arg1 ;
-(void)transferErrorCorrectionFlagsToInputCandidate:(*void)arg0 ;
-(void)trimInput;
-(void)trimInputAfterLathamConversion;
-(void)updateComposedText;
-(void)updateDictionaryAndLanguageModel;
-(void)updateForRevisitedString:(id)arg0 ;
-(void)updateInputContext;
-(void)updateResponseModelForKeyboardState:(id)arg0 ;
-(void)willChangeToKeyboardState:(id)arg0 afterContextChange:(BOOL)arg1 ;
-(void)willDropInputStem;


@end


#endif
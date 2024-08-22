// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TIMECABRAENVIRONMENT_H
#define TIMECABRAENVIRONMENT_H

@class NSMutableArray, NSArray, NSDictionary, NSString;

#import <Foundation/Foundation.h>

#import "TIMecabraEnvironmentContextWrapper.h"

@interface TIMecabraEnvironment : NSObject

@property (nonatomic) BOOL canSuggestSupplementalItems; // ivar: _canSuggestSupplementalItems
@property (retain, nonatomic) NSMutableArray *candidatesLeftOfCaret; // ivar: _candidatesLeftOfCaret
@property (retain, nonatomic) NSMutableArray *candidatesRightOfCaret; // ivar: _candidatesRightOfCaret
@property (retain, nonatomic) NSMutableArray *candidatesToDelete; // ivar: _candidatesToDelete
@property (readonly, nonatomic) NSArray *contextCandidateSurfaces;
@property (readonly, nonatomic) NSDictionary *environmentDebuggingInformation;
@property (readonly, nonatomic) NSArray *inlineCandidateSurfaces;
@property (copy, nonatomic) NSString *leftDocumentContext; // ivar: _leftDocumentContext
@property (copy, nonatomic) NSString *leftDocumentContextCorrespondingToCandidates; // ivar: _leftDocumentContextCorrespondingToCandidates
@property (nonatomic) _NSRange leftDocumentContextCorrespondingToCandidatesRange; // ivar: _leftDocumentContextCorrespondingToCandidatesRange
@property (readonly, nonatomic) *__Mecabra mecabra;
@property (retain, nonatomic) TIMecabraEnvironmentContextWrapper *mecabraContextWrapper; // ivar: _mecabraContextWrapper
@property (readonly, nonatomic) NSArray *rightCandidateSurfaces;
@property (copy, nonatomic) NSString *rightDocumentContext; // ivar: _rightDocumentContext
@property (copy, nonatomic) NSString *rightDocumentContextCorrespondingToCandidates; // ivar: _rightDocumentContextCorrespondingToCandidates
@property (nonatomic) _NSRange rightDocumentContextCorrespondingToCandidatesRange; // ivar: _rightDocumentContextCorrespondingToCandidatesRange
@property (nonatomic) BOOL shouldAdjustOnAnalyze; // ivar: _shouldAdjustOnAnalyze
@property (nonatomic) int textContentType;


+(id)baseLayout;
+(id)loadMobileAssetContentsWhenMobileAssetChangesForCHRecognizer:(id)arg0 inputModes:(id)arg1 onQueue:(id)arg2 oldMobileAssetChangeListener:(id)arg3 ;
+(id)loadMobileAssetContentsWhenMobileAssetChangesForMecabra:(struct __Mecabra *)arg0 inputModes:(id)arg1 onQueue:(id)arg2 oldMobileAssetChangeListener:(id)arg3 ;
+(int)maxNumberOfDrawSamples;
+(void)loadMobileAssetContentsForInputModes:(id)arg0 assetContentTypes:(id)arg1 inMecabra:(struct __Mecabra *)arg2 onQueue:(id)arg3 ;
+(void)loadMobileAssetContentsForInputModes:(id)arg0 assetContentTypes:(id)arg1 onQueue:(id)arg2 withCompletionBlock:(id)arg3 ;
+(void)loadMobileAssetContentsForInputModes:(id)arg0 inMecabra:(struct __Mecabra *)arg1 onQueue:(id)arg2 ;
+(void)loadMobileAssetContentsForInputModes:(id)arg0 onQueue:(id)arg1 withCompletionBlock:(id)arg2 ;
+(void)removeMobileAssetListener:(id)arg0 ;
-(BOOL)addNewCandidatesIfNecessary:(NSInteger)arg0 ;
-(BOOL)analyzeInput:(id)arg0 options:(NSUInteger)arg1 ;
-(BOOL)analyzeString:(id)arg0 options:(NSUInteger)arg1 ;
-(BOOL)documentContextIsEmpty;
-(BOOL)predictionAnalyzeWithOptions:(NSUInteger)arg0 maxNumberOfCandidates:(NSUInteger)arg1 ;
-(NSUInteger)candidateIndex;
-(id)_longestWubiCodeForCharacter:(id)arg0 ;
-(id)_wubiCodeForWord:(id)arg0 ;
-(id)contactNameWubiCodePairsForFirstName:(id)arg0 lastName:(id)arg1 ;
-(id)findSupplementalLexiconCandidatesSurroundingCursor;
-(id)initWithMecabraEngine:(struct __Mecabra *)arg0 language:(int)arg1 ;
-(id)readingForWubiWord:(id)arg0 ;
-(id)wubiAnnotationForCandidate:(id)arg0 ;
-(void)acceptInlineCandidates;
-(void)addCandidateWithString:(id)arg0 toArray:(id)arg1 ;
-(void)addPunctuationCandidateToContext:(id)arg0 ;
-(void)addStringCandidateToContext:(id)arg0 ;
-(void)addStringCandidateToContextInternal:(id)arg0 ;
-(void)adjustEnvironment:(NSInteger)arg0 ;
-(void)adjustEnvironmentDirectly:(NSInteger)arg0 ;
-(void)adjustEnvironmentOnAction:(NSInteger)arg0 ;
-(void)analyzeCandidateContextWithSplit:(BOOL)arg0 ;
-(void)canSuggestSupplementalItemsFlagDidChangeTo:(BOOL)arg0 ;
-(void)commitPredictionCandidate:(*void)arg0 ;
-(void)compareDocumentAndEnvironmentCandidates;
-(void)completelyCommitInlineCandidate:(*void)arg0 ;
-(void)createNewCandidatesFromDocumentContext;
-(void)declareEndOfSentence;
-(void)insertCandidateWithString:(id)arg0 intoArray:(id)arg1 atIndex:(NSUInteger)arg2 ;
-(void)partiallyCommitInlineCandidate:(*void)arg0 ;
-(void)reset;
-(void)revertInlineCandidate;
-(void)revertLearningOfCandidateIfNecessary;
-(void)setAppContext:(id)arg0 ;
-(void)setCandidateIndex:(NSInteger)arg0 ;
-(void)setGeometryModel:(*void)arg0 modelData:(struct __CFArray *)arg1 ;
-(void)setKeyboardLayout:(id)arg0 ;
-(void)setPrivateMode:(BOOL)arg0 ;
-(void)setShuangpinType:(int)arg0 ;
-(void)updateCursorPosition;


@end


#endif
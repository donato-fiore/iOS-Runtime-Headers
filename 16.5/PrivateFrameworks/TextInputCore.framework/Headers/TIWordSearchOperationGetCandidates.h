// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TIWORDSEARCHOPERATIONGETCANDIDATES_H
#define TIWORDSEARCHOPERATIONGETCANDIDATES_H

@class TIKeyboardCandidate, NSArray, NSString;


#import "TIWordSearchOperation.h"
#import "MCKeyboardInput.h"
#import "MCAcceptCandidateInput.h"
#import "TIMecabraIMLogger.h"
#import "TIWordSearchCandidateResultSet.h"
#import "TIWordSearch.h"

@interface TIWordSearchOperationGetCandidates : TIWordSearchOperation

@property (readonly, nonatomic) SEL action; // ivar: _action
@property (readonly, nonatomic) NSUInteger autocapitalizationType; // ivar: _autocapitalizationType
@property (retain, nonatomic) TIKeyboardCandidate *candidateAfterSegmentBreak; // ivar: _candidateAfterSegmentBreak
@property (readonly, nonatomic) NSArray *geometryModelData; // ivar: _geometryModelData
@property (readonly, nonatomic) BOOL hardwareKeyboardMode; // ivar: _hardwareKeyboardMode
@property (readonly, nonatomic) NSString *inputString; // ivar: _inputString
@property (readonly, nonatomic) MCKeyboardInput *keyboardInput; // ivar: _keyboardInput
@property (readonly, nonatomic) MCAcceptCandidateInput *lastAcceptCandidateInput; // ivar: _lastAcceptCandidateInput
@property (readonly, nonatomic) TIMecabraIMLogger *logger; // ivar: _logger
@property (readonly, nonatomic) BOOL predictionEnabled; // ivar: _predictionEnabled
@property (readonly, nonatomic) BOOL reanalysisMode; // ivar: _reanalysisMode
@property (retain, nonatomic) TIWordSearchCandidateResultSet *results; // ivar: _results
@property (nonatomic) NSUInteger segmentBreakIndex; // ivar: _segmentBreakIndex
@property (readonly, nonatomic) id *target; // ivar: _target
@property (retain) TIWordSearch *wordSearch; // ivar: _wordSearch


-(id)initWithWordSearch:(id)arg0 inputString:(id)arg1 keyboardInput:(id)arg2 segmentBreakIndex:(NSUInteger)arg3 predictionEnabled:(BOOL)arg4 reanalysisMode:(BOOL)arg5 autocapitalizationType:(NSUInteger)arg6 target:(id)arg7 action:(SEL)arg8 geometryModelData:(id)arg9 hardwareKeyboardMode:(BOOL)arg10 logger:(id)arg11 ;
-(void)checkForCachedResults;
-(void)completeSearchOnMainThreadWithResults:(id)arg0 ;
-(void)dealloc;
-(void)perform;


@end


#endif
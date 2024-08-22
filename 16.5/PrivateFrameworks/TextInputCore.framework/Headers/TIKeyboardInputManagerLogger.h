// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TIKEYBOARDINPUTMANAGERLOGGER_H
#define TIKEYBOARDINPUTMANAGERLOGGER_H

@class NSString, TITypologyLog, TITypologyStatistic;
@protocol TITypologyLogDelegate, TIKeyboardInputManagerLogging, TITypologyPreferences;

#import <Foundation/Foundation.h>

#import "TIStatusBarStyleOverrideLoggingCapture.h"

@interface TIKeyboardInputManagerLogger : NSObject <TITypologyLogDelegate, TIKeyboardInputManagerLogging>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL hadSecureText; // ivar: _hadSecureText
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSString *inputModeIdentifier; // ivar: _inputModeIdentifier
@property (retain, nonatomic) TIStatusBarStyleOverrideLoggingCapture *sbsOverrideLoggingCapture; // ivar: _sbsOverrideLoggingCapture
@property (readonly) Class superclass;
@property (retain, nonatomic) TITypologyLog *typologyLog; // ivar: _typologyLog
@property (readonly, nonatomic) NSObject<TITypologyPreferences> *typologyPreferences; // ivar: _typologyPreferences
@property (retain, nonatomic) TITypologyStatistic *typologyStatistic; // ivar: _typologyStatistic


+(BOOL)createTypologyDirectoryAtURL:(id)arg0 ;
+(id)_writeToFileWithTypologyLog:(id)arg0 directoryURL:(id)arg1 ;
+(id)accessibilityConfigInfo;
+(void)_backgroundPruneLogsWithPreferences:(id)arg0 ;
+(void)_backgroundWriteLog:(id)arg0 preferences:(id)arg1 completion:(id)arg2 ;
+(void)_writeHumanReadableTraceForTypologyLog:(id)arg0 directoryURL:(id)arg1 ;
+(void)pruneTypologyLogsAtDirectoryURL:(id)arg0 toMaxNumBytes:(NSInteger)arg1 expirationInterval:(CGFloat)arg2 satisfyingPredicate:(id)arg3 ;
+(void)submitAggregrateDictionaryReport:(id)arg0 inputModeIdentifier:(id)arg1 ;
-(BOOL)allowTypologyLogForKeyboardState:(id)arg0 ;
-(BOOL)shouldWriteToSyslogForKeyboardState:(id)arg0 ;
-(BOOL)shouldWriteToTypologyLogForKeyboardState:(id)arg0 ;
-(id)initWithTypologyPreferences:(id)arg0 ;
-(id)writeToFile;
-(void)_tryWriteToSyslogWithTrace:(id)arg0 ;
-(void)backgroundWriteLogs;
-(void)dealloc;
-(void)didReachMaximumEntries:(id)arg0 ;
-(void)disableTypologyLogIfNecessaryForKeyboardState:(id)arg0 ;
-(void)logAutocorrections:(id)arg0 trace:(id)arg1 forKeyboardState:(id)arg2 requestToken:(id)arg3 ;
-(void)logCandidateResultSet:(id)arg0 trace:(id)arg1 forKeyboardState:(id)arg2 ;
-(void)logHitKeyCode:(NSInteger)arg0 forTouchEvent:(id)arg1 keyboardState:(id)arg2 ;
-(void)logKeyboardConfig:(id)arg0 forAdjustedPhraseBoundaryInForwardDirection:(BOOL)arg1 granularity:(int)arg2 keyboardState:(id)arg3 ;
-(void)logKeyboardConfig:(id)arg0 forSyncToKeyboardState:(id)arg1 ;
-(void)logKeyboardConfig:(id)arg0 textToCommit:(id)arg1 forAcceptedCandidate:(id)arg2 keyboardState:(id)arg3 ;
-(void)logKeyboardLayout:(id)arg0 name:(id)arg1 ;
-(void)logKeyboardOutput:(id)arg0 keyboardConfiguration:(id)arg1 trace:(id)arg2 forKeyboardInput:(id)arg3 keyboardState:(id)arg4 ;
-(void)logReceivedCandidateRejected:(id)arg0 ;
-(void)logReceivedLastAcceptedCandidateCorrected;
-(void)logReceivedSetOriginalInput:(id)arg0 ;
-(void)logReceivedSkipHitTestForTouchEvent:(id)arg0 forKeyboardState:(id)arg1 ;
-(void)logReceivedTextAccepted:(id)arg0 ;
-(void)logRefinements:(id)arg0 forCandidate:(id)arg1 keyboardState:(id)arg2 ;
-(void)logReplacements:(id)arg0 forString:(id)arg1 keyLayout:(id)arg2 ;
-(void)setConfig:(id)arg0 ;
-(void)tryStartingTypologyLogForSyncToKeyboardState:(id)arg0 ;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AUTOCORRECTIONTESTHARNESS_H
#define AUTOCORRECTIONTESTHARNESS_H

@class NSMutableArray, TIKeyboardInputManagerConfig, NSString, NSArray, TIInputMode;
@protocol TIKeyboardInputManagerFactory, TITestHarness;

#import <Foundation/Foundation.h>

#import "TIErrorGenerator.h"
#import "TITestTyperDriver.h"
#import "TIKeyboardTyper.h"

@interface AutocorrectionTestHarness : NSObject <TIKeyboardInputManagerFactory, TITestHarness>

 {
    TIErrorGenerator *_errorGenerator;
    NSMutableArray *_insertedText;
}


@property (readonly, nonatomic) TIKeyboardInputManagerConfig *config; // ivar: _config
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) TITestTyperDriver *dslTestDriver; // ivar: _dslTestDriver
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL multilingualEnabled; // ivar: _multilingualEnabled
@property (readonly, nonatomic) NSArray *resultClassifiers; // ivar: _resultClassifiers
@property BOOL saveDebugData; // ivar: _saveDebugData
@property (readonly, nonatomic) TIInputMode *secondaryInputMode; // ivar: _secondaryInputMode
@property (readonly) Class superclass;
@property (readonly, nonatomic) TIKeyboardTyper *testTyper; // ivar: _testTyper


-(BOOL)compareExpectedValue:(id)arg0 withResult:(id)arg1 ;
-(BOOL)outcomeIsFailureForTest:(id)arg0 withResult:(id)arg1 ;
-(BOOL)requiresMaintenance;
-(id)emptyResultForPlayback:(id)arg0 ;
-(id)emptyResultForTest:(id)arg0 ;
-(id)friendId;
-(id)initWithAttributes:(id)arg0 ;
-(id)keyboardFromWidth:(id)arg0 orientation:(id)arg1 keyboardLayout:(id)arg2 ;
-(id)newKeyboardInputManager;
-(id)replayTest:(id)arg0 withError:(id)arg1 ;
-(id)runConversationTest:(id)arg0 trialID:(NSUInteger)arg1 withError:(id)arg2 ;
-(id)runTest:(id)arg0 trialID:(NSUInteger)arg1 withError:(id)arg2 ;
-(id)selfId;
-(id)testTerminator;
-(id)typeTest:(id)arg0 withError:(id)arg1 ;
-(unsigned int)seedForTest:(id)arg0 trialID:(NSUInteger)arg1 ;
-(void)initializeConversationHistory;
-(void)nullifyConversationHistory;
-(void)reset;
-(void)tearDown;
-(void)testConversation:(id)arg0 testingSender:(id)arg1 warmupMessages:(NSUInteger)arg2 adaptToSentMessages:(BOOL)arg3 adaptToReceivedMessages:(BOOL)arg4 trialID:(NSUInteger)arg5 withError:(id)arg6 writingResults:(id)arg7 ;
-(void)trainWithCorpus:(id)arg0 ;


@end


#endif
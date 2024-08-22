// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TITYPINGLOG_H
#define TITYPINGLOG_H

@class NSMutableDictionary, NSMutableArray, NSArray;

#import <Foundation/Foundation.h>

#import "TIKeystrokeRecord.h"

@interface TITypingLog : NSObject {
    NSMutableDictionary *_pathsForTokens;
    NSMutableArray *_correctedTransliterationForTokens;
    NSMutableArray *_intendedTransliterationForTokens;
    BOOL _isTransliterating;
    NSMutableDictionary *_debugData;
}


@property (retain, nonatomic) TIKeystrokeRecord *currentKeystroke; // ivar: _currentKeystroke
@property (retain, nonatomic) NSMutableArray *currentKeystrokeSequence; // ivar: _currentKeystrokeSequence
@property (readonly, nonatomic) NSArray *keystrokesForTokens; // ivar: _keystrokesForTokens


+(id)emptyTouchEventForLogging;
+(id)typingLog;
+(id)typingLogWithDebug:(BOOL)arg0 ;
-(BOOL)adjustForContinuousPath;
-(BOOL)isDebugEnabled;
-(id)correctedTransliterationSequence;
-(id)getDebugData;
-(id)getDebugObject:(id)arg0 ;
-(id)init;
-(id)initWithDebug:(BOOL)arg0 ;
-(id)intendedTransliterationSequence;
-(void)addDebugObject:(id)arg0 forKey:(id)arg1 ;
-(void)beginKeystrokeWithIntendedKey:(id)arg0 touchEvent:(id)arg1 touchError:(id)arg2 ;
-(void)beginKeystrokeWithIntendedKey:(id)arg0 touchEvent:(id)arg1 touchError:(id)arg2 documentBefore:(id)arg3 ;
-(void)beginToken;
-(void)enumerateKeystrokesAndPathsForTokensWithBlock:(id)arg0 ;
-(void)finishKeystrokeWithTouchedKey:(id)arg0 touchEvent:(id)arg1 insertedKey:(id)arg2 ;
-(void)finishKeystrokeWithTouchedKey:(id)arg0 touchEvent:(id)arg1 insertedKey:(id)arg2 predictionBarState:(id)arg3 ;
-(void)logAcceptedCandidate:(id)arg0 ;
-(void)logAcceptedCandidate:(id)arg0 intendedTransliterationCandidate:(id)arg1 ;
-(void)logRejectedAutocorrection;
-(void)registerPathStringAsKeyStrokes:(id)arg0 path:(id)arg1 predictionBarState:(id)arg2 ;
-(void)revisitPreviousToken;
-(void)setTokenIndex:(NSUInteger)arg0 ;


@end


#endif
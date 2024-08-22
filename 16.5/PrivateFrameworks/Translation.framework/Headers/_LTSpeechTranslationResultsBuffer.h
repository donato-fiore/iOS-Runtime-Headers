// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _LTSPEECHTRANSLATIONRESULTSBUFFER_H
#define _LTSPEECHTRANSLATIONRESULTSBUFFER_H

@class NSMutableDictionary, NSError, NSString;
@protocol _LTSpeechTranslationDelegate;

#import <Foundation/Foundation.h>

#import "_LTTranslationResult.h"

@interface _LTSpeechTranslationResultsBuffer : NSObject <_LTSpeechTranslationDelegate>

 {
    BOOL _isBuffering;
    NSMutableDictionary *_lastASRResults;
    _LTTranslationResult *_translationResult;
    BOOL _didFinish;
    NSError *_error;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<_LTSpeechTranslationDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)hasFailed;
-(BOOL)hasResults;
-(id)init;
-(void)speechRecognitionResult:(id)arg0 ;
-(void)stopBuffering;
-(void)translationDidFinishWithError:(id)arg0 ;
-(void)translatorDidTranslate:(id)arg0 ;


@end


#endif
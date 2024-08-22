// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _LTSPEECHACTIVITYDETECTOR_H
#define _LTSPEECHACTIVITYDETECTOR_H

@class SNAudioStreamAnalyzer, NSString;
@protocol SNResultsObserving, OS_dispatch_queue, _LTSpeechTranslationDelegate;

#import <Foundation/Foundation.h>


@interface _LTSpeechActivityDetector : NSObject <SNResultsObserving>

 {
    NSObject<OS_dispatch_queue> *_queue;
    SNAudioStreamAnalyzer *_streamAnalyzer;
    NSInteger _position;
    id<_LTSpeechTranslationDelegate> *_delegate;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithDelegate:(id)arg0 ;
-(id)nativeAudioFormat;
-(void)addSpeechAudioData:(id)arg0 ;
-(void)request:(id)arg0 didFailWithError:(id)arg1 ;
-(void)request:(id)arg0 didProduceResult:(id)arg1 ;


@end


#endif
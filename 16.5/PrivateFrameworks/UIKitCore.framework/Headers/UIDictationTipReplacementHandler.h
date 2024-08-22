// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UIDICTATIONTIPREPLACEMENTHANDLER_H
#define UIDICTATIONTIPREPLACEMENTHANDLER_H

@class NSString, NSMutableString;
@protocol UIDictationTipRecordingProtocol, UIDictationTipHandlerDelegate;

#import <Foundation/Foundation.h>

#import "UIDelayedAction.h"

@interface UIDictationTipReplacementHandler : NSObject <UIDictationTipRecordingProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<UIDictationTipHandlerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) UIDelayedAction *finalizeAction; // ivar: _finalizeAction
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSString *replacementTargetText; // ivar: _replacementTargetText
@property (retain, nonatomic) NSMutableString *replacementText; // ivar: _replacementText
@property (readonly) Class superclass;
@property (nonatomic) NSInteger textRecorderStatus; // ivar: _textRecorderStatus


-(id)initWithDelegate:(id)arg0 ;
-(void)finalizeRecordedText;
-(void)recordDictationTipReplacementText:(id)arg0 ;
-(void)recordDictationTipText:(id)arg0 ;
-(void)resetHandler;
-(void)startRecodingReplacementText:(id)arg0 ;
-(void)startRecodingText:(id)arg0 ;


@end


#endif
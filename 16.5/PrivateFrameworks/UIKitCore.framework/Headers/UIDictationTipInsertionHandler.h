// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UIDICTATIONTIPINSERTIONHANDLER_H
#define UIDICTATIONTIPINSERTIONHANDLER_H

@class NSString, NSMutableString;
@protocol UIDictationTipRecordingProtocol, UIDictationTipHandlerDelegate;

#import <Foundation/Foundation.h>

#import "UIDelayedAction.h"

@interface UIDictationTipInsertionHandler : NSObject <UIDictationTipRecordingProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<UIDictationTipHandlerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) UIDelayedAction *finalizeAction; // ivar: _finalizeAction
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSMutableString *insertionText; // ivar: _insertionText
@property (readonly) Class superclass;
@property (nonatomic) NSInteger textRecorderStatus; // ivar: _textRecorderStatus


-(id)initWithDelegate:(id)arg0 ;
-(void)finalizeRecordedText;
-(void)recordDictationTipText:(id)arg0 ;
-(void)resetHandler;
-(void)startRecodingText:(id)arg0 ;


@end


#endif
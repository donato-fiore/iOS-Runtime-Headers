// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UIDICTATIONTIPCONTROLLER_H
#define UIDICTATIONTIPCONTROLLER_H

@class NSString;
@protocol UIDictationTipHandlerDelegate;

#import <Foundation/Foundation.h>

#import "UIDictationTipDeletionHandler.h"
#import "UIDictationTipEmojiHandler.h"
#import "UIDictationTipInsertionHandler.h"
#import "UIDictationTipReplacementHandler.h"
#import "UIDictationTipSelectionHandler.h"
#import "UIDictationTipModelessInputHandler.h"
#import "UIDictationTipPresentationHandler.h"

@interface UIDictationTipController : NSObject <UIDictationTipHandlerDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) id *delayedTip; // ivar: _delayedTip
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) UIDictationTipDeletionHandler *dictationDeletionTipHandler; // ivar: _dictationDeletionTipHandler
@property (retain, nonatomic) UIDictationTipEmojiHandler *dictationEmojiTipHandler; // ivar: _dictationEmojiTipHandler
@property (retain, nonatomic) UIDictationTipInsertionHandler *dictationInsertionTipHandler; // ivar: _dictationInsertionTipHandler
@property (retain, nonatomic) UIDictationTipReplacementHandler *dictationReplacementTipHandler; // ivar: _dictationReplacementTipHandler
@property (retain, nonatomic) UIDictationTipSelectionHandler *dictationSelectionTipHandler; // ivar: _dictationSelectionTipHandler
@property (retain, nonatomic) UIDictationTipModelessInputHandler *dictationTipModelessInputHandler; // ivar: _dictationTipModelessInputHandler
@property (retain, nonatomic) UIDictationTipPresentationHandler *dictationTipPresentationHandler; // ivar: _dictationTipPresentationHandler
@property (nonatomic) NSUInteger dismissalReasonType; // ivar: _dismissalReasonType
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)dictationTipPreferenceKey:(NSInteger)arg0 ;
-(BOOL)dictationTipShown:(NSInteger)arg0 ;
-(BOOL)modelessTipShown;
-(NSInteger)currentDeletionEventCount;
-(NSInteger)getDictationTipSignaled;
-(id)init;
-(id)replaceEmojiInStringWithEmojiDictationCommand:(id)arg0 ;
-(void)addDeletionEventCount:(id)arg0 deletedTextRange:(struct _NSRange )arg1 ;
-(void)dictationCommandUsed:(NSUInteger)arg0 firstTargetString:(id)arg1 secondTargetString:(id)arg2 ;
-(void)emitTipShowingInstrumentation:(NSInteger)arg0 ;
-(void)finalizeSelectionTip;
-(void)finalizeTextWithTipType:(NSInteger)arg0 title:(id)arg1 andTipDescription:(id)arg2 ;
-(void)incrementDictationTipDisplayCount:(NSInteger)arg0 stopFutureShowing:(BOOL)arg1 ;
-(void)logDictationTipDimissialInstrumentation;
-(void)markDictationTipPreferenceToShown:(NSInteger)arg0 ;
-(void)presentDelayedTipIfNeeded;
-(void)processSoftwareKeyboardInteraction;
-(void)processUserInteractionEnded;
-(void)recordDictationTipDeletionText:(id)arg0 ;
-(void)recordDictationTipReplacementText:(id)arg0 ;
-(void)reset;
-(void)resetDeletionEventCount;
-(void)resetShowModelessTipSignal;
-(void)showDictationTipWithTitle:(id)arg0 description:(id)arg1 dictationTipType:(NSInteger)arg2 ;
-(void)signalDictationDeletionTip:(id)arg0 ;
-(void)signalDictationEmojiTip:(id)arg0 ;
-(void)signalDictationInsertionTip:(id)arg0 ;
-(void)signalDictationReplacementTip:(id)arg0 ;
-(void)signalDictationSelectionTip:(id)arg0 ;
-(void)signalShowModelessTipIfNeeded;
-(void)simulateTipShowingInstrumentation:(NSInteger)arg0 ;
-(void)triggerModelessInputTipDictationStoppedSignal;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UIKBANALYTICSDISPATCHER_H
#define UIKBANALYTICSDISPATCHER_H


#import <Foundation/Foundation.h>


@interface UIKBAnalyticsDispatcher : NSObject



+(id)allowedValuesForTextEditingPreferredFieldName:(id)arg0 ;
+(id)allowedValuesForType:(id)arg0 ;
+(id)currentInputMode;
+(id)preferredEventName:(id)arg0 ;
+(void)analyticsDispatchEventTextEditingOperation:(id)arg0 trigger:(id)arg1 ;
+(void)candidateViewExtended:(id)arg0 direction:(id)arg1 ;
+(void)decrementAllowCursorMovementCount;
+(void)deleteKeySelected:(int)arg0 ;
+(void)dispatchFloatingKeyboardEventOfType:(id)arg0 trigger:(id)arg1 pinnedToEdge:(id)arg2 position:(struct CGPoint )arg3 touchUpPosition:(struct CGPoint )arg4 ;
+(void)editingSessionEnded:(NSUInteger)arg0 ;
+(void)emojiInsertedByMethod:(id)arg0 inputType:(id)arg1 ;
+(void)emojiPopoverSummoned:(id)arg0 appendsEmoji:(BOOL)arg1 ;
+(void)floatingKeyboardMoved:(id)arg0 toPosition:(struct CGPoint )arg1 touchPosition:(struct CGPoint )arg2 ;
+(void)floatingKeyboardSummonedEvent:(id)arg0 trigger:(id)arg1 finalPosition:(struct CGPoint )arg2 ;
+(void)globeKeyEducationShown:(CGFloat)arg0 ;
+(void)globeKeyLongPress;
+(void)globeKeySelected;
+(void)handwritingResized:(id)arg0 ;
+(void)hapticEventEngineDuration:(CGFloat)arg0 startCount:(NSUInteger)arg1 actionCount:(NSUInteger)arg2 ;
+(void)incrementAllowCursorMovementCount;
+(void)keyboardAnalyticsDispatchWithSelector:(SEL)arg0 withTrigger:(id)arg1 ;
+(void)keyboardCameraSessionEndedForTextContentType:(id)arg0 didFindText:(BOOL)arg1 didInsertText:(BOOL)arg2 sender:(id)arg3 ;
+(void)keyboardShortcutInvokedWithKeyCommand:(id)arg0 keyEvent:(id)arg1 keyboardProperties:(id)arg2 ;
+(void)keyplaneSwitched:(int)arg0 ;
+(void)sessionActionAnalyticsEnded:(id)arg0 ;
+(void)sessionAnalyticsEnded:(id)arg0 ;
+(void)sessionEfficacyAnalyticsEnded:(id)arg0 ;


@end


#endif
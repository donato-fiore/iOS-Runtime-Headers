// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NCTEXTMENUINTERACTION_H
#define NCTEXTMENUINTERACTION_H

@class UILongPressGestureRecognizer, UIEditMenuInteraction, UIImpactFeedbackGenerator, UIColor, NSString, UIView<NCTextSupporting>;
@protocol UIEditMenuInteractionDelegate, UIGestureRecognizerDelegate, UIInteraction;

#import <Foundation/Foundation.h>


@interface NCTextMenuInteraction : NSObject <UIEditMenuInteractionDelegate, UIGestureRecognizerDelegate, UIInteraction>

 {
    UILongPressGestureRecognizer *_longPressGestureRecognizer;
    UIEditMenuInteraction *_editMenuInteraction;
    UIImpactFeedbackGenerator *_haptic;
    BOOL _hapticPrepared;
    UIColor *_defaultTextColor;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (weak, nonatomic) UIView<NCTextSupporting> *view; // ivar: _view


-(BOOL)gestureRecognizer:(id)arg0 shouldBeRequiredToFailByGestureRecognizer:(id)arg1 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg0 ;
-(id)_editMenuInteraction:(id)arg0 menuForConfiguration:(id)arg1 suggestedActions:(id)arg2 ;
-(id)init;
-(struct CGRect )_editMenuInteraction:(id)arg0 targetRectForConfiguration:(id)arg1 ;
-(void)_editMenuInteraction:(id)arg0 willDismissMenuForConfiguration:(id)arg1 ;
-(void)_editMenuInteraction:(id)arg0 willPresentMenuForConfiguration:(id)arg1 ;
-(void)_handleLongPress:(id)arg0 ;
-(void)_performHaptic;
-(void)_prepareHaptic;
-(void)_tearDownHaptic;
-(void)dealloc;
-(void)didMoveToView:(id)arg0 ;
-(void)willMoveToView:(id)arg0 ;


@end


#endif
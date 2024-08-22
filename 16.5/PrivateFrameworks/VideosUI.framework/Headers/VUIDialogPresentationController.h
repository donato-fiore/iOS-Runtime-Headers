// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VUIDIALOGPRESENTATIONCONTROLLER_H
#define VUIDIALOGPRESENTATIONCONTROLLER_H

@class UIPresentationController, UIVisualEffectView;



@interface VUIDialogPresentationController : UIPresentationController {
    UIVisualEffectView *_backdropView;
}


@property (readonly, nonatomic) UIVisualEffectView *backdropView;
@property (copy, nonatomic) id *completedAnimationBlock; // ivar: _completedAnimationBlock
@property (nonatomic) CGSize modalSize; // ivar: _modalSize


-(NSInteger)presentationStyle;
-(id)initWithPresentedViewController:(id)arg0 presentingViewController:(id)arg1 ;
-(void)_layoutPresentedView;
-(void)_tapGesture:(id)arg0 ;
-(void)dealloc;
-(void)dismissalTransitionWillBegin;
-(void)presentationTransitionWillBegin;


@end


#endif
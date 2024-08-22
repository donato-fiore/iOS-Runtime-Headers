// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VIDEOSEXTRASPRESENTATIONCONTROLLER_H
#define VIDEOSEXTRASPRESENTATIONCONTROLLER_H

@class UIPresentationController, UIView;



@interface VideosExtrasPresentationController : UIPresentationController

@property (nonatomic) CGRect extrasMenuBarFrame; // ivar: _extrasMenuBarFrame
@property (retain, nonatomic) UIView *extrasMenuBarView; // ivar: _extrasMenuBarView


-(id)initWithPresentedViewController:(id)arg0 presentingViewController:(id)arg1 extrasMenuBarView:(id)arg2 extrasmenuBarFrame:(struct CGRect )arg3 ;
-(void)dismissalTransitionDidEnd:(BOOL)arg0 ;
-(void)dismissalTransitionWillBegin;
-(void)presentationTransitionDidEnd:(BOOL)arg0 ;
-(void)presentationTransitionWillBegin;


@end


#endif
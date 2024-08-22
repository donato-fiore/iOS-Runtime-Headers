// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UIKEYBOARDVIEWCONTROLLER_H
#define UIKEYBOARDVIEWCONTROLLER_H

@class NSString, UIView<UIKeyInput>;
@protocol UIGestureRecognizerDelegate;


#import "UIViewController.h"
#import "UIKeyboardAutocorrectionController.h"
#import "UIView.h"
#import "UIInputViewController.h"
#import "UIKeyboard.h"
#import "UISystemInputAssistantViewController.h"

@interface UIKeyboardViewController : UIViewController <UIGestureRecognizerDelegate>



@property (readonly, nonatomic) UIKeyboardAutocorrectionController *autocorrectionController;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) UIView *inputAssistantView;
@property (retain, nonatomic) UIInputViewController *inputViewController; // ivar: _inputViewController
@property (retain, nonatomic) UIKeyboard *keyboard; // ivar: _keyboard
@property (readonly, weak, nonatomic) UIView *pathEffectView; // ivar: _pathEffectView
@property (nonatomic) NSUInteger serviceRole; // ivar: _serviceRole
@property (nonatomic) BOOL shouldUpdateLayoutAutomatically; // ivar: _shouldUpdateLayoutAutomatically
@property (readonly) Class superclass;
@property (retain, nonatomic) UISystemInputAssistantViewController *systemInputAssistantViewController; // ivar: _systemInputAssistantViewController
@property (retain, nonatomic) UIView<UIKeyInput> *textInputView; // ivar: _textInputView


-(id)init;
-(id)initWithServiceRole:(NSUInteger)arg0 ;
-(void)didSelectPredictiveCandidate:(id)arg0 ;
-(void)loadView;
-(void)registerProxyKeysWithViews:(id)arg0 ;
-(void)shouldAcceptAutocorrection;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif
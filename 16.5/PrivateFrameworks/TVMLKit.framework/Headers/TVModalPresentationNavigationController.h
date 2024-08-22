// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TVMODALPRESENTATIONNAVIGATIONCONTROLLER_H
#define TVMODALPRESENTATIONNAVIGATIONCONTROLLER_H

@class UINavigationController, NSHashTable, UIViewController, NSArray, NSMapTable, UIAlertController, NSString, UIView;
@protocol _TVModalPresenterFocusing, UIFocusItemContainer, UIFocusEnvironment;


#import "TVModalPresentationConfiguration.h"

@interface TVModalPresentationNavigationController : UINavigationController <_TVModalPresenterFocusing>

 {
    NSHashTable *_presentedViewControllers;
    UIViewController *_rootViewController;
    NSArray *_previousViewControllers;
    NSMapTable *_pushCompletionBlocks;
    NSMapTable *_popCompletionBlocks;
}


@property (retain, nonatomic) TVModalPresentationConfiguration *configuration; // ivar: _configuration
@property (weak, nonatomic) UIAlertController *containingAlertController; // ivar: _containingAlertController
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSString *focusGroupIdentifier;
@property (readonly, nonatomic) NSObject<UIFocusItemContainer> *focusItemContainer;
@property (readonly) NSUInteger hash;
@property (readonly, weak, nonatomic) NSObject<UIFocusEnvironment> *parentFocusEnvironment;
@property (readonly, copy, nonatomic) NSArray *preferredFocusEnvironments;
@property (readonly, weak, nonatomic) UIView *preferredFocusedView;
@property (readonly, nonatomic) NSHashTable *presentedViewControllers;
@property (readonly) Class superclass;


-(id)initWithConfiguration:(id)arg0 ;
-(id)popViewControllerAnimated:(BOOL)arg0 ;
-(id)popViewControllerAnimated:(BOOL)arg0 completion:(id)arg1 ;
-(void)_dismissForLastViewController:(BOOL)arg0 ;
-(void)_updateConfiguration;
-(void)didShowViewController:(id)arg0 animated:(BOOL)arg1 ;
-(void)pushViewController:(id)arg0 animated:(BOOL)arg1 ;
-(void)pushViewController:(id)arg0 animated:(BOOL)arg1 completion:(id)arg2 ;
-(void)updatePreferredFocusedViewStateForFocus:(BOOL)arg0 ;


@end


#endif
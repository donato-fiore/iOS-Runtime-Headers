// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VUIMODALPRESENTATIONNAVIGATIONCONTROLLER_H
#define VUIMODALPRESENTATIONNAVIGATIONCONTROLLER_H

@class UINavigationController, NSHashTable, UIViewController, NSArray, NSMapTable, UIAlertController;


#import "VUIModalPresentationConfiguration.h"

@interface VUIModalPresentationNavigationController : UINavigationController {
    NSHashTable *_presentedViewControllers;
    UIViewController *_rootViewController;
    NSArray *_previousViewControllers;
    NSMapTable *_pushCompletionBlocks;
    NSMapTable *_popCompletionBlocks;
}


@property (retain, nonatomic) VUIModalPresentationConfiguration *configuration; // ivar: _configuration
@property (weak, nonatomic) UIAlertController *containingAlertController; // ivar: _containingAlertController
@property (readonly, nonatomic) NSHashTable *presentedViewControllers;


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
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SUSCRIPTPOPOVER_H
#define SUSCRIPTPOPOVER_H

@class UIViewController, UIPopoverController;


#import "SUScriptObject.h"
#import "SUScriptViewController.h"

@interface SUScriptPopOver : SUScriptObject {
    UIViewController *_contentViewController;
    BOOL _ignoreDismiss;
}


@property (readonly) UIViewController *activeViewController;
@property NSInteger backgroundStyle;
@property (readonly) NSInteger backgroundStyleBlack;
@property (readonly) NSInteger backgroundStyleClear;
@property (readonly) NSInteger backgroundStyleCream;
@property (readonly) NSInteger backgroundStyleDefault;
@property (readonly) NSInteger backgroundStyleShare;
@property CGFloat contentHeight;
@property CGFloat contentWidth;
@property (retain, nonatomic) UIPopoverController *nativePopoverController;
@property (readonly, nonatomic) UIPopoverController *presentablePopoverController;
@property (readonly) SUScriptViewController *presentingViewController;
@property (retain) SUScriptViewController *viewController;


+(id)webScriptNameForKeyName:(id)arg0 ;
+(id)webScriptNameForSelector:(SEL)arg0 ;
+(void)initialize;
-(BOOL)_isViewControllerVisible;
-(BOOL)_shouldDisplayAsPopover;
-(BOOL)isVisible;
-(BOOL)showFromElement:(id)arg0 ;
-(BOOL)showFromNavigationItem:(id)arg0 ;
-(id)_className;
-(id)_nativeViewController;
-(id)_popOverController;
-(id)attributeKeys;
-(id)init;
-(id)scriptAttributeKeys;
-(void)_dismissAnimated:(BOOL)arg0 ;
-(void)_overlayWillShowNotification:(id)arg0 ;
-(void)_setIgnoresDismiss:(BOOL)arg0 ;
-(void)_setNativeViewController:(id)arg0 ;
-(void)_showAsModalViewController;
-(void)_viewControllerDidDismiss:(id)arg0 ;
-(void)dealloc;
-(void)dismissAnimated:(id)arg0 ;
-(void)tearDownUserInterface;


@end


#endif
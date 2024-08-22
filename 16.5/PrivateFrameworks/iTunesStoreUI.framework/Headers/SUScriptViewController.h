// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SUSCRIPTVIEWCONTROLLER_H
#define SUSCRIPTVIEWCONTROLLER_H

@class NSArray, NSString, UIViewController;


#import "SUScriptObject.h"
#import "SUScriptViewController.h"
#import "SUScriptNavigationController.h"
#import "SUScriptNavigationItem.h"
#import "SUScriptPopOver.h"
#import "SUScriptSection.h"
#import "SUScriptSplitViewController.h"

@interface SUScriptViewController : SUScriptObject {
    NSArray *_scriptToolbarItems;
}


@property (retain) id *backgroundColor;
@property (readonly) NSString *contextDictionary;
@property (retain) SUScriptViewController *inputAccessoryViewController;
@property (retain) NSString *modalPresentationStyle;
@property (readonly) NSString *modalPresentationStyleNameFormSheet;
@property (readonly) NSString *modalPresentationStyleNameFullScreen;
@property (readonly) SUScriptViewController *modalViewController;
@property (retain, nonatomic) UIViewController *nativeViewController;
@property (readonly) SUScriptNavigationController *navigationController;
@property (readonly) SUScriptNavigationItem *navigationItem;
@property (readonly) SUScriptPopOver *popOver;
@property (readonly) SUScriptViewController *presentingViewController;
@property (retain) SUScriptSection *section;
@property id *showsLibraryButton;
@property (readonly) SUScriptSplitViewController *splitViewController;
@property (copy) id *toolbarItems;
@property (retain) id *topBackgroundColor;
@property (retain) SUScriptViewController *transientViewController;
@property id *usesBlurredBackground;
@property (readonly) SUScriptViewController *volumeViewController;
@property id *wantsFullScreenLayout;


+(id)webScriptNameForKeyName:(id)arg0 ;
+(id)webScriptNameForSelector:(SEL)arg0 ;
+(void)initialize;
-(BOOL)equals:(id)arg0 ;
-(id)_className;
-(id)_parentViewControllerForVolumeViewController;
-(id)attributeKeys;
-(id)newNativeViewController;
-(id)newScriptColorWithValue:(id)arg0 ;
-(id)scriptAttributeKeys;
-(int)_transitionForString:(id)arg0 ;
-(void)_dismissModalViewControllerAnimated:(BOOL)arg0 ;
-(void)_dismissModalViewControllerWithTransition:(id)arg0 ;
-(void)_presentModalViewController:(id)arg0 withTransition:(id)arg1 ;
-(void)addPassbookPassWithURL:(id)arg0 ;
-(void)dealloc;
-(void)dismissModalViewControllerAnimated:(BOOL)arg0 ;
-(void)dismissModalViewControllerWithTransition:(id)arg0 ;
-(void)dismissViewControllerAnimated:(BOOL)arg0 completion:(id)arg1 ;
-(void)dismissVolumeViewControllerAnimated:(id)arg0 ;
-(void)presentModalViewController:(id)arg0 withTransition:(id)arg1 ;
-(void)presentVolumeViewController:(id)arg0 animated:(id)arg1 ;
-(void)runScrollTest:(id)arg0 withDelta:(float)arg1 forIterations:(int)arg2 ;
-(void)tearDownUserInterface;


@end


#endif
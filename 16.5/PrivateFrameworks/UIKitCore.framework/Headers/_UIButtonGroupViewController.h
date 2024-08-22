// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UIBUTTONGROUPVIEWCONTROLLER_H
#define _UIBUTTONGROUPVIEWCONTROLLER_H

@class NSArray, NSString;
@protocol UIPopoverPresentationControllerDelegate;


#import "UIViewController.h"
#import "_UIButtonBar.h"
#import "UIScrollView.h"
#import "UIColor.h"

@interface _UIButtonGroupViewController : UIViewController <UIPopoverPresentationControllerDelegate>

 {
    _UIButtonBar *_originalOwner;
    _UIButtonBar *_buttonBar;
    UIScrollView *_scrollView;
    NSArray *_barButtonItemGroups;
    BOOL _overLightKeyboard;
}


@property (retain, nonatomic) UIColor *backgroundColor;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (retain, nonatomic) UIColor *tintColor; // ivar: _tintColor


-(BOOL)_canShowWhileLocked;
-(id)initWithBarButtonItemGroups:(id)arg0 overLightKeyboard:(BOOL)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(void)dismissIfNecessary;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif
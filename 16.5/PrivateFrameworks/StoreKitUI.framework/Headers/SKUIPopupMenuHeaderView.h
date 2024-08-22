// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SKUIPOPUPMENUHEADERVIEW_H
#define SKUIPOPUPMENUHEADERVIEW_H

@class UIView, UIButton, UILabel, UIPopoverController, NSString, NSArray;
@protocol SKUIMenuViewControllerDelegate, UIPopoverControllerDelegate, SKUIPopupMenuDelegate;


#import "SKUIMenuViewController.h"

@interface SKUIPopupMenuHeaderView : UIView <SKUIMenuViewControllerDelegate, UIPopoverControllerDelegate>

 {
    UIButton *_menuButton;
    UILabel *_menuLabel;
    SKUIMenuViewController *_menuViewController;
    UIPopoverController *_menuPopoverController;
    UILabel *_titleLabel;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SKUIPopupMenuDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSArray *menuItemTitles; // ivar: _menuItemTitles
@property (copy, nonatomic) NSString *menuLabelTitle; // ivar: _menuLabelTitle
@property (nonatomic) NSInteger selectedMenuItemIndex; // ivar: _selectedMenuItemIndex
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *title;


-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_menuButtonAction:(id)arg0 ;
-(void)_reloadMenuButton;
-(void)dealloc;
-(void)layoutSubviews;
-(void)menuViewController:(id)arg0 didSelectItemAtIndex:(NSInteger)arg1 ;
-(void)popoverControllerDidDismissPopover:(id)arg0 ;
-(void)setBackgroundColor:(id)arg0 ;
-(void)setColoringWithColorScheme:(id)arg0 ;


@end


#endif
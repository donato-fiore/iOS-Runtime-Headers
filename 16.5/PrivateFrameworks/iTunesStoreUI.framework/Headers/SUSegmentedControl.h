// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SUSEGMENTEDCONTROL_H
#define SUSEGMENTEDCONTROL_H

@class UIControl, NSMutableArray, UIPopoverController, UISegmentedControl, NSString, NSArray, UIColor;
@protocol SUMenuViewControllerDelegate, UIPopoverControllerDelegate;


#import "SUSimpleMenuViewController.h"
#import "SUClientInterface.h"

@interface SUSegmentedControl : UIControl <SUMenuViewControllerDelegate, UIPopoverControllerDelegate>

 {
    BOOL _autosizesText;
    BOOL _hidingPopoverForRotation;
    NSMutableArray *_items;
    SUSimpleMenuViewController *_menuViewController;
    UIPopoverController *_popoverController;
    UISegmentedControl *_segmentedControl;
    NSInteger _selectionIndex;
}


@property (copy, nonatomic) NSString *cancelButtonTitle; // ivar: _cancelButtonTitle
@property (retain, nonatomic) SUClientInterface *clientInterface; // ivar: _clientInterface
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSArray *items;
@property (nonatomic) NSInteger maximumNumberOfItems; // ivar: _maximumNumberOfItems
@property (nonatomic) CGFloat maximumWidth; // ivar: _maximumWidth
@property (copy, nonatomic) NSString *moreListTitle; // ivar: _moreListTitle
@property (readonly, nonatomic) NSInteger numberOfVisibleSegments;
@property (nonatomic) NSInteger segmentedControlStyle;
@property (nonatomic) NSInteger selectedItemIndex;
@property (readonly, nonatomic) NSInteger selectedSegmentIndex;
@property (nonatomic) BOOL showsMoreListAutomatically; // ivar: _showsMoreListAutomatically
@property (readonly) Class superclass;
@property (retain, nonatomic) UIColor *tintColor;
@property (nonatomic) NSInteger tintStyle; // ivar: _tintStyle


-(id)_titlesForMoreList;
-(id)backgroundImageForState:(NSUInteger)arg0 barMetrics:(NSInteger)arg1 ;
-(id)dividerImageForLeftSegmentState:(NSUInteger)arg0 rightSegmentState:(NSUInteger)arg1 barMetrics:(NSInteger)arg2 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)titleTextAttributesForState:(NSUInteger)arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_applyStyling;
-(void)_destroyMenuViewController;
-(void)_destroyPopoverController;
-(void)_presentPopoverAnimated:(BOOL)arg0 ;
-(void)_reloadData;
-(void)_setValue:(id)arg0 forSegmentAtIndex:(NSUInteger)arg1 ;
-(void)_showMoreList:(BOOL)arg0 ;
-(void)_valueChangedEvent:(id)arg0 ;
-(void)_windowDidRotateNotification:(id)arg0 ;
-(void)_windowWillRotateNotification:(id)arg0 ;
-(void)dealloc;
-(void)layoutSubviews;
-(void)menuViewController:(id)arg0 didSelectItemAtIndex:(NSInteger)arg1 ;
-(void)menuViewControllerDidCancel:(id)arg0 ;
-(void)popoverControllerDidDismissPopover:(id)arg0 ;
-(void)setBackgroundImage:(id)arg0 forState:(NSUInteger)arg1 barMetrics:(NSInteger)arg2 ;
-(void)setDividerImage:(id)arg0 forLeftSegmentState:(NSUInteger)arg1 rightSegmentState:(NSUInteger)arg2 barMetrics:(NSInteger)arg3 ;
-(void)setImage:(id)arg0 forSegmentAtIndex:(NSUInteger)arg1 ;
-(void)setTitle:(id)arg0 forSegmentAtIndex:(NSUInteger)arg1 ;
-(void)setTitleTextAttributes:(id)arg0 forState:(NSUInteger)arg1 ;
-(void)showMoreList:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)showPopover:(id)arg0 fromSegmentIndex:(NSInteger)arg1 animated:(BOOL)arg2 ;
-(void)sizeToFitUserInterfaceIdiom;
-(void)sizeToFitWithMinimumSegmentWidth:(CGFloat)arg0 maximumTotalWidth:(CGFloat)arg1 ;


@end


#endif
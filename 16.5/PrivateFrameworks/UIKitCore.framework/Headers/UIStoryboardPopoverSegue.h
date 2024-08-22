// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UISTORYBOARDPOPOVERSEGUE_H
#define UISTORYBOARDPOPOVERSEGUE_H

@class NSArray;


#import "UIStoryboardSegue.h"
#import "UIBarButtonItem.h"
#import "UIView.h"
#import "UIPopoverController.h"

@interface UIStoryboardPopoverSegue : UIStoryboardSegue

@property (retain, nonatomic, setter=_setAnchorBarButtonItem:) UIBarButtonItem *_anchorBarButtonItem; // ivar: _anchorBarButtonItem
@property (nonatomic, setter=_setAnchorRect:) CGRect _anchorRect; // ivar: _anchorRect
@property (retain, nonatomic, setter=_setAnchorView:) UIView *_anchorView; // ivar: _anchorView
@property (copy, nonatomic, setter=_setPassthroughViews:) NSArray *_passthroughViews; // ivar: _passthroughViews
@property (nonatomic, setter=_setPermittedArrowDirections:) NSUInteger _permittedArrowDirections; // ivar: _permittedArrowDirections
@property (readonly, nonatomic) UIPopoverController *popoverController; // ivar: _popoverController


-(void)perform;


@end


#endif
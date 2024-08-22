// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UISTORYBOARDPOPOVERSEGUETEMPLATE_H
#define UISTORYBOARDPOPOVERSEGUETEMPLATE_H

@class NSArray;


#import "UIStoryboardSegueTemplate.h"
#import "UIBarButtonItem.h"
#import "UIView.h"

@interface UIStoryboardPopoverSegueTemplate : UIStoryboardSegueTemplate

@property (retain, nonatomic) UIBarButtonItem *anchorBarButtonItem; // ivar: _anchorBarButtonItem
@property (retain, nonatomic) UIView *anchorView; // ivar: _anchorView
@property (copy, nonatomic) NSArray *passthroughViews; // ivar: _passthroughViews
@property (nonatomic) NSUInteger permittedArrowDirections; // ivar: _permittedArrowDirections


-(id)initWithCoder:(id)arg0 ;
-(id)segueWithDestinationViewController:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif
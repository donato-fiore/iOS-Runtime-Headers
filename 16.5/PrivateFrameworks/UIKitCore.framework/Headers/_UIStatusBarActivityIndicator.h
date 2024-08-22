// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UISTATUSBARACTIVITYINDICATOR_H
#define _UISTATUSBARACTIVITYINDICATOR_H

@class NSString;
@protocol _UIStatusBarDisplayable;


#import "UIActivityIndicatorView.h"
#import "UIAccessibilityHUDItem.h"

@interface _UIStatusBarActivityIndicator : UIActivityIndicatorView <_UIStatusBarDisplayable>



@property (readonly, nonatomic) UIAccessibilityHUDItem *accessibilityHUDRepresentation;
@property (nonatomic) UIEdgeInsets alignmentRectInsets; // ivar: _alignmentRectInsets
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSInteger overriddenVerticalAlignment;
@property (readonly, nonatomic) BOOL prefersBaselineAlignment;
@property (readonly, nonatomic) BOOL prefersCenterVerticalAlignment;
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL wantsCrossfade;


-(void)applyStyleAttributes:(id)arg0 ;


@end


#endif
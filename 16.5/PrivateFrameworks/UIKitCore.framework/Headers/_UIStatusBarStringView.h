// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UISTATUSBARSTRINGVIEW_H
#define _UISTATUSBARSTRINGVIEW_H

@class NSString, NSTimer;
@protocol _UIStatusBarDisplayable;


#import "UILabel.h"
#import "UIAccessibilityHUDItem.h"

@interface _UIStatusBarStringView : UILabel <_UIStatusBarDisplayable>



@property (readonly, nonatomic) UIAccessibilityHUDItem *accessibilityHUDRepresentation;
@property (nonatomic) UIEdgeInsets alignmentRectInsets; // ivar: _alignmentRectInsets
@property (copy, nonatomic) NSString *alternateText; // ivar: _alternateText
@property (readonly, nonatomic) NSTimer *alternateTextTimer; // ivar: _alternateTextTimer
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) NSInteger fontStyle; // ivar: _fontStyle
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *originalText; // ivar: _originalText
@property (readonly, nonatomic) NSInteger overriddenVerticalAlignment;
@property (readonly, nonatomic) BOOL prefersBaselineAlignment;
@property (readonly, nonatomic) BOOL prefersCenterVerticalAlignment;
@property (nonatomic) BOOL showsAlternateText; // ivar: _showsAlternateText
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL wantsCrossfade;


-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_updateAlternateTextTimer;
-(void)applyStyleAttributes:(id)arg0 ;
-(void)didMoveToWindow;
-(void)setText:(id)arg0 ;


@end


#endif
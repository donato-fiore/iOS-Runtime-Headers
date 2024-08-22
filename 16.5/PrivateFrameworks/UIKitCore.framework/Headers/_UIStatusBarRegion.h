// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UISTATUSBARREGION_H
#define _UISTATUSBARREGION_H

@class NSLayoutConstraint, NSArray, NSString, NSSet, NSMutableIndexSet, NSDictionary, NSOrderedSet;
@protocol _UIStatusBarActionable, UILayoutItem, _UIStatusBarRegionLayout;

#import <Foundation/Foundation.h>

#import "_UIStatusBarAction.h"
#import "UIView.h"
#import "_UIStatusBarRegion.h"
#import "UILayoutGuide.h"
#import "_UIStatusBarDisplayItem.h"
#import "_UIStatusBarStyleAttributes.h"
#import "_UIStatusBar.h"

@interface _UIStatusBarRegion : NSObject <_UIStatusBarActionable>



@property (readonly, nonatomic) CGRect absoluteHoverFrame;
@property (retain, nonatomic) _UIStatusBarAction *action; // ivar: _action
@property (nonatomic) UIEdgeInsets actionInsets; // ivar: _actionInsets
@property (nonatomic) CGFloat alpha; // ivar: _alpha
@property (retain, nonatomic) UIView *backgroundView; // ivar: _backgroundView
@property (retain, nonatomic) NSLayoutConstraint *centerXConstraint; // ivar: _centerXConstraint
@property (retain, nonatomic) NSLayoutConstraint *centerYConstraint; // ivar: _centerYConstraint
@property (readonly, nonatomic) NSObject<UILayoutItem> *containerItem;
@property (readonly, nonatomic) UIView *containerView; // ivar: _containerView
@property (retain, nonatomic) UIView *contentView; // ivar: _contentView
@property (readonly, nonatomic) NSArray *currentEnabledDisplayItems;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSSet *dependentRegionIdentifiers; // ivar: _dependentRegionIdentifiers
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL disableItemFrameBasedOverflow; // ivar: _disableItemFrameBasedOverflow
@property (retain, nonatomic) NSMutableIndexSet *disablingTokens; // ivar: _disablingTokens
@property (readonly, copy, nonatomic) NSDictionary *displayItemAbsoluteFrames;
@property (retain, nonatomic) NSOrderedSet *displayItems; // ivar: _displayItems
@property (readonly, nonatomic) NSInteger effectiveStyle;
@property (weak, nonatomic) _UIStatusBarRegion *enabilityRegion; // ivar: _enabilityRegion
@property (readonly, nonatomic, getter=isEnabled) BOOL enabled;
@property (readonly, nonatomic) NSArray *enabledDisplayItems;
@property (nonatomic) NSDirectionalEdgeInsets extendedHoverInsets; // ivar: _extendedHoverInsets
@property (nonatomic, getter=isFrozen) BOOL frozen;
@property (retain, nonatomic) UIView *frozenView; // ivar: _frozenView
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UIView *highlightView; // ivar: _highlightView
@property (retain, nonatomic) _UIStatusBarAction *hoverAction; // ivar: _hoverAction
@property (readonly, nonatomic) BOOL hoverHighlightsAsRegion;
@property (readonly, nonatomic) UIView *hoverView;
@property (readonly, copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (retain, nonatomic) NSObject<_UIStatusBarRegionLayout> *layout; // ivar: _layout
@property (retain, nonatomic) UILayoutGuide *layoutGuide; // ivar: _layoutGuide
@property (readonly, nonatomic) NSObject<UILayoutItem> *layoutItem;
@property (nonatomic) BOOL needsReLayout; // ivar: _needsReLayout
@property (nonatomic) UIOffset offset; // ivar: _offset
@property (nonatomic) BOOL offsetable; // ivar: _offsetable
@property (readonly, nonatomic) _UIStatusBarDisplayItem *overflowedDisplayItem;
@property (nonatomic) NSInteger overriddenStyle; // ivar: _overriddenStyle
@property (retain, nonatomic) _UIStatusBarStyleAttributes *overriddenStyleAttributes; // ivar: _overriddenStyleAttributes
@property (weak, nonatomic) _UIStatusBar *statusBar; // ivar: _statusBar
@property (nonatomic) NSInteger style; // ivar: _style
@property (readonly) Class superclass;


-(id)displayItemForHUDAtLocation:(struct CGPoint )arg0 ;
-(id)initWithIdentifier:(id)arg0 ;
-(void)_addSubview:(id)arg0 atBack:(BOOL)arg1 ;
-(void)disableWithToken:(NSUInteger)arg0 ;
-(void)enableWithToken:(NSUInteger)arg0 ;


@end


#endif
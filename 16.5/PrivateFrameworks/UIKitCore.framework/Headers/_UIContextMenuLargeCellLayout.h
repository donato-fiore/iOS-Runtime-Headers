// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UICONTEXTMENULARGECELLLAYOUT_H
#define _UICONTEXTMENULARGECELLLAYOUT_H

@class NSString, NSLayoutConstraint, NSArray;
@protocol _UIContextMenuCellLayout;

#import <Foundation/Foundation.h>

#import "_UIContextMenuCellContentView.h"

@interface _UIContextMenuLargeCellLayout : NSObject <_UIContextMenuCellLayout>



@property (weak, nonatomic) _UIContextMenuCellContentView *contentView; // ivar: _contentView
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSLayoutConstraint *decorationViewCenterX; // ivar: _decorationViewCenterX
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSLayoutConstraint *iconViewCenterXToTrailing; // ivar: _iconViewCenterXToTrailing
@property (readonly, nonatomic) NSUInteger labelMaximumNumberOfLines;
@property (retain, nonatomic) NSLayoutConstraint *labelStackViewTrailingToiconViewCenterX; // ivar: _labelStackViewTrailingToiconViewCenterX
@property (readonly, nonatomic) NSInteger labelTextAlignment;
@property (retain, nonatomic) NSLayoutConstraint *lastBaselineToBottom; // ivar: _lastBaselineToBottom
@property (readonly, nonatomic) NSInteger layoutSize;
@property (retain, nonatomic) NSLayoutConstraint *leadingToLabelStackViewLeading; // ivar: _leadingToLabelStackViewLeading
@property (retain, nonatomic) NSArray *managedConstraints; // ivar: _managedConstraints
@property (retain, nonatomic) NSLayoutConstraint *minHeightConstraint; // ivar: _minHeightConstraint
@property (readonly) Class superclass;
@property (retain, nonatomic) NSLayoutConstraint *topToFirstBaseline; // ivar: _topToFirstBaseline


-(BOOL)_hasTrailingAccessory;
-(id)initWithContentView:(id)arg0 ;
-(id)preferredTextStyleUsingBoldFont:(BOOL)arg0 ;
-(void)installConstraints;
-(void)removeConstraints;
-(void)updateConstraints;


@end


#endif
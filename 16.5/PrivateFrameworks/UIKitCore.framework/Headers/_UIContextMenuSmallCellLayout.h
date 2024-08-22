// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UICONTEXTMENUSMALLCELLLAYOUT_H
#define _UICONTEXTMENUSMALLCELLLAYOUT_H

@class NSString, NSLayoutConstraint, NSArray;
@protocol _UIContextMenuCellLayout;

#import <Foundation/Foundation.h>

#import "_UIContextMenuCellContentView.h"

@interface _UIContextMenuSmallCellLayout : NSObject <_UIContextMenuCellLayout>



@property (weak, nonatomic) _UIContextMenuCellContentView *contentView; // ivar: _contentView
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSLayoutConstraint *firstBaselineConstraint; // ivar: _firstBaselineConstraint
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSUInteger labelMaximumNumberOfLines;
@property (readonly, nonatomic) NSInteger labelTextAlignment;
@property (readonly, nonatomic) NSInteger layoutSize;
@property (retain, nonatomic) NSArray *managedConstraints; // ivar: _managedConstraints
@property (retain, nonatomic) NSLayoutConstraint *minHeightConstraint; // ivar: _minHeightConstraint
@property (readonly) Class superclass;


-(id)initWithContentView:(id)arg0 ;
-(id)preferredTextStyleUsingBoldFont:(BOOL)arg0 ;
-(void)installConstraints;
-(void)removeConstraints;
-(void)updateConstraints;


@end


#endif
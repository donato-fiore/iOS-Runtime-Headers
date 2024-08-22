// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UIBUTTONBARLAYOUT_H
#define _UIBUTTONBARLAYOUT_H

@class NSArray;
@protocol _UIButtonBarLayoutMetricsData;

#import <Foundation/Foundation.h>

#import "UIBarButtonItem.h"

@interface _UIButtonBarLayout : NSObject {
    id<_UIButtonBarLayoutMetricsData> *_layoutMetrics;
}


@property (readonly, nonatomic) UIBarButtonItem *barButtonItem;
@property (nonatomic, getter=isDirty) BOOL dirty; // ivar: _dirty
@property (readonly, nonatomic) BOOL isGroupLayout;
@property (readonly, nonatomic) BOOL isSpaceLayout;
@property (readonly, nonatomic) NSArray *subLayouts;


-(BOOL)_shouldBeDirty;
-(BOOL)compact;
-(BOOL)shouldHorizontallyCenterView:(id)arg0 ;
-(BOOL)suppressSpacing;
-(BOOL)useGroupSizing;
-(CGFloat)minimumLayoutWidthGivenMinimumSpaceWidth:(CGFloat)arg0 ;
-(id)_metricsData;
-(id)description;
-(id)init;
-(id)initWithLayoutMetrics:(id)arg0 ;
-(void)_addConstraintsToActivate:(id)arg0 toDeactivate:(id)arg1 ;
-(void)_addLayoutGuides:(id)arg0 ;
-(void)_addLayoutViews:(id)arg0 ;
-(void)_configure;
-(void)addConstraintsToActivate:(id)arg0 toDeactivate:(id)arg1 ;
-(void)addLayoutGuides:(id)arg0 ;
-(void)addLayoutViews:(id)arg0 ;
-(void)addLayoutViews:(id)arg0 layoutGuides:(id)arg1 constraintsToActivate:(id)arg2 constraintsToDeactivate:(id)arg3 ;
-(void)configure;
-(void)dirtyLayoutForPlainAppearanceChange:(BOOL)arg0 doneAppearanceChanged:(BOOL)arg1 ;
-(void)setSuppressSpacing:(BOOL)arg0 ;
-(void)setUseGroupSizing:(BOOL)arg0 ;


@end


#endif
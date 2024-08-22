// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UISTATUSBARREGIONAXISSQUISHYLAYOUT_H
#define _UISTATUSBARREGIONAXISSQUISHYLAYOUT_H

@class NSString;
@protocol _UIStatusBarRegionAxisLayout, _UIStatusBarRegionAxisSquishyLayoutDynamicHidingDelegate;

#import <Foundation/Foundation.h>


@interface _UIStatusBarRegionAxisSquishyLayout : NSObject <_UIStatusBarRegionAxisLayout>



@property (nonatomic) NSInteger alignment; // ivar: _alignment
@property (readonly, nonatomic) BOOL canOverflowItems;
@property (nonatomic) BOOL compressItems; // ivar: _compressItems
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (weak, nonatomic) NSObject<_UIStatusBarRegionAxisSquishyLayoutDynamicHidingDelegate> *dynamicHidingDelegate; // ivar: _dynamicHidingDelegate
@property (readonly) NSUInteger hash;
@property (nonatomic) CGFloat interspace; // ivar: _interspace
@property (nonatomic) CGFloat itemDynamicScale; // ivar: _itemDynamicScale
@property (nonatomic) NSInteger maxNumberOfItems; // ivar: _maxNumberOfItems
@property (nonatomic) NSInteger maxNumberOfVisibleItems; // ivar: _maxNumberOfVisibleItems
@property (nonatomic) CGFloat minInterspaceDynamicScale; // ivar: _minInterspaceDynamicScale
@property (nonatomic) CGFloat minItemDynamicScale; // ivar: _minItemDynamicScale
@property (readonly) Class superclass;


-(BOOL)mayFitDisplayItems:(id)arg0 inContainerItem:(id)arg1 axis:(NSInteger)arg2 ;
-(id)constraintsForDisplayItems:(id)arg0 layoutGuides:(id)arg1 inContainerItem:(id)arg2 axis:(NSInteger)arg3 ;
-(id)init;


@end


#endif
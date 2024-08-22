// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UISTATUSBARREGIONAXISCENTERINGLAYOUT_H
#define _UISTATUSBARREGIONAXISCENTERINGLAYOUT_H

@class NSString;
@protocol _UIStatusBarRegionAxisLayout;

#import <Foundation/Foundation.h>


@interface _UIStatusBarRegionAxisCenteringLayout : NSObject <_UIStatusBarRegionAxisLayout>



@property (readonly, nonatomic) BOOL canOverflowItems;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) CGFloat interspace; // ivar: _interspace
@property (nonatomic) CGFloat margin; // ivar: _margin
@property (nonatomic) NSInteger maxNumberOfItems; // ivar: _maxNumberOfItems
@property (readonly) Class superclass;


-(BOOL)mayFitDisplayItems:(id)arg0 inContainerItem:(id)arg1 axis:(NSInteger)arg2 ;
-(id)constraintsForDisplayItems:(id)arg0 layoutGuides:(id)arg1 inContainerItem:(id)arg2 axis:(NSInteger)arg3 ;
-(id)init;


@end


#endif
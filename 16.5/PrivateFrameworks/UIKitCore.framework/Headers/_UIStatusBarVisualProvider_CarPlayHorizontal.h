// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UISTATUSBARVISUALPROVIDER_CARPLAYHORIZONTAL_H
#define _UISTATUSBARVISUALPROVIDER_CARPLAYHORIZONTAL_H

@class CarPlay, NSLayoutConstraint, NSDictionary;



@interface _UIStatusBarVisualProvider_CarPlayHorizontal : CarPlay

@property (retain, nonatomic) NSLayoutConstraint *driverSideConstraint; // ivar: _driverSideConstraint
@property (retain, nonatomic) NSDictionary *orderedDisplayItemPlacements; // ivar: _orderedDisplayItemPlacements


+(struct CGSize )intrinsicContentSizeForOrientation:(NSInteger)arg0 ;
-(id)orderedDisplayItemPlacementsInRegionWithIdentifier:(id)arg0 ;
-(id)setupInContainerView:(id)arg0 ;


@end


#endif
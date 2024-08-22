// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UISTATUSBARDISPLAYITEMPLACEMENTNETWORKGROUP_H
#define _UISTATUSBARDISPLAYITEMPLACEMENTNETWORKGROUP_H

@class UIStatusBarDisplayItemPlacementGroup;


#import "_UIStatusBarDisplayItemPlacementCellularGroup.h"
#import "_UIStatusBarDisplayItemPlacementWifiGroup.h"

@interface _UIStatusBarDisplayItemPlacementNetworkGroup : UIStatusBarDisplayItemPlacementGroup

@property (readonly, nonatomic) _UIStatusBarDisplayItemPlacementCellularGroup *cellularGroup; // ivar: _cellularGroup
@property (readonly, nonatomic) _UIStatusBarDisplayItemPlacementWifiGroup *wifiGroup; // ivar: _wifiGroup


+(id)_groupWithCellularGroup:(id)arg0 wifiGroup:(id)arg1 includeCellularName:(BOOL)arg2 ;
+(id)groupWithHighPriority:(NSInteger)arg0 lowPriority:(NSInteger)arg1 cellularItemClass:(Class)arg2 wifiItemClass:(Class)arg3 cellularTypeClass:(Class)arg4 includeCellularName:(BOOL)arg5 allowDualNetwork:(BOOL)arg6 ;
+(id)groupWithHighPriority:(NSInteger)arg0 lowPriority:(NSInteger)arg1 cellularItemClass:(Class)arg2 wifiItemClass:(Class)arg3 includeCellularName:(BOOL)arg4 ;
+(id)secondaryGroupWithHighPriority:(NSInteger)arg0 lowPriority:(NSInteger)arg1 cellularItemClass:(Class)arg2 wifiItemClass:(Class)arg3 ;


@end


#endif
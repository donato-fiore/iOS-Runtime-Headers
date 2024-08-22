// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBICONLISTMODELREPAIRUTILITIES_H
#define SBICONLISTMODELREPAIRUTILITIES_H


#import <Foundation/Foundation.h>


@interface SBIconListModelRepairUtilities : NSObject



+(BOOL)_findAndRepairEmptyRows:(id)arg0 avoidingIcons:(id)arg1 gridCellInfo:(id)arg2 ;
+(BOOL)_findAndRepairSingleIconGaps:(id)arg0 gridCellInfo:(id)arg1 ;
+(BOOL)_findAndRepairWidgetSizedGaps:(id)arg0 widgetGridSizeClass:(NSUInteger)arg1 widgetGridSize:(struct SBHIconGridSize )arg2 iconLayoutBehavior:(NSUInteger)arg3 gridCellInfo:(id)arg4 ;
+(NSUInteger)_maxGridCellIndexWithIconCount:(NSUInteger)arg0 gridCellInfo:(id)arg1 ;
+(id)_firstIconOfSizeClass:(NSUInteger)arg0 withIcons:(id)arg1 inRange:(struct _NSRange )arg2 ;
+(id)repairModelByEliminatingGapsInIcons:(id)arg0 avoidingIcons:(id)arg1 gridSize:(struct SBHIconGridSize )arg2 gridSizeClassSizes:(struct SBHIconGridSizeClassSizes )arg3 iconLayoutBehavior:(NSUInteger)arg4 ;


@end


#endif
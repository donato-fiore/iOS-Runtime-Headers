// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSCHCHARTTYPEDONUT_H
#define TSCHCHARTTYPEDONUT_H



#import "TSCHChartTypePieFamily.h"

@interface TSCHChartTypeDonut : TSCHChartTypePieFamily



-(CGFloat)defaultLabelExplosionValue;
-(Class)chartLayoutItemClass;
-(NSInteger)userInterfaceTag;
-(id)alternateArchiveChartTypeAndReturnWriterVersion:(*NSUInteger)arg0 readerVersion:(*NSUInteger)arg1 featureID:(*id)arg2 ;
-(id)defaultSeriesType:(NSUInteger)arg0 ;
-(id)init;
-(id)localizedActionStringForWedgeExplosion;
-(id)localizedDeliveryTypeForWedge;
-(id)localizedTitleForDeliveryTypeWedge;
-(id)localizedWedgeDragLabelWithPercent:(NSUInteger)arg0 ;
-(id)name;
-(id)unlocalizedDeliveryTypeForWedge;
-(id)userInterfaceName;


@end


#endif
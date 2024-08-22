// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSCH3DCHARTSCENEINFO_H
#define TSCH3DCHARTSCENEINFO_H

@protocol NSCopying, TSWPStyleProviding;

#import <Foundation/Foundation.h>

#import "TSCHChartInfo.h"
#import "TSCHChartType.h"
#import "TSCH3DScene.h"
#import "TSCHChartSeriesType.h"

@interface TSCH3DChartSceneInfo : NSObject <NSCopying>



@property (readonly, nonatomic) TSCHChartInfo *chartInfo; // ivar: _chartInfo
@property (readonly, nonatomic) TSCHChartType *chartType; // ivar: _chartType
@property (readonly, nonatomic) ? layoutSettings; // ivar: _layoutSettings
@property (readonly, nonatomic) TSCH3DScene *scene; // ivar: _scene
@property (readonly, nonatomic) TSCHChartSeriesType *seriesType; // ivar: _seriesType
@property (readonly, weak, nonatomic) NSObject<TSWPStyleProviding> *styleProvidingSource; // ivar: _styleProvidingSource


+(id)infoWithScene:(id)arg0 chartInfo:(id)arg1 chartType:(id)arg2 seriesType:(id)arg3 layoutSettings:(struct ? )arg4 styleProvidingSource:(id)arg5 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithScene:(id)arg0 chartInfo:(id)arg1 chartType:(id)arg2 seriesType:(id)arg3 layoutSettings:(struct ? )arg4 styleProvidingSource:(id)arg5 ;


@end


#endif
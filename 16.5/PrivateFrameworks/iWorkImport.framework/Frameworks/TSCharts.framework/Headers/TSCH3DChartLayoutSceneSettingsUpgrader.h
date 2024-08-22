// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSCH3DCHARTLAYOUTSCENESETTINGSUPGRADER_H
#define TSCH3DCHARTLAYOUTSCENESETTINGSUPGRADER_H

@class NSValue;


#import "TSCH3DAbstractLimitingSeriesUpgrader.h"
#import "TSCH3DChartLayout.h"

@interface TSCH3DChartLayoutSceneSettingsUpgrader : TSCH3DAbstractLimitingSeriesUpgrader {
    TSCH3DChartLayout *_chartLayout;
    BOOL _isMutatedForSceneSettings;
    NSValue *_infoGeometryOffset;
}


@property (nonatomic) BOOL hasConstantDepth; // ivar: hasConstantDepth


-(id)containingViewportByResizingScene:(id)arg0 toResizingFrame:(struct CGRect )arg1 ;
-(id)sceneResetWithLayoutSettings:(struct ? )arg0 ;
-(struct ? )oldLayoutSettings;
-(struct CGRect )oldResizingFrame;
-(void)dealloc;
-(void)mutateInfoWithContainingViewport:(id)arg0 scene:(id)arg1 ;
-(void)updateInfoGeometryIfNecessary;
-(void)upgradeForSpice:(BOOL)arg0 naturalSize:(struct CGSize )arg1 ;


@end


#endif
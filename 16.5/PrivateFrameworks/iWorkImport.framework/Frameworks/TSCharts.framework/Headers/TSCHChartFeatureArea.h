// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSCHCHARTFEATUREAREA_H
#define TSCHCHARTFEATUREAREA_H



#import "TSCHChartFeatureCategory.h"

@interface TSCHChartFeatureArea : TSCHChartFeatureCategory



-(BOOL)supportsInterSetDepthGap;
-(CGFloat)maxDepthRatio;
-(CGFloat)sageMaxDepthRatio;
-(CGFloat)spiceMaxDepthRatio;
-(Class)presetImagerClass;
-(Class)stageClass;
-(Class)valueAxisClassForID:(id)arg0 scale:(NSInteger)arg1 ;
-(id)categoryLabelPositioner;
-(id)defaultDataFileName;
-(id)genericToSpecificPropertyMap;
-(id)supportedAxisScales;
-(id)userInterfaceName;
-(int)deprecated3DShadowSpecificProperty;
-(int)labelOrientation;


@end


#endif
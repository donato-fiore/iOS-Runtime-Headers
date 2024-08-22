// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSCH3DPHONGLIKELIGHTINGMODEL_H
#define TSCH3DPHONGLIKELIGHTINGMODEL_H



#import "TSCH3DLightingModel.h"

@interface TSCH3DPhongLikeLightingModel : TSCH3DLightingModel



-(id)diffuseTextureTiling;
-(id)init;
-(id)initWithPhongMaterialPackageArchive:(*void)arg0 lightingModelArchive:(*void)arg1 unarchiver:(id)arg2 ;
-(id)p_lightenDiffuseMaterial:(id)arg0 percentage:(id)arg1 ;
-(id)phongMaterials;
-(id)representativeMaterialLightenedByPercentage:(id)arg0 ;
-(struct tvec4<float> )p_lightenedColorForColor:(*void)arg0 percentage:(id)arg1 ;
-(void)affect:(id)arg0 states:(id)arg1 scene:(id)arg2 texturePool:(id)arg3 percentage:(id)arg4 ;
-(void)saveToPhongMaterialPackageArchive:(*void)arg0 environmentPackageArchive:(*void)arg1 archiver:(id)arg2 ;


@end


#endif
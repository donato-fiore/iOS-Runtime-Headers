// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSCH3DFILLSAGEFILLDATA_H
#define TSCH3DFILLSAGEFILLDATA_H

@class NSMutableArray;
@protocol TSCH3DSageFillData;

#import <Foundation/Foundation.h>

#import "TSCH3DFill.h"

@interface TSCH3DFillSageFillData : NSObject <TSCH3DSageFillData>

 {
    TSCH3DFill *_fill;
    NSMutableArray *_textures;
    NSMutableArray *_textureBlendModes;
}




+(id)dataWithFill:(id)arg0 ;
-(BOOL)isLayerEnabledForIndex:(NSUInteger)arg0 ;
-(BOOL)layerIsEnvironmentMapForIndex:(NSUInteger)arg0 ;
-(NSInteger)layerBlendModeForIndex:(NSUInteger)arg0 ;
-(NSUInteger)diffuseCount;
-(NSUInteger)layerCount;
-(NSUInteger)modulateCount;
-(float)layerRotationForIndex:(NSUInteger)arg0 ;
-(float)layerScaleForIndex:(NSUInteger)arg0 ;
-(float)opacity;
-(float)shininess;
-(id)diffuseMaterial;
-(id)environment;
-(id)fillSetIdentifier;
-(id)initWithFill:(id)arg0 ;
-(id)layerLightenPercentageForIndex:(NSUInteger)arg0 ;
-(id)lightingModel;
-(id)materialAtIndex:(NSUInteger)arg0 ;
-(id)modulateMaterial;
-(id)phongMaterials;
-(id)textureForIndex:(NSUInteger)arg0 ;
-(int)layerTilingModeForIndex:(NSUInteger)arg0 ;
-(struct Color )diffuse;
-(struct Color )emissive;
-(struct Color )specular;
-(void)p_addMaterial:(id)arg0 blendMode:(NSInteger)arg1 ;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VKPOLYGONGROUP_H
#define VKPOLYGONGROUP_H



#import "VKPolygonalItemGroup.h"

@interface VKPolygonGroup : VKPolygonalItemGroup {
    optional<md::MeshSet<ggl::PolygonCommonStroke::MeshMesh, ggl::PolygonCommonStroke::DefaultVbo>> _strokeMeshInfo;
    vector<std::shared_ptr<ggl::PolygonCommonStroke::MeshMesh>, std::allocator<std::shared_ptr<ggl::PolygonCommonStroke::MeshMesh>>> _strokeMeshes;
    ? _sourceTexture;
    ? _targetTexture;
    ? _sourceRoofTexture;
    ? _targetRoofTexture;
    unsigned char _lastResolvedZoom;
}


@property (readonly, nonatomic) *void sourceRoofTexture;
@property (readonly, nonatomic) *void sourceTexture;
@property (readonly, nonatomic) *void strokeMeshes;
@property ? styleAttributes;
@property (readonly, nonatomic) *void targetRoofTexture;
@property (readonly, nonatomic) *void targetTexture;


-(BOOL)addFillForSection:(*void)arg0 precision:(unsigned char)arg1 styleIndex:(unsigned int)arg2 cullingMask:(unsigned int)arg3 accessor:(struct ResourceAccessor *)arg4 triangulator:(*void)arg5 ;
-(id)initWithStyleQuery:(*void)arg0 tileZoom:(float)arg1 fixedAroundCentroid:(*void)arg2 contentScale:(float)arg3 ;
-(id)initWithStyleQuery:(*void)arg0 tileZoom:(float)arg1 fixedAroundCentroid:(*void)arg2 contentScale:(float)arg3 storage:(struct shared_ptr<md::MeshSetStorage> )arg4 ;
-(struct shared_ptr<ggl::Texture2D> )_textureForName:(*void)arg0 textureManager:(*void)arg1 ;
-(unsigned char)initialStyleIndexForSection:(*void)arg0 attributes:(*void)arg1 styles:(*void)arg2 ;
-(unsigned char)styleIndexForAttributes:(*void)arg0 edgePair:(struct GeoCodecsFeatureStylePair *)arg1 ;
-(unsigned int)createStrokePointStyleList:(*void)arg0 section:(NSUInteger)arg1 outPointStyles:(*void)arg2 withRounder:(struct PolygonRound *)arg3 ;
-(void)addPolygon:(*void)arg0 accessor:(struct ResourceAccessor *)arg1 triangulator:(*void)arg2 withRounder:(struct PolygonRound *)arg3 ;
-(void)addStrokeForSection:(*void)arg0 paddedCount:(unsigned int)arg1 key:(struct pair<const void *, unsigned long> )arg2 attributes:(*void)arg3 styles:(*void)arg4 cullingMask:(unsigned int)arg5 accessor:(struct ResourceAccessor *)arg6 ;
-(void)enclosePointsInBoundingBox:(*void)arg0 count:(NSUInteger)arg1 ;
-(void)prepareForPolygon:(*void)arg0 withRounder:(struct PolygonRound *)arg1 ;
-(void)prepareToFillSection:(*void)arg0 ;
-(void)prepareToStrokeSection:(*void)arg0 key:(*void)arg1 styles:(*void)arg2 paddedCount:(unsigned int)arg3 ;
-(void)updateTextures:(unsigned char)arg0 textureManager:(*void)arg1 ;
-(void)updateTexturesIfNecessary:(float)arg0 textureManager:(*void)arg1 ;
-(void)willAddDataWithAccessor:(struct ResourceAccessor *)arg0 ;


@end


#endif
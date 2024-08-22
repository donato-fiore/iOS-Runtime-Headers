// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VKCUSTOMFEATURE_H
#define VKCUSTOMFEATURE_H

@protocol NSSecureCoding, VKCustomFeatureDataSource;

#import <Foundation/Foundation.h>


@interface VKCustomFeature : NSObject <NSSecureCoding>

 {
    shared_ptr<md::LabelExternalFeature> _feature;
    id<VKCustomFeatureDataSource> *_dataSource;
    BOOL _isGlobalFeature;
    _retain_ptr<GEOFeatureStyleAttributes *, geo::_retain_objc_arc, geo::_release_objc_arc, geo::_hash_objc, geo::_equal_objc> _featureStyleAttributesPtr;
}




+(BOOL)supportsSecureCoding;
-(*void)feature;
-(*void)lineFeature;
-(*void)pointFeature;
-(BOOL)isGlobalFeature;
-(BOOL)isInjectedFeature;
-(BOOL)isLineFeature;
-(BOOL)isPointFeature;
-(NSUInteger)businessID;
-(NSUInteger)clientFeatureID;
-(NSUInteger)featureID;
-(NSUInteger)venueBuildingID;
-(NSUInteger)venueComponentID;
-(NSUInteger)venueID;
-(NSUInteger)venueLevelID;
-(id)_initInternalFeatureWithCoordinate:(struct ? )arg0 ;
-(id)_initWithCoordinate:(struct ? )arg0 isInjected:(BOOL)arg1 ;
-(id)dataSource;
-(id)init;
-(id)initLineWithCoordinates:(struct ? *)arg0 count:(NSUInteger)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithCoordinate3D:(struct ? )arg0 ;
-(id)initWithCoordinate:(struct ? )arg0 ;
-(id)styleAttributes;
-(short)venueFloorOrdinal;
-(void)encodeWithCoder:(id)arg0 ;
-(void)setAnnotationText:(id)arg0 locale:(id)arg1 ;
-(void)setBuildingFaceAzimuth:(float)arg0 ;
-(void)setBuildingHeight:(float)arg0 ;
-(void)setBusinessID:(NSUInteger)arg0 ;
-(void)setClientFeatureID:(NSUInteger)arg0 ;
-(void)setDataSource:(id)arg0 ;
-(void)setElevationOffset:(CGFloat)arg0 ;
-(void)setFeatureID:(NSUInteger)arg0 ;
-(void)setMaxZoom:(float)arg0 ;
-(void)setMinZoom:(float)arg0 ;
-(void)setPlaceholderIconWithSize:(struct CGSize )arg0 anchorPoint:(struct CGPoint )arg1 isRound:(BOOL)arg2 ;
-(void)setSortKey:(int)arg0 ;
-(void)setStyleAttributes:(id)arg0 ;
-(void)setText:(id)arg0 locale:(id)arg1 ;
-(void)setTextDisplayMode:(unsigned char)arg0 ;
-(void)setVenueBuildingID:(NSUInteger)arg0 ;
-(void)setVenueComponentID:(NSUInteger)arg0 ;
-(void)setVenueFloorOrdinal:(short)arg0 ;
-(void)setVenueID:(NSUInteger)arg0 ;
-(void)setVenueLevelID:(NSUInteger)arg0 ;


@end


#endif
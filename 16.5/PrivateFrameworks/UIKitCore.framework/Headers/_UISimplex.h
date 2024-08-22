// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UISIMPLEX_H
#define _UISIMPLEX_H

@class NSArray, NSString;
@protocol _UIHyperregion_Internal, NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface _UISimplex : NSObject <_UIHyperregion_Internal, NSSecureCoding, NSCopying>

 {
    *CGFloat __points;
    ? _clean;
}


@property (readonly, nonatomic) *CGFloat _cggetriWorkspace; // ivar: __cggetriWorkspace
@property (readonly, nonatomic) int _cggetriWorkspaceSize; // ivar: __cggetriWorkspaceSize
@property (readonly, nonatomic) NSUInteger _dimensions; // ivar: __dimensions
@property (readonly, nonatomic) *CGFloat _facetNormalOffsets; // ivar: __facetNormalOffsets
@property (readonly, nonatomic) *CGFloat _facetNormals; // ivar: __facetNormals
@property (readonly, nonatomic) NSArray *_facets; // ivar: __facets
@property (readonly, nonatomic) *CGFloat _incenter; // ivar: __incenter
@property (readonly, nonatomic) NSUInteger _missingNormalCount; // ivar: __missingNormalCount
@property (readonly, nonatomic) *CGFloat _missingNormals; // ivar: __missingNormals
@property (readonly, nonatomic) NSUInteger _pointCount; // ivar: __pointCount
@property (readonly, nonatomic) *CGFloat _points;
@property (readonly, nonatomic) *CGFloat _projection; // ivar: __projection
@property (readonly, nonatomic) *CGFloat _temp; // ivar: __temp
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
+(id)keyPathsForValuesAffectingSelf;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDimensions:(NSUInteger)arg0 pointCount:(NSUInteger)arg1 ;
-(void)_closestPoint:(*CGFloat)arg0 toPoint:(*CGFloat)arg1 ;
-(void)_mutatePoints:(id)arg0 ;
-(void)_recomputeMetadata;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif
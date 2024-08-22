// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CRNORMALIZEDQUAD_H
#define CRNORMALIZEDQUAD_H

@class NSString;
@protocol CRCodable, CRQuad;

#import <Foundation/Foundation.h>

#import "CRImageSpaceQuad.h"

@interface CRNormalizedQuad : NSObject <CRCodable, CRQuad>



@property (readonly, nonatomic) CGPoint bottomLeft;
@property (readonly, nonatomic) CGPoint bottomRight;
@property (readonly, nonatomic) CGRect boundingBox;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) CRImageSpaceQuad *denormalizedQuad; // ivar: _denormalizedQuad
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) CGPoint midPoint;
@property (readonly) CGSize normalizationSize; // ivar: _normalizationSize
@property (readonly, nonatomic) CGSize size;
@property (readonly) Class superclass;
@property (readonly, nonatomic) CGPoint topLeft;
@property (readonly, nonatomic) CGPoint topRight;


+(BOOL)supportsSecureCoding;
-(BOOL)containsDenormalizedPoint:(struct CGPoint )arg0 ;
-(BOOL)containsNormalizedPoint:(struct CGPoint )arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)overlapsDenormalizedQuad:(id)arg0 ;
-(BOOL)overlapsNormalizedQuad:(id)arg0 ;
-(CGFloat)shortestDistanceFromDenormalizedPoint:(struct CGPoint )arg0 ;
-(CGFloat)shortestDistanceFromNormalizedPoint:(struct CGPoint )arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)crCodableDataRepresentation;
-(id)initWithCRCodableDataRepresentation:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDenormalizedQuad:(id)arg0 size:(struct CGSize )arg1 ;
-(id)initWithNormalizedBoundingBox:(struct CGRect )arg0 size:(struct CGSize )arg1 ;
-(id)initWithNormalizedTopLeft:(struct CGPoint )arg0 topRight:(struct CGPoint )arg1 bottomRight:(struct CGPoint )arg2 bottomLeft:(struct CGPoint )arg3 size:(struct CGSize )arg4 ;
-(id)rotatedAroundDenormalizedPoint:(struct CGPoint )arg0 angle:(float)arg1 ;
-(id)rotatedAroundNormalizedPoint:(struct CGPoint )arg0 angle:(float)arg1 ;
-(id)unionWithNormalizedQuad:(id)arg0 baselineAngle:(float)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif
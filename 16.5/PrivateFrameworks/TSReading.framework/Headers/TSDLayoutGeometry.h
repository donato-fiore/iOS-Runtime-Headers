// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSDLAYOUTGEOMETRY_H
#define TSDLAYOUTGEOMETRY_H

@protocol NSCopying, NSMutableCopying;

#import <Foundation/Foundation.h>


@interface TSDLayoutGeometry : NSObject <NSCopying, NSMutableCopying>



@property (readonly, nonatomic) CGSize size; // ivar: mSize
@property (readonly, nonatomic) CGAffineTransform transform; // ivar: mTransform


+(id)geometryFromFullTransform:(struct CGAffineTransform )arg0 ;
-(BOOL)differsInMoreThanTranslationFrom:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)geometryByOutsettingBy:(struct CGSize )arg0 ;
-(id)geometryByTransformingBy:(struct CGAffineTransform )arg0 ;
-(id)geometryByTranslatingBy:(struct CGPoint )arg0 ;
-(id)infoGeometry;
-(id)init;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)initWithInfoGeometry:(id)arg0 ;
-(id)initWithSize:(struct CGSize )arg0 transform:(struct CGAffineTransform )arg1 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(struct CGAffineTransform )fullTransform;
-(struct CGAffineTransform )inverseTransform;
-(struct CGAffineTransform )transformByConcatenatingTransformTo:(struct CGAffineTransform )arg0 ;
-(struct CGPoint )center;
-(struct CGRect )frame;


@end


#endif
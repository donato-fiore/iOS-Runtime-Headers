// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSDPATHSOURCE_H
#define TSDPATHSOURCE_H

@class TSUBezierPath, NSString;
@protocol TSDMixing, NSCopying;

#import <Foundation/Foundation.h>


@interface TSDPathSource : NSObject <TSDMixing, NSCopying>



@property (readonly, copy, nonatomic) TSUBezierPath *bezierPath;
@property (readonly, copy, nonatomic) TSUBezierPath *bezierPathWithoutFlips;
@property (readonly, nonatomic, getter=isClosed) BOOL closed;
@property (nonatomic) BOOL hasHorizontalFlip; // ivar: _horizontalFlip
@property (nonatomic) BOOL hasVerticalFlip; // ivar: _verticalFlip
@property (readonly, nonatomic) NSString *inferredAccessibilityDescription;
@property (readonly, copy, nonatomic) TSUBezierPath *interiorWrapPath;
@property (readonly, nonatomic) BOOL isCircular;
@property (readonly, nonatomic) BOOL isClosed;
@property (readonly, nonatomic) BOOL isRectangular;
@property (readonly, nonatomic) BOOL isRectangularForever;
@property (copy, nonatomic) NSString *localizationKey; // ivar: _localizationKey
@property (readonly, nonatomic) NSString *name;
@property (nonatomic) CGSize naturalSize;
@property (readonly, nonatomic) CGAffineTransform pathFlipTransform;
@property (readonly, nonatomic) Class preferredControllerClass;
@property (copy, nonatomic) NSString *userDefinedIdentifier; // ivar: _identifier
@property (copy, nonatomic) NSString *userDefinedName; // ivar: _name


+(id)pathSourceForShapeType:(NSInteger)arg0 naturalSize:(struct CGSize )arg1 ;
+(id)pathSourceWithArchive:(*void)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(CGFloat)uniformScaleForScalingToNaturalSize:(struct CGSize )arg0 ;
-(NSInteger)mixingTypeWithObject:(id)arg0 context:(id)arg1 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithArchive:(*void)arg0 ;
-(id)interiorWrapPathForInset:(CGFloat)arg0 joinStyle:(NSUInteger)arg1 ;
-(id)mixedObjectWithFraction:(CGFloat)arg0 ofObject:(id)arg1 ;
-(void)loadSharedFromArchive:(*void)arg0 ;
-(void)saveSharedToArchive:(*void)arg0 ;
-(void)saveToArchive:(*void)arg0 ;
-(void)scaleToNaturalSize:(struct CGSize )arg0 ;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSDSHAPEINFO_H
#define TSDSHAPEINFO_H

@class NSString;
@protocol TSSThemedObject, TSDMixing, TSDReducableInfo, TSKSearchable;


#import "TSDStyledInfo.h"
#import "TSDShapeStyle.h"
#import "TSDLineEnd.h"
#import "TSDFill.h"
#import "TSDPathSource.h"

@interface TSDShapeInfo : TSDStyledInfo <TSSThemedObject, TSDMixing, TSDReducableInfo, TSKSearchable>

 {
    TSDShapeStyle *mStyle;
    TSDLineEnd *mHeadLineEnd;
    TSDLineEnd *mTailLineEnd;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) TSDFill *fill;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) TSDLineEnd *headLineEnd;
@property (retain, nonatomic) TSDPathSource *pathSource; // ivar: mPathSource
@property (readonly, nonatomic) TSDShapeStyle *shapeStyle;
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL supportsShrinkTextToFit;
@property (readonly, nonatomic) BOOL supportsTextInset;
@property (retain, nonatomic) TSDLineEnd *tailLineEnd;


-(Class)layoutClass;
-(Class)repClass;
-(Class)styleClass;
-(NSInteger)mixingTypeWithObject:(id)arg0 ;
-(id)animationFilters;
-(id)copyWithContext:(id)arg0 ;
-(id)imageDatasForReducingFileSizeWithAssociatedHints;
-(id)initWithContext:(id)arg0 geometry:(id)arg1 ;
-(id)initWithContext:(id)arg0 geometry:(id)arg1 style:(id)arg2 ;
-(id)initWithContext:(id)arg0 geometry:(id)arg1 style:(id)arg2 pathSource:(id)arg3 ;
-(id)mixedObjectWithFraction:(CGFloat)arg0 ofObject:(id)arg1 ;
-(id)objectForProperty:(int)arg0 ;
-(id)style;
-(int)elementKind;
-(struct CGSize )targetSizeForImageData:(id)arg0 associatedHint:(id)arg1 ;
-(void)dealloc;
-(void)setGeometry:(id)arg0 ;
-(void)setStyle:(id)arg0 ;
-(void)setValuesForProperties:(id)arg0 ;


@end


#endif
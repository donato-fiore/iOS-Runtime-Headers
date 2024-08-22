// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSCHTEXTUREFILLSET_H
#define TSCHTEXTUREFILLSET_H



#import "TSCHFillSet.h"

@interface TSCHTextureFillSet : TSCHFillSet



-(NSUInteger)countOfDefinedSeriesForSeriesType:(id)arg0 ;
-(id)fillForSeriesIndex:(NSUInteger)arg0 seriesType:(id)arg1 context:(id)arg2 ;
-(id)fillSetIdentifierForSeriesType:(id)arg0 seriesIndex:(NSUInteger)arg1 ;
-(id)fillsForDefaultSeriesType;
-(id)swatchFillsWithSwatchSize:(struct CGSize )arg0 scaleFactor:(CGFloat)arg1 ;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSCHCHARTSERIESDEFAULTNONSTYLE_H
#define TSCHCHARTSERIESDEFAULTNONSTYLE_H

@class NSString;
@protocol TSCHStyleActAlike;

#import <Foundation/Foundation.h>


@interface TSCHChartSeriesDefaultNonStyle : NSObject <TSCHStyleActAlike>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(float)defaultFloatValueForProperty:(int)arg0 ;
+(id)_singletonAlloc;
+(id)allocWithZone:(struct _NSZone *)arg0 ;
+(id)boxedDefaultValueForProperty:(int)arg0 ;
+(id)defaultNonStyle;
+(id)defaultValueForProperty:(int)arg0 ;
+(id)properties;
+(int)defaultIntValueForProperty:(int)arg0 ;
-(BOOL)definesProperty:(int)arg0 ;
-(BOOL)overridesProperty:(int)arg0 ;
-(NSInteger)mixingTypeWithObject:(id)arg0 context:(id)arg1 ;
-(float)defaultFloatValueForProperty:(int)arg0 ;
-(float)floatValueForProperty:(int)arg0 ;
-(id)boxedDefaultValueForProperty:(int)arg0 ;
-(id)boxedValueForProperty:(int)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)defaultValueForProperty:(int)arg0 ;
-(id)mixedObjectWithFraction:(CGFloat)arg0 ofObject:(id)arg1 ;
-(id)properties;
-(id)valueForProperty:(int)arg0 ;
-(int)defaultIntValueForProperty:(int)arg0 ;
-(int)intValueForProperty:(int)arg0 ;


@end


#endif
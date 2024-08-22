// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TBCENTROIDCALCULATOR_H
#define TBCENTROIDCALCULATOR_H

@class NSMutableArray;

#import <Foundation/Foundation.h>


@interface TBCentroidCalculator : NSObject

@property (retain, nonatomic) NSMutableArray *points; // ivar: _points


-(BOOL)_validLatitudeValue:(CGFloat)arg0 ;
-(BOOL)_validLongitudeValue:(CGFloat)arg0 ;
-(struct CLLocationCoordinate2D )centroid;
-(void)addLatitude:(CGFloat)arg0 longitude:(CGFloat)arg1 ;


@end


#endif
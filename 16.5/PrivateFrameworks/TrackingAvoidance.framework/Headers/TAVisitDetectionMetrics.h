// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TAVISITDETECTIONMETRICS_H
#define TAVISITDETECTIONMETRICS_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface TAVisitDetectionMetrics : NSObject <NSSecureCoding>



@property (readonly, nonatomic) CGFloat distanceToPreviousVisit; // ivar: _distanceToPreviousVisit
@property (readonly, nonatomic) NSUInteger nSigmaBetweenVisits; // ivar: _nSigmaBetweenVisits
@property (readonly, nonatomic) CGFloat residualDistanceToPreviousVisit; // ivar: _residualDistanceToPreviousVisit


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDistance:(CGFloat)arg0 residualDistance:(CGFloat)arg1 nSigma:(NSUInteger)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif
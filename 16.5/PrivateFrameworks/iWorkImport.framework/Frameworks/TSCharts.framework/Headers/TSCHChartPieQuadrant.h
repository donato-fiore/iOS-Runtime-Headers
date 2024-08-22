// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSCHCHARTPIEQUADRANT_H
#define TSCHCHARTPIEQUADRANT_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface TSCHChartPieQuadrant : NSObject

@property (readonly, nonatomic) NSUInteger horizontalHalfDisk; // ivar: _horizontalHalfDisk
@property (readonly, nonatomic) NSUInteger verticalHalfDisk; // ivar: _verticalHalfDisk
@property (readonly, copy, nonatomic) NSArray *wedgeLayoutInfos; // ivar: _wedgeLayoutInfos


-(id)initWithWedgeLayoutInfos:(id)arg0 horizontalHalfDisk:(NSUInteger)arg1 verticalHalfDisk:(NSUInteger)arg2 ;


@end


#endif
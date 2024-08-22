// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UPQUILTCONFIGURATION_H
#define UPQUILTCONFIGURATION_H

@class UIBezierPath;

#import <Foundation/Foundation.h>

#import "UPSeededRandomizer.h"
#import "UPQuiltConfiguration.h"

@interface UPQuiltConfiguration : NSObject {
    UPSeededRandomizer *_randomizer;
    UPQuiltConfiguration *_fromInterpolatedConfiguration;
    UPQuiltConfiguration *_toInterpolatedConfiguration;
}


@property (retain, nonatomic) UIBezierPath *bottomLeftQuiltAsleepPath; // ivar: _bottomLeftQuiltAsleepPath
@property (retain, nonatomic) UIBezierPath *bottomLeftQuiltAwakeLockedPath; // ivar: _bottomLeftQuiltAwakeLockedPath
@property (retain, nonatomic) UIBezierPath *bottomLeftQuiltUnlockedPath; // ivar: _bottomLeftQuiltUnlockedPath
@property (retain, nonatomic) UIBezierPath *bottomRightQuiltAwakeLockedPath; // ivar: _bottomRightQuiltAwakeLockedPath
@property (retain, nonatomic) UIBezierPath *bottomRightQuiltUnlockedPath; // ivar: _bottomRightQuiltUnlockedPath
@property (retain, nonatomic) UIBezierPath *intersectionPieceAwakeLockedPath; // ivar: _intersectionPieceAwakeLockedPath
@property (readonly, nonatomic) BOOL isSnapshotConfiguration; // ivar: _isSnapshotConfiguration
@property (readonly, nonatomic) CGFloat lineVariance; // ivar: _lineVariance
@property (readonly, nonatomic) NSUInteger randomizationSeedValue; // ivar: _randomizationSeedValue
@property (readonly, nonatomic) CGRect timeBounds; // ivar: _timeBounds
@property (retain, nonatomic) UIBezierPath *topQuiltAsleepPath; // ivar: _topQuiltAsleepPath
@property (retain, nonatomic) UIBezierPath *topQuiltAwakeLockedPath; // ivar: _topQuiltAwakeLockedPath
@property (retain, nonatomic) UIBezierPath *topQuiltUnlockedPath; // ivar: _topQuiltUnlockedPath
@property (readonly, nonatomic) CGRect viewport; // ivar: _viewport


-(id)initWithRandomizationSeedValue:(NSUInteger)arg0 viewport:(struct CGRect )arg1 timeBounds:(struct CGRect )arg2 lineVariance:(CGFloat)arg3 ;


@end


#endif
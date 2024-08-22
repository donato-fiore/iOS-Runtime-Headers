// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AXKONAPARAMETERS_H
#define AXKONAPARAMETERS_H


#import <Foundation/Foundation.h>


@interface AXKonaParameters : NSObject

@property (nonatomic) NSInteger breathiness; // ivar: _breathiness
@property (nonatomic) NSInteger headSize; // ivar: _headSize
@property (nonatomic) NSInteger pitchBase; // ivar: _pitchBase
@property (nonatomic) NSInteger pitchFluctuation; // ivar: _pitchFluctuation
@property (nonatomic) NSInteger roughness; // ivar: _roughness
@property (nonatomic) NSInteger speed; // ivar: _speed
@property (nonatomic) NSInteger vocalTract; // ivar: _vocalTract
@property (nonatomic) NSInteger volume; // ivar: _volume


-(id)copy;


@end


#endif
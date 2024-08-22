// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CRTITLEPARAMETERS_H
#define CRTITLEPARAMETERS_H


#import <Foundation/Foundation.h>


@interface CRTitleParameters : NSObject

@property (readonly) NSUInteger minTitleLength; // ivar: _minTitleLength
@property (readonly) float minTitleProbability; // ivar: _minTitleProbability


+(id)defaultTitleParameters;
-(id)initWithMinTitleProbability:(float)arg0 minTitleLength:(NSUInteger)arg1 ;


@end


#endif
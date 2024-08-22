// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VUIDROPONTABCONFIG_H
#define VUIDROPONTABCONFIG_H

@class NSNumber;

#import <Foundation/Foundation.h>


@interface VUIDropOnTabConfig : NSObject

@property (retain, nonatomic) NSNumber *daysWithoutOpeningThreshold; // ivar: _daysWithoutOpeningThreshold
@property (retain, nonatomic) NSNumber *daysWithoutPlaybackThreshold; // ivar: _daysWithoutPlaybackThreshold
@property (nonatomic) NSUInteger dropOnTabIndex; // ivar: _dropOnTabIndex


-(id)init;


@end


#endif
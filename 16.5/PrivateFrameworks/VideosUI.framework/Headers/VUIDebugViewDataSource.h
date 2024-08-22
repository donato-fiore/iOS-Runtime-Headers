// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VUIDEBUGVIEWDATASOURCE_H
#define VUIDEBUGVIEWDATASOURCE_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface VUIDebugViewDataSource : NSObject

@property (retain, nonatomic) NSArray *defaultsDataSource; // ivar: _defaultsDataSource
@property (retain, nonatomic) NSArray *metricsDataSource; // ivar: _metricsDataSource


-(id)_createDefaultsDataSource;
-(id)_createMetricsDataSource;
-(id)init;


@end


#endif
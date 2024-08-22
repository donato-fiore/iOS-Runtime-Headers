// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VSAPPSETTINGSVIEWMODELRESULT_H
#define VSAPPSETTINGSVIEWMODELRESULT_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface VSAppSettingsViewModelResult : NSObject

@property (copy, nonatomic) NSArray *availableAppViewModels; // ivar: _availableAppViewModels
@property (copy, nonatomic) NSArray *nonChannelAppViewModels; // ivar: _nonChannelAppViewModels
@property (copy, nonatomic) NSArray *subscribedAppViewModels; // ivar: _subscribedAppViewModels


-(id)init;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFPRIVATEADDRESSCONFIGMANAGER_H
#define WFPRIVATEADDRESSCONFIGMANAGER_H


#import <Foundation/Foundation.h>


@interface WFPrivateAddressConfigManager : NSObject

@property (nonatomic) *__SCPreferences prefs; // ivar: _prefs


-(id)init;
-(id)privateAddressConfig;
-(void)dealloc;


@end


#endif
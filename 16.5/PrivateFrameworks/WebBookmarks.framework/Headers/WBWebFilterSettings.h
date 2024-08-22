// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WBWEBFILTERSETTINGS_H
#define WBWEBFILTERSETTINGS_H

@class WFUserSettings;

#import <Foundation/Foundation.h>


@interface WBWebFilterSettings : NSObject {
    WFUserSettings *_userSettings;
}


@property (readonly, nonatomic) WFUserSettings *userSettings;
@property (readonly, nonatomic) BOOL usesAllowedSitesOnly;
@property (readonly, nonatomic, getter=isWebFilterEnabled) BOOL webFilterEnabled;


+(id)sharedWebFilterSettings;
-(id)init;
-(void)dealloc;
-(void)reloadSettings;


@end


#endif
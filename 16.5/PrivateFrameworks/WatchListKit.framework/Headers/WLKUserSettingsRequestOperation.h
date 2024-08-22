// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WLKUSERSETTINGSREQUESTOPERATION_H
#define WLKUSERSETTINGSREQUESTOPERATION_H

@class NSString;


#import "WLKUTSNetworkRequestOperation.h"
#import "WLKUserSettings.h"

@interface WLKUserSettingsRequestOperation : WLKUTSNetworkRequestOperation

@property (readonly, nonatomic) NSUInteger action; // ivar: _action
@property (readonly, copy, nonatomic) NSString *caller; // ivar: _caller
@property (readonly, nonatomic) WLKUserSettings *response; // ivar: _response
@property (readonly, copy, nonatomic) WLKUserSettings *userSettings; // ivar: _userSettings


-(id)initWithAction:(NSUInteger)arg0 userSettings:(id)arg1 ;
-(id)initWithAction:(NSUInteger)arg0 userSettings:(id)arg1 caller:(id)arg2 ;
-(void)processResponse;


@end


#endif
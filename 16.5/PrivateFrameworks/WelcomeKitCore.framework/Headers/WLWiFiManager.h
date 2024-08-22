// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WLWIFIMANAGER_H
#define WLWIFIMANAGER_H


#import <Foundation/Foundation.h>


@interface WLWiFiManager : NSObject

@property (readonly, nonatomic) BOOL isTetheringSupported;
@property (nonatomic) *__WiFiManagerClient ref; // ivar: _ref


-(id)createDeviceClient;
-(id)init;
-(void)dealloc;
-(void)disable;
-(void)enable;


@end


#endif
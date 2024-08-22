// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TRIPERSISTENTUSERSETTINGS_H
#define TRIPERSISTENTUSERSETTINGS_H


#import <Foundation/Foundation.h>

#import "TRIKVStore.h"

@interface TRIPersistentUserSettings : NSObject

@property (retain, nonatomic) TRIKVStore *keyValueStore; // ivar: _keyValueStore


+(id)settingsWithKeyValueStore:(id)arg0 ;
-(id)initWithKeyValueStore:(id)arg0 ;
-(id)persistedSiriLocale;
-(unsigned char)persistedIsSiriEnabled;
-(unsigned char)persistedOptOutStatus;
-(void)persistIsSiriEnabled:(unsigned char)arg0 ;
-(void)persistOptOutStatus:(unsigned char)arg0 ;
-(void)persistSiriLocale:(id)arg0 ;


@end


#endif
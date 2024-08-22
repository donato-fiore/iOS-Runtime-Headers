// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TUVOUCHINGENABLEMENTIMPL_H
#define TUVOUCHINGENABLEMENTIMPL_H

@class FTServerBag, NSUserDefaults;
@protocol TUVouchingEnablement, TUFeatureFlags;

#import <Foundation/Foundation.h>


@interface TUVouchingEnablementImpl : NSObject <TUVouchingEnablement>



@property (readonly, nonatomic, getter=isEnabled) BOOL enabled;
@property (retain, nonatomic) NSObject<TUFeatureFlags> *featureFlags; // ivar: _featureFlags
@property (retain, nonatomic) FTServerBag *serverBag; // ivar: _serverBag
@property (readonly, nonatomic) BOOL shouldForceVerificationFailures;
@property (retain, nonatomic) NSUserDefaults *userDefaults; // ivar: _userDefaults


-(BOOL)serverBagValueForKey:(id)arg0 withDefault:(BOOL)arg1 ;
-(id)init;
-(id)initWithFeatureFlags:(id)arg0 userDefaults:(id)arg1 serverBag:(id)arg2 ;


@end


#endif
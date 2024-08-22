// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBSLOCKSCREENCONTENTASSERTION_H
#define SBSLOCKSCREENCONTENTASSERTION_H

@class NSString;

#import <Foundation/Foundation.h>

#import "SBSLockScreenContentAction.h"

@interface SBSLockScreenContentAssertion : NSObject

@property (retain, nonatomic) SBSLockScreenContentAction *action; // ivar: _action
@property (retain, nonatomic) id *configurationObject; // ivar: _configurationObject
@property (copy, nonatomic, getter=_errorHandler, setter=_setErrorHandler:) id *errorHandler; // ivar: _errorHandler
@property (copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (retain, nonatomic) NSString *slot; // ivar: _slot


+(BOOL)_isRestrictedDevice;
+(id)acquireContentProviderAssertionForType:(NSUInteger)arg0 slot:(id)arg1 identifier:(id)arg2 configurationObject:(id)arg3 errorHandler:(id)arg4 ;
+(id)acquireContentProviderAssertionForType:(NSUInteger)arg0 slot:(id)arg1 identifier:(id)arg2 errorHandler:(id)arg3 ;
-(BOOL)_supportsReacquisition;
-(NSUInteger)type;
-(id)initWithType:(NSUInteger)arg0 slot:(id)arg1 identifier:(id)arg2 configurationObject:(id)arg3 errorHandler:(id)arg4 ;
-(void)_acquireAssertionWithType:(NSUInteger)arg0 slot:(id)arg1 identifier:(id)arg2 configurationObject:(id)arg3 ;
-(void)dealloc;
-(void)invalidate;


@end


#endif
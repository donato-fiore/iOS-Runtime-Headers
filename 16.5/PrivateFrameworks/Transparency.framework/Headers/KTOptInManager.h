// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef KTOPTINMANAGER_H
#define KTOPTINMANAGER_H

@class NSString;

#import <Foundation/Foundation.h>

#import "TransparencyApplication.h"

@interface KTOptInManager : NSObject

@property (retain) TransparencyApplication *application; // ivar: _application
@property (readonly) NSString *applicationIdentifier; // ivar: _applicationIdentifier


+(id)notificationKeyForApplication:(id)arg0 ;
-(BOOL)getOptInState;
-(id)initWithApplication:(id)arg0 ;
-(void)getOptInState:(BOOL)arg0 completionBlock:(id)arg1 ;
-(void)getOptInStateWithSync:(id)arg0 ;
-(void)setOptInState:(BOOL)arg0 completionBlock:(id)arg1 ;
-(void)setOptInState:(BOOL)arg0 detailedCompletionBlock:(id)arg1 ;


@end


#endif
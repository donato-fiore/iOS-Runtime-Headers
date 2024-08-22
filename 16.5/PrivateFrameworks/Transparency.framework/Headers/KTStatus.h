// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef KTSTATUS_H
#define KTSTATUS_H

@class NSString;

#import <Foundation/Foundation.h>

#import "TransparencyApplication.h"

@interface KTStatus : NSObject

@property (retain) TransparencyApplication *application; // ivar: _application
@property (readonly) NSString *applicationIdentifier; // ivar: _applicationIdentifier


-(id)initWithApplication:(id)arg0 ;
-(void)errorForFailedEvent:(id)arg0 completionBlock:(id)arg1 ;
-(void)errorsForFailedEvents:(id)arg0 completionBlock:(id)arg1 ;
-(void)getCurrentStatus:(id)arg0 ;
-(void)getStatus:(id)arg0 ;
-(void)ignoreFailedEvent:(id)arg0 completionBlock:(id)arg1 ;
-(void)ignoreFailedEvents:(id)arg0 completionBlock:(id)arg1 ;


@end


#endif
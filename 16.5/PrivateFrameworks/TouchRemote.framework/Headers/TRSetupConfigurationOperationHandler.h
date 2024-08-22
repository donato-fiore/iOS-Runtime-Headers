// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TRSETUPCONFIGURATIONOPERATIONHANDLER_H
#define TRSETUPCONFIGURATIONOPERATIONHANDLER_H

@class NSString;
@protocol TROperationHandler;

#import <Foundation/Foundation.h>


@interface TRSetupConfigurationOperationHandler : NSObject <TROperationHandler>



@property (copy, nonatomic) id *configurationHandler; // ivar: _configurationHandler
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithConfigurationHandler:(id)arg0 ;
-(void)_handleConfigurationRequest:(id)arg0 withResponseHandler:(id)arg1 ;
-(void)registerMessageHandlersForSession:(id)arg0 ;


@end


#endif
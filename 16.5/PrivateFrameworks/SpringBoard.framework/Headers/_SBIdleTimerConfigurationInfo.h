// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _SBIDLETIMERCONFIGURATIONINFO_H
#define _SBIDLETIMERCONFIGURATIONINFO_H

@class SBIdleTimerRequestConfiguration, NSString;
@protocol BSDescriptionProviding;

#import <Foundation/Foundation.h>


@interface _SBIdleTimerConfigurationInfo : NSObject <BSDescriptionProviding>



@property (readonly, nonatomic) SBIdleTimerRequestConfiguration *configuration; // ivar: _configuration
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *reason; // ivar: _reason
@property (readonly) Class superclass;


-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)initWithConfiguration:(id)arg0 reason:(id)arg1 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TRDEVICESETUPACTION_H
#define TRDEVICESETUPACTION_H

@class NSString, NSDictionary;

#import <Foundation/Foundation.h>


@interface TRDeviceSetupAction : NSObject

@property (readonly, copy, nonatomic) NSString *actionType; // ivar: _actionType
@property (readonly, copy, nonatomic) NSDictionary *parameters; // ivar: _parameters
@property (readonly, nonatomic) NSUInteger protocolVersion;


+(id)actionWithActionType:(id)arg0 parameters:(id)arg1 ;
+(id)actionWithData:(id)arg0 error:(*id)arg1 supportsLegacy:(BOOL)arg2 ;
-(id)_initWithActionType:(id)arg0 parameters:(id)arg1 ;
-(id)dataRepresentationWithError:(*id)arg0 ;
-(id)description;
-(id)init;
-(id)propertyListRepresentation;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef STLOCATIONSTATUSDOMAINLOCATIONATTRIBUTION_H
#define STLOCATIONSTATUSDOMAINLOCATIONATTRIBUTION_H

@class NSString;
@protocol BSDebugDescriptionProviding, NSSecureCoding, BSDescriptionProviding, NSCopying;

#import <Foundation/Foundation.h>

#import "STActivityAttribution.h"

@interface STLocationStatusDomainLocationAttribution : NSObject <BSDebugDescriptionProviding, NSSecureCoding, BSDescriptionProviding, NSCopying>



@property (readonly, copy, nonatomic) STActivityAttribution *activityAttribution; // ivar: _activityAttribution
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSUInteger eligibleDisplayModes; // ivar: _eligibleDisplayModes
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSUInteger locationState; // ivar: _locationState
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)debugDescriptionWithMultilinePrefix:(id)arg0 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithLocationState:(NSUInteger)arg0 activityAttribution:(id)arg1 ;
-(id)initWithLocationState:(NSUInteger)arg0 activityAttribution:(id)arg1 eligibleDisplayModes:(NSUInteger)arg2 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif
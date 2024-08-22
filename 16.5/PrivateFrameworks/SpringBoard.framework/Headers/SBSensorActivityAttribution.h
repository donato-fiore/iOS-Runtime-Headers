// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBSENSORACTIVITYATTRIBUTION_H
#define SBSENSORACTIVITYATTRIBUTION_H

@class NSString;
@protocol SBFSensorActivityAttribution;


#import "SBActivityAttribution.h"

@interface SBSensorActivityAttribution : SBActivityAttribution <SBFSensorActivityAttribution>



@property (readonly, copy, nonatomic) NSString *activeEntityBundleIdentifier;
@property (readonly, copy, nonatomic) NSString *attributionGroup;
@property (readonly, copy, nonatomic) NSString *bundleIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSString *displayName;
@property (readonly, copy, nonatomic) NSString *executableDisplayName;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isSystemService;
@property (readonly, nonatomic) NSInteger sensor; // ivar: _sensor
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL usedRecently; // ivar: _usedRecently
@property (readonly, copy, nonatomic) NSString *website;


-(BOOL)isEqual:(id)arg0 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)initWithDataAccessAttribution:(id)arg0 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;


@end


#endif
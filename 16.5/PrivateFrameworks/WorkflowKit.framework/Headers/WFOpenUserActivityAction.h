// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFOPENUSERACTIVITYACTION_H
#define WFOPENUSERACTIVITYACTION_H

@class NSData, NSString, INUserActivityDescriptor, NSUserActivity;
@protocol WFStandaloneShortcutAction;


#import "WFAction.h"

@interface WFOpenUserActivityAction : WFAction <WFStandaloneShortcutAction>



@property (readonly, copy, nonatomic) NSData *activityData; // ivar: _activityData
@property (readonly, copy, nonatomic) NSData *activityImageData; // ivar: _activityImageData
@property (readonly, copy, nonatomic) NSString *activitySubtitle; // ivar: _activitySubtitle
@property (readonly, copy, nonatomic) NSString *associatedAppBundleIdentifier;
@property (readonly, copy, nonatomic) NSString *bundleIdentifier; // ivar: _bundleIdentifier
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) INUserActivityDescriptor *descriptor; // ivar: _descriptor
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *launchOrigin; // ivar: _launchOrigin
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSUserActivity *userActivity; // ivar: _userActivity


+(id)userActivityActionWithShortcut:(id)arg0 launchOrigin:(id)arg1 error:(*id)arg2 ;
+(void)createActionWithIntent:(id)arg0 completionHandler:(id)arg1 ;
+(void)createActionWithUserActivity:(id)arg0 appBundleIdentifier:(id)arg1 launchOrigin:(id)arg2 completionHandler:(id)arg3 ;
-(BOOL)appResourceRequiresAppInstall;
-(id)appDescriptor;
-(id)contentDestinationWithError:(*id)arg0 ;
-(id)disabledPlatformsForUserActivityWithType:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 definition:(id)arg1 serializedParameters:(id)arg2 ;
-(id)localizedName;
-(id)localizedSubtitle;
-(id)metricsIdentifier;
-(id)name;
-(id)serializedParameters;
-(id)smartPromptWithContentDescription:(id)arg0 contentDestination:(id)arg1 workflowName:(id)arg2 ;
-(void)generateShortcutRepresentation:(id)arg0 ;
-(void)generateStandaloneShortcutRepresentation:(id)arg0 ;
-(void)runAsynchronouslyWithInput:(id)arg0 ;
-(void)updateAppDescriptorInDatabaseWithSelectedApp:(id)arg0 ;
-(void)updateAppDescriptorWithSelectedApp:(id)arg0 ;


@end


#endif
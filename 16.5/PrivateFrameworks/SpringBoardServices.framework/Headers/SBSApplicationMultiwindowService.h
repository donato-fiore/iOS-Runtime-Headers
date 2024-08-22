// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBSAPPLICATIONMULTIWINDOWSERVICE_H
#define SBSAPPLICATIONMULTIWINDOWSERVICE_H



#import "SBSAbstractApplicationService.h"

@interface SBSApplicationMultiwindowService : SBSAbstractApplicationService



-(void)requestShelfPresentationForSceneWithIdentifier:(id)arg0 ;
-(void)triggerShowAllWindowsForApplicationBundleIdentifier:(id)arg0 ;


@end


#endif
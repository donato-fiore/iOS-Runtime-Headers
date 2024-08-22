// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBPRIVACYPREFLIGHTCONTROLLER_H
#define SBPRIVACYPREFLIGHTCONTROLLER_H

@class PDCPreflightManager, NSMutableDictionary, NSString;
@protocol BSDescriptionStreamable;

#import <Foundation/Foundation.h>


@interface SBPrivacyPreflightController : NSObject <BSDescriptionStreamable>

 {
    PDCPreflightManager *_privacyPreflightManager;
    NSMutableDictionary *_applicationPreflightControllers;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)requiresPreflightForApplication:(id)arg0 ;
-(id)init;
-(void)appendDescriptionToFormatter:(id)arg0 ;
-(void)preflightLaunchForApplication:(id)arg0 sceneIdentifier:(id)arg1 withCompletionHandler:(id)arg2 ;


@end


#endif
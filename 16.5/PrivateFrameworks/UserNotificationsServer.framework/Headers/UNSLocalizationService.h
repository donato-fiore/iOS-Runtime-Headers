// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UNSLOCALIZATIONSERVICE_H
#define UNSLOCALIZATIONSERVICE_H

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface UNSLocalizationService : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *_bundleIdentifierToBundle;
    NSMutableDictionary *_bundleIdentifierToBundleURL;
}




-(id)_queue_bundleWithIdentifier:(id)arg0 ;
-(id)bundleWithIdentifier:(id)arg0 ;
-(id)init;
-(void)_queue_notificationSourcesDidInstall:(id)arg0 ;
-(void)_queue_notificationSourcesDidUninstall:(id)arg0 ;
-(void)_queue_unloadBundleWithIdentifier:(id)arg0 ;
-(void)notificationSourcesDidInstall:(id)arg0 ;
-(void)notificationSourcesDidUninstall:(id)arg0 ;
-(void)unloadBundleWithIdentifier:(id)arg0 ;


@end


#endif
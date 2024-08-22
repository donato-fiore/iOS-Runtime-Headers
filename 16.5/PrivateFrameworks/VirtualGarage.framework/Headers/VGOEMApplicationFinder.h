// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VGOEMAPPLICATIONFINDER_H
#define VGOEMAPPLICATIONFINDER_H

@class NSSet, NSDictionary, NSMutableDictionary, NSString;
@protocol LSApplicationWorkspaceObserverProtocol, GEOConfigChangeListenerDelegate, VGOEMApplicationFinding, OS_dispatch_queue, VGOEMApplicationFinderUpdates;

#import <Foundation/Foundation.h>


@interface VGOEMApplicationFinder : NSObject <LSApplicationWorkspaceObserverProtocol, GEOConfigChangeListenerDelegate, VGOEMApplicationFinding>

 {
    NSSet *_requiredIntents;
    NSObject<OS_dispatch_queue> *_queue;
}


@property (retain, nonatomic) NSDictionary *allowlist; // ivar: _allowlist
@property (retain, nonatomic) NSMutableDictionary *applications; // ivar: _applications
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<VGOEMApplicationFinderUpdates> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSSet *disabledAppIdentifiers; // ivar: _disabledAppIdentifiers
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)_addOEMApplicationForApplicationRecordIfNeeded:(id)arg0 ;
-(BOOL)_removeOEMApplicationForBundleIdentifier:(id)arg0 ;
-(id)_applicationRecordForBundleIdentifier:(id)arg0 ;
-(id)init;
-(void)applicationsDidInstall:(id)arg0 ;
-(void)applicationsDidUninstall:(id)arg0 ;
-(void)dealloc;
-(void)findOEMApplications;
-(void)valueChangedForGEOConfigKey:(struct ? )arg0 ;


@end


#endif
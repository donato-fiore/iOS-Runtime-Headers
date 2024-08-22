// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SKUIFAMILYCIRCLECONTROLLER_H
#define SKUIFAMILYCIRCLECONTROLLER_H

@class NSCache, SSFamilyCircle, FAFamilyCircle, NSNumber;

#import <Foundation/Foundation.h>

#import "SKUIClientContext.h"

@interface SKUIFamilyCircleController : NSObject {
    NSCache *_imageCache;
}


@property (retain, nonatomic) SKUIClientContext *clientContext; // ivar: _clientContext
@property (readonly, nonatomic) SSFamilyCircle *familyCircle; // ivar: _iTunesFamily
@property (readonly, nonatomic) BOOL hasLoaded; // ivar: _hasLoaded
@property (readonly, nonatomic) FAFamilyCircle *iCloudFamily; // ivar: _iCloudFamily
@property (retain) NSNumber *lastAccountID; // ivar: _lastAccountID
@property NSInteger reloadPromptStyle; // ivar: _reloadPromptStyle


+(id)sharedController;
-(id)init;
-(id)profilePictureForFamilyMember:(id)arg0 ;
-(void)_accountStoreDidChange:(id)arg0 ;
-(void)_reloadDataWithPromptStyle:(NSInteger)arg0 ;
-(void)_setITunesFamily:(id)arg0 error:(id)arg1 iCloudFamily:(id)arg2 error:(id)arg3 ;
-(void)_setProfilePicture:(id)arg0 forMember:(id)arg1 ;
-(void)dealloc;
-(void)reloadData;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WLKLOOKUPBASEDINSTALLABLE_H
#define WLKLOOKUPBASEDINSTALLABLE_H

@class NSArray, NSURL, NSString, AMSLookupItem;
@protocol WLKInstallable;

#import <Foundation/Foundation.h>


@interface WLKLookupBasedInstallable : NSObject <WLKInstallable>



@property (readonly, copy, nonatomic) NSArray *appAdamIDs;
@property (readonly, copy, nonatomic) NSArray *appBundleIDs;
@property (readonly, copy, nonatomic) NSURL *appStoreURL;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL forceDSIDlessInstall;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) AMSLookupItem *item; // ivar: _item
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSString *title;


-(id)appIconURLForSize:(struct CGSize )arg0 ;
-(id)init;
-(id)initWithLookupItem:(id)arg0 ;


@end


#endif
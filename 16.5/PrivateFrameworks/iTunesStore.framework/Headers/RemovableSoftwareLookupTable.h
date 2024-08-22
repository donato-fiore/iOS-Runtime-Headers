// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef REMOVABLESOFTWARELOOKUPTABLE_H
#define REMOVABLESOFTWARELOOKUPTABLE_H

@class NSDictionary, NSLock;

#import <Foundation/Foundation.h>


@interface RemovableSoftwareLookupTable : NSObject {
    NSDictionary *_bundleDictionary;
    NSLock *_lock;
}


@property (readonly, copy) NSDictionary *bundleDictionary;


+(BOOL)isRestrictedAppBundleIdentifier:(id)arg0 ;
+(id)_fallbackItemIdentifier:(id)arg0 ;
+(id)_urlForBundleIdentifier:(id)arg0 ;
+(id)urlForBundleIdentifier:(id)arg0 ;
-(id)_identifierForBundleIdentifier:(id)arg0 ;
-(id)init;
-(id)itemIdentifierForBundleIdentifer:(id)arg0 ;
-(void)_invalidateLookupCache:(id)arg0 ;
-(void)_populateBundleDictionary;
-(void)dealloc;


@end


#endif
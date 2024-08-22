// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UIDYNAMICCATALOGCOLOR_H
#define UIDYNAMICCATALOGCOLOR_H

@class NSString;


#import "UIDynamicColor.h"
#import "_UIAssetManager.h"
#import "UIColor.h"

@interface UIDynamicCatalogColor : UIDynamicColor {
    NSString *_name;
    _UIAssetManager *_assetManager;
    UIColor *_genericColor;
    os_unfair_lock_s _cachedColorLock;
    UIColor *_cachedColor;
    NSUInteger _cachedThemeKey;
}




+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)_debugCatalogBundleIdentifier;
-(id)_debugName;
-(id)_initForNibEncodingWithName:(id)arg0 genericColor:(id)arg1 ;
-(id)_resolvedColorWithTraitCollection:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithName:(id)arg0 assetManager:(id)arg1 genericColor:(id)arg2 ;
-(void)_setDebugCatalogBundleIdentifier:(id)arg0 ;
-(void)_setDebugName:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif
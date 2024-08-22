// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UIACCESSIBILITYLEGACYLOADER_H
#define UIACCESSIBILITYLEGACYLOADER_H



#import "UIAccessibilityLoader.h"

@interface UIAccessibilityLegacyLoader : UIAccessibilityLoader



+(BOOL)_accessibilityShouldSortBundlesBeforeLoading;
+(NSInteger)_accessibilityLoadingPriorityForBundle:(id)arg0 ;
+(id)_accessibilityBundlesForBundle:(id)arg0 ;
+(id)_axBundleForBundle:(id)arg0 ;
+(void)_accessibilityLoadSubbundles:(id)arg0 ;
+(void)initialize;
// +(void)loadAccessibilityBundle:(id)arg0 didLoadCallback:(id)arg1 loadSubbundles:(unk)arg2  ;
// +(void)loadAccessibilityBundleForBundle:(id)arg0 didLoadCallback:(id)arg1 forceLoad:(unk)arg2 loadSubbundles:(BOOL)arg3 loadAllAccessibilityInfo:(BOOL)arg4  ;
+(void)loadExtendedAccessibilityBundles;


@end


#endif
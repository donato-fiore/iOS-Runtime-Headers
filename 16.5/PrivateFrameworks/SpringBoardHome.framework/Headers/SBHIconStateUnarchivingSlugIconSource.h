// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBHICONSTATEUNARCHIVINGSLUGICONSOURCE_H
#define SBHICONSTATEUNARCHIVINGSLUGICONSOURCE_H

@class NSMutableDictionary;
@protocol SBHIconStateUnarchiverIconSource;

#import <Foundation/Foundation.h>


@interface SBHIconStateUnarchivingSlugIconSource : NSObject <SBHIconStateUnarchiverIconSource>

 {
    NSMutableDictionary *_leafAppIcons;
}




-(id)applicationIconForBundleIdentifier:(id)arg0 ;
-(id)leafIconForIdentifier:(id)arg0 ;


@end


#endif
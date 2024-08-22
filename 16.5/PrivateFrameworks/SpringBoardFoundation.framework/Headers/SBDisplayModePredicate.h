// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBDISPLAYMODEPREDICATE_H
#define SBDISPLAYMODEPREDICATE_H

@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface SBDisplayModePredicate : NSObject <NSCopying>





+(id)allDisplays;
+(id)forDisplay:(id)arg0 ;
+(id)forDisplaysSimilarToDisplay:(id)arg0 useNativeSize:(BOOL)arg1 ;
+(id)fromDefaultsKey:(id)arg0 ;
-(BOOL)matchesDisplay:(id)arg0 ;
-(id)_init;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)defaultsKeyRepresentation;
-(id)description;


@end


#endif
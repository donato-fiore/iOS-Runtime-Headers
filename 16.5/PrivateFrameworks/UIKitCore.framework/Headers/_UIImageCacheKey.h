// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UIIMAGECACHEKEY_H
#define _UIIMAGECACHEKEY_H

@class NSString, NSBundle;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "UIImageConfiguration.h"

@interface _UIImageCacheKey : NSObject <NSCopying>

 {
    NSString *_name;
    UIImageConfiguration *_configuration;
    NSBundle *_bundle;
    ? _flags;
}




+(id)keyWithName:(id)arg0 configuration:(id)arg1 ;
+(id)keyWithName:(id)arg0 configuration:(id)arg1 bundle:(id)arg2 ;
+(id)keyWithSystemName:(id)arg0 private:(BOOL)arg1 configuration:(id)arg2 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;


@end


#endif
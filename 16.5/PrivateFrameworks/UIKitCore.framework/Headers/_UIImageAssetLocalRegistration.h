// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UIIMAGEASSETLOCALREGISTRATION_H
#define _UIIMAGEASSETLOCALREGISTRATION_H


#import <Foundation/Foundation.h>

#import "UIImageConfiguration.h"
#import "UIImage.h"

@interface _UIImageAssetLocalRegistration : NSObject

@property (retain, nonatomic) UIImageConfiguration *configuration; // ivar: _configuration
@property (retain, nonatomic) UIImage *image; // ivar: _image


+(id)registrationWithImage:(id)arg0 configuration:(id)arg1 ;
-(BOOL)matchesConfiguration:(id)arg0 ;


@end


#endif
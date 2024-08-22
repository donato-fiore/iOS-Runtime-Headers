// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VKLABELMARKERSHIELD_H
#define VKLABELMARKERSHIELD_H

@class NSString;

#import <Foundation/Foundation.h>

#import "VKImageSourceKey.h"

@interface VKLabelMarkerShield : NSObject {
    VKImageSourceKey *_imageKey;
}


@property (readonly, nonatomic) ? color;
@property (readonly, nonatomic) NSString *locale;
@property (readonly, nonatomic) NSString *text;
@property (readonly, nonatomic) NSInteger type;


-(id)initWithImageKey:(id)arg0 ;


@end


#endif
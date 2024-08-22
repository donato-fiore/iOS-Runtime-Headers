// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UITEXTFIELDCLEARBUTTONCACHEKEY_H
#define _UITEXTFIELDCLEARBUTTONCACHEKEY_H

@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface _UITextFieldClearButtonCacheKey : NSObject <NSCopying>

 {
    int _variant;
    *CGColor _color;
}




-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToCacheKey:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithVariant:(int)arg0 color:(struct CGColor *)arg1 ;
-(void)dealloc;


@end


#endif